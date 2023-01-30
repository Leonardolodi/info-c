typedef struct 
{
    int matricola;
    int punteggio;
    char tipoprova;
}Record;

typedef struct 
{
    int matricola;
    int vototeoria;
    int votopratica;
}Utente;

typedef struct nodo
{
    Utente dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void nuovalista(Lista *pl);
void instesta(Lista *pl, int m, int p);
void aggiorna(Lista *pl, Record r);
void stampalista(Lista l);