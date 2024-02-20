//
// Created by Administrator on 2024/1/31.
//
#include <cstdlib>
#include <cstdio>
#include "SingLinkedList.h"


LinkedList SingLinkedList::init() {
    LinkedList head = (LinkedList) malloc(sizeof(Node));
    head->next = NULL;
    return head;
}


LinkedList SingLinkedList::create_node(int data) {
    LinkedList node = (LinkedList) malloc(sizeof(Node));
    node->next = NULL;
    node->val = data;
    return node;
}

void SingLinkedList::print_list(LinkedList l) {
    while (l != NULL) {
        cout << "值：" << l->val << endl;
//        printf("%d ", l->val);
        l = l->next;
    }
    cout << "结束"<< endl;
//    printf("%s ", "结束");
}

LinkedList SingLinkedList::creat_tail() {
    LinkedList head = (LinkedList) malloc(sizeof(Node));
    head->next = NULL;
    Node *tail = head; //记录尾节点
    int val;
    while (scanf("%d", &val) != EOF) {
        LinkedList new_node = (LinkedList) malloc(sizeof(Node));
        new_node->next = NULL;
        new_node->val = val;

        tail->next = new_node; //指向新节点
        tail = new_node; //更新尾节点
    }
    return head;
}

LinkedList SingLinkedList::creat_pre() {
    LinkedList tail = (LinkedList) malloc(sizeof(Node));
    tail->next = NULL;
    int val;
    while (scanf("%d", &val) != EOF) {
        LinkedList new_node = (LinkedList) malloc(sizeof(Node));
        new_node->val = val;

        new_node->next = tail->next; //头结点的下个节点作为新节点的下个节点
        tail->next = new_node; //头结点的下个节点为新节点
    }
    return tail;
}

int SingLinkedList::insert_pre(LinkedList l, int data) {
    if (l == nullptr) {
        return 0;
    }
    LinkedList node = create_node(data);
    node->next = l->next;
    l->next = node;
    return 1;
}

int SingLinkedList::insert_tail(LinkedList l, int data) {
    LinkedList new_node = create_node(data);
    if (l == NULL) {
        l = new_node;
        return 1;
    }
    LinkedList temp = l;
    //找到尾节点
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    return 1;
}

LinkedList SingLinkedList::merger_list(LinkedList l1, LinkedList l2) {
    LinkedList head; //头节点
    LinkedList tail = head; //尾节点
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            tail->next = l1; //下一个节点
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL) {
        tail->next = l1;
    } else if (l2 != NULL) {
        tail->next = l2;
    }
    return head->next;
}