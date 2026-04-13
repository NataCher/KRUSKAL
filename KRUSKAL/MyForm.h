#pragma once

namespace KRUSKAL {

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
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ lbl_1;
	private: System::Windows::Forms::Label^ lbl_2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown;



	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::Button^ btn_create_matrix;


	private: System::Windows::Forms::Button^ btn_start_algorithm;

	private: System::Windows::Forms::Button^ btn_random;
	private: System::Windows::Forms::Panel^ panel_1;
	private: System::Windows::Forms::Panel^ panel_2;
	private: System::Windows::Forms::Label^ lbl_3;
	private: System::Windows::Forms::Label^ Lbl_4;







	private: System::Windows::Forms::Label^ lbl_status;


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
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->lbl_1 = (gcnew System::Windows::Forms::Label());
			this->lbl_2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->btn_create_matrix = (gcnew System::Windows::Forms::Button());
			this->btn_start_algorithm = (gcnew System::Windows::Forms::Button());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->panel_1 = (gcnew System::Windows::Forms::Panel());
			this->panel_2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_3 = (gcnew System::Windows::Forms::Label());
			this->Lbl_4 = (gcnew System::Windows::Forms::Label());
			this->lbl_status = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Firebrick;
			this->btn_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->Location = System::Drawing::Point(1212, 12);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(79, 65);
			this->btn_exit->TabIndex = 0;
			this->btn_exit->Text = L"x";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// lbl_1
			// 
			this->lbl_1->AutoSize = true;
			this->lbl_1->Location = System::Drawing::Point(37, 35);
			this->lbl_1->Name = L"lbl_1";
			this->lbl_1->Size = System::Drawing::Size(202, 20);
			this->lbl_1->TabIndex = 1;
			this->lbl_1->Text = L"Введите вершины графа";
			// 
			// lbl_2
			// 
			this->lbl_2->AutoSize = true;
			this->lbl_2->Location = System::Drawing::Point(37, 74);
			this->lbl_2->Name = L"lbl_2";
			this->lbl_2->Size = System::Drawing::Size(143, 20);
			this->lbl_2->TabIndex = 2;
			this->lbl_2->Text = L"Введите матрицу";
			// 
			// numericUpDown
			// 
			this->numericUpDown->Location = System::Drawing::Point(245, 33);
			this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->Name = L"numericUpDown";
			this->numericUpDown->Size = System::Drawing::Size(109, 26);
			this->numericUpDown->TabIndex = 3;
			this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(41, 108);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 62;
			this->dataGridView->RowTemplate->Height = 28;
			this->dataGridView->Size = System::Drawing::Size(313, 238);
			this->dataGridView->TabIndex = 4;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// btn_create_matrix
			// 
			this->btn_create_matrix->Location = System::Drawing::Point(102, 365);
			this->btn_create_matrix->Name = L"btn_create_matrix";
			this->btn_create_matrix->Size = System::Drawing::Size(153, 44);
			this->btn_create_matrix->TabIndex = 5;
			this->btn_create_matrix->Text = L"Создать матрицу";
			this->btn_create_matrix->UseVisualStyleBackColor = true;
			this->btn_create_matrix->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_start_algorithm
			// 
			this->btn_start_algorithm->Location = System::Drawing::Point(458, 35);
			this->btn_start_algorithm->Name = L"btn_start_algorithm";
			this->btn_start_algorithm->Size = System::Drawing::Size(223, 59);
			this->btn_start_algorithm->TabIndex = 6;
			this->btn_start_algorithm->Text = L"Запуск алгоритма";
			this->btn_start_algorithm->UseVisualStyleBackColor = true;
			this->btn_start_algorithm->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn_random
			// 
			this->btn_random->Location = System::Drawing::Point(1097, 95);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(194, 77);
			this->btn_random->TabIndex = 7;
			this->btn_random->Text = L"Заполнить случайными числами";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel_1
			// 
			this->panel_1->Location = System::Drawing::Point(41, 425);
			this->panel_1->Name = L"panel_1";
			this->panel_1->Size = System::Drawing::Size(600, 459);
			this->panel_1->TabIndex = 8;
			// 
			// panel_2
			// 
			this->panel_2->Location = System::Drawing::Point(674, 425);
			this->panel_2->Name = L"panel_2";
			this->panel_2->Size = System::Drawing::Size(600, 459);
			this->panel_2->TabIndex = 9;
			// 
			// lbl_3
			// 
			this->lbl_3->AutoSize = true;
			this->lbl_3->Location = System::Drawing::Point(204, 904);
			this->lbl_3->Name = L"lbl_3";
			this->lbl_3->Size = System::Drawing::Size(278, 20);
			this->lbl_3->TabIndex = 10;
			this->lbl_3->Text = L"Связный неориентированный граф";
			// 
			// Lbl_4
			// 
			this->Lbl_4->AutoSize = true;
			this->Lbl_4->Location = System::Drawing::Point(856, 904);
			this->Lbl_4->Name = L"Lbl_4";
			this->Lbl_4->Size = System::Drawing::Size(326, 20);
			this->Lbl_4->TabIndex = 11;
			this->Lbl_4->Text = L"Каркас с минимальным суммарным весом";
			this->Lbl_4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// lbl_status
			// 
			this->lbl_status->AutoSize = true;
			this->lbl_status->Location = System::Drawing::Point(454, 123);
			this->lbl_status->Name = L"lbl_status";
			this->lbl_status->Size = System::Drawing::Size(62, 20);
			this->lbl_status->TabIndex = 12;
			this->lbl_status->Text = L"Статус";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1303, 978);
			this->Controls->Add(this->lbl_status);
			this->Controls->Add(this->Lbl_4);
			this->Controls->Add(this->lbl_3);
			this->Controls->Add(this->panel_2);
			this->Controls->Add(this->panel_1);
			this->Controls->Add(this->btn_random);
			this->Controls->Add(this->btn_start_algorithm);
			this->Controls->Add(this->btn_create_matrix);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->numericUpDown);
			this->Controls->Add(this->lbl_2);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
