#!/usr/bin/env python3
"""Comment"""


def island_perimeter(grid):
    """Return the perimeter"""
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                if j + 1 > len(grid[i]) - 1 or grid[i][j + 1] is 0:
                    per = per + 1
                if j - 1 < 0 or grid[i][j - 1] is 0:
                    per = per + 1
                if i + 1 > len(grid) - 1 or grid[i + 1][j] is 0:
                    per = per + 1
                if i - 1 < 0 or grid[i - 1][j] is 0:
                    per = per + 1
    return per
