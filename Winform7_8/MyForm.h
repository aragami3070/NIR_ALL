#pragma once

namespace Winform7_8 {

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
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ tBInputQue;
	private: System::Windows::Forms::TextBox^ tBOutputQue;
	protected:


	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::TextBox^ tBInputPush;


	private: System::Windows::Forms::TextBox^ tBOutputPop;
	private: System::Windows::Forms::Button^ btnPush;
	private: System::Windows::Forms::Button^ btnPop;
	private: System::Windows::Forms::Button^ btnInputQue;
	private: System::Windows::Forms::Button^ btnClearQue;
	private: System::Windows::Forms::Button^ btnSum;
	private: System::Windows::Forms::TextBox^ tBInputA;
	private: System::Windows::Forms::TextBox^ tBInputB;




	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Label^ lbl4;

	private: System::Windows::Forms::TextBox^ tBOutputNAM;


	private: System::Windows::Forms::Button^ btnNewAfterMax;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::TextBox^ tBInputNAM;
	private: System::Windows::Forms::ErrorProvider^ eP1;



	private: System::Windows::Forms::TextBox^ tBOutputSum;

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
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->tBInputQue = (gcnew System::Windows::Forms::TextBox());
			this->tBOutputQue = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->tBInputPush = (gcnew System::Windows::Forms::TextBox());
			this->tBOutputPop = (gcnew System::Windows::Forms::TextBox());
			this->btnPush = (gcnew System::Windows::Forms::Button());
			this->btnPop = (gcnew System::Windows::Forms::Button());
			this->btnInputQue = (gcnew System::Windows::Forms::Button());
			this->btnClearQue = (gcnew System::Windows::Forms::Button());
			this->btnSum = (gcnew System::Windows::Forms::Button());
			this->tBInputA = (gcnew System::Windows::Forms::TextBox());
			this->tBInputB = (gcnew System::Windows::Forms::TextBox());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->tBOutputNAM = (gcnew System::Windows::Forms::TextBox());
			this->btnNewAfterMax = (gcnew System::Windows::Forms::Button());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->tBInputNAM = (gcnew System::Windows::Forms::TextBox());
			this->eP1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->tBOutputSum = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eP1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(13, 17);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(79, 13);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Ввод очереди:";
			// 
			// tBInputQue
			// 
			this->tBInputQue->Location = System::Drawing::Point(98, 14);
			this->tBInputQue->Name = L"tBInputQue";
			this->tBInputQue->Size = System::Drawing::Size(100, 20);
			this->tBInputQue->TabIndex = 1;
			// 
			// tBOutputQue
			// 
			this->tBOutputQue->Location = System::Drawing::Point(73, 55);
			this->tBOutputQue->Name = L"tBOutputQue";
			this->tBOutputQue->ReadOnly = true;
			this->tBOutputQue->Size = System::Drawing::Size(125, 20);
			this->tBOutputQue->TabIndex = 3;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(14, 58);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(53, 13);
			this->lbl2->TabIndex = 2;
			this->lbl2->Text = L"Очередь:";
			// 
			// tBInputPush
			// 
			this->tBInputPush->Location = System::Drawing::Point(127, 119);
			this->tBInputPush->Name = L"tBInputPush";
			this->tBInputPush->Size = System::Drawing::Size(75, 20);
			this->tBInputPush->TabIndex = 5;
			// 
			// tBOutputPop
			// 
			this->tBOutputPop->Location = System::Drawing::Point(234, 119);
			this->tBOutputPop->Name = L"tBOutputPop";
			this->tBOutputPop->ReadOnly = true;
			this->tBOutputPop->Size = System::Drawing::Size(75, 20);
			this->tBOutputPop->TabIndex = 6;
			// 
			// btnPush
			// 
			this->btnPush->Location = System::Drawing::Point(127, 155);
			this->btnPush->Name = L"btnPush";
			this->btnPush->Size = System::Drawing::Size(75, 23);
			this->btnPush->TabIndex = 7;
			this->btnPush->Text = L"Push";
			this->btnPush->UseVisualStyleBackColor = true;
			this->btnPush->Click += gcnew System::EventHandler(this, &MyForm::btnPush_Click);
			// 
			// btnPop
			// 
			this->btnPop->Location = System::Drawing::Point(234, 155);
			this->btnPop->Name = L"btnPop";
			this->btnPop->Size = System::Drawing::Size(75, 23);
			this->btnPop->TabIndex = 8;
			this->btnPop->Text = L"Pop";
			this->btnPop->UseVisualStyleBackColor = true;
			this->btnPop->Click += gcnew System::EventHandler(this, &MyForm::btnPop_Click);
			// 
			// btnInputQue
			// 
			this->btnInputQue->Location = System::Drawing::Point(234, 12);
			this->btnInputQue->Name = L"btnInputQue";
			this->btnInputQue->Size = System::Drawing::Size(178, 23);
			this->btnInputQue->TabIndex = 9;
			this->btnInputQue->Text = L"Добавить элементы в очередь";
			this->btnInputQue->UseVisualStyleBackColor = true;
			this->btnInputQue->Click += gcnew System::EventHandler(this, &MyForm::btnInputQue_Click);
			// 
			// btnClearQue
			// 
			this->btnClearQue->Location = System::Drawing::Point(234, 53);
			this->btnClearQue->Name = L"btnClearQue";
			this->btnClearQue->Size = System::Drawing::Size(178, 23);
			this->btnClearQue->TabIndex = 10;
			this->btnClearQue->Text = L"Очистить очередь";
			this->btnClearQue->UseVisualStyleBackColor = true;
			this->btnClearQue->Click += gcnew System::EventHandler(this, &MyForm::btnClearQue_Click);
			// 
			// btnSum
			// 
			this->btnSum->Location = System::Drawing::Point(139, 293);
			this->btnSum->Name = L"btnSum";
			this->btnSum->Size = System::Drawing::Size(156, 23);
			this->btnSum->TabIndex = 12;
			this->btnSum->Text = L"Сумма четных в интервале";
			this->btnSum->UseVisualStyleBackColor = true;
			this->btnSum->Click += gcnew System::EventHandler(this, &MyForm::btnSum_Click);
			// 
			// tBInputA
			// 
			this->tBInputA->Location = System::Drawing::Point(139, 219);
			this->tBInputA->Name = L"tBInputA";
			this->tBInputA->Size = System::Drawing::Size(75, 20);
			this->tBInputA->TabIndex = 11;
			// 
			// tBInputB
			// 
			this->tBInputB->Location = System::Drawing::Point(220, 219);
			this->tBInputB->Name = L"tBInputB";
			this->tBInputB->Size = System::Drawing::Size(75, 20);
			this->tBInputB->TabIndex = 13;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(125, 93);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(184, 13);
			this->lbl3->TabIndex = 14;
			this->lbl3->Text = L"Добавить / удалить один элемент:\r\n";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(171, 190);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(83, 13);
			this->lbl4->TabIndex = 15;
			this->lbl4->Text = L"Интервал [a,b]:";
			// 
			// tBOutputNAM
			// 
			this->tBOutputNAM->Location = System::Drawing::Point(29, 367);
			this->tBOutputNAM->Name = L"tBOutputNAM";
			this->tBOutputNAM->ReadOnly = true;
			this->tBOutputNAM->Size = System::Drawing::Size(373, 20);
			this->tBOutputNAM->TabIndex = 17;
			// 
			// btnNewAfterMax
			// 
			this->btnNewAfterMax->Location = System::Drawing::Point(29, 403);
			this->btnNewAfterMax->Name = L"btnNewAfterMax";
			this->btnNewAfterMax->Size = System::Drawing::Size(373, 23);
			this->btnNewAfterMax->TabIndex = 18;
			this->btnNewAfterMax->Text = L"Новая очередь (новый элемент после всех макс)";
			this->btnNewAfterMax->UseVisualStyleBackColor = true;
			this->btnNewAfterMax->Click += gcnew System::EventHandler(this, &MyForm::btnNewAfterMax_Click);
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Location = System::Drawing::Point(110, 334);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(90, 13);
			this->lbl5->TabIndex = 19;
			this->lbl5->Text = L"Новый элемент:";
			// 
			// tBInputNAM
			// 
			this->tBInputNAM->Location = System::Drawing::Point(206, 331);
			this->tBInputNAM->Name = L"tBInputNAM";
			this->tBInputNAM->Size = System::Drawing::Size(118, 20);
			this->tBInputNAM->TabIndex = 20;
			// 
			// eP1
			// 
			this->eP1->ContainerControl = this;
			// 
			// tBOutputSum
			// 
			this->tBOutputSum->Location = System::Drawing::Point(163, 257);
			this->tBOutputSum->Name = L"tBOutputSum";
			this->tBOutputSum->ReadOnly = true;
			this->tBOutputSum->Size = System::Drawing::Size(100, 20);
			this->tBOutputSum->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 443);
			this->Controls->Add(this->tBOutputSum);
			this->Controls->Add(this->tBInputNAM);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->btnNewAfterMax);
			this->Controls->Add(this->tBOutputNAM);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->tBInputB);
			this->Controls->Add(this->btnSum);
			this->Controls->Add(this->tBInputA);
			this->Controls->Add(this->btnClearQue);
			this->Controls->Add(this->btnInputQue);
			this->Controls->Add(this->btnPop);
			this->Controls->Add(this->btnPush);
			this->Controls->Add(this->tBOutputPop);
			this->Controls->Add(this->tBInputPush);
			this->Controls->Add(this->tBOutputQue);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->tBInputQue);
			this->Controls->Add(this->lbl1);
			this->Name = L"MyForm";
			this->Text = L"Winform7_8";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eP1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Collections::Generic::Queue<int> q;
		// Очистка errorProvider-ов
		void ClearEP() {
			eP1->Clear();
		}

		void QueueOutput() {
			// Вспомогательная очередь
			System::Collections::Generic::Queue<int> buffer;
			String^ str = "";
			// Пока очередь не пуста
			while (q.Count) {
				// Записываем во вспомогательную очередь первый элемент
				buffer.Enqueue(q.Peek());
				// Удаляем первый элемент очереди
				q.Dequeue();
			}
			// Пока очередь не пуста
			while (buffer.Count) {
				// Записываем в основную очередь первый элемент
				q.Enqueue(buffer.Peek());
				// Записываем первый элемент очереди в строку
				str += System::Convert::ToString(buffer.Peek() + " ");
				// Удаляем первый элемент очереди
				buffer.Dequeue();
			}
			// Выводим результат
			this->tBOutputQue->Text = str->Substring(0, str->Length - 1);
		}

		private: System::Void btnInputQue_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearEP();
			// Вспомогательная очередь
			System::Collections::Generic::Queue<int> buffer;
			// Считываем строку
			String^ str = Convert::ToString(this->tBInputQue->Text);
			int number, index;
			int pos = 0;
			if (str->IndexOf(",") != -1 || str->IndexOf(".") != -1) {
				this->eP1->SetError(btnInputQue, "Не правильный формат ввода очереди (элементы через пробел, без ,. и тд");
				return;
			}
			else {
				str += " ";
				// Позиция первого пробела
				index = str->IndexOf(" ");
				String^ str2 = "";
				// Пока находим пробел
				while (index != -1) {
					// Считываем число
					str2 = str->Substring(pos, index - pos);
					pos = index + 1;
					bool res = Int32::TryParse(str2, number);
					// Проверка на число
					if (!res) {
						this->eP1->SetError(btnInputQue, "Очередь должна состоять только из целых чисел");
						buffer.Clear();
						return;
					}
					else {
						// Проверка на лишние пробелы (без нее могут добавляться лишние элементы - 0)
						if (str->IndexOf(" ", pos) == pos) {
							this->eP1->SetError(btnInputQue, "Очередь содержит лишние пробелы");
							buffer.Clear();
							return;
						}
						else {
							// Записываем во вспомогательную очередь
							buffer.Enqueue(number);
							// Ищем следующий индекс
							index = str->IndexOf(" ", pos);
						}
					}
				}
				// Вспомогательная очередь
				System::Collections::Generic::Queue<int> buffer2;
				str2 = "";
				// Пока очередь не пуста
				while (q.Count) {
					// Записываем во вспомогательную очередь первый элемент
					buffer2.Enqueue(q.Peek());
					// Удаляем первый элемент очереди
					q.Dequeue();
				}
				// Пока очередь не пуста
				while (buffer.Count) {
					// Записываем во вспомогательную очередь первый элемент
					buffer2.Enqueue(buffer.Peek());
					// Удаляем первый элемент очереди
					buffer.Dequeue();
				}
				// Пока очередь не пуста
				while (buffer2.Count) {
					// Записываем в основную очередь первый элемент
					q.Enqueue(buffer2.Peek());
					// Записываем первый элемент очереди в строку
					str2 += System::Convert::ToString(buffer2.Peek() + " ");
					// Удаляем первый элемент очереди
					buffer2.Dequeue();
				}
				// Выводим результат
			this->tBOutputQue->Text = str2->Substring(0, str2->Length - 1);
			}
		}

		// Очистить поле вывода очереди и очередь
		private: System::Void btnClearQue_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearEP();
			q.Clear();
			this->tBOutputQue->Clear();
		}

		private: System::Void btnPush_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearEP();
			// Вспомогательная очередь
			System::Collections::Generic::Queue<int> buffer;
			// Считываем число
			int number;
			bool res = Int32::TryParse(tBInputPush->Text, number);
			String^ str = "";
			// Проверка на число
			if (!res) {
				this->eP1->SetError(btnPush, "Не целое число");
				buffer.Clear();
				return;
			}
			q.Enqueue(number);
			QueueOutput();
		}

		private: System::Void btnPop_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearEP();
			this->tBOutputPop->Clear();
			// Проверка на непустую очередь
			if (q.Count) {
				// Считываем певрое число
				String^ str = Convert::ToString(q.Peek());
				// Выводим число
				this->tBOutputPop->Text = str;
				// Удаляем первый элемент
				q.Dequeue();
				// Если в очереди есть элементы, то выводим
				if (q.Count) {
					QueueOutput();
				}
				else {
					this->tBOutputQue->Clear();
				}
			}
			else {
				this->eP1->SetError(btnPop, "Пустая очередь");
				return;
			}
		}

		private: System::Void btnSum_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearEP();
			// Вспомогательная очередь
			System::Collections::Generic::Queue<int> buffer;
			int a, b;
			bool resA = Int32::TryParse(tBInputA->Text, a);
			bool resB = Int32::TryParse(tBInputB->Text, b);
			int sum = 0, i = 0;
			if (!resA) {
				this->eP1->SetError(tBInputA, "Не целое число");
				return;
			}
			if (!resB) {
				this->eP1->SetError(tBInputB, "Не целое число");
				return;
			}
			if (a < 0 || a > b || a > q.Count) {
				this->eP1->SetError(tBInputA, "Не верный интервал");
				return;
			}
			if (b > q.Count) {
				this->eP1->SetError(tBInputB, "Не верный интервал");
				return;
			}

			// Пока очередь не пуста
			while (q.Count) {
				// Записываем во вспомогательную очередь первый элемент
				buffer.Enqueue(q.Peek());
				// Суммируем четные элементы
				if (q.Peek() % 2 == 0 && (i >= a && i <= b)) {
					sum += q.Peek();
				}
				// Удаляем первый элемент очереди
				q.Dequeue();
				i++;
			}
			// Пока очередь не пуста
			while (buffer.Count) {
				// Записываем в основную очередь первый элемент
				q.Enqueue(buffer.Peek());
				// Удаляем первый элемент очереди
				buffer.Dequeue();
			}
			// Выводим результат
			this->tBOutputSum->Text = Convert::ToString(sum);
		}

		private: System::Void btnNewAfterMax_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearEP();
			this->tBOutputNAM->Clear();
			// Вспомогательная очередь
			System::Collections::Generic::Queue<int> buffer;
			System::Collections::Generic::Queue<int> buffer2;
			if (!q.Count) {
				this->eP1->SetError(btnNewAfterMax, "Пустая очередь");
				return;
			}
			int number, max = q.Peek();
			bool res = Int32::TryParse(tBInputNAM->Text, number);
			if (!res) {
				this->eP1->SetError(tBInputNAM, "Не целое число");
				return;
			}
			// Пока очередь не пуста
			while (q.Count) {
				// Записываем во вспомогательную очередь первый элемент
				buffer2.Enqueue(q.Peek());
				// Находим максимум
				if (q.Peek() > max) {
					max = q.Peek();
				}
				// Удаляем первый элемент очереди
				q.Dequeue();
			}
			// Пока очередь не пуста
			while (buffer2.Count) {
				// Записываем в основную очередь первый элемент
				q.Enqueue(buffer2.Peek());
				// Удаляем первый элемент очереди
				buffer2.Dequeue();
			}
			// Пока очередь не пуста
			while (q.Count) {
				// Записываем во вспомогательную очередь первый элемент
				buffer.Enqueue(q.Peek());
				// Записываем после максимальных элементов новый элемент
				if (q.Peek() == max) {
					buffer.Enqueue(number);
				}
				buffer2.Enqueue(q.Peek());
				// Удаляем первый элемент очереди
				q.Dequeue();
			}
			String^ result = "";
			// Пока очередь не пуста
			while (buffer2.Count) {
				// Записываем в основную очередь первый элемент
				q.Enqueue(buffer2.Peek());
				// Удаляем первый элемент очереди
				buffer2.Dequeue();
			}
			while (buffer.Count) {
				// Записываем результат
				result += System::Convert::ToString(buffer.Peek() + " ");
				// Удаляем первый элемент очереди
				buffer.Dequeue();
			}
			this->tBOutputNAM->Text = result;
		}
};
}
