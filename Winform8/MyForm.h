#pragma once

namespace Winform8 {

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
	private: System::Windows::Forms::Label^ lblTask;
	private: System::Windows::Forms::Button^ btnSaveInFile;
	private: System::Windows::Forms::Button^ btnReadFile;

	protected:









	private: System::Windows::Forms::DataGridView^ dGrInput;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ inpSurname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ inpName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ inpPatronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ inpBirthday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ inpGrades;
	private: System::Windows::Forms::Button^ btnRemoveRow;
	private: System::Windows::Forms::Button^ btnAddRow;
	private: System::Windows::Forms::DataGridView^ dGrOutput;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::Label^ lblInput;
	private: System::Windows::Forms::Label^ lblOuput;
	private: System::Windows::Forms::ErrorProvider^ errPr;
	private: System::Windows::Forms::OpenFileDialog^ openFile;
	private: System::Windows::Forms::SaveFileDialog^ saveFile;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblTask = (gcnew System::Windows::Forms::Label());
			this->btnSaveInFile = (gcnew System::Windows::Forms::Button());
			this->btnReadFile = (gcnew System::Windows::Forms::Button());
			this->dGrInput = (gcnew System::Windows::Forms::DataGridView());
			this->inpSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->inpName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->inpPatronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->inpBirthday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->inpGrades = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRemoveRow = (gcnew System::Windows::Forms::Button());
			this->btnAddRow = (gcnew System::Windows::Forms::Button());
			this->dGrOutput = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->lblOuput = (gcnew System::Windows::Forms::Label());
			this->errPr = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGrInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGrOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPr))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTask
			// 
			this->lblTask->AutoSize = true;
			this->lblTask->Location = System::Drawing::Point(11, 9);
			this->lblTask->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTask->Name = L"lblTask";
			this->lblTask->Size = System::Drawing::Size(684, 39);
			this->lblTask->TabIndex = 11;
			this->lblTask->Text = resources->GetString(L"lblTask.Text");
			this->lblTask->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnSaveInFile
			// 
			this->btnSaveInFile->Enabled = false;
			this->btnSaveInFile->Location = System::Drawing::Point(300, 480);
			this->btnSaveInFile->Margin = System::Windows::Forms::Padding(2);
			this->btnSaveInFile->Name = L"btnSaveInFile";
			this->btnSaveInFile->Size = System::Drawing::Size(97, 23);
			this->btnSaveInFile->TabIndex = 15;
			this->btnSaveInFile->Text = L"Сохранить как";
			this->btnSaveInFile->UseVisualStyleBackColor = true;
			this->btnSaveInFile->Click += gcnew System::EventHandler(this, &MyForm::btnSaveInFile_Click);
			// 
			// btnReadFile
			// 
			this->btnReadFile->Location = System::Drawing::Point(300, 244);
			this->btnReadFile->Margin = System::Windows::Forms::Padding(2);
			this->btnReadFile->Name = L"btnReadFile";
			this->btnReadFile->Size = System::Drawing::Size(97, 24);
			this->btnReadFile->TabIndex = 14;
			this->btnReadFile->Text = L"Открыть файл";
			this->btnReadFile->UseVisualStyleBackColor = true;
			this->btnReadFile->Click += gcnew System::EventHandler(this, &MyForm::btnReadFile_Click);
			// 
			// dGrInput
			// 
			this->dGrInput->AllowUserToAddRows = false;
			this->dGrInput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGrInput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->inpSurname,
					this->inpName, this->inpPatronymic, this->inpBirthday, this->inpGrades
			});
			this->dGrInput->Location = System::Drawing::Point(11, 76);
			this->dGrInput->Margin = System::Windows::Forms::Padding(2);
			this->dGrInput->Name = L"dGrInput";
			this->dGrInput->RowHeadersWidth = 51;
			this->dGrInput->RowTemplate->Height = 24;
			this->dGrInput->Size = System::Drawing::Size(680, 164);
			this->dGrInput->TabIndex = 12;
			// 
			// inpSurname
			// 
			this->inpSurname->HeaderText = L"Фамилия";
			this->inpSurname->MinimumWidth = 6;
			this->inpSurname->Name = L"inpSurname";
			this->inpSurname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->inpSurname->Width = 125;
			// 
			// inpName
			// 
			this->inpName->HeaderText = L"Имя";
			this->inpName->MinimumWidth = 6;
			this->inpName->Name = L"inpName";
			this->inpName->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->inpName->Width = 125;
			// 
			// inpPatronymic
			// 
			this->inpPatronymic->HeaderText = L"Отчество";
			this->inpPatronymic->MinimumWidth = 6;
			this->inpPatronymic->Name = L"inpPatronymic";
			this->inpPatronymic->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->inpPatronymic->Width = 125;
			// 
			// inpBirthday
			// 
			this->inpBirthday->HeaderText = L"Дата рождения";
			this->inpBirthday->MinimumWidth = 6;
			this->inpBirthday->Name = L"inpBirthday";
			this->inpBirthday->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->inpBirthday->Width = 125;
			// 
			// inpGrades
			// 
			this->inpGrades->HeaderText = L"Оценки";
			this->inpGrades->MinimumWidth = 6;
			this->inpGrades->Name = L"inpGrades";
			this->inpGrades->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->inpGrades->Width = 125;
			// 
			// btnRemoveRow
			// 
			this->btnRemoveRow->Location = System::Drawing::Point(355, 453);
			this->btnRemoveRow->Margin = System::Windows::Forms::Padding(2);
			this->btnRemoveRow->Name = L"btnRemoveRow";
			this->btnRemoveRow->Size = System::Drawing::Size(111, 23);
			this->btnRemoveRow->TabIndex = 17;
			this->btnRemoveRow->Text = L"Удалить строку";
			this->btnRemoveRow->UseVisualStyleBackColor = true;
			this->btnRemoveRow->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveRow_Click);
			// 
			// btnAddRow
			// 
			this->btnAddRow->Location = System::Drawing::Point(235, 453);
			this->btnAddRow->Margin = System::Windows::Forms::Padding(2);
			this->btnAddRow->Name = L"btnAddRow";
			this->btnAddRow->Size = System::Drawing::Size(111, 23);
			this->btnAddRow->TabIndex = 16;
			this->btnAddRow->Text = L"Добавить строку";
			this->btnAddRow->UseVisualStyleBackColor = true;
			this->btnAddRow->Click += gcnew System::EventHandler(this, &MyForm::btnAddRow_Click);
			// 
			// dGrOutput
			// 
			this->dGrOutput->AllowUserToAddRows = false;
			this->dGrOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGrOutput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dGrOutput->Location = System::Drawing::Point(11, 285);
			this->dGrOutput->Margin = System::Windows::Forms::Padding(2);
			this->dGrOutput->Name = L"dGrOutput";
			this->dGrOutput->RowHeadersWidth = 51;
			this->dGrOutput->RowTemplate->Height = 24;
			this->dGrOutput->Size = System::Drawing::Size(680, 164);
			this->dGrOutput->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Фамилия";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Имя";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Отчество";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Дата рождения";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Оценки";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Location = System::Drawing::Point(14, 58);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(54, 13);
			this->lblInput->TabIndex = 19;
			this->lblInput->Text = L"Входные:";
			// 
			// lblOuput
			// 
			this->lblOuput->AutoSize = true;
			this->lblOuput->Location = System::Drawing::Point(14, 270);
			this->lblOuput->Name = L"lblOuput";
			this->lblOuput->Size = System::Drawing::Size(43, 13);
			this->lblOuput->TabIndex = 20;
			this->lblOuput->Text = L"Вывод:";
			// 
			// errPr
			// 
			this->errPr->ContainerControl = this;
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 513);
			this->Controls->Add(this->lblOuput);
			this->Controls->Add(this->lblInput);
			this->Controls->Add(this->dGrOutput);
			this->Controls->Add(this->btnRemoveRow);
			this->Controls->Add(this->btnAddRow);
			this->Controls->Add(this->btnSaveInFile);
			this->Controls->Add(this->btnReadFile);
			this->Controls->Add(this->dGrInput);
			this->Controls->Add(this->lblTask);
			this->Name = L"MyForm";
			this->Text = L"Work with file";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGrInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGrOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errPr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Очистка таблиц
		void ClearTables() {
			while (this->dGrInput->RowCount){
				this->dGrInput->Rows->Remove(this->dGrInput->Rows[this->dGrInput->RowCount - 1]);
			}
			while (this->dGrOutput->RowCount){
				this->dGrOutput->Rows->Remove(this->dGrOutput->Rows[this->dGrOutput->RowCount - 1]);
			}
		}

		// Чтение данных
		private: System::Void btnReadFile_Click(System::Object^ sender, System::EventArgs^ e) {
			this->errPr->SetError(this->dGrInput, System::String::Empty);
			System::IO::Stream^ myStream;
			btnSaveInFile->Enabled = true;
			if (this->openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = openFile->OpenFile()) != nullptr) {
					System::IO::StreamReader^ sw =
						gcnew System::IO::StreamReader(myStream,
							System::Text::Encoding::GetEncoding(1251)
						);

					// Очистка таблиц
					ClearTables();

					System::String^ strBuf = "";
					array<System::String^>^ arrBuf;
					array<System::String^>^ dateBuf;
					int i = 0;
					// Вывод в таблицы
					while (sw->Peek() + 1) {
						DateTime dateTemp;
						this->dGrInput->Rows->Add(1);
						// Чтение строки из файла
						strBuf = sw->ReadLine();
						try {
							// Вывод ФИО в таблицу dGrInput
							arrBuf = strBuf->Split(' ');
							this->dGrInput->Rows[i]->Cells[0]->Value = arrBuf[0];
							this->dGrInput->Rows[i]->Cells[1]->Value = arrBuf[1];
							this->dGrInput->Rows[i]->Cells[2]->Value = arrBuf[2];

							// Проверка на корректность даты
							dateBuf = arrBuf[3]->Split('.');
							strBuf = dateBuf[0] + "." + dateBuf[1] + "." + dateBuf[2];
							bool res = DateTime::TryParse(strBuf, dateTemp);
							if (!res) {
								this->errPr->SetError(this->dGrInput, "Не корректная дата");
								// Очистка таблиц
								ClearTables();
								return;
							}
							// Вывод даты в таблицу dGrInput
							this->dGrInput->Rows[i]->Cells[3]->Value = dateTemp.Day + "." + dateTemp.Month + "." + dateTemp.Year;
							int grade;
							bool flag = true;
							// Вывод оценок в таблицу dGrInput
							for (int j = 4; j < 9; ++j) {
								bool res = Int32::TryParse(arrBuf[j], grade);

								if (!res || grade > 5 || grade < 2) {
									this->errPr->SetError(this->dGrInput, "Не корректные оценки");
									// Очистка таблиц
									ClearTables();
									return;
								}
								else if (grade <= 5 && grade >= 2) {
									this->dGrInput->Rows[i]->Cells[4]->Value += " " + System::Convert::ToString(grade);
								}
								if (grade == 2) {
									// Если есть 2 в оценках, то flag = false
									flag = false;
								}
							}
							// Если flag == false => есть хотя бы одна 2 => его в таблицу результата выводить не нужно
							if (!flag) {
								++i;
								continue;
							}
							// Вывод в таблицу dGrOutput сдавших сессию
							this->dGrOutput->Rows->Add(1);
							for (int j = 0; j < 5; ++j)
								this->dGrOutput->Rows[
									this->dGrOutput->RowCount - 1
								]->Cells[j]->Value = this->dGrInput->Rows[i]->Cells[j]->Value;
						}
						catch (...) {
						}
						++i;
					}

				}
			}

		}

		// Добавление строки
		private: System::Void btnAddRow_Click(System::Object^ sender, System::EventArgs^ e) {
			this->dGrOutput->Rows->Add(1);
		}

		// Удаление строки
		private: System::Void btnRemoveRow_Click(System::Object^ sender, System::EventArgs^ e) {
			this->errPr->SetError(this->dGrOutput, System::String::Empty);
			if (!this->dGrOutput->CurrentRow) {
				this->errPr->SetError(this->dGrOutput, "Нельзя удалить несуществующую строку");
				return;
			}
			if (!this->dGrOutput->CurrentRow->IsNewRow) {
				int i = this->dGrOutput->CurrentRow->Index;
				this->dGrOutput->Rows->Remove(this->dGrOutput->Rows[i]);
			}
		}

		// Перевод строки из таблицы в строку для вывода в файл
		System::String^ dGrOutputToString(int i) {
			this->errPr->SetError(this->dGrOutput, System::String::Empty);
			System::String^ buff = "";
			System::String^ strBuf = "";
			// Проверяем ФИО
			for (int j = 0; j < 3; ++j) {
				if (System::Convert::ToString(this->dGrOutput->Rows[i]->Cells[j]->Value)->Trim() == "") {
					this->errPr->SetError(this->dGrOutput, "Не корректное ФИО");
					return " ";
				}
			}
			// Проверяем дату
			DateTime dateBuf;
			array<System::String^>^ arrDate;
			strBuf = System::Convert::ToString(this->dGrOutput->Rows[i]->Cells[3]->Value);
			arrDate = strBuf->Split('.');
			if (arrDate->Length != 3) {
				this->errPr->SetError(this->dGrOutput, "Не корректная дата");
				return " ";
			}
			strBuf = arrDate[0] + "." + arrDate[1] + "." + arrDate[2];
			if (!DateTime::TryParse(strBuf, dateBuf)) { 
				this->errPr->SetError(this->dGrOutput, "Не корректная дата");
				return " ";
			}
			// Проверяем оценки
			int grade;
			array<System::String^>^ strGrade = System::Convert::ToString(this->dGrOutput->Rows[i]->Cells[4]->Value)->Trim()->Split(' ');
			if (strGrade->Length != 5) {
				this->errPr->SetError(this->dGrOutput, "Не корректное кол-во оценок (должно быть ровно 5)");
				return " ";
			}
			for (int j = 0; j < 5; ++j) {
				bool res = Int32::TryParse(strGrade[j], grade);
				if (!res || grade > 5 || grade < 3) {
					this->errPr->SetError(this->dGrOutput, "Не корректные оценки (для зачета должны быть не меньше 3):" + this->dGrOutput->Rows[i]->Cells[4]->Value);
					return " ";
				}
			}
			strBuf = "";
			for (int j = 0; j < 5; ++j) {
				strBuf += System::Convert::ToString(this->dGrOutput->Rows[i]->Cells[j]->Value);
				if (j >= 3) {
					strBuf += "";
				}
				else {
					strBuf += " ";
				}

			}
			return strBuf;
		}

		// Сохранение файла
		private: System::Void btnSaveInFile_Click(System::Object^ sender, System::EventArgs^ e) {
			System::IO::Stream^ myStream;
			if (this->saveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				if ((myStream = saveFile->OpenFile()) != nullptr) {
					System::IO::StreamWriter^ sw =
						gcnew System::IO::StreamWriter(myStream,
							System::Text::Encoding::GetEncoding(1251)
						);
					try {
						for (int i = 0; i < this->dGrOutput->RowCount - 1; ++i) {
							sw->WriteLine(dGrOutputToString(i));
						}
						sw->Write(dGrOutputToString(this->dGrOutput->RowCount - 1));
					}
					catch (...) {
					}
					sw->Close();
				}
		}

};
}
