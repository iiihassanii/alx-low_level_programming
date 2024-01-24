#!/usr/bin/python3
"""island_perimeter"""


def island_perimeter(grid):
    """island perimeter Function"""
    island = 0
    num_rows = len(grid)  # Number of rows
    num_cols = len(grid[0])  # Number of columns

    for row in range(num_rows-1):
        for cul in range(num_cols-1):
            if grid[row][cul] == 1:
                if grid[row][cul - 1] == 0:
                    island += 1
                if grid[row][cul + 1] == 0:
                    island += 1
                if grid[row - 1][cul] == 0:
                    island += 1
                if grid[row + 1][cul] == 0:
                    island += 1
    return island
