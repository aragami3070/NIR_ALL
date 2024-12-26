#pragma once

namespace Winform9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MessageForm
	/// </summary>
	public ref class MessageForm : public System::Windows::Forms::Form
	{
	public:
		MessageForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		void setFlag(bool flagInp) {
			flag = flagInp;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MessageForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		bool flag = false;
	private: System::Windows::Forms::Label^ lblRight;
	private: System::Windows::Forms::Label^ lblWrong;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblRight = (gcnew System::Windows::Forms::Label());
			this->lblWrong = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblRight
			// 
			this->lblRight->AutoSize = true;
			this->lblRight->Location = System::Drawing::Point(80, 97);
			this->lblRight->Name = L"lblRight";
			this->lblRight->Size = System::Drawing::Size(104, 13);
			this->lblRight->TabIndex = 0;
			this->lblRight->Text = L"Вы ответили верно";
			// 
			// lblWrong
			// 
			this->lblWrong->AutoSize = true;
			this->lblWrong->Location = System::Drawing::Point(80, 97);
			this->lblWrong->Name = L"lblWrong";
			this->lblWrong->Size = System::Drawing::Size(119, 13);
			this->lblWrong->TabIndex = 1;
			this->lblWrong->Text = L"Вы ответили не верно";
			// 
			// MessageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblWrong);
			this->Controls->Add(this->lblRight);
			this->Name = L"MessageForm";
			this->Text = L"MessageForm";
			this->Load += gcnew System::EventHandler(this, &MessageForm::MessageForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MessageForm_Load(System::Object^ sender, System::EventArgs^ e) {
		lblRight->Hide();
		lblWrong->Hide();
		if (flag) {
			lblRight->Show();
		}
		else {
			lblWrong->Show();
		}
	}
	};
}
