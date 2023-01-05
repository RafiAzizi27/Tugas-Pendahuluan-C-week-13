#include <iostream>
#include "graf.h"

using namespace std;

int main()
{
    cout<<" ============================= TP WEEK 13 ========================"<<endl;
    cout<<" ========================== Rafi Azizi Raya ======================"<<endl;
    cout<<" ============================ 1301213183 ========================="<<endl;
    Graph G;
    createList_1301213183(G);

    //menambahkan node A, B, C, dan D
    addNode_1301213183(G, newNode_1301213183('A'));
    addNode_1301213183(G, newNode_1301213183('B'));
    addNode_1301213183(G, newNode_1301213183('C'));
    addNode_1301213183(G, newNode_1301213183('D'));

    //tambahkan edge pada graph seperti Gambar 1

    //edge A
    addEdGe_1301213183(G,'A','C');
    addEdGe_1301213183(G,'A','D');
    addEdGe_1301213183(G,'A','B');

    //edge B
    addEdGe_1301213183(G,'B','A');
    addEdGe_1301213183(G,'B','D');

    //edge C
    addEdGe_1301213183(G,'C','A');

    //edge D
    addEdGe_1301213183(G,'D','B');
    addEdGe_1301213183(G,'D','A');

    //tampilkan graph seperti Gambar 3
    printGraph_1301213183(G);
    cout<<" ================================================================="<<endl;
    return 0;
}
