//
// Created by Administrator on 2024/1/28.
//

#ifndef LEARNING_SEQUENCELIST_H
#define LEARNING_SEQUENCELIST_H

#define MAX_SIZE 100

typedef struct {
    int *data;
    int length;
} SqList;

class SequenceList {
public:
    int init(SqList *l); //初始化顺序表
    int insert(SqList *l, int pos, int elem); //插入元素
    int search_elem(SqList *l, int elem); //查询元素
    int delete_elem(SqList *l, int pos); //删除元素
    int patition(SqList *l, int low, int high); //根据low位置数据为基数base,将顺序表分成两部分,左边小于base，右边大于base
    int reverse(SqList *l); //元素逆置
    int delete_range(SqList *l, int i, int j);
};


#endif //LEARNING_SEQUENCELIST_H
