#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of the island defined in grid. """
    perimeter = 0  # Initialize perimeter

    # Iterating through each cell in the grid
    # (ignoring the boundary cells for simplicity)
    for row in range(1, len(grid) - 1):
        for col in range(1, len(grid[0]) - 1):
            if grid[row][col] == 1:  # If the cell is land zone
                if grid[row - 1][col] == 0:  # Check top cell
                    perimeter += 1
                if grid[row + 1][col] == 0:  # Check bottom cell
                    perimeter += 1
                if grid[row][col - 1] == 0:  # Check left cell
                    perimeter += 1
                if grid[row][col + 1] == 0:  # Check right cell
                    perimeter += 1
    return perimeter
