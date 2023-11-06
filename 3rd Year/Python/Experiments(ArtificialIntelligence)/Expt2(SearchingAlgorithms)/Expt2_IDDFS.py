#Iterative Deepening Depth-First Search Algorithm
def dfs(graph, start, depth):
    stack = [(start, 0)]

    while stack:
        node, current_depth = stack.pop()
        if node not in visited and current_depth <= depth:
            print(node, end=" ")
            visited.add(node)

            if current_depth < depth:
                for neighbour in graph[node]:
                    stack.append((neighbour, current_depth + 1))

def iterative_deepening_dfs(graph, start):
    depth = 0
    while True:
        global visited
        visited = set()
        print("\nDepth", depth, ": ", end="")
        dfs(graph, start, depth)
        depth += 1
        if len(visited) == len(graph):
            break

# Using the same graph from the provided example
graph = {
    '5': ['3', '7'],
    '3': ['2', '4'],
    '7': ['8'],
    '2': [],
    '4': ['8'],
    '8': []
}

print("Following is the Iterative Deepening Depth-First Search")
iterative_deepening_dfs(graph, '5')
