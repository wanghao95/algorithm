#include <iostream>

#include "src/BinaryTree.h"
#include "src/SequenceList.h"
#include "src/SingLinkedList.h"

using namespace std;

int main() {
//    cout << "Hello world!" << endl;
//    BinaryTree tree;
//    cout << "按前序遍历方式创建树" << endl;
//
//    //"ABDG##H###CE#I##F##";
//    tree.Create();
//    cout << "树的高度为：" << tree.getHeight() << endl;
//    cout << "树的节点为：" << tree.getSize() << endl;
//    tree.preOrder();            //前序遍历
//    tree.inOrder();                //中序遍历
//    tree.postOrder();            //后序遍历
//    tree.distroy();                //摧毁树
//    system("pause");

    //顺序表
//    SequenceList sequenceList;
//    auto l = new SqList();
//    sequenceList.init(l);
//    sequenceList.insert(l,1,'e');
//    sequenceList.insert(l,2,'d');
//    sequenceList.insert(l,3,'c');
//    sequenceList.insert(l,4,'b');
//    sequenceList.insert(l,5,'f');
//    sequenceList.insert(l,6,'a');
//
//    for (int i = 0; i < l->length; ++i) {
//        cout << l->data[i] << "."<< endl;
//    }
//    sequenceList.patition(l,0,5);
//    for (int i = 0; i < l->length; ++i) {
//        cout << l->data[i] << ","<< endl;
//    }


    //单链表
    SingLinkedList singLinkedList;
    LinkedList linkedList1 = singLinkedList.init();
    singLinkedList.insert_tail(linkedList1, 1);
    singLinkedList.insert_tail(linkedList1, 3);
    singLinkedList.insert_tail(linkedList1, 5);
    singLinkedList.print_list(linkedList1);

    LinkedList linkedList2 = singLinkedList.init();
    singLinkedList.insert_tail(linkedList2, 2);
    singLinkedList.insert_tail(linkedList2, 3);
    singLinkedList.insert_tail(linkedList2, 6);
    singLinkedList.insert_tail(linkedList2, 7);
    singLinkedList.print_list(linkedList2);

    LinkedList l3 = singLinkedList.merger_list(linkedList1, linkedList2);
    singLinkedList.print_list(l3);

}