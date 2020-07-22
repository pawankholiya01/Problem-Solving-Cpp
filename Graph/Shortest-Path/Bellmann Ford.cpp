#include <bits/stdc++.h>
using namespace std;

struct Edge 
{
  int u,v,w;
};


class Graph 
{
public:
  int vertices;
  int No_Edges;
  vector<Edge> edges;
  Graph(int vertice)
  {
  vertices = vertice;

  }
  void addEdge(Edge e)
  {
    edges.push_back(e);
    No_Edges = edges.size();
  }
};



void Sol(vector<int>distance, int size) 
{
  int i;
  for (i = 0; i < size; i++) {
    if(distance[i]==INT_MAX)
      cout<<"NOT RECHABLE ";
    else
      cout<<distance[i]<<" ";
  }
}

void BellmanFord(Graph graph, int u)
{
  int vertices = graph.vertices;
  int No_Edges = graph.No_Edges;
  vector<int> distance(vertices+1,INT_MAX);


  distance[u] = 0;
  for (int i = 1; i <= vertices - 1; i++)
  {
    for (int j = 0; j < No_Edges; j++)
    {
      int u = graph.edges[j].u;
      int v = graph.edges[j].v;
      int w = graph.edges[j].w;
      if (distance[u]!=INT_MAX&&distance[u]+w<distance[v])
        distance[v]=distance[u] + w;
    }
  }

  for (int i = 0; i < No_Edges; i++)
  {
    int u = graph.edges[i].u;
    int v = graph.edges[i].v;
    int w = graph.edges[i].w;
    if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
      cout<<" Graph contains negative edgesd cycle So Algorithm Inaplicable ";
      return;
    }
  }
  Sol(distance, vertices);
}

int main()
{
  int vertice,n;
  cout<<"Enter Number of vertices : ";
  cin>>vertice;
  cout<<"Enter Number of Edges : ";
  cin>>n;
  Graph g = Graph(vertice);
  cout<<"Enter Edges : \n\n";
  while(n)
  {n--;
    Edge e;
    cout<<"Enter Start Node : ";
    cin>>e.u;
    cout<<"Enter End Node : ";
    cin>>e.v;
    cout<<"Enter Weight : ";
    cin>>e.w;
    cout<<endl;

    g.addEdge(e);
  }
  
  int node;
  cout<<"Enter Start node for shortest path : ";
  cin>>node;

  cout<<"Shortest Path from source to every other node : \n\n";
  BellmanFord(g, node);

  return 0;
}
