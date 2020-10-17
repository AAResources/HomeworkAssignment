#ifndef ALGO_H
#define ALGO_H

#include <vector>
#include <algorithm>
/**
 * For a given graph given by N (no of vertices), M (no of edges), vector< pair < pair <int,int> , int> >, computes the maximum flow in G.
 *
 * @N: no of vertices
 * @M: no of edges
 * @V: tuples (a,b,c) -> edge from a to b, capacity c 
 * @returns: the maximum flow 
 */
int rmq(int N, int M, std::vector < std::pair< std::pair<int, int>, int> >);
#endif
