from queue import Queue

def bfs(start, goal, graph):
    grey = []
    black = []
    path = []
    cur_node = str()
    grey.append(start)
    black.append(start)
    while black:
        cur_node = black.pop(0)
        path.append(cur_node)
        if cur_node == goal:
            return path
        for n in graph[cur_node]:
            if n not in black:
                grey.append(n)
                black.append(n) 


graph = {
    'm':['o','n'],
    'o':['e','f'],
    'n':['g'],
    'e':['d','l'],
    'f':[],
    'g':[],
    'd':[],
    'l':[]
}

print (bfs('m','f',graph))
