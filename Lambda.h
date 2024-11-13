#pragma once
#include <stdio.h>

#include "Vector.h"

struct Lambda {
	//type R = NULL;
	//type T = NULL;
	typedef int R;
	//typedef int T;

	R(*F)(Vector<Type>&) = NULL;
};

struct Type {
	//type Type =NULL:
	typedef int Type;
	//type T = Type;
	Type Value;
};

template<class T> Type ConstructType<T>(T& In);
template<class T> T& Get(Type& In);
template<class R> Lambda ConstructLambda<T, R>(R(*F)(Vector<Type>&));
template<class T, class R> R Call(Lambda& In, Vector<Type>& B); //Vector is Free in function.
