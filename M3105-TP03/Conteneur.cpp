#ifdef CONTENEUR_H

template <class T>
Conteneur<T>* Conteneur<T>::m_instance = nullptr;

template <class T>
Conteneur<T>* Conteneur<T>::getInstance(){
    if(m_instance == nullptr)
        m_instance = new Conteneur;
    return m_instance;
}

template <class T>
Conteneur<T>::Conteneur(){} //construit un objet par défaut

template <class T>
void Conteneur<T>::ajouter(const T& element){
    m_contenu.push_back(&element);
}

template <class T>
void Conteneur<T>::afficher(ostream&) const{
    for(auto ptrT : m_contenu ){
        ptrT->afficher(cout);
    }
    
}

template <class T>
const T & Conteneur<T>::choisirElement() const{
    NombreContraint<int> n(1,1,m_contenu.size());
    bool ok;
    do{
        try{
            afficher();
            cout <<endl <<"Votre choix";
            n.saisir(cin);
            ok=true;
        } catch (const char *e){
            cout << "Choix entre 1 et"<<m_contenu.size() <<endl;
            ok =false;
        }
    }while (!ok);
    return *m_contenu;
}

#endif