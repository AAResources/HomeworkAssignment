#ifndef ALGO_H
#define ALGO_H

#include <vector>

/**
 * For a given input graph T, computes the distance from the source node to every other node in the graph.
 *
 * @graph: The graph is represented using adjacency lists (graph[i] - gives you the neighbours of node i)
 * @source: The index of the source node
 *
 * @returns: A vector with the set of distances (Ans[i] - distance from source to node i)
 */
std::vector<int> shortest_path(const std::vector<std::vector<int>>& graph, const int source);

#endif