#include<bits/stdc++.h>
using namespace std;

/*LINKED LIST */

class Node {
public:
	int data;
	Node* next;


//constructor
public:
	Node(int data1, Node* next1) {
		data = data1;
		next = next1;
	}
public:
	Node(int data1) {
		data = data1;
		next = nullptr;
	}
};


/*CONVERT ARRAY TO LINKED LIST*/

Node* convertArr2LL(vector<int>& arr) {
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for (int i = 1; i < arr.size(); i++) {
		Node* temp = new Node(arr[i]);
		mover -> next = temp;
		mover = temp;
	}
	return head;
}

/* 2. Length of the linked list*/
int lengthLl(Node* head) {
	int cnt = 0;
	Node* temp = head;
	while (temp) {
		temp = temp -> next;
		cnt++;
	}
	return cnt;
}


/* 3. Search the element in the Linked list*/
int searchInLL(Node* head, int val) {
	Node* temp = head;
	while (temp) {
		if (temp->data == val) return 1;
		temp = temp -> next;
	}
	return 0;
}

/* 4. Traversal Print the LL*/
void print(Node* head) {
	Node* temp = head;
	while (temp) {
		cout << temp -> data << "->";
		temp = temp -> next;

	}
}

/* 5. Delete the head of the LL*/
Node* DeleteTheHead(Node* head) {
	if (head == NULL) return head;
	Node* temp = head;
	// move the head to next node
	head = head -> next;
	// free up memeory space
	free(temp);
	return head;
}

/* 6. Delete the tail of the LL*/
Node* DeleteTheTail(Node* head) {
	if (head == NULL || head -> next == NULL) return NULL;
	Node* temp = head;
	while (temp -> next -> next != NULL) {
		temp = temp -> next;
	}
	free(temp -> next);
	temp -> next = NULL;
	return head;
}

/* 7. Delete the Kth position of the LL*/
Node* DeleteTheKthPos(Node* head, int k) {
	if (head == NULL) return head;
	if (k == 1) {
		Node* temp = head;
		head = head -> next;
		free(temp);
		return head;
	}
	int cnt = 0;
	Node* prev = NULL;
	Node* temp = head;
	while (temp) {
		cnt++;
		if (cnt == k) {
			prev -> next = prev -> next -> next;
			free(temp);
			break;
		}
		prev = temp;
		temp = temp -> next;
	}
	return head;
}

/* 8. Delete the Kth value of the LL*/
Node* DeleteTheKthVal(Node* head, int el) {
	if (head == NULL) return head;
	if (head -> data == el) {
		Node* temp = head;
		head = head -> next;
		free(temp);
		return head;
	}
	Node* prev = NULL;
	Node* temp = head;
	while (temp) {
		if (temp -> data == el) {
			prev -> next = prev -> next -> next;
			free(temp);
			break;
		}
		prev = temp;
		temp = temp -> next;
	}
	return head;
}

/*----------------------------------------INSERTION IN LL----------------------------------------*/

// 1. Insert at the head

Node* insetInLL(Node* head, int val) {
	// Node* temp = new Node(val);
	// temp -> next = head;
	// head = temp;
	// return head;
	Node* temp = new Node(val, head);
	return temp;
}

// 2. Insert at the tail

Node* insertInLLlast(Node* head, int val) {
	if (head == NULL) {
		return new Node(val);
	}
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp -> next;
	}
	Node* newNode = new Node(val);
	temp -> next = newNode;
	return head;
}

/*--------------------------------------------------------------------------------------------- */

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int> arr = {2, 5, 6, 7, 8};
	// Node* y = new Node(arr[0]);
	// cout << y -> data;

	// concertarr2ll
	Node* head = convertArr2LL(arr);
	// cout << head -> data;

	// 1. Traversal
	// Node* temp = head;
	// while (temp) {
	// 	cout << temp -> data << "->";
	// 	temp = temp -> next;
	// }

	// cout << lengthLl(head) << endl;

	// cout << searchInLL(head, 6);
	// head = DeleteTheHead(head);
	// print(head);
	// head = DeleteTheTail(head);
	// print(head);
	// head = DeleteTheKthPos(head, 1);
	// print(head);
	// head = DeleteTheKthVal(head, 8);
	// print(head);

	head = insertInLLlast(head, 100);
	print(head);

	return 0;
}
