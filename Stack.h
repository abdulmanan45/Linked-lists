
#pragma once
using namespace std;
template<typename T>
class Stack {
private:
	struct Node {
		T data;
		Node* next;
		Node(T dat, Node* n)
		{
			data = dat; next = n;
		}
	};
	Node* head;

public:
	Stack() {
		head = nullptr;
	}
	bool empty() {
		return head == nullptr;
	}
	const T& top() {
		return head->data;
	}
	void push(const T dat) {
		head = new Node(dat, head);
	}
	void pop() {
		if (empty())
			return;
		Node* temp = head;
		head = temp->next;
		delete temp;
	}

};
