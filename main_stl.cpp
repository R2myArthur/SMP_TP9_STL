#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  cout << "hello world" << endl;

  vector<int> i_vecteur;
   i_vecteur = {1,2,3};
  // i_vecteur.push_back(1);
  // i_vecteur.push_back(2);
  // i_vecteur.push_back(3);
  
  for (int i=0; i<i_vecteur.size(); i++){
    cout << i_vecteur[i] << endl;
  }
  
   for(int &i : i_vecteur){
    cout << i << endl;
   }
  
  for(vector<int>::iterator it = i_vecteur.begin(); it != i_vecteur.end(); it++){
    std::cout<<*it<<std::endl;
  }

  i_vecteur.push_back(5);
  cout << "Taille vecteur après ajout : " << i_vecteur.size() << endl;

  
  /* Partie 2*/
  cout << "EXERCICE 2" << endl;
  std::vector<std::string> list_chaine;
  list_chaine = {"Bonjour", "comment", "allez", "vous", "?"};

  cout << "Taille vecteur après ajout : " << i_vecteur.size() << endl;
  
  return 0;
}