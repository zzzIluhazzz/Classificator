#pragma once

#include "MyForm1.h"
#include "MyForm2.h"

#include <fstream>
#include <Windows.h>
#include <iostream>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

#include <string.h>
#include <string>
#include <windows.h>

#include "shlobj_core.h"
#include "pathcch.h"

#pragma comment(lib, "Pathcch.lib")

#define DESKTOP FOLDERID_Desktop

namespace Classificator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 29);
			this->textBox1->TabIndex = 0;
			 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Название класса";
			 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(12, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Расширение файла";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(336, 29);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Путь";
			 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(336, 29);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(361, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			 
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(102, 22);
			this->toolStripButton1->Text = L"О программе";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			 
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(76, 22);
			this->toolStripButton2->Text = L"Помощь";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 266);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Классификатор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::String ^nameFileClass = this->textBox1->Text;
		
		setlocale(LC_ALL, "");
		WIN32_FIND_DATAW wfd;

		wstring nameWay(msclr::interop::marshal_as<std::wstring>(textBox3->Text));
		size_t posn;
		wstring replaceFrom = L"\\";
		wstring replaceTo = L"//";
		while (wstring::npos != (posn = nameWay.find(replaceFrom)))
		{
			nameWay.replace(posn, replaceFrom.length(), replaceTo);
		}
		wstring format(msclr::interop::marshal_as<std::wstring>(textBox2->Text));
		int sizeFormat = format.length();
		wstring nameClass(msclr::interop::marshal_as<std::wstring>(textBox1->Text));
		wstring h;
		wstring nameWayIn = nameWay + L"//*." + format;
		HANDLE const hFind = FindFirstFileW(nameWayIn.c_str(), &wfd);
		wchar_t* p;
		wchar_t* f;
		wchar_t* nameFile;
		if (INVALID_HANDLE_VALUE != hFind)
		{
			do
			{
				h = &wfd.cFileName[0];
				h.replace(h.size() - sizeFormat, 5, L"json");
				PathAllocCombine(nameWay.c_str(), h.data(), 0, &f);
				p = NULL;
				{
					wofstream ofs(f);
					ofs << "{\"version\": 1, \"image\": {\"representation\": \"\", \"value\": \"\"}, \"annotation\": [{\"description\": \"Classification\", \"class\":" << " " << "\"" << nameClass.data() << "\"" << " " << ", \"shape\": {}}]}";
				}
			} while (NULL != FindNextFileW(hFind, &wfd));
			LocalFree(f);
			FindClose(hFind);
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MyForm2^ form = gcnew MyForm2;
		form->Show();
		(Visible = true);
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MyForm1^ form = gcnew MyForm1;
		form->Show();
		(Visible = true);
	}
};
}