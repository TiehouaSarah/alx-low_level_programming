#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.
    Args:
        grid (List[List[int]]): A list of list of integers
        \representing the grid.
            0 represents a water zone, and 1 represents a land zone.
        Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    if not grid:
        return perimeter

    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with the assumption of 4 sides

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
