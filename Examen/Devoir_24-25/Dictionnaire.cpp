#include "Dictionnaire.h"

Dictionnaire::Dictionnaire(int nbl, int nbc){
    nbml = nbl;
    nbmc = nbc;
    dict = new Element*[nbml];
    for (int i = 0; i < nbl; i++)
    {
        dict[i] = nullptr;
    }
    cout<<"Appel du const "<<this<<endl;
}

Dictionnaire::~Dictionnaire(){
    for (int i = 0; i < nbml; i++)
    {
        if (dict[i])
        {
            for (int j = 0; j < nbmc; j++)
            {
                if (dict[i]->valeur[j])
                {
                    delete[] dict[i]->valeur[j];
                }
                
            }
            delete[] dict[i]->valeur;
            delete[] dict[i]->cle;
            delete dict[i];
        }
        
    }
    delete[] dict;
    cout<<"Appel du dest "<<this<<endl;
}
void Dictionnaire::insertion(Element* e){
    int h = hachage(e->cle);
    if (dict[h] == nullptr)
    {
        dict[h] = e;
    }
    else{
        cout<<"Element deja insere"<<endl;
    }
}

void Dictionnaire::affiche(){
    for (int i = 0; i < nbml; i++)
    {
        if (dict[i])
        {
            cout<<"mot "<<dict[i]->cle;
            for (int j = 0; j < nbmc; j++)
            {
                if (dict[i]->valeur[j])
                {
                    cout<<" Syn"<<j<<" "<<dict[i]->valeur[j]<<" ";
                }
                
            }
            cout<<endl;
        }
        
    }
    
}

void Dictionnaire::supprimer( char *mot){
    int h = hachage(mot);
    if (dict[h] != nullptr)
    {
        for (int i = 0; i < nbmc; i++)
        {
            if (dict[h]->valeur[i])
            {
                delete [] dict[h]->valeur[i];
            }
            
        }
        dict[h]->valeur;
        dict[h]->cle;
        dict[h] = nullptr;
    }
    else cout<<"Element introuvable"<<endl;
}
char** Dictionnaire::recherche(char* mot){
    int h = hachage(mot);
    if (dict[h])
    {
        return dict[h]->valeur;
    }
    else return nullptr;
}
Dictionnaire::Dictionnaire(const Dictionnaire& d){
    nbml = d.nbml;
    nbmc = d.nbmc;
    dict = new Element*[nbml];
    for (int i = 0; i < nbml; i++) {
        dict[i] = nullptr;
        if (d.dict[i] != nullptr) {
            dict[i] = new Element;
            // Copier la clé
            if (d.dict[i]->cle) {
                dict[i]->cle = new char[strlen(d.dict[i]->cle) + 1];
                strcpy(dict[i]->cle, d.dict[i]->cle);
            } else {
                dict[i]->cle = nullptr;
            }
            // Copier les valeurs
            if (d.dict[i]->valeur != nullptr) {
                dict[i]->valeur = new char*[nbmc];
                for (int j = 0; j < nbmc; j++) {
                    if (d.dict[i]->valeur[j]) {
                        dict[i]->valeur[j] = new char[strlen(d.dict[i]->valeur[j]) + 1];
                        strcpy(dict[i]->valeur[j], d.dict[i]->valeur[j]);
                    } else {
                        dict[i]->valeur[j] = nullptr;
                    }
                }
            } else {
                dict[i]->valeur = nullptr;
            }
        }
    }
    cout<<"Appel du copy const "<<this<<endl;

}
Dictionnaire& Dictionnaire::operator=(const Dictionnaire& d){
    if (this != &d) {
        // Libérer les ressources existantes
        for (int i = 0; i < nbml; i++) {
            if (dict[i]) {
                for (int j = 0; j < nbmc; j++) {
                    if (dict[i]->valeur[j]) {
                        delete[] dict[i]->valeur[j];
                    }
                }
                delete[] dict[i]->valeur;
                delete[] dict[i]->cle;
                delete dict[i];
            }
        }
        delete[] dict;

        // Copier les nouvelles valeurs
        nbml = d.nbml;
        nbmc = d.nbmc;
        dict = new Element*[nbml];
        for (int i = 0; i < nbml; i++) {
            dict[i] = nullptr;
            if (d.dict[i] != nullptr) {
                dict[i] = new Element;
                // Copier la clé
                if (d.dict[i]->cle) {
                    dict[i]->cle = new char[strlen(d.dict[i]->cle) + 1];
                    strcpy(dict[i]->cle, d.dict[i]->cle);
                } else {
                    dict[i]->cle = nullptr;
                }
                // Copier les valeurs
                if (d.dict[i]->valeur != nullptr) {
                    dict[i]->valeur = new char*[nbmc];
                    for (int j = 0; j < nbmc; j++) {
                        if (d.dict[i]->valeur[j]) {
                            dict[i]->valeur[j] = new char[strlen(d.dict[i]->valeur[j]) + 1];
                            strcpy(dict[i]->valeur[j], d.dict[i]->valeur[j]);
                        } else {
                            dict[i]->valeur[j] = nullptr;
                        }
                    }
                } else {
                    dict[i]->valeur = nullptr;
                }
            }
        }
    }
    cout<<"Appel du copy assign "<<this<<endl;
    return *this;
}