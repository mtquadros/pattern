// pattern.h: arquivo de inclusão para arquivos de inclusão padrão do sistema,
// ou arquivos de inclusão específicos a um projeto.

#pragma once

#include <iostream>

class A {
private:
	int _a;

protected:
	static A* singleton;
	A() { _a = 0; printA(); }
	A(int n) { _a = n; printA(); }
	static A* _Init() {
		//retorna a instancia desejada
		std::cout << "_Init of A \n";
		return new A();
	}
public:
	void printA() { std::cout << "A == " << _a << std::endl; }

	//deve ser sobrecarregada
	~A() { std::cout << "Destroi A" << std::endl; }

	static A* Init() {
		if (singleton == nullptr)
			singleton = _Init();

		return singleton;
	}

};
A* A::singleton = nullptr;

class B : public A {
private:
	int _b;

	B() { _b = 0; printB(); }
	B(int n) { _b = n; printB(); }

public:
	void printB() { std::cout << "B == " << _b << std::endl; }
	~B() { std::cout << "Destroy B" << std::endl; }

protected:
	static B* _Init() {
		std::cout << "_Init() of B\n";
		return new B();
	}
};

// TODO: Referencie os cabeçalhos adicionais de que seu programa precisa aqui.
