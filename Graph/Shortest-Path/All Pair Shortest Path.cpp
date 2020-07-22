#include <iostream>
using namespace std;


#define INFINITY 9999

void printSol(int sol[][100],int n )
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (sol[i][j] == INFINITY)
        cout<<"- ";
      else
        cout<<sol[i][j]<<" ";
    }
    printf("\n");
  }
}

void floydWarshall(int graph[][100],int n)
{
  int sol[100][100], i, j, k;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      sol[i][j] = graph[i][j];

  for (k = 0; k < n; k++)
  {
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (sol[i][k] + sol[k][j] < sol[i][j])
          sol[i][j] = sol[i][k] + sol[k][j];
      }
    }
  }
  printSol(sol,n);
}



int main() 
{
  int n;
  cout<<"Enter No. of vertices : ";
  cin>>n;
  int graph[100][100] ;
  cout<<"Enter Adjacency Matrix of Graph : \n ";
  cout<<"(Enter 9999 for unreachable points) \n\n";
  for(int i =0;i<n;i++)
  {
    for(int j =0;j<n;j++)
      cin>>graph[i][j];
  }
cout<<"Shortest Path Matrix is : \n";
cout<<"(- means unreachable ) \n\n";
  floydWarshall(graph,n);
}
/*

Sample Input  : 
4
0 2 9999 9999
9999 0 5 9999
3 9999 0 9999
9999 9999 9999 9999




*/
