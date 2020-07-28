## Graph 
Graphs consist of `nodes` and `edges`. Graphs can be used to represent any `networks`, relationships between items. 

Graph can be of many types 

`weighted` and `un-weighted` : each link has a cost associated with it. 

`directed` and `un-directed` : link is bidirectional or unidirectional.
### Representatioms:
**Ajacency Matrix :** represented by `2-D Matrix of [V][V]` where `V = Vertices` .It contains a cell for `every possible edge` when no multiple edges between same set of adjacent vertices. 

**Ajacency List :** represents graph as `vector of vector`(in C++) where index corresponding to every node contains array of `all outgoing edges` from the vertice. 

