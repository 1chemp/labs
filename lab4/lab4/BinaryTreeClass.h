#pragma once
#include <iostream>
#include <fstream>

using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};

class BinaryTreeClass
{
private:
	Node* node;

	// ���������� ����� ������� ��������,
	// ����������� ������ ��� ������ insert(int key)
	// ����� ��������� �������� ���� � ��������������� ����.
	void insertInTree(int key, Node* node);

public:
	// ������������������� ����������
	BinaryTreeClass();

	// ����� ��� ����
	// ���������� ���������� �������, ��� ��� ������ � ��������
	// ������������ ������ ��� ������ 
	const Node* getNode();

	// ����� ���������� ������
	void print(const Node* node, int level);

	// ����� �������� ������
	void delete_tree(Node* tree);

	// ������� �������� � ���������� ����
	void insert(int key);

	// ����������� ����� �����
	// � ������� ��� �����, ������� �������� ������
	friend int searchRec(int key, const Node* node);

	// ������������� ����� �����
	int searchIter(int key);

	// ���������� ��������� ������ �������� 
	// ����� print(const Node* node, int level)

	// friend ofstream& operator<<(ofstream fout, const BinaryTree& tree);

	~BinaryTreeClass();
};

