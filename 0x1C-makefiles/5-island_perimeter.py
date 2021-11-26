#!/usr/bin/python3
"""find the island perimeter"""
def island_perimeter(grid):
    ans = 0
    for i in range (len(grid)):
        for j in range (len(grid[0])):
            if grid[i][j] == 1:
                ans += 4
                if grid[i-1][j] == 1:
                    ans -= 2
                if grid[i][j-1] == 1:
                    ans -= 2
    return ans 