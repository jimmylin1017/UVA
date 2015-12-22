#include <iostream>
#include <cstring>

using namespace std;

#define MAX 1000000

bool prime[MAX];
int arr[MAX];

void make_prime()
{
	prime[0] = prime[1] = 0;
	for(int i=2;i<MAX;i++)
    {
        if(prime[i])
        {
            for(int j=2;i*j<MAX;j++)
            	prime[i*j] = 0;
        }
    }
}

bool check(int n)
{
	int sum = 0;
	while(n)
	{
		sum += (n%10);
		n/=10;
	}

	return prime[sum];
}

void make_arr()
{
	for(int i=1;i<MAX;i++)
	{
		if(prime[i] && check(i))
				arr[i] = 1 + arr[i-1];
		else
			arr[i] = arr[i-1];
	}
}


int main()
{
	memset(prime,1,sizeof(prime));
	memset(arr,0,sizeof(arr));
	make_prime();
	make_arr();
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		int count = arr[b] - arr[a];
		if(prime[a] && check(a))
			count++;

		cout<<count<<endl;
	}

	return 0;
}