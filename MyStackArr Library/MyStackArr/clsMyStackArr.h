#pragma once
#include <iostream>
#include "clsMyQueueArr.h"

template <class T>
class clsMyStackArr : public clsMyQueueArr <T>
{

public:

	void Push(T Item) {
		//this->_MyArr.InsertAtBeginning(Item); 
		clsMyQueueArr <T>::_MyArr.InsertAtBeginning(Item);
	}

	T Top() {
		//return this->Front();
		return clsMyQueueArr<T>::Front();
	}

	T Bottom() {
		//return this->Back();
		return clsMyQueueArr<T>::Back();
	}
};