#pragma once
#define NULL nullptr

namespace list_api{
	
	class Node {
	private:
		int data;
		Node* next;
	public:
		int& peek(void);
		Node* getNext(void);
	};

	class LinkedList {
	private:
		Node* root = NULL;
		int nodeCount = 0;
	public:
		bool IsEmpty();
		int Count(void);
		void Print(void);
		void add(int newData);
		void Sort(void);
		void Clear(void);
		void DeleteNode();
	};
}

namespace memory_management_api
{
	using namespace list_api;

	class MemManagement {
		static Node* assignMemory(void);

		static Node* assignMemory(int newData);

	};
}
