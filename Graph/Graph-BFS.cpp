/*
*  - by Pawan Kholiya 
*     github//pawankholiya01
*
*/
#include <iostream>
#include <vector>
#include<queue>
using namespace std;
// Plug and Play Graph class with Adjacency List representation
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
  
  void BFS(int node);
};


// Breath First Search
void Graph::BFS(int node)
{
  visited.resize(vertices,false);
  queue<int> q;

  visited[node] = true;
  q.push(node);


  cout<<" BFS of The Graph : \n\n";
  while (!q.empty())
  {
    int node = q.front();
    cout << node << " ";
    q.pop();

    for(auto neighbour: adjacencyList[node])
    {
      if (!visited[neighbour])
      {
        visited[neighbour] = true;
        q.push(neighbour);
      }
    }
  }
}

//Main Function
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
  g.BFS(node);

  return 0;
}
