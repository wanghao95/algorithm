//
// Created by Administrator on 2024/1/28.
//

#include <cstdlib>
#include "SequenceList.h"

int SequenceList::init(SqList *l) {
    l->data = (int *) malloc(MAX_SIZE * sizeof(int));
    if (!l->data) {
        return 0;
    }
    l->length = 0;
    return 1;
}

int SequenceList::insert(SqList *l, int pos, int elem) {
    if (pos < 1 || pos > l->length + 1) {
        return 0;
    }
    if (l->length >= MAX_SIZE) {
        return 0;
    }
    //pos后元素移位
    for (int i = l->length - 1; i >= pos - 1; i--) {
        l->data[i + 1] = l->data[i];
    }
    l->data[pos - 1] = elem;
    l->length++;
    return 1;
}

int SequenceList::delete_elem(SqList *l, int pos) {
    if (pos < 1 || pos > l->length) {
        return 0;
    }
    //pos后的数据移位
    for (int i = pos; i < l->length; i++) {
        l->data[i - 1] = l->data[i];
    }
    l->length--;
    return 1;
}

int SequenceList::search_elem(SqList *l, int elem) {
    for (int i = 0; i < l->length; i++) {
        if (l->data[i] == elem) {
            return i + 1;
        }
    }
    return 0;
}

int SequenceList::patition(SqList *l, int low, int high) {
    int baseVal = l->data[low]; //第一个数为基数
    while (low < high) {
        while (low < high && l->data[high] >= baseVal) {
            high--;
        }
        l->data[low] = l->data[high];
        while (low < high && l->data[low] <= baseVal) {
            low++;
        }
        l->data[high] = l->data[low];
    }
    l->data[low] = baseVal;
    return low;
}

int SequenceList::reverse(SqList *l) {
    int temp;
    for (int i = 0; i < l->length / 2; i++) {
        temp = l->data[i];
        l->data[i] = l->data[l->length - 1 - i];
        l->data[l->length - 1 - i] = temp;
    }
}

int SequenceList::delete_range(SqList *l, int i, int j) {
    if (i < 1 || j > l->length || i > j) {
        return 0;
    }
    for (int k = j; k <= l->length; k++) {
        //j之后的元素向前移动j-i+1位
        l->data[k - j + i - 1] = l->data[k];
    }
    l->length -= j - i + 1;
    return 1;
}