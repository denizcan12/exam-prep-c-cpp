/*
Write a function that, given a square matrix (represented as a vector of
vectors of integers), returns its transpose.
The transpose swaps rows and columns: element at row i, column j
becomes the element at row j, column i.

*/

#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> transposeNew(const vector <vector<int>>&m){

    vector<vector<int>>result{m.size(), vector<int>(m.size(), 0)};

    for(int i{}; i < m.size(); ++i)
        for(int j{}; j < m.size(); ++j){
            result[j][i] = m[i][j];
        }

return result; 
}

int main(){

    vector<vector <int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    for (const auto x : transposeNew(matrix)){
        for(int val : x){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}








/*
#include <vector>
#include <iostream>

bool isSymmetric(const std::vector<std::vector<int>> &m ){

    for(int i{}; i < m.size(); ++i)
        for(int j{i + 1}; j < m.size(); ++j){
            bool equal = false;
            if (m[i][j] == m[j][i]) equal = true;
            else if(m[i][j] != m[j][i]){
                return false;
            }
        }
        return true;

}

int main(){

    std::vector<std::vector <int>>matrix{

        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}

    };

    std::cout << isSymmetric(matrix) << std::endl;

    
    return 0;
}
*/



/*
#include <iostream>
#include <vector>

void matrixtranspose(std::vector<std::vector<int>> &m){
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i+ 1; j < n; ++j) {
            std::swap(m[i][j], m[j][i]);
        }
    }
}
int main(){
    
    std::vector<std::vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    matrixtranspose(matrix);

    std::cout << "Transposed matrix:" << std::endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}*/