#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector< vector<string> > countries {
        {"USA", "Canada", "Australia", "Britain", "Singapore"},
        {"Taiwan", "China", "Singapore", "Malaysia", "Hong Kong"},
        {"Spain", "Mexico", "Argentina", "Chile", "Columbia"},
        {"Saudi Arabia", "Egypt", "Iraq", "Jordan", "Qatar"},
        {"France", "Belgium", "Canada", "Democratic Republic of Congo", "Senegal"},
    };
     for(int i = 0; i < 5;i++){
        for(int j = 0; j < 5;j++ ){
            cout << countries[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}