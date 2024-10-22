#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;  

    vector<vector<int>> quadrado(n, vector<int>(n));
    set<int> contador;  

    int magico = 0;

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> quadrado[i][j];  
             

            if (i == j) {
                magico += quadrado[i][j]; 
            }
            
            contador.insert(quadrado[i][j]); 
        }
        
        if (contador.size() != (i+1) * n) {
        cout << "0\n";  
        return 0;
    }
    }


    for (int i = 0; i < n; i++) {
        int somal = 0, somac = 0;
        for (int j = 0; j < n; j++) {
            somal += quadrado[i][j];  
            somac += quadrado[j][i];  
        }

        if (somal != magico || somac != magico) {
            cout << "0\n";  
            return 0;
        }
    }

    cout << magico << endl;
    return 0;
}