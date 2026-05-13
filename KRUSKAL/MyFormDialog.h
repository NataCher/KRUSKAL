#pragma once

namespace KRUSKAL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyFormDialog: public System::Windows::Forms::Form
	{
	public:
		MyFormDialog(void)
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
		~MyFormDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ lbl_st;
	public: System::Windows::Forms::Button^ btn_ok;

	public:
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormDialog::typeid));
			this->lbl_st = (gcnew System::Windows::Forms::Label());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_st
			// 
			this->lbl_st->AutoSize = true;
			this->lbl_st->Font = (gcnew System::Drawing::Font(L"Courier New", 16));
			this->lbl_st->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lbl_st->Location = System::Drawing::Point(25, 71);
			this->lbl_st->Name = L"lbl_st";
			this->lbl_st->Size = System::Drawing::Size(129, 36);
			this->lbl_st->TabIndex = 0;
			this->lbl_st->Text = L"lbl_st";
			this->lbl_st->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_ok
			// 
			this->btn_ok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ok->Font = (gcnew System::Drawing::Font(L"Courier New", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ok->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_ok->Location = System::Drawing::Point(579, 151);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(160, 90);
			this->btn_ok->TabIndex = 1;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseMnemonic = false;
			this->btn_ok->UseVisualStyleBackColor = true;
			this->btn_ok->Click += gcnew System::EventHandler(this, &MyFormDialog::btn_ok_Click);
			// 
			// MyFormDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1336, 266);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->lbl_st);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Предупреждение";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyFormDialog::MyFormDialog_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		static void Show(String^ message) {
			MyFormDialog^ msg = gcnew MyFormDialog();
			msg->lbl_st->Text = message;
			msg->ShowDialog();
		}

	private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK; 	
		this->Close(); 
	}

	private: System::Void MyFormDialog_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		System::Drawing::Pen^ neon_pen = gcnew System::Drawing::Pen(System::Drawing::Color::FromArgb(0, 191, 255), 2);
		// Рисуем прямоугольник по границе всей формы
		// Отступаем 1 пиксель, чтобы рамка не обрезалась краем экрана
		e->Graphics->DrawRectangle(neon_pen, 1, 1, this->ClientSize.Width - 2, this->ClientSize.Height - 2);
		}
	};

}
