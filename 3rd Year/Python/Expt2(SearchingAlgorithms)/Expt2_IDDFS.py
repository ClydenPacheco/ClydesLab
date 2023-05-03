#Iterative Deepening Depth-First Search Algorithm
class Graph:
    def __init__(self, graph_dict=None):
        if graph_dict is None:
            graph_dict = {}
        self.graph_dict = graph_dict

    def add_edge(self, vertex, edge):
        if vertex not in self.graph_dict:
            self.graph_dict[vertex] = []
        self.graph_dict[vertex].append(edge)

    def iddfs(self, start_vertex, goal_vertex, max_depth):
        for depth in range(max_depth+1):
            visited = []
            stack = [(start_vertex, 0)]
            while stack:
                vertex, level = stack.pop()
                if vertex == goal_vertex:
                    visited.append(vertex)  # Append the goal vertex to visited
                    return visited
                if level < depth:
                    if vertex not in visited:
                        visited.append(vertex)
                        for neighbor in self.graph_dict[vertex]:
                            stack.append((neighbor, level+1))
        return None

# Example usage
graph_dict = {'A': ['B', 'C'], 'B': ['D', 'E'], 'C': ['F'], 'D': [], 'E': [], 'F': []}
g = Graph(graph_dict)
print(g.iddfs('A', 'F', 3))
