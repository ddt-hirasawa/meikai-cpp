/*
���K1-2 �N���XDate �ł��肦�Ȃ����ɂ����������悤�ɂ��Ă�������

�쐬�� 2017�N5��15��

�쐬�� ���V�h��
*/

#include<iostream>
#include"class.h"

using namespace std;

ostream& operator << (std::ostream& stream,const Date& tmp) {

	return stream << "����" << tmp.open_year() << "�N"
			<< tmp.open_month() << "��"
			<< tmp.open_day() << "��\n";
}


std::istream& operator >> (std::istream& stream,const Date& tmp);
