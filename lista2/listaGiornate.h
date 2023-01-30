typedef struct
{
    int giorno;
    int mese;
    float orelavorate;
    char descrizione[30];
}Record;

typedef struct 
{
    int giorno;
    int mese;
    float oretotali;
}Giornata;


typedef struct nodo
{
    Giornata dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void nuovalista(Lista *pl);
void instesta(Lista *pl, int g, int m, float o);
void aggiorna (Lista *pl, Record r);
void scorrilista(Lista *pl, Record r, int flag);
void stampalista(Lista l);