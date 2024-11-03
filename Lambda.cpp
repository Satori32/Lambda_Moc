#include "Lambda.h"

template<class T>
Type ConstructType<T>(T& In) {
	Type T;
	T.Value = In;
	//T.T = T;
	return T;
}

template<class T>
T& Get(Type& In) {
	return In.Value;
}

template<class R>
Lambda ConstructLambda<T, R>(R(*F)(Vector<Type>&)) {
	Lambda L :
	L.F = F;
	//L.R = R;
	//L.T = T;

	return L;
}
template<class T, class R> R Call(Lambda& In, Vector<Type>& B) {//Vector is Free in function.

	//In.R Call(Lambda& In, In.T& B){
	R X = In.F(B);
	Free(B);
	return X;
}