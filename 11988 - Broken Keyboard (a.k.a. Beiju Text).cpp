#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <cstring>
#include <cmath>

using namespace std;

char s[100000];
list<char> l;

int main() {

	while (scanf("%s",s) != EOF) {

		int len = strlen(s);
		list<char>::iterator it = l.begin();

        for(int i=0;i<len;i++)
        {
            if(s[i] == '[')
                it = l.begin();
            else if(s[i] == ']')
                it = l.end();
            else
                l.insert(it,s[i]);
        }

        while(!l.empty())
        {
            printf("%c",l.front());
            l.pop_front();
        }

		printf("\n");

	}

	return 0;
}
