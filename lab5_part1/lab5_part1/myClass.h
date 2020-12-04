#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class Matrix
{
private:
	int m_row;	// ����� �����
	int m_col;  // ����� ��������
	int** m_data; // ������������ ��������� ������ ��� �������

	void clear();	// �������� �������

public:
	// ����������������� �����������
	Matrix(int row, int col);

	// ����������� �� ���������
	Matrix();

	int getRows() const {
		return m_row;
	}

	int getColumns() const {
		return m_col;
	}

	// ����� ��������� ��������
	int getItem(int row, int col);

	// ���������� ���������� �������
	void print();

	// ��������� �������� �������
	void setSize(int row, int col);

	// ��������� ������ �� �������
	int* getLink(int row, int col);

	// ���������������� �������
	void transpose();

	~Matrix();

	// ���������� ��������� ������ ��� �������
	friend ostream& operator<< (ostream& out, const Matrix& m);

	// ���������� ��������� ����� ��� �������
	friend istream& operator>> (istream& in, Matrix& m);

	// ���������� ���������� ��������/���������/���������
	// ��� ���������� �����. �������� � ���������
	Matrix& operator+ (const Matrix& m1);
	Matrix& operator- (const Matrix& m1);
	Matrix& operator* (const Matrix& m1);
};

ostream& operator<<(ostream& out, const Matrix& mrx);
istream& operator>>(istream& in, Matrix& m);
