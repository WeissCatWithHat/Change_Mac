#pragma once
#include <stdio.h>
#include <Windows.h>
#include <Iphlpapi.h>
#include <windows.h>
#include <string>
#include <Cstring>
#include<iostream>
#include <atlstr.h>  
#include <Assert.h>
#include <stdlib.h>
#include <time.h>
#include <Tchar.h>    





#pragma comment(lib, "iphlpapi.lib")

namespace ChangeMac {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button1->Location = System::Drawing::Point(341, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"獲取";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 25);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 25);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"現在IP位置";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"現在MAC位置";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button2->Location = System::Drawing::Point(341, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 56);
			this->button2->TabIndex = 5;
			this->button2->Text = L"更改";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"MAC更改";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(117, 75);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(218, 25);
			this->textBox4->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(242, 106);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 40);
			this->button3->TabIndex = 10;
			this->button3->Text = L"隨機產生";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(161, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"更改後請重啟網卡，不會就重開機";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(143, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 40);
			this->button4->TabIndex = 12;
			this->button4->Text = L"還原";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(83, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(54, 25);
			this->textBox3->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 15);
			this->label5->TabIndex = 14;
			this->label5->Text = L"網卡位置";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 178);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	char* GetMac() {
		PIP_ADAPTER_INFO AdapterInfo;
		DWORD dwBufLen = sizeof(AdapterInfo);
		char *mac_addr = (char*)malloc(17);

		AdapterInfo = (IP_ADAPTER_INFO *)malloc(sizeof(IP_ADAPTER_INFO));
		if (AdapterInfo == NULL) {
			textBox1->Text = "Error allocating memory needed to call GetAdaptersinfo\n";
		}

		// Make an initial call to GetAdaptersInfo to get the necessary size into the dwBufLen     variable
		if (GetAdaptersInfo(AdapterInfo, &dwBufLen) == ERROR_BUFFER_OVERFLOW) {

			AdapterInfo = (IP_ADAPTER_INFO *)malloc(dwBufLen);
			if (AdapterInfo == NULL) {
				textBox1->Text = "Error allocating memory needed to call GetAdaptersinfo\n";
			}
		}

		if (GetAdaptersInfo(AdapterInfo, &dwBufLen) == NO_ERROR) {
			PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;// Contains pointer to current adapter info
			do {
				sprintf(mac_addr, "%02X:%02X:%02X:%02X:%02X:%02X",
				pAdapterInfo->Address[0], pAdapterInfo->Address[1],
				pAdapterInfo->Address[2], pAdapterInfo->Address[3],
				pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
				textBox1->Text =  gcnew String(mac_addr);
				
				textBox2->Text = gcnew String(pAdapterInfo->IpAddressList.IpAddress.String);
				return mac_addr;
				//printf("\n");
				pAdapterInfo = pAdapterInfo->Next;
			} while (pAdapterInfo);
		}
		free(AdapterInfo);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		GetMac();
	}

	
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int i,j,G;
		unsigned seed;
		String^ MacNum; 
		seed = (unsigned)time(NULL); 
		srand(seed); 
		for (i = 0; i < 6; ++i) {
			j = rand() % 14 + 1;
			G = rand() % 3 + 1;
			switch (j)
			{
			case 10:
				MacNum += "A";
				break;
			case 11:
				MacNum += "B";
				break;
			case 12:
				MacNum += "C";
				break;
			case 13:
				MacNum += "D";
				break;
			case 14:
				MacNum += "E";
				break;
			default:
				MacNum += j;
				break;
			}		
			switch (G)
			{
			case 1:
				MacNum += "2";
				break;
			case 2:
				MacNum += "6";
				break;
			case 3:
				MacNum += "A";
				break;
			
			}
			G = 0;
			j = 0;
		}
		
		textBox4->Text = MacNum;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		HKEY hkey;
		CString m_name=textBox4->Text;
		LPBYTE m_name_Set = new BYTE[m_name.GetLength()*2];
		memcpy(m_name_Set, (VOID*)LPCTSTR(m_name), m_name.GetLength()*2);
		DWORD length = m_name.GetLength()*2;
		CString GG = textBox3->Text;
		LPBYTE GG_Set = new BYTE[GG.GetLength() * 2];
		memcpy(GG_Set, (VOID*)LPCTSTR(GG), GG.GetLength() * 2);
		LPCTSTR data = L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e972-e325-11ce-bfc1-08002be10318}\\00"+GG+L"\\";
		
		if (ERROR_SUCCESS==RegOpenKeyEx(HKEY_LOCAL_MACHINE, data, 0, KEY_ALL_ACCESS, &hkey)) {
			if (ERROR_SUCCESS == RegSetValueEx(hkey, L"NetworkAddress", 0, REG_SZ, m_name_Set, length)) {
				MessageBox::Show("成功");
			}
		}	
		RegCloseKey(hkey);

	}
   private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	   HKEY hkey;
	   CString GG = textBox3->Text;
	   LPBYTE GG_Set = new BYTE[GG.GetLength() * 2];
	   memcpy(GG_Set, (VOID*)LPCTSTR(GG), GG.GetLength() * 2);
	   LPCTSTR data = L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e972-e325-11ce-bfc1-08002be10318}\\00" + GG + L"\\";
	   if (ERROR_SUCCESS == RegOpenKeyEx(HKEY_LOCAL_MACHINE, data, 0, KEY_ALL_ACCESS, &hkey)) {	   
		   if (ERROR_SUCCESS == RegDeleteValue(hkey, L"NetworkAddress")) {
			   MessageBox::Show("成功");
		   }
	   }
	 
	   RegCloseKey(hkey);
   }
};
}
