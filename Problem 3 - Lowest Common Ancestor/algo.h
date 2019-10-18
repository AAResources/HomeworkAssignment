#ifndef ALGO_H
#define ALGO_H

#include <vector>

/**
 * For a given input tree T, computes the lowest common ancestor between any two nodes in V.
 *
 * @graph: The graph is represented using adjacency lists (graph[i] - gives you the neighbours of node i)
 * @queries: a query is determined by a pair <x, y>: "What is the lowest common ancestor of x and y?"
 *
 * The function returns a vector with the corresponding answers.
 */
std::vector<int> lca(const std::vector<std::vector<int>>& graph, const std::vector< std::pair<int, int> >& queries);

#endif
