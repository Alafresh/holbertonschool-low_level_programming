#!/usr/bin/python3
def island_perimeter(grid):
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j + 1] is 0 or j + 1 > len(grid[i]) - 1:
                    per = per + 1
                if grid [i][j - 1] is 0 or j - 1 < 0:
                    per = per + 1
                if grid[i + 1][j] is 0 or i - 1 < 0:
                    per = per + 1
                if grid[i - 1][j] is 0 or i + 1 > len(grid) - 1:
                    per = per + 1
    return per
