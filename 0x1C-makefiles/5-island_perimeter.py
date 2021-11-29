#!/usr/bin/python3
"""
Island perimeter function
"""


def island_perimeter(grid):
    """sumary_line
    
    Keyword arguments:
        grid: Island

    Return: perimeter
    """
    
    perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                if grid[y][x - 1] == 0:
                    perimeter += 1
                if grid[y][len(grid[y]) - 1] == 1 or grid[y][x + 1] == 0:
                    perimeter += 1
                if grid[y - 1][x] == 0:
                    perimeter += 1
                if grid[len(grid) - 1][x] == 1 or grid[y + 1][x] == 0:
                    perimeter += 1

    return perimeter