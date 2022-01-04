#include<iostream>
#include<conio.h>
#include"graph.h"
#include<queue>
//-- Ngon ngu C++
using namespace std;
int continuee = 1;
struct node
{
	int data; // node mang gia tri kieu int.
	node *pleft,*pright; //--- 2 con tro tro den 2 cay con (trai - phai).
};
typedef node* tree;
//-----------------------------------------------
//-- Khoi tao cây
void init(tree &t)
{
	t=NULL;
}
//----------------------------------------------
//-- Tao nut moi
node* get_node(int data)
{
	node *p=new node();
	p->data=data;
	p->pleft=NULL;
	p->pright=NULL;
	return p;
}
//----------------------------------------------
//-- Chen 1 nut vao cay nhi phan
void insert(tree &t,node *p)
{
	//-- neu cay chua co nut thi chen vao goc
	if(t==NULL)
	{
		t=p;
	}
	//-- Neu co nut thì chen vao cay con
	else
	{
		if(p->data < t->data)
		{
			return insert(t->pleft,p);			
		}
		else 
		if(p->data > t->data)
		{
			return insert(t->pright,p);
		}
	}
}
//-----------------------------------------
void khoitao(tree &t)
{
	//-- Goi ham khoi tao
	init(t);
	int data;
	cout << "Nhap vao day so, nhap 0 de dung: \n";
	while(cin>>data)
	{
		if(data!=0)
		{
			insert(t,get_node(data));
		}
		else
		{
			break;
		}
	}
}
//-------------------------------------------
//-------- Phan Duyet Cay

//-- 1. Ham duyet cay nhi phan theo chieu rong
void DuyetCayTheoChieuRong(tree &t) //-- Duyet tu tren xuong, sau do tu trai qua.
{
	// Neu nhu cay co so phan tu (>=1)
	if(t!=NULL)
	{
		//-- Tao queue de luu vet (a)
		queue<tree> a;
		//-- Sau do them vao queue goc
		a.push(t);
		//-- Trong khi queue khac rong
		while(!a.empty())
		{
			//-- luu phan tu dau tien trong queue vao p
			node *p=a.front();
			//-- Xuat du lieu
			cout<<p->data<<" ";
			//-- xoa phan tu dau tien da duoc xuat
			a.pop();
			if(p->pleft!=NULL)
			{
				//day cay con trai vào queue
				a.push(p->pleft);
			}
			if(p->pright!=NULL)
			{
				//day cay con phai vao queue
				a.push(p->pright);
			}
		}
	}
}

//-- 2. Ham Duyet cay nhi phan theo chieu sau
//----- Duyet LNR ---------------------------------
void DuyetLNR(tree &t)
{
	if(t == NULL)
		return;
	DuyetLNR(t->pleft);
	cout << t->data << " ";
	DuyetLNR(t->pright);
}
//-----------------------------------------------
//----- Duyet LRN
void DuyetLRN(tree &t)
{
	if(t == NULL)
		return;
	DuyetLNR(t->pleft);
	DuyetLNR(t->pright);
	cout << t->data << " ";	
}
//-----------------------------------------------
//----- Duyet NLR
void DuyetNLR(tree &t)
{
	if(t == NULL)
		return;
	cout << t->data << " ";
	DuyetLNR(t->pleft);
	DuyetLNR(t->pright);
}

void DuyetCay(tree t)
{
	//----------------- Phan Sinh Duyet Cay ---------------------------------
	//-- Dua ra OPTIONS -----------
	cout << "\n\n\nLua chon cua ban la gi?: ";
	cin >> tmp;
	//-- 1. Sinh va Duyet Cay Theo Chieu rong (bfs)
	if(tmp == 1)
	{
		cout << "1. Duyet cay theo chieu rong: ";
		DuyetCayTheoChieuRong(t);
		DoHoaMoPhongDuyetCayChieuRong();
	}
	//-- 2. Sinh va Duyet cay theo Chieu sau (dfs)
	if(tmp == 2)
	{
		cout << "2. Co 3 cach duyet theo chieu sau, lan luot la:";
		cout << "\n  2.1. Duyet theo LNR: ";
		DuyetLNR(t);
		cout << "\n  2.2. Duyet theo LRN: ";
		DuyetLRN(t);
		cout << "\n  2.3. Duyet theo NLR: ";
		DuyetNLR(t);
		DoHoaMoPhongDuyetCayChieuSau();
	}
}

//--------------------------------------------------------
int main()
{
	initwindow(900,700);
	//------------------------------
	tree t;
	khoitao(t);
	DoHoaMoPhongVeCay();
	//--- Phan menu tinh ----
	textcolor(2);
	cout << "Cac chuc nang chinh cua chuong trinh:"<<endl;
	textcolor(6);
	cout << "1. Duyet cay theo chieu rong"<<endl;
	cout << "2. Duyet cay theo chieu sau"<<endl;
	//----------------------------------------------------------
	DuyetCay(t);
	while(continuee == 1)
	{
		cout << "\n\n\n\nchon 1 de tiep tuc, 0 de dung lai: ";
		cin >> continuee;
		if(continuee == 1)
		{
			DuyetCay(t);
		}
		else
		{
			cout << "\nKet thuc chuong trinh>>>";
			cleardevice();
			//xóa màn hình
		}
	}
	getch();
	closegraph();
	return 0;
}
