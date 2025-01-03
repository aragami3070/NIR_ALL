#pragma once

namespace Winform6 {

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
	private: System::Windows::Forms::DataGridView^ matrixA;
	private: System::Windows::Forms::DataGridView^ matrixB;
	private: System::Windows::Forms::DataGridView^ matrixResult;
	protected:

	protected:

	protected:






























	private: System::Windows::Forms::Button^ btnResult;



	private: System::Windows::Forms::RadioButton^ rBtnVector;

	private: System::Windows::Forms::RadioButton^ rBtnScalar;
	private: System::Windows::Forms::RadioButton^ rBtnDetermA;





	private: System::Windows::Forms::RadioButton^ rBtnMultNum;

	private: System::Windows::Forms::RadioButton^ rBtnTransposition;


	private: System::Windows::Forms::RadioButton^ rBtnSubstract;

	private: System::Windows::Forms::RadioButton^ rBtnSum;
	private: System::Windows::Forms::RadioButton^ rBtnMultMatr;
	private: System::Windows::Forms::Label^ labelRes;
	private: System::Windows::Forms::Label^ labelA;


	private: System::Windows::Forms::Label^ labelB;










	private: System::Windows::Forms::TextBox^ tbRowAInput;
	private: System::Windows::Forms::TextBox^ tbColumnAInput;



	private: System::Windows::Forms::Button^ btnSizeA;

	private: System::Windows::Forms::Button^ btnSizeB;
	private: System::Windows::Forms::TextBox^ tbColumnBInput;

