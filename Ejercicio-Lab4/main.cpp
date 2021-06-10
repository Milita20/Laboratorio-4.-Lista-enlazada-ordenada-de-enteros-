#include <iostream>
 
#include "Linkedlist.h" 
using namespace std;
 
int main()
{
    LinkedList<int> LinkedList_1;
    LinkedList<int> LinkedList_2;
    int ele;
 
    int dim;
    int pos;
    string file_with_list;
 
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 
    LinkedList_1.fill_random(dim);
 
    cout << "Lista A al inicio " << endl;
    LinkedList_1.print();
 
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    LinkedList_1.add_head(ele);
    LinkedList_1.print();
 
    cout << "Lista invertida: " << endl;
    LinkedList_1.invert();
    LinkedList_1.print();
 
    cout << "Lista ordenada: " << endl;
    LinkedList_1.sort();
    LinkedList_1.print();
 
    cout << "Agrega un elemento. Será insertado ordenadamente: " << endl;
    cin >> ele;
    LinkedList_1.add_sort(ele);
    LinkedList_1.print();
 
    cout << "Busca un elemento: " << endl;
    cin >> ele;
    LinkedList_1.search(ele);
 
    cout << "Elimina un elemento por dato: " << endl;
    cin >> ele;
    LinkedList_1.del_by_data(ele);
    LinkedList_1.print();
 
    cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    LinkedList_1.del_by_position(pos);
    LinkedList_1.print();
 
    cout << "Cargar una lista desde archivo - Ingresa el nombre: " << endl;
    // El archivo debe estar en el mismo directorio que este programa
    cin >> file_with_list;
    LinkedList_2.load_file(file_with_list);
    cout << "Lista B: " << endl;
    LinkedList_2.print();
 
    cout << "Guardar la lista en un archivo - Ingresa el nombre: " << endl;
    cin >> file_with_list;
    LinkedList_2.save_file(file_with_list);
 
    cout << "Interseccion entre las listas A y B: " << endl;
    LinkedList_1.intersection(LinkedList_2);
 
    cout << "Listas A y B concatenadas: " << endl;
    LinkedList_1.concat(LinkedList_2);
    LinkedList_1.print();
 
    LinkedList_1.del_all();
    LinkedList_1.print();
 
    return 0;
}