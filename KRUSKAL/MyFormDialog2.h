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
	public ref class MyFormDialog2 : public System::Windows::Forms::Form
	{
	public:
		MyFormDialog2(void)
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
		~MyFormDialog2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ lbll;
	protected:

	protected:

	public: System::Windows::Forms::Button^ btn_yes;
	private:
	public: System::Windows::Forms::Button^ btn_no;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormDialog2::typeid));
			this->lbll = (gcnew System::Windows::Forms::Label());
			this->btn_yes = (gcnew System::Windows::Forms::Button());
			this->btn_no = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbll
			// 
			this->lbll->AutoSize = true;
			this->lbll->Font = (gcnew System::Drawing::Font(L"Courier New", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbll->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lbll->Location = System::Drawing::Point(230, 62);
			this->lbll->Name = L"lbll";
			this->lbll->Size = System::Drawing::Size(224, 36);
			this->lbll->TabIndex = 0;
			this->lbll->Text = L"Вы уверены\?";
			// 
			// btn_yes
			// 
			this->btn_yes->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->btn_yes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_yes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_yes->Font = (gcnew System::Drawing::Font(L"Courier New", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_yes->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_yes->Location = System::Drawing::Point(164, 149);
			this->btn_yes->Name = L"btn_yes";
			this->btn_yes->Size = System::Drawing::Size(160, 90);
			this->btn_yes->TabIndex = 2;
			this->btn_yes->TabStop = false;
			this->btn_yes->Text = L"Да";
			this->btn_yes->UseMnemonic = false;
			this->btn_yes->UseVisualStyleBackColor = false;
			this->btn_yes->Click += gcnew System::EventHandler(this, &MyFormDialog2::btn_yes_Click);
			// 
			// btn_no
			// 
			this->btn_no->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_no->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_no->Font = (gcnew System::Drawing::Font(L"Courier New", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_no->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_no->Location = System::Drawing::Point(357, 149);
			this->btn_no->Name = L"btn_no";
			this->btn_no->Size = System::Drawing::Size(160, 90);
			this->btn_no->TabIndex = 3;
			this->btn_no->TabStop = false;
			this->btn_no->Text = L"Нет";
			this->btn_no->UseMnemonic = false;
			this->btn_no->UseVisualStyleBackColor = true;
			this->btn_no->Click += gcnew System::EventHandler(this, &MyFormDialog2::btn_no_Click);
			// 
			// MyFormDialog2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(686, 312);
			this->Controls->Add(this->btn_no);
			this->Controls->Add(this->btn_yes);
			this->Controls->Add(this->lbll);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormDialog2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выход из программы";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyFormDialog2::MyFormDialog2_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_yes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Yes;
		this->Close();
	}
	private: System::Void btn_no_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::No;
		this->Close();
}

	private: System::Void MyFormDialog2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		   // Создаем перо нужного цвета (голубой неон) и толщиной 2 пикселя
		System::Drawing::Pen^ neonPen = gcnew System::Drawing::Pen(System::Drawing::Color::FromArgb(0, 191, 255), 2);
		   // Рисуем прямоугольник по границе всей формы
		   // Отступаем 1 пиксель, чтобы рамка не обрезалась краем экрана
		e->Graphics->DrawRectangle(neonPen, 1, 1, this->ClientSize.Width - 2, this->ClientSize.Height - 2);
	 }
};
}