	private: System::Windows::Forms::TextBox^ tbRowBInput;
	private: System::Windows::Forms::ErrorProvider^ erPrSizeA;
	private: System::Windows::Forms::ErrorProvider^ erPrSizeB;
	private: System::Windows::Forms::ErrorProvider^ erPrResult;
private: System::Windows::Forms::RadioButton^ rBtnRankA;
private: System::Windows::Forms::GroupBox^ grChoose;
private: System::Windows::Forms::RadioButton^ rBtnSubVec;

private: System::Windows::Forms::RadioButton^ rBtnSumVec;
private: System::Windows::Forms::RadioButton^ rBtnUnitMatrix;





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
			this->matrixA = (gcnew System::Windows::Forms::DataGridView());
			this->matrixB = (gcnew System::Windows::Forms::DataGridView());
			this->matrixResult = (gcnew System::Windows::Forms::DataGridView());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->rBtnRankA = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnVector = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnScalar = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnDetermA = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnMultNum = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnTransposition = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnSubstract = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnSum = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnMultMatr = (gcnew System::Windows::Forms::RadioButton());
			this->labelRes = (gcnew System::Windows::Forms::Label());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->tbRowAInput = (gcnew System::Windows::Forms::TextBox());
			this->tbColumnAInput = (gcnew System::Windows::Forms::TextBox());
			this->btnSizeA = (gcnew System::Windows::Forms::Button());
			this->btnSizeB = (gcnew System::Windows::Forms::Button());
			this->tbColumnBInput = (gcnew System::Windows::Forms::TextBox());
			this->tbRowBInput = (gcnew System::Windows::Forms::TextBox());
			this->erPrSizeA = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->erPrSizeB = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->erPrResult = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->grChoose = (gcnew System::Windows::Forms::GroupBox());
			this->rBtnUnitMatrix = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnSubVec = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnSumVec = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erPrSizeA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erPrSizeB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erPrResult))->BeginInit();
			this->grChoose->SuspendLayout();
			this->SuspendLayout();
			// 
			// matrixA
			// 
			this->matrixA->AllowUserToAddRows = false;
			this->matrixA->AllowUserToDeleteRows = false;
			this->matrixA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixA->Location = System::Drawing::Point(26, 40);
			this->matrixA->Name = L"matrixA";
			this->matrixA->Size = System::Drawing::Size(329, 228);
			this->matrixA->TabIndex = 0;
			// 
			// matrixB
			// 
			this->matrixB->AllowUserToAddRows = false;
			this->matrixB->AllowUserToDeleteRows = false;
			this->matrixB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixB->Location = System::Drawing::Point(361, 40);
			this->matrixB->Name = L"matrixB";
			this->matrixB->Size = System::Drawing::Size(329, 228);
			this->matrixB->TabIndex = 1;
			// 
			// matrixResult
			// 
			this->matrixResult->AllowUserToAddRows = false;
			this->matrixResult->AllowUserToDeleteRows = false;
			this->matrixResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixResult->Location = System::Drawing::Point(26, 359);
			this->matrixResult->Name = L"matrixResult";
			this->matrixResult->Size = System::Drawing::Size(329, 228);
			this->matrixResult->TabIndex = 2;
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(246, 274);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(224, 55);
			this->btnResult->TabIndex = 13;
			this->btnResult->Text = L"Вычислить";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// rBtnRankA
			// 
			this->rBtnRankA->AutoSize = true;
			this->rBtnRankA->Location = System::Drawing::Point(6, 157);
			this->rBtnRankA->Name = L"rBtnRankA";
			this->rBtnRankA->Size = System::Drawing::Size(107, 17);
			this->rBtnRankA->TabIndex = 8;
			this->rBtnRankA->Text = L"Ранг матрицы A";
			this->rBtnRankA->UseVisualStyleBackColor = true;
			// 
			// rBtnVector
			// 
			this->rBtnVector->AutoSize = true;
			this->rBtnVector->Location = System::Drawing::Point(6, 203);
			this->rBtnVector->Name = L"rBtnVector";
			this->rBtnVector->Size = System::Drawing::Size(154, 17);
			this->rBtnVector->TabIndex = 7;
			this->rBtnVector->Text = L"Векторное произведение";
			this->rBtnVector->UseVisualStyleBackColor = true;
			// 
			// rBtnScalar
			// 
			this->rBtnScalar->AutoSize = true;
			this->rBtnScalar->Location = System::Drawing::Point(6, 180);
			this->rBtnScalar->Name = L"rBtnScalar";
			this->rBtnScalar->Size = System::Drawing::Size(155, 17);
			this->rBtnScalar->TabIndex = 6;
			this->rBtnScalar->Text = L"Скалярное произведение";
			this->rBtnScalar->UseVisualStyleBackColor = true;
			// 
			// rBtnDetermA
			// 
			this->rBtnDetermA->AutoSize = true;
			this->rBtnDetermA->Location = System::Drawing::Point(6, 134);
			this->rBtnDetermA->Name = L"rBtnDetermA";
			this->rBtnDetermA->Size = System::Drawing::Size(156, 17);
			this->rBtnDetermA->TabIndex = 5;
			this->rBtnDetermA->Text = L"Определитель матрицы A";
			this->rBtnDetermA->UseVisualStyleBackColor = true;
			// 
			// rBtnMultNum
			// 
			this->rBtnMultNum->AutoSize = true;
			this->rBtnMultNum->Location = System::Drawing::Point(6, 88);
			this->rBtnMultNum->Name = L"rBtnMultNum";
			this->rBtnMultNum->Size = System::Drawing::Size(125, 17);
			this->rBtnMultNum->TabIndex = 4;
			this->rBtnMultNum->Text = L"Умножить на число";
			this->rBtnMultNum->UseVisualStyleBackColor = true;
			// 
			// rBtnTransposition
			// 
			this->rBtnTransposition->AutoSize = true;
			this->rBtnTransposition->Location = System::Drawing::Point(6, 111);
			this->rBtnTransposition->Name = L"rBtnTransposition";
			this->rBtnTransposition->Size = System::Drawing::Size(160, 17);
			this->rBtnTransposition->TabIndex = 3;
			this->rBtnTransposition->Text = L"Транспонировать матрицу";
			this->rBtnTransposition->UseVisualStyleBackColor = true;
			// 
			// rBtnSubstract
			// 
			this->rBtnSubstract->AutoSize = true;
			this->rBtnSubstract->Location = System::Drawing::Point(6, 65);
			this->rBtnSubstract->Name = L"rBtnSubstract";
			this->rBtnSubstract->Size = System::Drawing::Size(116, 17);
			this->rBtnSubstract->TabIndex = 2;
			this->rBtnSubstract->Text = L"Вычесть матрицы";
			this->rBtnSubstract->UseVisualStyleBackColor = true;
			// 
			// rBtnSum
			// 
			this->rBtnSum->AutoSize = true;
			this->rBtnSum->Location = System::Drawing::Point(6, 42);
			this->rBtnSum->Name = L"rBtnSum";
			this->rBtnSum->Size = System::Drawing::Size(117, 17);
			this->rBtnSum->TabIndex = 1;
			this->rBtnSum->Text = L"Сложить матрицы";
			this->rBtnSum->UseVisualStyleBackColor = true;
			// 
			// rBtnMultMatr
			// 
			this->rBtnMultMatr->AutoSize = true;
			this->rBtnMultMatr->Checked = true;
			this->rBtnMultMatr->Location = System::Drawing::Point(6, 19);
			this->rBtnMultMatr->Name = L"rBtnMultMatr";
			this->rBtnMultMatr->Size = System::Drawing::Size(144, 17);
			this->rBtnMultMatr->TabIndex = 0;
			this->rBtnMultMatr->TabStop = true;
			this->rBtnMultMatr->Text = L"Перемножить матрицы";
			this->rBtnMultMatr->UseVisualStyleBackColor = true;
			// 
			// labelRes
			// 
			this->labelRes->AutoSize = true;
			this->labelRes->Location = System::Drawing::Point(137, 343);
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(62, 13);
			this->labelRes->TabIndex = 15;
			this->labelRes->Text = L"Результат:";
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Location = System::Drawing::Point(137, 24);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(61, 13);
			this->labelA->TabIndex = 17;
			this->labelA->Text = L"Матрица A";
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Location = System::Drawing::Point(492, 24);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(61, 13);
			this->labelB->TabIndex = 18;
			this->labelB->Text = L"Матрица B";
			// 
			// tbRowAInput
			// 
			this->tbRowAInput->Location = System::Drawing::Point(140, 274);
			this->tbRowAInput->Name = L"tbRowAInput";
			this->tbRowAInput->Size = System::Drawing::Size(100, 20);
			this->tbRowAInput->TabIndex = 19;
			// 
			// tbColumnAInput
			// 
			this->tbColumnAInput->Location = System::Drawing::Point(140, 309);
			this->tbColumnAInput->Name = L"tbColumnAInput";
			this->tbColumnAInput->Size = System::Drawing::Size(100, 20);
			this->tbColumnAInput->TabIndex = 20;
			// 
			// btnSizeA
			// 
			this->btnSizeA->Location = System::Drawing::Point(26, 274);
			this->btnSizeA->Name = L"btnSizeA";
			this->btnSizeA->Size = System::Drawing::Size(108, 55);
			this->btnSizeA->TabIndex = 21;
			this->btnSizeA->Text = L"Задать размер матрицы A";
			this->btnSizeA->UseVisualStyleBackColor = true;
			this->btnSizeA->Click += gcnew System::EventHandler(this, &MyForm::btnSizeA_Click);
			// 
			// btnSizeB
			// 
			this->btnSizeB->Location = System::Drawing::Point(582, 274);
			this->btnSizeB->Name = L"btnSizeB";
			this->btnSizeB->Size = System::Drawing::Size(108, 55);
			this->btnSizeB->TabIndex = 24;
			this->btnSizeB->Text = L"Задать размер матрицы B";
			this->btnSizeB->UseVisualStyleBackColor = true;
			this->btnSizeB->Click += gcnew System::EventHandler(this, &MyForm::btnSizeB_Click);
			// 
			// tbColumnBInput
			// 
			this->tbColumnBInput->Location = System::Drawing::Point(476, 309);
			this->tbColumnBInput->Name = L"tbColumnBInput";
			this->tbColumnBInput->Size = System::Drawing::Size(100, 20);
			this->tbColumnBInput->TabIndex = 23;
			// 
			// tbRowBInput
			// 
			this->tbRowBInput->Location = System::Drawing::Point(476, 274);
			this->tbRowBInput->Name = L"tbRowBInput";
			this->tbRowBInput->Size = System::Drawing::Size(100, 20);
			this->tbRowBInput->TabIndex = 22;
			// 
			// erPrSizeA
			// 
			this->erPrSizeA->ContainerControl = this;
			// 
			// erPrSizeB
			// 
			this->erPrSizeB->ContainerControl = this;
			// 
			// erPrResult
			// 
			this->erPrResult->ContainerControl = this;
			// 
			// grChoose
			// 
			this->grChoose->Controls->Add(this->rBtnUnitMatrix);
			this->grChoose->Controls->Add(this->rBtnSubVec);
			this->grChoose->Controls->Add(this->rBtnSumVec);
			this->grChoose->Controls->Add(this->rBtnVector);
			this->grChoose->Controls->Add(this->rBtnRankA);
			this->grChoose->Controls->Add(this->rBtnScalar);
			this->grChoose->Controls->Add(this->rBtnMultMatr);
			this->grChoose->Controls->Add(this->rBtnSum);
			this->grChoose->Controls->Add(this->rBtnSubstract);
			this->grChoose->Controls->Add(this->rBtnDetermA);
			this->grChoose->Controls->Add(this->rBtnTransposition);
			this->grChoose->Controls->Add(this->rBtnMultNum);
			this->grChoose->Location = System::Drawing::Point(404, 343);
			this->grChoose->Name = L"grChoose";
			this->grChoose->Size = System::Drawing::Size(273, 292);
			this->grChoose->TabIndex = 25;
			this->grChoose->TabStop = false;
			this->grChoose->Text = L"Выберете действие";
			// 
			// rBtnUnitMatrix
			// 
			this->rBtnUnitMatrix->AutoSize = true;
			this->rBtnUnitMatrix->Location = System::Drawing::Point(6, 269);
			this->rBtnUnitMatrix->Name = L"rBtnUnitMatrix";
			this->rBtnUnitMatrix->Size = System::Drawing::Size(125, 17);
			this->rBtnUnitMatrix->TabIndex = 11;
			this->rBtnUnitMatrix->Text = L"Единичная матрица";
			this->rBtnUnitMatrix->UseVisualStyleBackColor = true;
			// 
			// rBtnSubVec
			// 
			this->rBtnSubVec->AutoSize = true;
			this->rBtnSubVec->Location = System::Drawing::Point(6, 249);
			this->rBtnSubVec->Name = L"rBtnSubVec";
			this->rBtnSubVec->Size = System::Drawing::Size(123, 17);
			this->rBtnSubVec->TabIndex = 10;
			this->rBtnSubVec->Text = L"Разность векторов";
			this->rBtnSubVec->UseVisualStyleBackColor = true;
			// 
			// rBtnSumVec
			// 
			this->rBtnSumVec->AutoSize = true;
			this->rBtnSumVec->Location = System::Drawing::Point(6, 226);
			this->rBtnSumVec->Name = L"rBtnSumVec";
			this->rBtnSumVec->Size = System::Drawing::Size(109, 17);
			this->rBtnSumVec->TabIndex = 9;
			this->rBtnSumVec->Text = L"Сумма векторов";
			this->rBtnSumVec->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(713, 638);
			this->Controls->Add(this->grChoose);
			this->Controls->Add(this->btnSizeB);
			this->Controls->Add(this->tbColumnBInput);
			this->Controls->Add(this->tbRowBInput);
			this->Controls->Add(this->btnSizeA);
			this->Controls->Add(this->tbColumnAInput);
			this->Controls->Add(this->tbRowAInput);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->labelA);
			this->Controls->Add(this->labelRes);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->matrixResult);
			this->Controls->Add(this->matrixB);
			this->Controls->Add(this->matrixA);
			this->Name = L"MyForm";
			this->Text = L"Матричный кальулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erPrSizeA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erPrSizeB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->erPrResult))->EndInit();
			this->grChoose->ResumeLayout(false);
			this->grChoose->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		// Очистка errorProvider-ов
		void ClearAll() { 
			erPrSizeA->Clear();
			erPrSizeB->Clear();
			erPrResult->Clear();
		}

		// Ввод размеров матрицы A
		System::Void btnSizeA_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearAll();
			int row;
			int column;
			bool resRow = Int32::TryParse(tbRowAInput->Text, row);
			bool resColumn = Int32::TryParse(tbColumnAInput->Text, column);

			//проверки
			if (!resRow && !resColumn) {
				erPrSizeA->SetError(btnSizeA, "Введено не целое число");
				return;
			}
			else if (row < 1 || column < 1) {
				erPrSizeA->SetError(btnSizeA, "Нельзя задать размер < 1");
				return;
			}

			int rowBefore = matrixA->RowCount;
			int columnBefore = matrixA->ColumnCount;
			for (int i = 0; i < rowBefore; ++i) {
				matrixA->Rows->Remove(matrixA->Rows[0]);
			}
			for (int i = 0; i < columnBefore; ++i) {
				matrixA->Columns->Remove(matrixA->Columns[0]);
			}

			// создание матрицы с новыми размерами
			for (int i = 0; i < column; ++i) {
				matrixA->Columns->Add("", "");
			}
			matrixA->Rows->Add(row);
			
			// Если кнопка единичной матрицы нажата, то создаем единичную матрицу
			if (rBtnUnitMatrix->Checked) {
				if (row == column) {
					for (int i = 0; i < row; ++i) {
						for (int j = 0; j < column; ++j) {
							// Если главная диагональ, то элемент == 1
							if (i == j) {
								matrixA->Rows[i]->Cells[j]->Value = 1;
							}
							// Иначе == 0
							else{
								matrixA->Rows[i]->Cells[j]->Value = 0;
							}
						}
					}
				}
				else {
					erPrSizeA->SetError(btnSizeA, "Матрица должна быть квадратной");
				}
			}
		}

		// Ввод размеров матрицы B
		System::Void btnSizeB_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearAll();
			int row;
			int column;
			
			bool resRow = Int32::TryParse(tbRowBInput->Text, row);
			bool resColumn = Int32::TryParse(tbColumnBInput->Text, column);

			//проверки
			if (!resRow && !resColumn) {
				erPrSizeB->SetError(btnSizeB, "Введено не целое число");
				return;
			}
			else if (row < 1 || column < 1) {
				erPrSizeB->SetError(btnSizeB, "Нельзя задать размер < 1");
				return;
			}

			int rowBefore = matrixB->RowCount;
			int columnBefore = matrixB->ColumnCount;
			for (int i = 0; i < rowBefore; ++i) {
				matrixB->Rows->Remove(matrixB->Rows[0]);
			}
			for (int i = 0; i < columnBefore; ++i) {
				matrixB->Columns->Remove(matrixB->Columns[0]);
			}

			// создание матрицы с новыми размерами
			for (int i = 0; i < column; ++i) {
				matrixB->Columns->Add("", "");
			}
			matrixB->Rows->Add(row);
			
			// Если кнопка единичной матрицы нажата, то создаем единичную матрицу
			if (rBtnUnitMatrix->Checked) {
				if (row == column) {
					for (int i = 0; i < row; ++i) {
						for (int j = 0; j < column; ++j) {
							// Если главная диагональ, то элемент == 1
							if (i == j) {
								matrixB->Rows[i]->Cells[j]->Value = 1;
							}
							// Иначе == 0
							else{
								matrixB->Rows[i]->Cells[j]->Value = 0;
							}
						}
					}
				}
				else {
					erPrSizeB->SetError(btnSizeB, "Матрица должна быть квадратной");
				}
			}
		}

		// Очисть матрицу результата
		void ClearMatrixResult() {
			int rowBefore = matrixResult->RowCount;
			int columnBefore = matrixResult->ColumnCount;
			for (int i = 0; i < rowBefore; ++i) {
				matrixResult->Rows->Remove(matrixResult->Rows[0]);
			}
			for (int i = 0; i < columnBefore; ++i) {
				matrixResult->Columns->Remove(matrixResult->Columns[0]);
			}
		}
		
		// Умножение матриц A и B
		void MultMatrix(int row, int column) {
			int mult;
			int a, b;
			bool check;
			for (int i = 0; i < column; i++) {
				for (int j = 0; j < row; j++) {
				mult = 0;
					for (int k = 0; k < matrixA->ColumnCount; k++) {
						// проверки на не целые числа/строки в матрице
						check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[j]->Cells[k]->Value), a);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[k]->Cells[i]->Value), b);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}

						mult += a * b;
					}
					matrixResult->Rows[j]->Cells[i]->Value = mult;
				}
			}
		}

		// Сумма матриц A и B
		void SumMatrix(int row, int column) {
			int a, b;
			bool check;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					// Проверки
					check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[i]->Cells[j]->Value), a);
					if (!check) {
						throw gcnew FormatException("В матрице присутствуют не целые числа");
					}
					check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[i]->Cells[j]->Value), b);
					if (!check) {
						throw gcnew FormatException("В матрице присутствуют не целые числа");
					}
					// Сумма
					matrixResult->Rows[i]->Cells[j]->Value = a + b;
				}
			}
		}

		// Разность матриц A и B
		void SubstractMatrix(int row, int column) {
			int a, b;
			bool check;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					// Проверки
					check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[i]->Cells[j]->Value), a);
					if (!check) {
						throw gcnew FormatException("В матрице присутствуют не целые числа");
					}
					check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[i]->Cells[j]->Value), b);
					if (!check) {
						throw gcnew FormatException("В матрице присутствуют не целые числа");
					}
					// Разность 
					matrixResult->Rows[i]->Cells[j]->Value = a - b;
				}
			}
		}

		// умножение матрицы A на число num
		void MultNum(int row, int column, int num) {
			int a;
			bool check;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					// Проверка на не целое число
					check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[i]->Cells[j]->Value), a);
					if (!check) {
						throw gcnew FormatException("В матрице присутствуют не целые числа");
					}
					// Умножение на число
					matrixResult->Rows[i]->Cells[j]->Value = a * num;
				}
			}
		}

		// Нахождение определителя
		int Determinant(int** matrix, int size) {
			int deter = 0;
			int sign = 1;

			// для матриц 1*1 и 2*2
			if (size == 1) {
				deter = matrix[0][0];
			}
			else if (size == 2) {
				deter = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
			}
			// разложение по Лапласу
			else {
				for (int i = 0; i < size; ++i) {
					int** addition = new int* [size - 1];
					for (int j = 0; j < size - 1; ++j) {
						addition[j] = new int[size - 1];
					}
					int row = 0;
					int column = 0;
					for (int j = 1; j < size; ++j) {
						for (int k = 0; k < size; ++k) {
							if (k == i) {
								continue;
							}
							addition[row][column] = matrix[j][k];
							column++;
						}
						row++;
						column = 0;
					}

					deter += sign * matrix[0][i] * Determinant(addition, size - 1);
					sign = -sign;
					for (int j = 0; j < size - 1; ++j) {
						delete[] addition[j];
					}
					delete[] addition;
				}
			}
			return deter;
		}

		// Нахождение ранга
		int Rank(int** matrix, int row, int column) {
			if (row > column) {
				column = row;
			}
			else {
				row = column;
			}

			// Заполняем доп матрицу, если она не квадратная изначально
			// то добавляем недостающее кол-во строк/столбцов с элементами = 0
			double** tempMatrix = new double* [row];
			for (int i = 0; i < row; ++i) {
				tempMatrix[i] = new double[row];
				for (int j = 0; j < column; ++j) {
					if (i >= matrixA->RowCount) {
						tempMatrix[i][j] = 0;
					}
					else if (j >= matrixA->ColumnCount) {
						tempMatrix[i][j] = 0;
					}
					else {
						tempMatrix[i][j] = matrix[i][j];
					}
				}
			}

			int rank = row;
			for (int row_i = 0; row_i < rank; ++row_i) {
				// Если диагональный элемент != 0
				if (tempMatrix[row_i][row_i]) {
					for (int column_i = 0; column_i < column; ++column_i) {
						if (column_i != row_i) {
							double mult = tempMatrix[column_i][row_i] /
								tempMatrix[row_i][row_i];
							for (int i = 0; i < rank; ++i) {
								tempMatrix[column_i][i] -= mult * tempMatrix[row_i][i];
							}
						}
					}
				}
				//Если диагональный элемент == 0, то
				else {
					bool reduce = true;
					// находим не нулевой элемент в данном столбце
					for (int i = row_i + 1; i < column; ++i) {
						// Меняем строку с ненулевым элементом с данной строкой
						if (tempMatrix[i][row_i]) {
							double* temp = tempMatrix[row_i];
							tempMatrix[row_i] = tempMatrix[i];
							tempMatrix[i] = temp;
							reduce = false;
							break;
						}
					}
					// Если не нашли не один ненулевой элемент в данном столбце
					// то все элементы этого столбца == 0
					if (reduce) {
						// уменьшаем ранг
						rank--;
						for (int i = 0; i < column; ++i) {
							tempMatrix[i][row_i] = tempMatrix[i][rank];
						}
					}
					// Прогоняем еще раз эту строку
					row_i--;
				}
			}
			return rank;
		}


		System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearAll();
			ClearMatrixResult();
			try {
				if (rBtnMultMatr->Checked) {
					// проверка на подходящий размер
					if (matrixA->ColumnCount != matrixB->RowCount) {
						throw gcnew ArgumentException("Кол-во столбцов матрицы A != кол-ву строк матрицы B");
					}
					// создание пустой матрицы результата
					int row = matrixA->RowCount;
					int column = matrixB->ColumnCount;
					for (int j = 0; j < column; j++) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(row);
					// умножение матриц и запись результата в matrixResult
					MultMatrix(row, column);
				}	
				else if (rBtnSum->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на равный размер
					if (row1 != row2 || column1 != column2) {
						throw gcnew ArgumentException("Размеры у матриц отличаются");
					}
					// создание пустой матрицы результата
					for (int j = 0; j < column1; j++) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(row1);
					// сумма матриц и запись результата в matrixResult
					SumMatrix(row1, column1);
				}
				else if (rBtnSubstract->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на равный размер
					if (row1 != row2 || column1 != column2) {
						throw gcnew ArgumentException("Размеры у матриц отличаются");
					}
					// создание пустой матрицы результата
					for (int j = 0; j < column1; j++) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(row1);
					// разность матриц и запись результата в matrixResult
					SubstractMatrix(row1, column1);
				}
				else if (rBtnMultNum->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на равный размер
					if (row2 != 1 && column2 != 1) {
						throw gcnew ArgumentException("В матрице B должна находится одна ячейка с числом");
					}
					// создание пустой матрицы результата
					for (int j = 0; j < column1; j++) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(row1);
					int num;
					bool check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[0]->Cells[0]->Value), num);
					if (!check) {
						throw gcnew FormatException("В матрице присутствуют не целые числа");
					}
					// умножение матрицы на число и запись результата в matrixResult
					MultNum(row1, column1, num);
				}
				else if (rBtnTransposition->Checked) {
					int row = matrixA->RowCount;
					int column = matrixA->ColumnCount;
					// создание пустой матрицы результата
					for (int j = 0; j < row; j++) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(column);
					// транспонирование матрицы A и запись результата в matrixResult
					int a;
					for (int i = 0; i < row; i++) {
						for (int j = 0; j < column; j++) {
							bool check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[i]->Cells[j]->Value), a);
							if (!check) {
								throw gcnew FormatException("В матрице присутствуют не целые числа");
							}
							matrixResult->Rows[j]->Cells[i]->Value = a;
						}
					}
				}
				else if (rBtnDetermA->Checked) {
					int row = matrixA->RowCount;
					int column = matrixA->ColumnCount;
					// проверка на квадратный размер
					if (row != column) {
						throw gcnew ArgumentException("Матрица должна быть квадратной");
					}
					// создание пустой матрицы результата
					matrixResult->Columns->Add("", "");
					matrixResult->Rows->Add(1);
					// считывание матрицы A
					int a;
					int** matrix = new int* [row];
					for (int i = 0; i < row; ++i) {
						matrix[i] = new int[row];
						for (int j = 0; j < row; ++j) {
							bool check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[i]->Cells[j]->Value), a);
							if (!check) {
								throw gcnew FormatException("В матрице присутствуют не целые числа");
							}
							matrix[i][j] = a;
						}
					}
					// нахождение определителя A и запись результата в matrixResult
					matrixResult->Rows[0]->Cells[0]->Value = Determinant(matrix, row);
				}
				else if (rBtnRankA->Checked) {
					int row = matrixA->RowCount;
					int column = matrixA->ColumnCount;
					// создание пустой матрицы результата
					matrixResult->Columns->Add("", "");
					matrixResult->Rows->Add(1);
					// считывание матрицы A
					int a;
					int** matrix = new int* [row];
					for (int i = 0; i < row; ++i) {
						matrix[i] = new int[column];
						for (int j = 0; j < column; ++j) {
							bool check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[i]->Cells[j]->Value), a);
							if (!check) {
								throw gcnew FormatException("В матрице присутствуют не целые числа");
							}
							matrix[i][j] = a;
						}
					}
					// нахождение ранга A и запись результата в matrixResult
					matrixResult->Rows[0]->Cells[0]->Value = Rank(matrix, row, column);
				}
				else if (rBtnScalar->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на корректность входных матриц (векторов)
					if (row1 != 1 && row2 != 1) {
						throw gcnew ArgumentException("Матрицы должны представлять из себя вектора (a_1,a_2,...,a_n)");
					}
					if (column1 != column2) {
						throw gcnew ArgumentException("Вектора должны быть одного размера");
					}
					// создание пустой матрицы результата
					matrixResult->Columns->Add("", "");
					matrixResult->Rows->Add(1);
					int a, b, scalar = 0;
					bool check;
					for (int i = 0; i < column1; i++){
						check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[0]->Cells[i]->Value), a);
						// Проверки на не целые числа
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[0]->Cells[i]->Value), b);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						scalar += a * b;
					}
					matrixResult->Rows[0]->Cells[0]->Value = scalar;
				}
				else if (rBtnVector->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на корректность входных матриц (векторов)
					if (row1 != 1 && row2 != 1) {
						throw gcnew ArgumentException("Матрицы должны представлять из себя вектора (a_1,a_2,...,a_n)");
					}
					if (column1 != 3 || column2 != 3) {
						throw gcnew ArgumentException("Работает для векторов с размером 3");
					}
					// создание пустой матрицы результата
					for (int i = 0; i < 3; ++i) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(1);
					// считывание вектора A
					int a;
					int* matrixAinp = new int [3];
					for (int i = 0; i < 3; ++i) {
						bool check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[0]->Cells[i]->Value), a);
						// Проверка на не целые числа
						if (!check){
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						matrixAinp[i] = a;
					}
					// считывание вектора B
					int b;
					int* matrixBinp = new int [3];
					for (int i = 0; i < 3; ++i) {
						bool check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[0]->Cells[i]->Value), b);
						// Проверка на не целые числа
						if (!check){
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						matrixBinp[i] = b;
					}

					int res = matrixAinp[1] * matrixBinp[2] - matrixAinp[2] * matrixBinp[1];
					matrixResult->Rows[0]->Cells[0]->Value = res;
					res = matrixAinp[2] * matrixBinp[0] - matrixAinp[0] * matrixBinp[2];
					matrixResult->Rows[0]->Cells[1]->Value = res;
					res = matrixAinp[0] * matrixBinp[1] - matrixAinp[1] * matrixBinp[0];
					matrixResult->Rows[0]->Cells[2]->Value = res;
				}
				else if (rBtnSumVec->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на корректность входных матриц (векторов)
					if (row1 != 1 && row2 != 1) {
						throw gcnew ArgumentException("Матрицы должны представлять из себя вектора (a_1,a_2,...,a_n)");
					}
					if (column1 != column2) {
						throw gcnew ArgumentException("Вектора должны быть одного размера");
					}
					// создание пустой матрицы результата
					for (int i = 0; i < column1; ++i) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(1);
					// сумма векторов
					int a, b;
					bool check;
					for (int i = 0; i < column1; i++){
						// Проверки на не целые числа
						check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[0]->Cells[i]->Value), a);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[0]->Cells[i]->Value), b);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						matrixResult->Rows[0]->Cells[i]->Value = a + b;
					}
				}
				else if (rBtnSubVec->Checked) {
					int row1 = matrixA->RowCount;
					int column1 = matrixA->ColumnCount;
					int row2 = matrixB->RowCount;
					int column2 = matrixB->ColumnCount;
					// проверка на корректность входных матриц (векторов)
					if (row1 != 1 && row2 != 1) {
						throw gcnew ArgumentException("Матрицы должны представлять из себя вектора (a_1,a_2,...,a_n)");
					}
					if (column1 != column2) {
						throw gcnew ArgumentException("Вектора должны быть одного размера");
					}
					// создание пустой матрицы результата
					for (int i = 0; i < column1; ++i) {
						matrixResult->Columns->Add("", "");
					}
					matrixResult->Rows->Add(1);
					// разность векторов
					int a, b;
					bool check;
					for (int i = 0; i < column1; i++){
						// Проверки на не целые числа
						check = Int32::TryParse(System::Convert::ToString(matrixA->Rows[0]->Cells[i]->Value), a);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						check = Int32::TryParse(System::Convert::ToString(matrixB->Rows[0]->Cells[i]->Value), b);
						if (!check) {
							throw gcnew FormatException("В матрице присутствуют не целые числа");
						}
						matrixResult->Rows[0]->Cells[i]->Value = a - b;
					}
				}


			}
			catch (Exception^ e) {
				this->erPrResult->SetError(btnResult, e->Message);
			}

		}

};
}
