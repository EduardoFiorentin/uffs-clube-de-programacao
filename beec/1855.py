def solve(map_grid, visited, dir_x, dir_y, pos_x, pos_y, rows, cols):
    if pos_x < 0 or pos_x >= rows or pos_y < 0 or pos_y >= cols or visited[pos_y][pos_x]:
        return '!'
    print(pos_x, pos_y)
    
    if map_grid[pos_y][pos_x] == '*':
        return '*'
    if map_grid[pos_y][pos_x] == '>':
        dir_x, dir_y = 1, 0
    elif map_grid[pos_y][pos_x] == '^':
        dir_x, dir_y = 0, -1
    elif map_grid[pos_y][pos_x] == '<':
        dir_x, dir_y = -1, 0
    elif map_grid[pos_y][pos_x] == 'v':
        dir_x, dir_y = 0, 1

    visited[pos_y][pos_x] = True
    pos_x += dir_x
    pos_y += dir_y
    
    
    return solve(map_grid, visited, dir_x, dir_y, pos_x, pos_y, rows, cols)



rows = int(input())
cols = int(input())

map_grid = []
for _ in range(cols):
    line = input()
    map_grid.append(list(line))


visited = []
for i in range(cols):
    line = []
    for j in range(rows):
        line.append(False)
    visited.append(line)


dir_x, dir_y = 1, 0
pos_x, pos_y = 0, 0

result = solve(map_grid, visited, dir_x, dir_y, pos_x, pos_y, rows, cols)
print(result)

