#include "Graf.h"

void createList_1301213183(Graph &G){
    first(G) = NULL;
}

adrNode newNode_1301213183(char x){
    adrNode p = new Node;
    p-> info = x;
    p-> child = NULL;
    p-> next = NULL;
    return p;
}

void addNode_1301213183(Graph &G, adrNode p){
    if(first(G) == NULL){
        first(G) = p;
    }else{
        adrNode bantu;
        bantu = first(G);
        while (bantu -> next != NULL){
            bantu = bantu -> next;
        }
        bantu->next = p;
    }
}

adrNode findNode_1301213183(Graph G, char x){
    if(first(G) == NULL){
        return NULL;
    }else{
        adrNode bantu;
        bantu = first(G);
        while (bantu != NULL){
            if(bantu -> info == x){
                return bantu;
            }
            bantu = bantu -> next;
        }
        return NULL;
    }
}
void addEdGe_1301213183(Graph &G, char x, char y){
    if(findNode_1301213183(G,x) == NULL){
        cout << "Data dari Parents Tidak Ada!!!"<<endl;
    }else{
        if(findNode_1301213183(G,x) -> child == NULL){
            findNode_1301213183(G,x) -> child = newNode_1301213183(y);
        }else{
            adrNode bantu;
            bantu = findNode_1301213183(G,x) -> child;
            while (bantu -> next != NULL){
                bantu = bantu -> next;
            }
            bantu -> next = newNode_1301213183(y);
        }
    }
}

bool isConnected_1301213183(Graph G, char x, char y){
    if(findNode_1301213183(G,x) == NULL){
        cout << "Data dari Parents Tidak Ditemukan!!!"<<endl;
        return false;
    }else{
        adrNode cekAnak;
        cekAnak = findNode_1301213183(G,x) -> child;

        while(cekAnak != NULL){
            if(cekAnak -> info == y){
                return true;
            }
            cekAnak = cekAnak -> next;
        }
        return false;
    }
}

void printGraph_1301213183(Graph G){
    if(first(G) == NULL){
        cout << "Tidak Ada Data Cuy!!!"<< endl;
    }else{
        adrNode bantu;
        bantu = first(G);
        while(bantu != NULL){
            cout << "Node " << bantu->info << ":";
            adrNode bantuAnak = bantu ->child;
            while(bantuAnak != NULL){
                cout << " - "<<bantuAnak->info;
                bantuAnak = bantuAnak -> next;
            }
            cout<<endl;
            bantu = bantu -> next;
        }
    }
}
