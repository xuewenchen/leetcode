#include<stdio.h>
#include<stdlib.h>
#include<math.h>


typedef struct node {
	int num;
	node * next;
} node;


node * newNode(int num, node * next) {
	 node* myNode = (node*)malloc(sizeof(node));
	 if (myNode == NULL) {
		return NULL;
	 }
	 myNode->num = num;
	 myNode->next = next;
	 return myNode;
}

void setNext(node * cur, node * next) {
	if (cur != NULL){
		cur->next = next;
	}
	return;
}

int getList1Total() {
	node * node1 = newNode(3, NULL);
	node * node2 = newNode(2, NULL);
	node * node3 = newNode(1, NULL);

	setNext(node1, node2);
	setNext(node2, node3);

	// array
	int locNum = 0;
	int * nums = (int *)malloc(0);

	node * begin = node1;
	while(begin != NULL) {
		locNum++;
		nums = (int *)realloc(nums, sizeof(int)*locNum);
		printf("node num is %d\n", begin->num);
		nums[locNum - 1] = begin->num;
		begin = begin->next;
	}
	
	int total = 0;
	for (int i = 0; i < locNum; i++) {
		total += nums[i] * pow(10, i);
		printf("node val is %d\n", nums[i]);
	}
	printf("total number is %d\n", total);
	return total;
}

int getList2Total() {
	node * node1 = newNode(7, NULL);
	node * node2 = newNode(8, NULL);
	node * node3 = newNode(9, NULL);

	setNext(node1, node2);
	setNext(node2, node3);

	// array
	int locNum = 0;
	int * nums = (int *)malloc(0);

	node * begin = node1;
	while(begin != NULL) {
		locNum++;
		nums = (int *)realloc(nums, sizeof(int)*locNum);
		printf("node num is %d\n", begin->num);
		nums[locNum - 1] = begin->num;
		begin = begin->next;
	}
	
	int total = 0;
	for (int i = 0; i < locNum; i++) {
		total += nums[i] * pow(10, i);
		printf("node val is %d\n", nums[i]);
	}
	printf("total number is %d\n", total);
	return total;
}

int main() {
	int total1 = getList1Total();
	int total2 = getList2Total();
	int total = total1 + total2;
	printf("total1 is %d, total2 = %d, total = %d \n", total1, total2, total);
	return 0;
}
