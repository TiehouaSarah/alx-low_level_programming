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

     # Iterate over each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # Check if the cell represents land
            if grid[i][j] == 1:
                # Check the adjacent cells
                # Increment the perimeter if the adjacent cell is water or out of bounds
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
