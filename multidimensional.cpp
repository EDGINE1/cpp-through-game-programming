#include <iostream>

using namespace std;

int main(){
    int rows = 3;
    int columns = 3;
    
    char tictactoe[rows][columns] = {{'o', 'x', 'o'},{' ','x','o'},{'x','o', 'o'}};

    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j < columns; j++)
        {
            cout << tictactoe[i][j];
        }
        cout << endl;
    }
    
    
}