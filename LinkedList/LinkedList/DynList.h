#pragma once

namespace list_api{
	
	template <typename T>
	class Content {
	private:
		T data;
	public:
		Content();
		~Content();
		void set(T newData);
		T get();
	};

	template <typename T>
	class Node {
	private:
		Content<T> content;
		Node* next = NULL;
	public:
		void Peek(void);
		Node* Next(void);
	};

	template <typename T>
	class LinkedList {
	private:
		Node* root = NULL;
		int nodeCount = 0;
	public:
		bool IsEmpty();
		int Count(void);
		void Print(void);
		void add(T newData);
		void Sort(void);
		void Clear(void);
		void DeleteNode(Node* nodeToDelete);
	};
}

namespace memory_management_api
{
	using namespace list_api;

	template <typename T>
	class MemManagement {
		static Node* assignMemory(void);

		static Node* assignMemory(T newData);

	};
}
