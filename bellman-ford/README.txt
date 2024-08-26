This is a code that implements Bellman-Ford algorithm, computing 
shortest paths from a single source vertex to all of the other vertices in a weighted graph.

Features:
it uses TUPLE data structure
to unpack the tuple we use tie() function
  
for example:
tuple<int,int,int> t;
int a,b,c;
tie(a,b,c) = t;

The code above unpacks the values from the tuple to the values of a,b and c.

Let's take a look at the other example:
tuple<int,int,int> t;
int a,b,c;

t = make_tuple(a,b,c);

The code above creates a tuple that contains values of a,b and c.
