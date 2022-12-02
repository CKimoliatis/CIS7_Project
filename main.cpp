#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int chooseLanguage(vector<string>);
int chooseSpecialty(vector<string>);

int main(){
    vector<vector<string>> countries { //45 countries
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
   
    vector<string> specialty{ //8 specialties
        "Cardiology", "Infectiuos Desease", "Intensive Care Medicine", 
        "Public Health", "Vascular Surgery", "Allergy and Immunology",
        "Emergency Medicine", "General Surgery"
    };
    int specialization = chooseSpecialty(specialty);
    
    cout << endl << "Thank you for the input!" << endl;
    cout << "You have chosen " << language[languageChoice-1] << " as your language and " << specialty[specialization-1] << " as your medical specialty." << endl;

    srand(time(0));
    int n = rand() % countries[languageChoice-1].size();
    
    cout << "The chosen country you are assigned to is: " << countries[languageChoice-1][n] << endl << endl;  
    //total of 360 outcomes possible

    int numberOfLanguage = language.size();
    int numberOfCountries = countries[languageChoice-1].size();
    int numberOfSpecialties = specialty.size();

    cout << "Total possible outcomes are " << numberOfCountries*numberOfLanguage*numberOfSpecialties << endl;
    cout << "The probabilty of matching countries are 1/" <<  numberOfCountries*numberOfLanguage << endl;
    cout << "The probabilty of matching specialties are 1/" << numberOfSpecialties << endl;
    cout << "The probabilty of matching based on country, specialty, and language preference is 1/" << numberOfCountries*numberOfLanguage*numberOfSpecialties << endl;
    
    return 0;
}

int chooseLanguage(vector<string> language){
    int languageChoice;
    int numLanguage = language.size();
    do{
        cout << "Choose a language and a country will be assigned. "<< endl;
        for(int i = 0; i < numLanguage; i++){
            cout << i + 1 << ". " << language[i] << endl ;
        }
        cin >> languageChoice;
        if(languageChoice > numLanguage || languageChoice < 1){
            cout << "You must choose a number that is associated with the language. Try again:" << endl;
        }
    }while(languageChoice > numLanguage || languageChoice < 1);
    return languageChoice;
}

int chooseSpecialty(vector<string> specialty){
    int specialization;
    int numSpecialty = specialty.size();
    do{
        cout << endl << "Now choose a field you medical specialization you are in:" << endl;
        for(int i = 0; i < numSpecialty; i++){
            cout << i+1 << ". " << specialty[i] << endl;
        }
        cin >> specialization;
        if(specialization > numSpecialty || specialization < 1){
            cout << "You must choose a number associated with the medical specialty. Try again: " << endl;
        }
    }while(specialization > numSpecialty || specialization < 1);
    return specialization;
}