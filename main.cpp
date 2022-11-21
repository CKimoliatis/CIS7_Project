#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int chooseLanguage(vector<string>);
int chooseSpecialty(vector<string>);

int main(){
    vector<vector<string>> countries {
        {"USA", "Canada", "Australia", "Britain", "Singapore"}, //English
        {"Taiwan", "China", "Singapore", "Malaysia", "Hong Kong"}, //Chinese
        {"Spain", "Mexico", "Argentina", "Chile", "Columbia"}, //Spanish
        {"Saudi Arabia", "Egypt", "Iraq", "Jordan", "Qatar"}, //Arabic
        {"France", "Belgium", "Canada", "Madagascar", "Senegal"}, //French
        {"Germany", "Austria", "Switzerland", "Belgium", "Luxemborg"}, //German
        {"Russia", "Kazakhstan", "Ukraine", "Belarus", "Kyrgyzstan"}, //Russian
        {"Democratic Republic of Congo", "Kenya", "Rwanda", "Tanzania", "Uganda"}, //Swahili
        {"Portugal", "Brazil", "Mozambique", "Angola", "East Timor"} //Portugese
    };

    vector<string> language{"English", "Chinese", "Spanish", "Arabic", "French", "German", "Russian", "Swahili", "Portugese"};
    int languageChoice = chooseLanguage(language);
   
    vector<string> specialty{
        "Cardiology", "Infectiuos Desease", "Intensive Care Medicine", 
        "Public Health", "Vascular Surgery", "Allergy and Immunology",
        "Emergency Medicine", "General Surgery"
    };
    int specialization = chooseSpecialty(specialty);
    
    cout << endl << "Thank you for the input!" << endl;
    cout << "You have chosen " << language[languageChoice-1] << " as your language and " << specialty[specialization-1] << " as your medical specialty." << endl;

    srand(time(0));
    int n = rand() % 5;
    
    cout << "The chosen country you are assigned to is: " << countries[languageChoice-1][n] << endl << endl;  

    cout << "The probabilty of a physician choosing a language is 1/9." << endl;
    cout << "The probabilty of a physician getting assigned a country is 1/5 in the chosen language. " << endl;
    cout << "The probability of a physician choosing a specific medical specialization is 1/8." << endl;
    cout << "There is a 1/360 chance of a physician matching with the specified language, and specialization." << endl;
    
    return 0;
}

int chooseLanguage(vector<string> language){
    int languageChoice;
    do{
        cout << "Choose a language and a country will be assigned. "<< endl;
        for(int i = 0; i < language.size(); i++){
            cout << i + 1 << ". " << language[i] << endl ;
        }
        cin >> languageChoice;
        if(languageChoice > 9 || languageChoice < 1){
            cout << "You must choose a number that is associated with the language. Try again:" << endl;
        }
    }while(languageChoice > 9 || languageChoice < 1);
    return languageChoice;
}
int chooseSpecialty(vector<string> specialty){
    int specialization;
    do{
        cout << endl << "Now choose a field you medical specialization you are in:" << endl;
        for(int i = 0; i < specialty.size(); i++){
            cout << i+1 << ". " << specialty[i] << endl;
        }
        cin >> specialization;
        if(specialization > 8 || specialization < 1){
            cout << "You must choose a number associated with the medical specialty. Try again: " << endl;
        }
    }while(specialization > 8 || specialization < 1);
    return specialization;
}