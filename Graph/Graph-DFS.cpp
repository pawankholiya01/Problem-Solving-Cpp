/*
*  - by Pawan Kholiya 
*     github//pawankholiya01
*
*/

#include <iostream>
#include <vector>
#include<queue>

using namespace std;

class Graph 
{
  int vertices;
  vector<vector<int>  >adjacencyList;
  vector<bool> visited;

   public:
  Graph(int N)
  {
     vertices = N;
     adjacencyList.resize(vertices);
     visited.resize(vertices,false);
  }
  void addEdge(int source, int destination)
  {
      adjacencyList[source].push_back(destination);
  adjacencyList[destination].push_back(source);
  }


  void DFS(int node);
};


// Depth First Search
void Graph::DFS(int node)
{
  visited[node] = true;

  cout << node << " ";

  for (auto neighbour : adjacencyList[node])
    if (!visited[neighbour])
      DFS(neighbour);
}

//Helper Function
int main()
{
  int vertice,n;
  cout<<"Enter Number of vertice : ";
  cin>>vertice;
  cout<<"Enter Number of Edges : ";
  cin>>n;
  Graph g = Graph(vertice);

  while(n--)
  {
    int x,y;
    cout<<"Enter Nodes connected by the Edge : ";
    cin>>x>>y;
    g.addEdge(x,y);
  }
  int node;
  cout<<"Enter Start node : ";
  cin>>node;

  cout<<"DFS of thr graph is : \n\n";
  g.DFS(node);

  return 0;
}


