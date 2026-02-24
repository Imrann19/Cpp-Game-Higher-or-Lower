#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int nb = rand() % 100 +1;
    bool answer = true;
    int input_utilisateur;
    while (answer == true){
        cout << "Entrer un nombre entre 1 et 100: "; cin >> input_utilisateur;
        if (input_utilisateur == nb){
            cout << "Vous avez gagner le nombre est " << nb << endl;
            answer = false;
        }
        else if (input_utilisateur > nb){
            cout << "Le nombre est plus petit" << endl;
        }
        else if (input_utilisateur < nb){
            cout << "Le nombre est plus grand" << endl;
        }
    }
    return 0;

}

