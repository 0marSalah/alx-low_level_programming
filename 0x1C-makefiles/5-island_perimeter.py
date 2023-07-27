#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of the island defined in grid. """
    perimeter = 0
    for row in range(1, len(grid) - 1):
        for col in range(1, len(grid[0]) - 1):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    perimeter += 1
                if grid[row + 1][col] == 0:
                    perimeter += 1
                if grid[row][col - 1] == 0:
                    perimeter += 1
                if grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
