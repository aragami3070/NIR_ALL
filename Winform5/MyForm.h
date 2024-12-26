#pragma once

namespace Winform5 {

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
	private: System::Windows::Forms::DataGridView^ dataGridInput;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ in1;
	private: System::Windows::Forms::DataGridView^ dataGridOutput;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Button^ btnAddRow;
	private: System::Windows::Forms::Button^ btnRemoveRow;
	private: System::Windows::Forms::Button^ btnAddColumn;
	private: System::Windows::Forms::Button^ btnRemoveColumn;
	private: System::Windows::Forms::Button^ btnStart;






	private: System::Windows::Forms::ErrorProvider^ erZeroRow;
	private: System::Windows::Forms::ErrorProvider^ erZeroColumn;
	private: System::Windows::Forms::ErrorProvider^ erChanges;
	private: System::Windows::Forms::Label^ taskDescription;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridInput = (gcnew System::Windows::Forms::DataGridView());
			this->in1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridOutput = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddRow = (gcnew System::Windows::Forms::Button());
			this->btnRemoveRow = (gcnew System::Windows::Forms::Button());
			this->btnAddColumn = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumn = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->erZeroRow = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->erZeroColumn = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->erChanges = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->taskDescription = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erZeroRow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erZeroColumn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erChanges))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridInput
			// 
			this->dataGridInput->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridInput->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridInput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridInput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->in1 });
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridInput->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridInput->Location = System::Drawing::Point(13, 13);
			this->dataGridInput->Name = L"dataGridInput";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridInput->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridInput->Size = System::Drawing::Size(279, 218);
			this->dataGridInput->TabIndex = 0;
			this->dataGridInput->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MyForm::dataGridInput_RowsRemoved);
			// 
			// in1
			// 
			this->in1->HeaderText = L"in1";
			this->in1->Name = L"in1";
			// 
			// dataGridOutput
			// 
			this->dataGridOutput->AllowUserToAddRows = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridOutput->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridOutput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridOutput->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridOutput->Location = System::Drawing::Point(442, 13);
			this->dataGridOutput->Name = L"dataGridOutput";
			this->dataGridOutput->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridOutput->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridOutput->Size = System::Drawing::Size(279, 218);
			this->dataGridOutput->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"out1";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// btnAddRow
			// 
			this->btnAddRow->Location = System::Drawing::Point(298, 28);
			this->btnAddRow->Name = L"btnAddRow";
			this->btnAddRow->Size = System::Drawing::Size(138, 32);
			this->btnAddRow->TabIndex = 2;
			this->btnAddRow->Text = L"Добавить строку";
			this->btnAddRow->UseVisualStyleBackColor = true;
			this->btnAddRow->Click += gcnew System::EventHandler(this, &MyForm::btnAddRow_Click);
			// 
			// btnRemoveRow
			// 
			this->btnRemoveRow->Location = System::Drawing::Point(298, 66);
			this->btnRemoveRow->Name = L"btnRemoveRow";
			this->btnRemoveRow->Size = System::Drawing::Size(138, 32);
			this->btnRemoveRow->TabIndex = 3;
			this->btnRemoveRow->Text = L"Удалить строку";
			this->btnRemoveRow->UseVisualStyleBackColor = true;
			this->btnRemoveRow->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveRow_Click);
			// 
			// btnAddColumn
			// 
			this->btnAddColumn->Location = System::Drawing::Point(298, 104);
			this->btnAddColumn->Name = L"btnAddColumn";
			this->btnAddColumn->Size = System::Drawing::Size(138, 32);
			this->btnAddColumn->TabIndex = 4;
			this->btnAddColumn->Text = L"Добавить столбец";
			this->btnAddColumn->UseVisualStyleBackColor = true;
			this->btnAddColumn->Click += gcnew System::EventHandler(this, &MyForm::btnAddColumn_Click);
			// 
			// btnRemoveColumn
			// 
			this->btnRemoveColumn->Location = System::Drawing::Point(298, 142);
			this->btnRemoveColumn->Name = L"btnRemoveColumn";
			this->btnRemoveColumn->Size = System::Drawing::Size(138, 32);
			this->btnRemoveColumn->TabIndex = 5;
			this->btnRemoveColumn->Text = L"Удалить столбец";
			this->btnRemoveColumn->UseVisualStyleBackColor = true;
			this->btnRemoveColumn->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColumn_Click);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(298, 180);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(138, 32);
			this->btnStart->TabIndex = 6;
			this->btnStart->Text = L"Заменить";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click);
			// 
			// erZeroRow
			// 
			this->erZeroRow->ContainerControl = this;
			// 
			// erZeroColumn
			// 
			this->erZeroColumn->ContainerControl = this;
			// 
			// erChanges
			// 
			this->erChanges->ContainerControl = this;
			// 
			// taskDescription
			// 
			this->taskDescription->AutoSize = true;
			this->taskDescription->Location = System::Drawing::Point(133, 234);
			this->taskDescription->Name = L"taskDescription";
			this->taskDescription->Size = System::Drawing::Size(454, 26);
			this->taskDescription->TabIndex = 7;
			this->taskDescription->Text = L" Поменять местами нулевую строку и строку, сумма элементов которой максимальна \r\n"
				L"                                 (сумму элементов нулевой строки не учитывать).";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(733, 309);
			this->Controls->Add(this->taskDescription);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnRemoveColumn);
			this->Controls->Add(this->btnAddColumn);
			this->Controls->Add(this->btnRemoveRow);
			this->Controls->Add(this->btnAddRow);
			this->Controls->Add(this->dataGridOutput);
			this->Controls->Add(this->dataGridInput);
			this->Name = L"MyForm";
			this->Text = L"Обработка табличных значений. Часть2.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erZeroRow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erZeroColumn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erChanges))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int countRow = 0;
	int countColumn = 1;

	// Очистка полей
	private: void ClearAll() { 
		erZeroRow->SetError(btnRemoveRow, System::String::Empty);
		erZeroColumn->SetError(btnRemoveColumn, System::String::Empty);
		erChanges->SetError(btnStart, System::String::Empty);
	}

	// Добавление строки в таблицу
	private: System::Void btnAddRow_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		dataGridInput->Rows->Add(1);
		dataGridOutput->Rows->Add(1);
		// Увеличиваем счетчик, если добавили строку
		countRow++;
	}

	// Удаление строки
	private: System::Void btnRemoveRow_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (dataGridInput->CurrentRow == nullptr) {
			this->erZeroRow->SetError(btnRemoveRow, "Нельзя удалить не существующую строку");
			return;
		}
		if (!dataGridInput->CurrentRow->IsNewRow) {
			int input = dataGridInput->CurrentRow->Index;
			int output = dataGridOutput->CurrentRow->Index;
			dataGridInput->Rows->Remove(dataGridInput->Rows[input]);
			dataGridOutput->Rows->Remove(dataGridOutput->Rows[output]);
		}
	}

	// Уменьшаем счетчик, если удалили строку
	private: System::Void dataGridInput_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
		countRow--;
	}

	// Добавление столбца
	private: System::Void btnAddColumn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		// Увеличиваем счетчик, если добавили столбец
		++countColumn;
		dataGridInput->Columns->Add("in" + System::Convert::ToString(countColumn), "in" + System::Convert::ToString(countColumn));
		dataGridOutput->Columns->Add("out" + System::Convert::ToString(countColumn), "out" + System::Convert::ToString(countColumn));
	}

	// Удаление столбца
	private: System::Void btnRemoveColumn_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (countColumn == 1) {
			erZeroColumn->SetError(btnRemoveColumn, "Нельзя удалить этот столбец");
			return;
		}
		dataGridInput->Columns->Remove("in" + System::Convert::ToString(countColumn));
		dataGridOutput->Columns->Remove("out" + System::Convert::ToString(countColumn));
		// Уменьшаем счетчик, если удалили столбец
		--countColumn;
	}
	

	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (countRow < 2) {
			erChanges->SetError(btnStart, "Для выполнения изменений нужно 2 и более строк");
			return;
		}

		// Условно берем строку по индексу 1 как опорный максимум
		int indexMaxRow = 1;
		int sumMax = 0;
		for (int i = 0; i < countColumn; ++i) {
			int cellValue = 0;
			bool cell = Int32::TryParse(System::Convert::ToString(dataGridInput->Rows[0]->Cells[i]->Value), cellValue);
			if (!cell) {
				erChanges->SetError(btnStart, "Не число");
				return;
			}
			sumMax += cellValue;
			dataGridOutput->Rows[0]->Cells[i]->Value = System::Convert::ToString(cellValue);
		}

		// Находим максимальную строку
		for (int i = 1; i < countRow; ++i) {
			int sum = 0;
			for (int j = 0; j < countColumn; ++j) {
				int cellValue = 0;
				bool cell = Int32::TryParse(System::Convert::ToString(dataGridInput->Rows[i]->Cells[j]->Value), cellValue);
				if (!cell) {
					erChanges->SetError(btnStart, "Не число");
					return;
				}
				sum += cellValue;
				dataGridOutput->Rows[i]->Cells[j]->Value = System::Convert::ToString(cellValue);
			}
			if (sum > sumMax) {
				indexMaxRow = i;
				sumMax = sum;
			}
		}

		// Меняем 0 строку с максимальной
		for (int i = 0; i < countColumn; ++i) {
			int cellValue = 0;
			int cellMaxValue = 0;
			bool cell = Int32::TryParse(System::Convert::ToString(dataGridInput->Rows[0]->Cells[i]->Value), cellValue);
			bool cellMax = Int32::TryParse(System::Convert::ToString(dataGridInput->Rows[indexMaxRow]->Cells[i]->Value), cellMaxValue);
			if (!cell || !cellMax) {
				erChanges->SetError(btnStart, "Не число");
				return;
			}
			dataGridOutput->Rows[indexMaxRow]->Cells[i]->Value = System::Convert::ToString(cellValue);
			dataGridOutput->Rows[0]->Cells[i]->Value = System::Convert::ToString(cellMaxValue);
		}
	}
};
}
