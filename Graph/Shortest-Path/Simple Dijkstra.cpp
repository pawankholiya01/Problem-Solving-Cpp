#include<bits/stdc++.h>
using namespace std;


int main()
{
    int v;
    cout<<"Enter NO. of Nodes in graph V : ";
    cin>>v;
    int G[100][100],i,j,k;
    cout<<"Enter Adjacency Matrix of the Graph : \n";
    cout<<"(Enter 9999 for non rechable ) \n\n";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cin>>G[i][j];
            if(G[i][j]==9999)
                G[i][j]=INT_MAX;
        }
    }
  bool selected[100];
     for(i=0;i<=v;i++)
     {
         selected[i]=false;

     }
    int source,destination;
    cout<<"Enter Source : ";
    cin>>source;
    cout<<"Enter Destination : ";
    cin>>destination;
  selected[source] = true;

     int temp=source;

     int mind[100],x;

     for(i=0;i<v;i++)
     {

         mind[i]=INT_MAX;
     }
     mind[source]=0;
	vector <int> path;
	
     while(temp!=destination)
     {
         for(j=0;j<v;j++)
         {
             if(G[temp][j]>0)
             {
                 mind[j]=min(mind[j],mind[temp]+G[temp][j]);
             }
         }
         x=0;
         selected[temp]=true;;
          for(i=0;i<v;i++)
         {
             if(selected[i]==false)
             {
                 x=i;
                 break;
             }
         }
         for(i=0;i<v;i++)
         {
             if(mind[i]<mind[x]&&selected[i]==false)
             {
                 x=i;
             }
         }
        temp=x;
        path.push_back(temp);
         selected[temp]=true;
     }

    cout<<"\n\nShortest Distance Between Node "<<source<<" and Node "<<destination<<" is : ";
    if(mind[destination]==INT_MAX||mind[destination]<0)
        cout<<"Not-Rechable"<<endl;
    else
    cout<<mind[destination]<<endl;








}
