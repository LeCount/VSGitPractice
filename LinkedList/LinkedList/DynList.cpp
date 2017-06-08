#include "DynList.h"
using namespace list_api;

int list_api::Node::peek(void)
{
	return data;
}

Node* list_api::Node::getNext(void)
{
	return next;
}

