#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

int main(void){
	int n = 14;
	int k = 2;
	struct Node *p;
	p = (struct Node *)malloc(sizeof(struct Node));
	struct Node *temp = p;

	for(int i = 0; i < n; i++){
		if(temp == NULL){
			temp -> data = i+1;
		}else{
			temp ->next = (struct Node *)malloc(sizeof(struct Node));
			temp = temp->next;
			temp -> data = i+1;
		}
	}
	temp -> next = p;
	int count = 0;
	int count2 = 0;
	while(count2!= n-1){
		count++;
		if(count == k-1){
			p -> next = (p -> next) -> next;
			count2++;
			count = 0;
			continue;
		}
		p = p-> next;
	}
	cout << p-> data;

}