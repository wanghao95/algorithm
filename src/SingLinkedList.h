//
// Created by Administrator on 2024/1/31.
//

#ifndef LEARNING_SINGLINKEDLIST_H
#define LEARNING_SINGLINKEDLIST_H
#include <iostream>
using namespace std;

typedef struct Node {
    int val;
    Node *next;
} Node, *LinkedList;

class SingLinkedList {
public:
    LinkedList init();
    LinkedList create_node(int data); //创建节点
    void print_list(LinkedList l); //打印链表

    LinkedList creat_tail(); //尾插法建单链表
    LinkedList creat_pre(); //头插法建单链表
    int insert_pre(LinkedList l, int data); //头插法插入
    int insert_tail(LinkedList l, int data); //尾插法插入
    LinkedList merger_list(LinkedList l1, LinkedList l2); //合并递增链表
};


#endif //LEARNING_SINGLINKEDLIST_H
