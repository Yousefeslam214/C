#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Given grid of positive numbers, Start from 0, 0 and end at n,n.
 * Move only to right and down - find path with sum of numbers is maximum.
 * 15
 * 24
 * 
 * 512
 * 578
 * 189
 * 
 * main - Call the recursive function.
 * 
 * Return: zero.
 * 
 * Competitve programing: https://www.youtube.com/watch?v=hyk46UmJPS4
*/
const int max = 100; // Assuming a maximum size for the grid

int grid[max][max];
int n; // Size of the grid

bool valid(int r, int c)
{
    // Check if the indices (r, c) are within the grid bounds
    return (r >= 0 && r < n && c >= 0 && c < n);
}
// Think in a function F(i, j) that find solution from (i, j) to (n, n)

int maxPathSum(int r,int c)
{
    if(!valid(r,c))
        return 0;
    
    if(r == n - 1 && c == n - 1)
        return grid[r][c]; //base
    
    int path1 = maxPathSum(r, c+1);// right
    int path2 = maxPathSum(r, c+1);// down

    return grid[r][c] + max(path1, path2);
}
int main()
{
        // Input the grid size
    cout << "Enter the size of the grid: ";
    cin >> n;

    // Input the grid elements
    cout << "Enter the elements of the grid:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Find the maximum path sum
    int maxSum = maxPathSum(0, 0);

    // Output the result
    cout << "Maximum path sum: " << maxSum << endl;

    return 0;
}
