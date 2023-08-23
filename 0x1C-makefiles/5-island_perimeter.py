#!/usr/bin/python3
""" returns the perimeter of the island described in grid """

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.
    
    Args:
        grid (list of list of int): A rectangular grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with a base perimeter of 4
                
                # Check adjacent cells and subtract 1 for each adjacent land
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
