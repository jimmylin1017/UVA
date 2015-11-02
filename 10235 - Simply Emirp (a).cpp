#include <iostream>
#include <cstring>

using namespace std;

#define MAX 1000000

bool prime[MAX+5];

int main()
{
	memset(prime,true,sizeof(prime));
    for(int i=2;i<MAX;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=MAX;j+=i)
            	prime[j] = 0;
        }
    }   

    int n;
    while(cin>>n)
    {
    	int a = n;
    	int b = 0;
    	while(n)
    	{
    		b*=10;
    		b+=(n%10);
    		n/=10;
    	}

    	//cout<<prime[a]<<" "<<prime[b]<<endl;

    	if(!prime[a])
    		cout<<a<<" is not prime."<<endl;
    	else if(prime[b] && a != b)
    		cout<<a<<" is emirp."<<endl;
    	else
    		cout<<a<<" is prime."<<endl;
    }

    return 0;
}