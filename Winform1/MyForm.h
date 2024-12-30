#pragma once

#include "fact.h"

namespace Winform1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblInput;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::Button^ btnCalculate;
	protected:

	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txtInput;
	private: System::Windows::Forms::TextBox^ txtOutput;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInput->Location = System::Drawing::Point(12, 74);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(276, 24);
			this->lblInput->TabIndex = 0;
			this->lblInput->Text = L"¬ведите целое число или N =";
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOutput->Location = System::Drawing::Point(12, 121);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(180, 24);
			this->lblOutput->TabIndex = 1;
			this->lblOutput->Text = L"–езультат или N! =";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalculate->Location = System::Drawing::Point(194, 193);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(132, 38);
			this->btnCalculate->TabIndex = 2;
			this->btnCalculate->Text = L"¬ычислить";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInput->Location = System::Drawing::Point(294, 71);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(205, 29);
			this->txtInput->TabIndex = 3;
			// 
			// txtOutput
			// 
			this->txtOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOutput->Location = System::Drawing::Point(294, 116);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(205, 29);
			this->txtOutput->TabIndex = 4;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 292);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->lblInput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"‘акториал";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ClearAll() { // очистка полей
		this->txtOutput->Text = "ќшибка ввода";
		errorProvider1->SetError(txtInput, String::Empty);
	}
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputNumber;
		// переводим сторку из TextBox в число
		bool result = Int64::TryParse(this->txtInput->Text, InputNumber);
		// ввели не число
		if (!result) {
			errorProvider1->SetError(txtInput, "¬ведено не целое число");
		}
		else {
			if (InputNumber >= 20) {
				errorProvider1->SetError(txtInput, "—лишком большое число");
			}
			else{
				// результат
				long long OutputNumber = fact(InputNumber);
				// отрицательное число
				if (OutputNumber == -1) {
					errorProvider1->SetError(txtInput, "¬ведено отрицательное число");
				}
				// все нормально
				else {
					// записываем в поле вывода
					this->txtOutput->Text = System::Convert::ToString(OutputNumber);
				}
			}
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
