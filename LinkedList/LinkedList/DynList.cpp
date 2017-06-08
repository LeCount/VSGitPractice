#include "DynList.h"

//Constructor
template<typename T>
inline list_api::Content<T>::Content()
{
	data = NULL;
}

//Destructor
template<typename T>
inline list_api::Content<T>::~Content()
{
	delete this;
}

template<typename T>
void list_api::Content<T>::set(T newData)
{
	data = newData;
}

template<typename T>
T list_api::Content<T>::get()
{
	return data;
}