#ifndef ALGO_H
#define ALGO_H

#include <vector>

/*
 * edge.first  -> the idx of the neighbour
 * edge.second -> the cost 
 */
typedef std::pair<int, int> edge;

/**
 * For a given input graph T, computes the distance from every node to every other node in the graph.
 *
 * @graph: The graph is represented using adjacency lists (graph[i] - gives you the neighbours of node i) *
 * @returns: The adjacency matrix with the minimum distances between every node.
 */
std::vector<std::vector<int>> shortest_path_all(const std::vector<std::vector<edge>>& graph);

#endif