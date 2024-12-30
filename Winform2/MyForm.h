#pragma once
#include <cmath>
#include "Solve.h"

namespace Winform2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblFor1;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblInputX;
	private: System::Windows::Forms::Label^ lblInputY;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ btnStart;

	private: System::Windows::Forms::TextBox^ txtOut;
	private: System::Windows::Forms::TextBox^ txtInY;
	private: System::Windows::Forms::TextBox^ txtInX;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblFor1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblInputX = (gcnew System::Windows::Forms::Label());
			this->lblInputY = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->txtInX = (gcnew System::Windows::Forms::TextBox());
			this->txtInY = (gcnew System::Windows::Forms::TextBox());
			this->txtOut = (gcnew System::Windows::Forms::TextBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// lblFor1
			// 
			this->lblFor1->AutoSize = true;
			this->lblFor1->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFor1->Location = System::Drawing::Point(21, 137);
			this->lblFor1->Name = L"lblFor1";
			this->lblFor1->Size = System::Drawing::Size(116, 22);
			this->lblFor1->TabIndex = 0;
			this->lblFor1->Text = L"y^2 * sin(x^2)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 22);
			this->label2->TabIndex = 1;
			this->label2->Tag = L"";
			this->label2->Text = L"---------------------  =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(41, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"x + y^2";
			// 
			// lblInputX
			// 
			this->lblInputX->AutoSize = true;
			this->lblInputX->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInputX->Location = System::Drawing::Point(21, 14);
			this->lblInputX->Name = L"lblInputX";
			this->lblInputX->Size = System::Drawing::Size(98, 22);
			this->lblInputX->TabIndex = 3;
			this->lblInputX->Text = L"Введите X:";
			// 
			// lblInputY
			// 
			this->lblInputY->AutoSize = true;
			this->lblInputY->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInputY->Location = System::Drawing::Point(21, 64);
			this->lblInputY->Name = L"lblInputY";
			this->lblInputY->Size = System::Drawing::Size(98, 22);
			this->lblInputY->TabIndex = 4;
			this->lblInputY->Text = L"Введите Y:";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// txtInX
			// 
			this->txtInX->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInX->Location = System::Drawing::Point(150, 14);
			this->txtInX->Name = L"txtInX";
			this->txtInX->Size = System::Drawing::Size(290, 29);
			this->txtInX->TabIndex = 5;
			// 
			// txtInY
			// 
			this->txtInY->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInY->Location = System::Drawing::Point(150, 56);
			this->txtInY->Name = L"txtInY";
			this->txtInY->Size = System::Drawing::Size(290, 29);
			this->txtInY->TabIndex = 6;
			// 
			// txtOut
			// 
			this->txtOut->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOut->Location = System::Drawing::Point(174, 103);
			this->txtOut->Multiline = true;
			this->txtOut->Name = L"txtOut";
			this->txtOut->Size = System::Drawing::Size(266, 116);
			this->txtOut->TabIndex = 7;
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Linux Biolinum G", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnStart->Location = System::Drawing::Point(150, 233);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(119, 36);
			this->btnStart->TabIndex = 8;
			this->btnStart->Text = L"Вычислить";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 281);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->txtOut);
			this->Controls->Add(this->txtInY);
			this->Controls->Add(this->txtInX);
			this->Controls->Add(this->lblInputY);
			this->Controls->Add(this->lblInputX);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblFor1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->Text = L"Простые вычисления";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void ClearAll() { // очистка полей
		this->txtOut->Text = "";
		errorProvider1->SetError(txtInX, String::Empty);
		errorProvider2->SetError(txtInY, String::Empty);
	}
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputX;
		long long InputY;
		// переводим сторку из TextBox в число
		bool parseX = Int64::TryParse(this->txtInX->Text, InputX);
		bool parseY = Int64::TryParse(this->txtInY->Text, InputY);
		// ввели не число
		if (!parseX) {
			errorProvider1->SetError(txtInX, "Введено не целое число");
			if (!parseY) {
				errorProvider2->SetError(txtInY, "Введено не целое число");
			}
		}
		else if (!parseY) {
			errorProvider2->SetError(txtInY, "Введено не целое число");
		}
		// проверка на деление на ноль
		else {
			if ((InputX == 0 && InputY == 0) || 
				(InputX == -4 && abs(InputY) == 2)) {
				errorProvider1->SetError(txtInX, "Деление на ноль");
				errorProvider2->SetError(txtInY, "Деление на ноль");
			}
			else{
				// все нормально
				// результат
				double resOutput = solve(InputX, InputY);
				// записываем в поле вывода
				this->txtOut->Text = System::Convert::ToString(resOutput);
			}
		}
	}
};
}
