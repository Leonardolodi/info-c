typedef struct
{
    char nome[40];
    // int primo; 
    // int secondo;
    // int terzo;
    int podio[3];
}Record;

typedef struct
{
    int pilota;
    int punteggio;
}Pilota;

typedef struct nodo
{
    Pilota dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void nuovalista(Lista* pl);
void scorrilista(Lista *pl, Record r, int flag, int i);
void instesta(Lista* pl, int p, int i);
void aggiorna(Lista* pl, Record r);
void stampa(Lista l);