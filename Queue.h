#pragma once
#pragma once
using namespace std;

template <class T>
class Queue {
private:
	struct Node {
		T data;  Node* next;
		Node(T x)
		{
			data = x;
			next = nullptr;
		}

	};
	Node* head, * tail;

public:
	Queue()
	{
		head = nullptr;
	}
	int empty()
	{
		return head == nullptr;
	}
	void enqueue(T x) {
		Node* temp = tail;
		tail = new Node(x);
		if (empty())
			head = tail;
		else
			temp->next = tail;
	}
	T dequeue() {
		if (empty())
			return 0;

		T temp = head->data;
		Node* temp_node = head->next;
		delete head;
		head = temp_node;
		return temp;
	}
};
