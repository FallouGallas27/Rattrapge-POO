#include "Site.h"

Site::Site(string nom)
{
	nom_site = nom;
	taille = 0;
	doc = nullptr;
	cout << "Constructeur Site appelé" << endl;
}

Site::~Site()
{
	if (doc)
	{
		for (int i = 0; i < taille; i++)
		{
			delete doc[i];
		}
		delete [] doc;
		doc = nullptr;
		taille = 0;
	}
	cout << "Destructeur Site appelé" << endl;
}

void Site::afficher()
{
	cout << "Nom du site : " << nom_site << endl;
	if (taille == 0)
	{
		cout << "Pas de document dans le site" << endl;
		return;
	}
	cout << "Les documents du site :" << endl;
	for (int i = 0; i < taille; i++)
	{
		doc[i]->afficher_Doc();
	}
}

void Site::ajouter_document(Document *d)
{
	// Crée une copie du document passé et l'ajoute au tableau
	Document *copie = new Document(d->getTitre(), d->getNbMotCles());
	string *mots = d->getListMotCles();
	for (int i = 0; i < d->getNbMotCles(); i++)
	{
		if (mots[i] != "") copie->ajouter_mot_cles(mots[i]);
	}

	Document **nouveau = new Document*[taille + 1];
	for (int i = 0; i < taille; i++)
		nouveau[i] = doc[i];
	nouveau[taille] = copie;
	delete [] doc;
	doc = nouveau;
	taille++;
}

void Site::supprimer_document(Document *d)
{
	if (taille == 0)
	{
		cout << "Pas de document dans le site!" << endl;
		return;
	}
	int idx = -1;
	for (int i = 0; i < taille; i++)
	{
		if (doc[i]->getTitre() == d->getTitre())
		{
			idx = i;
			break;
		}
	}
	if (idx == -1)
	{
		cout << "Document non trouve dans le site" << endl;
		return;
	}
	// supprime l'objet Document alloue
	delete doc[idx];
	if (taille == 1)
	{
		delete [] doc;
		doc = nullptr;
		taille = 0;
		return;
	}
	Document **nouveau = new Document*[taille - 1];
	for (int i = 0, j = 0; i < taille; i++)
	{
		if (i == idx) continue;
		nouveau[j++] = doc[i];
	}
	delete [] doc;
	doc = nouveau;
	taille--;
}

void Site::copier_document(Site &s)
{
	for (int i = 0; i < s.taille; i++)
	{
		Document *src = s.doc[i];
		Document *copie = new Document(src->getTitre(), src->getNbMotCles());
		string *mots = src->getListMotCles();
		for (int k = 0; k < src->getNbMotCles(); k++)
		{
			if (mots[k] != "") copie->ajouter_mot_cles(mots[k]);
		}
		// ajouter copie au site courant
		Document **nouveau = new Document*[taille + 1];
		for (int j = 0; j < taille; j++)
			nouveau[j] = doc[j];
		nouveau[taille] = copie;
		delete [] doc;
		doc = nouveau;
		taille++;
	}
}

bool Site::rechercher_document(string titre)
{
	for (int i = 0; i < taille; i++)
	{
		if (doc[i]->getTitre() == titre) return true;
	}
	return false;
}