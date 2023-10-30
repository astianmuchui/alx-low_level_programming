#!/usr/bin/python3

"""
        Island perimeter

        function def island_perimeter(grid):
        that returns the perimeter of the island described in grid:

        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected
        horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water,
        and there is one island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t
        connected to the water around the island).
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter
    of the island described in grid using
    1 and 0
    """""
    if not isinstance(grid, list):
        return False
    else:
        len_t = len(grid)
        floor_w = len(grid[0])
        perimeter = 0
    for i in range(len_t):
        for j in range(floor_w):
            if grid[i][j] == 1:
                perimeter += 4
            if i > 0 and grid[i - 1][j] == 1:
                perimeter -= 2
            if j > 0 and grid[i][j - 1] == 1:
                perimeter -= 2
    return (perimeter)
