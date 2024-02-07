#pragma once

namespace Classificator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;






	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();

			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(527, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"В \"Путь\" вводится адрес каталога с изображениями, которые будут загружены в Платф"
				L"орму-ГНС.";

			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(527, 74);
			this->label2->TabIndex = 2;
			this->label2->Text = L"В \"Расширение файла\" вводится текст, находяшийся в имени файла после точки.";

			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(16, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(527, 74);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Кнопка \"Старт\" запускает создание файлов, отвечающих за разметку изображений при "
				L"их загрузке в Платформу-ГНС.";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);

			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(443, 74);
			this->label4->TabIndex = 4;
			this->label4->Text = L"В \"Название класса\" вводится текст, по которому Платформа-ГНС разметит изображени"
				L"я при их загрузке в базу данных.";

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 343);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Помощь";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	}
};
}
