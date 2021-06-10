#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include <string>
#include <stdlib.h>
 
#include "node.h" 
using namespace std;
 
template <class T>
 
class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
 
        void add_head(T);
        void add_end(T);
        void add_sort(T);
        void concat(LinkedList);
        void del_all();
        void del_by_data(T);
        void del_by_position(int);
        void fill_by_user(int);
        void fill_random(int);
        void intersection(LinkedList);
        void invert();
        void load_file(string);
        void print();
        void save_file(string);
        void search(T);
        void sort();
 
    private:
        Node<T> *m_head;
        int m_num_nodes;
};
#endif 