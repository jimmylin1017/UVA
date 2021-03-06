#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
#define MAX_N 100
#define MAX_M 100
#define MINE -100

int main(){
  int n, m, field_num = 0;
  char square;
  while( scanf( "%d%d", &n, &m ) != EOF
         && !(n == 0 && m == 0) ){
    getchar(); //ignore EOL
    if( field_num ) printf( "\n" );
    int field[MAX_N+5][MAX_M+5] = {0};
    for( int i = 1 ; i <= n ; i++ ){
      for( int j = 1 ; j <= m ; j++ ){
        square = getchar();
        if( square == '*' ){
          field[i][j] = MINE;
          for( int k = -1 ; k <= 1 ; k++ )
            for( int l = -1 ; l <= 1 ;l++ )
              field[i+k][j+l]++;
        }
      }
      getchar(); //ignore EOL
    }
    printf( "Field #%d:\n", ++field_num );
    for( int i = 1 ; i <= n ; i++ ){
      for( int j = 1 ; j <= m ; j++ )
        if( field[i][j] < 0 ) printf( "*" );
        else printf( "%d", field[i][j] );
      printf( "\n" );
    }
  }
  return 0;
}

