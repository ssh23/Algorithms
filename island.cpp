#include<bits/stdc++.h>
using namespace std;
vector<int>dx={-1,-1,-1,0,0,1,1,1};
vector<int>dy={-1,0,1,-1,1,-1,0,1};
void dfs(vector<vector<int> > g,int i,int j,vector<vector<bool> > &visited)
{
    visited[i][j]=true;
    int r=(int)visited.size();
    int c=(int)visited[i].size();
    int newx,newy;
    for(int k=0;k<8;k++)
    {
         newx=i+dx[k];
         newy=j+dy[k];
if(newx<r && newx>=0 && newy<c && newy>=0)
         if(g[newx][newy]==1 && visited[newx][newy]==false)
         	dfs(g,newx,newy,visited);
    }
}
void island(vector<vector<int> > g,vector<vector<bool> > &visited)
{
	int iland=0;
	for(int i=0;i<g.size();i++)
	{
		for(int j=0;j<g[i].size();j++)
		{
			if(g[i][j]==1&& visited[i][j]==false)                                 
			{
				dfs(g,i,j,visited);
				iland++;
			}
		}
	}
	cout<<iland;
}
int main()
{
	int r,c,i,j,islands=0;
	cin>>r>>c;
	vector<vector<int> > g(r,vector<int>(c));
	vector<vector<bool> > visited(r,vector<bool>(c,false));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cin>>g[i][j];
	}
	island(g,visited);

return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// #define r 4
// #define c 5
// bool visited[r][c];
// int dx[]={-1,-1,-1,0,0,1,1,1};
// int dy[]={-1,0,1,-1,1,-1,0,1};
// void dfs(int g[r][c],int i,int j)
// {
//     visited[i][j]=true;
//     int newx,newy;
//     for(int k=0;k<8;k++)
//     {
//          newx=i+dx[k];
//          newy=j+dy[k];
//          if(newx<r && newx>=0 && newy<c && newy>=0)
//          if(g[newx][newy]==1 && visited[newx][newy]==false)
//          	dfs(g,newx,newy);
//     }
// }
// void island(int g[r][c])
// {
// 	int iland=0;
	
// 	for(int i=0;i<r;i++)
// 	{
// 		for(int j=0;j<c;j++)
// 			{
// 				visited[i][j]=false;
// 	}}
// 	for(int i=0;i<r;i++)
// 	{
// 		for(int j=0;j<c;j++)
// 		{
// 			if(g[i][j]==1&& visited[i][j]==false)
// 			{
// 				dfs(g,i,j);
// 				iland++;
// 			}
// 		}
// 	}
// 	cout<<iland;
// }
// int main()
// {
// 	int i,j,islands=0;
// 	int g[r][c];
// 	//bool visited[r][c];
// 	for(i=0;i<r;i++)
// 	{
// 		for(j=0;j<c;j++)
// 			{cin>>g[i][j];
// 				//visited[i][j]=false;
// 	}}
// 	island(g);

// return 0;
// }