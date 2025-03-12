#include <iostream>
#include <vector>
using namespace std;


vector<int> spiralTraversal(vector< vector<int> > matrix)
{
    uint32_t right = matrix[0].size();
    uint32_t left = -1;
    uint32_t bottom = matrix.size();
    uint32_t top = -1;

    uint32_t row = 0; //current row 
    uint32_t col = 0; //current col

    vector<int> res;
    res.reserve(right * bottom); //reserve capactiy for m x n number of values
    while ((row < bottom && row > top) && (col < right && col > left))
    {
        for (;col < right; col++) //move to the right of 2D matrix
        {
            res.push_back(matrix[row][col]);
        }
        top++; //move the top closer to the bottom
        col--; //we are equal to right so move down one
        for (; row < bottom; row++) //move down the 2D matrix
        {
            res.push_back(matrix[row][col]);
        }
        right--; //move right closer to left
        row--; //we are equal to the bottom so move down one or up the matrix
        for (;col > left; col--) //move to the left of the 2D matrix
        {
            res.push_back(matrix[row][col]);
        }
        bottom--; //move the bottom closer to the top
        col++; //we are equal to the left so move up one
        for (; row > top; row--) //move up the 2D matrix
        {
            res.push_back(matrix[row][col]);
        }
        left++; //move the left closer to the right
        row--; //we are equal to the top so move down one
        col++; //we need to move to the right one so we don't get the same value twice
    }
    return res;
}

int main()
{
    std::vector< std::vector<int> > tetstM;
    tetstM.push_back({1, 2, 3, 4});
    tetstM.push_back({5, 6, 7, 8});
    tetstM.push_back({9, 10, 11, 12});
    tetstM.push_back({13, 14, 15, 16});
    vector<int> res = spiralTraversal(tetstM);
    cout << "[ ";
    for (uint32_t i = 0; i < res.size(); i++)
    {
        cout << res[i] << ", ";
    }
    cout << " ]\n";
    
}