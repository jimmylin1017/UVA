#include <iostream>
#include <cstring>

using namespace std;

#define MAX 100

char arr[MAX+5][MAX+5];

int use(char g,int r, int c)
{
	int count = 1;
	while(1)
	{
		int lr = r - count/2;
		int lc = c - count/2;
		int rr = r + count/2;
		int rc = c + count/2;
		if(lc >= 0 && lr >= 0)
		{
			for(int i=lr;i<=rr;i++)
			{
				for(int j=lc;j<=rc;j++)
				{
					if(arr[i][j] != g)
						return count-=2;
				}
			}
		}
		else
			return count-=2;

		count+=2;
	}
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(arr,'0',sizeof(arr));
		int m,n,q;
		cin>>m>>n>>q;
		cout<<m<<" "<<n<<" "<<q<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		while(q--)
		{
			int r,c;
			char g;
			cin>>r>>c;
			g = arr[r][c];

			int ans = use(g,r,c);
			cout<<ans<<endl;
		}
	}
	
	return 0;
}