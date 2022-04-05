#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::find
#include <map> //std::map
#include <list>

using namespace std;

int main(){
  cout << "hello world" << endl;

  vector<int> i_vecteur;
   i_vecteur = {1,2,3};
  // i_vecteur.push_back(1);
  // i_vecteur.push_back(2);
  // i_vecteur.push_back(3);
  
  /* Affichage par indice */
  for (int i=0; i<i_vecteur.size(); i++){
    cout << i_vecteur[i] << endl;
  }
  
   for(int &i : i_vecteur){
    cout << i << endl;
   }
  
  /* Affichage par itérateur */
  for(vector<int>::iterator it = i_vecteur.begin(); it != i_vecteur.end(); it++){
    cout<<*it<<std::endl;
  }

  i_vecteur.push_back(5);
  cout << "Taille vecteur après ajout : " << i_vecteur.size() << endl;

  
  /* EXERCICE 2 */
  cout << "EXERCICE 2" << endl;
  vector<string> list_chaine;
  list_chaine = {"Bonjour", "comment", "allez", "vous", "?"};

  cout << "Taille vecteur après ajout : " << list_chaine.size() << endl;

  /* Affichage de la capacité */
  cout << "Capacity du vector : " << list_chaine.capacity() << endl;

  /* Affichez le contenu du vecteur sur une même ligne (chaque mot étant séparé par un espace) avec les mêmes trois méthodes différentes que précédemment */
  /* Affichage par indice */
  for (int i=0; i<list_chaine.size(); i++){
    cout << list_chaine[i] << " ";
  }
  cout << "\n";
  
  /* Affichage par par boucle sur une plage de nombre */
  for(string &i : list_chaine){
   cout << i << " ";
  }
  cout << "\n";
  
  /* Affichage par itérateur */
  for(vector<string>::iterator it_l = list_chaine.begin(); it_l != list_chaine.end(); it_l++){
    cout << *it_l << " ";
  }
  cout << "\n";

  /* Inverser deux case du vecteur */
  // string temp = list_chaine.at(1);
  // list_chaine.at(1) = list_chaine.at(3);
  // list_chaine.at(3) = temp;
  swap(list_chaine[1],list_chaine[3]);
  
  /* Afficher de la liste inversée */
  for(string &i : list_chaine){
   cout << i << " ";
  }
  cout << "\n";

  /* Insérer un élément dans le vecteur */
  std::vector<string>::iterator it;
  it = list_chaine.begin();

  list_chaine.insert(++it, "à tous");
  
  /* Afficher de la liste inversée */
  for(string &i : list_chaine){
   cout << i << " ";
  }
  cout << "\n";
  
  /* Changez le point d’interrogation final par "???". Vérifiez votre résultat. */
  // it = find (list_chaine.begin(), list_chaine.end(), "?");
  // cout << "Element found in myints: " << *it << '\n';
  // list_chaine[it-list_chaine.begin()] = "???";

  for(auto &i : list_chaine){
    if( i == "?"){
      i="???";
    }
  }

  /* Afficher de la liste avec le remplacement de '?' par '???' */
  for(string &i : list_chaine){
   cout << i << " ";
  }
  cout << "\n";

  /* Affichage avec séparation virgule */
  for (int i=0; i<list_chaine.size(); i++){
    if (i == list_chaine.size() - 1)
      cout << list_chaine[i] << "\n";
    else
      cout << list_chaine[i] << ", ";
  }

  /* Trier le vecteur */
  sort(list_chaine.begin(), list_chaine.end());
  
  for (int i=0; i<list_chaine.size(); i++){
    if (i == list_chaine.size() - 1)
      cout << list_chaine[i] << "\n";
    else
      cout << list_chaine[i] << ", ";
  }

  // ///les maps
   map<int,list<string>> tableau;
  return 0;
}