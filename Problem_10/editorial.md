#  Problem G: Blood Transfusion (Hard Version)
* The problem can be modelled using a **bipartite** graph:
	* The nodes representing the people
	* The first set of nodes represents the injured people
	* The second set of nodes represents the donors
	* Node I from the first set and D from the second edge have an edge between them means that D can donate to I.
* **First step: building the graph:**
	* A donor can donate blood to a person of the same blood type: for each donor and injured person of the same blood types, we add an edge
	*  For each relation between blood type **x** and blood type **y**, we add an edge between all the donor nodes of blood type **x** and all all the injured of blood type **y**.

* **Second step: apply a maximum bipartite matching algorithm:**
	* A **matching** in a Bipartite Graph is a set of the edges chosen in such a way that **no two edges share an endpoint** . A maximum matching is a matching of maximum size (maximum number of edges). In a maximum matching, if any edge is added to it, it is no longer a matching. There can be more than one maximum matching for a given Bipartite Graph.
	* We use the **Hopcroft-Karp Algorithm** to find the maximum matching. This algorithm works by finding **augmenting paths** (paths used to maximise the current matching) until there are not more augmenting paths.
	* This article goes into depth about [Bipartite Graphs](https://www.geeksforgeeks.org/bipartite-graph/) 
	* These two articles go into depth about the [Hopcroft-Karp Algorithm](https://www.geeksforgeeks.org/hopcroft-karp-algorithm-for-maximum-matching-set-1-introduction/) and its [implementation](https://www.geeksforgeeks.org/hopcroft-karp-algorithm-for-maximum-matching-set-2-implementation/)
	* The **time complexity** for this algorithm is $O(\sqrt V.E)$ where V is the number of nodes of our graph and E denoting the number of edges
	* This article goes into depth about  another algorithm for finding the maximum bipartite matching by converting the problem to a maximum flow problem then using the [Ford-Fulkerson Algorithm](https://www.geeksforgeeks.org/maximum-bipartite-matching/) 
	* The **time complexity** for this algorithm is $O(V.E)$
* **Third step: finding the answer**
	* Given the maximum matching value (how many pairs of edges the maximum matching includes), if this value is equal to our $n$, then we can save everyone otherwise we can't 
