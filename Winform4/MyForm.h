#pragma once
#include<string>
namespace Winform4 {

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
	private: System::Windows::Forms::DataGridView^ ArDtGr;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::Button^ DelBtn;
	private: System::Windows::Forms::TextBox^ XTxtBox;




	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::Label^ lblInterval1;
	private: System::Windows::Forms::Label^ lblInterval2;
	private: System::Windows::Forms::TextBox^ ATxtBox;
	private: System::Windows::Forms::TextBox^ BTxtBox;




	private: System::Windows::Forms::Button^ SumBtn;
	private: System::Windows::Forms::TextBox^ SumTxtBox;

	private: System::Windows::Forms::Label^ lblSum;
	private: System::Windows::Forms::TextBox^ MaxTxtBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ MaxBtn;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider3;
	private: System::ComponentModel::IContainer^ components;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ArDtGr = (gcnew System::Windows::Forms::DataGridView());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->DelBtn = (gcnew System::Windows::Forms::Button());
			this->XTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->lblInterval1 = (gcnew System::Windows::Forms::Label());
			this->lblInterval2 = (gcnew System::Windows::Forms::Label());
			this->ATxtBox = (gcnew System::Windows::Forms::TextBox());
			this->BTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->SumBtn = (gcnew System::Windows::Forms::Button());
			this->SumTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lblSum = (gcnew System::Windows::Forms::Label());
			this->MaxTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MaxBtn = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArDtGr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			this->SuspendLayout();
			// 
			// ArDtGr
			// 
			this->ArDtGr->AllowUserToAddRows = false;
			this->ArDtGr->AllowUserToDeleteRows = false;
			this->ArDtGr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ArDtGr->Location = System::Drawing::Point(34, 129);
			this->ArDtGr->Name = L"ArDtGr";
			this->ArDtGr->ReadOnly = true;
			this->ArDtGr->Size = System::Drawing::Size(192, 268);
			this->ArDtGr->TabIndex = 0;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl1->Location = System::Drawing::Point(12, 19);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(763, 80);
			this->lbl1->TabIndex = 1;
			this->lbl1->Text = resources->GetString(L"lbl1.Text");
			// 
			// AddBtn
			// 
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddBtn->Location = System::Drawing::Point(248, 151);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(99, 35);
			this->AddBtn->TabIndex = 2;
			this->AddBtn->Text = L"Добавить";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// DelBtn
			// 
			this->DelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DelBtn->Location = System::Drawing::Point(248, 215);
			this->DelBtn->Name = L"DelBtn";
			this->DelBtn->Size = System::Drawing::Size(99, 35);
			this->DelBtn->TabIndex = 3;
			this->DelBtn->Text = L"Удалить";
			this->DelBtn->UseVisualStyleBackColor = true;
			this->DelBtn->Click += gcnew System::EventHandler(this, &MyForm::DelBtn_Click);
			// 
			// XTxtBox
			// 
			this->XTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->XTxtBox->Location = System::Drawing::Point(441, 160);
			this->XTxtBox->Name = L"XTxtBox";
			this->XTxtBox->Size = System::Drawing::Size(100, 26);
			this->XTxtBox->TabIndex = 4;
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblX->Location = System::Drawing::Point(398, 162);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(37, 20);
			this->lblX->TabIndex = 5;
			this->lblX->Text = L"X = ";
			// 
			// lblInterval1
			// 
			this->lblInterval1->AutoSize = true;
			this->lblInterval1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInterval1->Location = System::Drawing::Point(398, 218);
			this->lblInterval1->Name = L"lblInterval1";
			this->lblInterval1->Size = System::Drawing::Size(96, 20);
			this->lblInterval1->TabIndex = 6;
			this->lblInterval1->Text = L"Интервал: [";
			// 
			// lblInterval2
			// 
			this->lblInterval2->AutoSize = true;
			this->lblInterval2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInterval2->Location = System::Drawing::Point(632, 218);
			this->lblInterval2->Name = L"lblInterval2";
			this->lblInterval2->Size = System::Drawing::Size(13, 20);
			this->lblInterval2->TabIndex = 7;
			this->lblInterval2->Text = L"]";
			// 
			// ATxtBox
			// 
			this->ATxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ATxtBox->Location = System::Drawing::Point(500, 215);
			this->ATxtBox->Name = L"ATxtBox";
			this->ATxtBox->Size = System::Drawing::Size(60, 26);
			this->ATxtBox->TabIndex = 8;
			// 
			// BTxtBox
			// 
			this->BTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTxtBox->Location = System::Drawing::Point(566, 215);
			this->BTxtBox->Name = L"BTxtBox";
			this->BTxtBox->Size = System::Drawing::Size(60, 26);
			this->BTxtBox->TabIndex = 9;
			// 
			// SumBtn
			// 
			this->SumBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SumBtn->Location = System::Drawing::Point(398, 308);
			this->SumBtn->Name = L"SumBtn";
			this->SumBtn->Size = System::Drawing::Size(75, 35);
			this->SumBtn->TabIndex = 10;
			this->SumBtn->Text = L"Сумма";
			this->SumBtn->UseVisualStyleBackColor = true;
			this->SumBtn->Click += gcnew System::EventHandler(this, &MyForm::SumBtn_Click);
			// 
			// SumTxtBox
			// 
			this->SumTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SumTxtBox->Location = System::Drawing::Point(430, 276);
			this->SumTxtBox->Name = L"SumTxtBox";
			this->SumTxtBox->ReadOnly = true;
			this->SumTxtBox->Size = System::Drawing::Size(338, 26);
			this->SumTxtBox->TabIndex = 12;
			// 
			// lblSum
			// 
			this->lblSum->AutoSize = true;
			this->lblSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSum->Location = System::Drawing::Point(362, 276);
			this->lblSum->Name = L"lblSum";
			this->lblSum->Size = System::Drawing::Size(62, 20);
			this->lblSum->TabIndex = 11;
			this->lblSum->Text = L"Сумма:";
			// 
			// MaxTxtBox
			// 
			this->MaxTxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaxTxtBox->Location = System::Drawing::Point(479, 386);
			this->MaxTxtBox->Name = L"MaxTxtBox";
			this->MaxTxtBox->ReadOnly = true;
			this->MaxTxtBox->Size = System::Drawing::Size(289, 26);
			this->MaxTxtBox->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(290, 372);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 40);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Номера максимальных\r\nнечетных элементов:";
			// 
			// MaxBtn
			// 
			this->MaxBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaxBtn->Location = System::Drawing::Point(366, 431);
			this->MaxBtn->Name = L"MaxBtn";
			this->MaxBtn->Size = System::Drawing::Size(147, 50);
			this->MaxBtn->TabIndex = 13;
			this->MaxBtn->Text = L"Максимальные элементы";
			this->MaxBtn->UseVisualStyleBackColor = true;
			this->MaxBtn->Click += gcnew System::EventHandler(this, &MyForm::MaxBtn_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 511);
			this->Controls->Add(this->MaxTxtBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MaxBtn);
			this->Controls->Add(this->SumTxtBox);
			this->Controls->Add(this->lblSum);
			this->Controls->Add(this->SumBtn);
			this->Controls->Add(this->BTxtBox);
			this->Controls->Add(this->ATxtBox);
			this->Controls->Add(this->lblInterval2);
			this->Controls->Add(this->lblInterval1);
			this->Controls->Add(this->lblX);
			this->Controls->Add(this->XTxtBox);
			this->Controls->Add(this->DelBtn);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->ArDtGr);
			this->Name = L"MyForm";
			this->Text = L"Обработка табличных данных. Часть 1.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArDtGr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// очистка полей
	private: void ClearAll() { 
		this->SumTxtBox->Text = "";
		this->MaxTxtBox->Text = "";
		errorProvider1->SetError(XTxtBox, String::Empty);
		errorProvider2->SetError(ATxtBox, String::Empty);
		errorProvider3->SetError(BTxtBox, String::Empty);
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ArDtGr->Columns->Add("ArColumn", "Массив");
		for (int i = 0; i < 7; i++) {
			ArDtGr->Rows->Add();
		}
		ArDtGr->Rows[0]->Cells[0]->Value = (long long)8;
		ArDtGr->Rows[1]->Cells[0]->Value = (long long)7;
		ArDtGr->Rows[2]->Cells[0]->Value = (long long)3;
		ArDtGr->Rows[3]->Cells[0]->Value = (long long)4;
		ArDtGr->Rows[4]->Cells[0]->Value = (long long)7;
		ArDtGr->Rows[5]->Cells[0]->Value = (long long)5;
		ArDtGr->Rows[6]->Cells[0]->Value = (long long)7;
	}
	// вставка строки
	private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputX;
		// переводим сторку из TextBox в число
		bool parseX = Int64::TryParse(this->XTxtBox->Text, InputX);
		// ввели не число
		if (!parseX) {
			errorProvider1->SetError(XTxtBox, "X не число");
		}
		else {
			ArDtGr->Rows->Add();
			ArDtGr->Rows[ArDtGr->RowCount - 1]->Cells[0]->Value = InputX;
		}
	}

	// удаление строки
	private: System::Void DelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (ArDtGr->RowCount != 0) {
			ArDtGr->Rows->RemoveAt(ArDtGr->RowCount - 1);
		}
	}

	// среднее арифметическое
	private: System::Void SumBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputA;
		long long InputB;
		// переводим сторку из TextBox в число
		bool parseA = Int64::TryParse(this->ATxtBox->Text, InputA);
		bool parseB = Int64::TryParse(this->BTxtBox->Text, InputB);
		if (!parseA) {
			errorProvider2->SetError(ATxtBox, "A не число");
			if (!parseB) {
				errorProvider3->SetError(BTxtBox, "B не число");
			}
		}
		else if (!parseB) {
			errorProvider3->SetError(BTxtBox, "B не число");
		}
		else if (InputA < 0) {
			errorProvider2->SetError(ATxtBox, "А не может быть отрицательным");
		}
		else if (InputB > ArDtGr->RowCount -1) {
			errorProvider3->SetError(BTxtBox, "B больше чем кол-во элементов");
		}
		else {
			// подсчет среднего арифметического
			long long countres = 0;
			long long count = 0;
			double res = 0;
			double sum = 0;
			for (long long i = 0; i <= ArDtGr->RowCount - 1; i++) {
				if ((long long)ArDtGr->Rows[i]->Cells[0]->Value % 2 != 0) {
					res += (long long)ArDtGr->Rows[i]->Cells[0]->Value;
					countres++;
				}
			}
			for (long long i = InputA; i <= InputB; i++) {
				if ((long long)ArDtGr->Rows[i]->Cells[0]->Value % 2 != 0) {
					sum += (long long)ArDtGr->Rows[i]->Cells[0]->Value;
					count++;
				}
			}

			res -= sum;
			countres -= count;

			// обработка случая, где таких элементов нет
			if (res != 0 && countres != 0) {
				res = (res) / countres;
				this->SumTxtBox->Text = res.ToString();
			}
			else {
				this->SumTxtBox->Text = "Таких элементов нет";
			}
		}
	}

	private: System::Void MaxBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		bool flag = false;
		long long max = -INT_MAX;
		for (long long i = 0; i <= ArDtGr->RowCount - 1; i++) {
			try
			{
				long long elemArr = (long long)ArDtGr->Rows[i]->Cells[0]->Value;
				if (elemArr > max && elemArr % 2 != 0) {
					max = (long long)ArDtGr->Rows[i]->Cells[0]->Value;
				}
			}
			catch (const std::exception&)
			{
				this->MaxTxtBox->Text = "В таблице есть не числа";
				flag = true;
			}
		}

		if (max % 2 != 0 && flag == false) {
			for (long long i = 0; i <= ArDtGr->RowCount - 1; i++) {
				if ((long long)ArDtGr->Rows[i]->Cells[0]->Value == max) {
					this->MaxTxtBox->Text += i.ToString();
					this->MaxTxtBox->Text += " ";
				}
			}
		}
		else if (flag == false) {
			this->MaxTxtBox->Text = "Нет нечетных элементов";
		}
	}
};
}
