#include <bits/stdc++.h>
using namespace std;

char s[110][110];
int check(int i, int j){
    for(int ii=0; ii<3; ii++)for(int jj=0; jj<3; jj++)if(s[i+ii][j+jj] != '#')return 0;
    for(int ii=0;ii<3;ii++)for(int jj=0;jj<3;jj++)if(s[i+8-ii][j+8-jj]!='#')return 0;
	for(int ii=0;ii<4;ii++)if(s[i+ii][j+3]!='.')return 0;
	for(int jj=0;jj<4;jj++)if(s[i+3][j+jj]!='.')return 0;
	for(int ii=0;ii<4;ii++)if(s[i+8-ii][j+8-3]!='.')return 0;
	for(int jj=0;jj<4;jj++)if(s[i+8-3][j+8-jj]!='.')return 0;
	return 1;
}

int main() {
    int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%s",s[i]);
	for(int i=0;i<n-8;i++)for(int j=0;j<m-8;j++){
		if(check(i,j))printf("%d %d\n",i+1,j+1);

}