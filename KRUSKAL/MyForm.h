#pragma once

#include "MyFormDialog.h"
#include "MyFormDialog2.h"

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
	private: System::Windows::Forms::Button^ btn_run;




	private: System::Windows::Forms::Button^ btn_random;
	private: System::Windows::Forms::Panel^ panel_1;
	private: System::Windows::Forms::Panel^ panel_2;
	private: System::Windows::Forms::Label^ lbl_3;
	private: System::Windows::Forms::Label^ Lbl_4;

	private: System::Windows::Forms::Label^ lbl_status;
	private: System::Windows::Forms::Button^ btn_minimaze;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::ListBox^ lst_box;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_stop;



	private: System::ComponentModel::IContainer^ components;

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->lbl_1 = (gcnew System::Windows::Forms::Label());
			this->lbl_2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->btn_create_matrix = (gcnew System::Windows::Forms::Button());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->panel_1 = (gcnew System::Windows::Forms::Panel());
			this->panel_2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_3 = (gcnew System::Windows::Forms::Label());
			this->Lbl_4 = (gcnew System::Windows::Forms::Label());
			this->lbl_status = (gcnew System::Windows::Forms::Label());
			this->btn_minimaze = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lst_box = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_stop = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::MidnightBlue;
			this->btn_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_exit->Location = System::Drawing::Point(1925, 0);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(70, 64);
			this->btn_exit->TabIndex = 0;
			this->btn_exit->TabStop = false;
			this->btn_exit->Text = L"x";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// lbl_1
			// 
			this->lbl_1->AutoSize = true;
			this->lbl_1->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_1->ForeColor = System::Drawing::Color::SkyBlue;
			this->lbl_1->Location = System::Drawing::Point(35, 80);
			this->lbl_1->Name = L"lbl_1";
			this->lbl_1->Size = System::Drawing::Size(371, 31);
			this->lbl_1->TabIndex = 1;
			this->lbl_1->Text = L"Введите вершины графа";
			// 
			// lbl_2
			// 
			this->lbl_2->AutoSize = true;
			this->lbl_2->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_2->ForeColor = System::Drawing::Color::SkyBlue;
			this->lbl_2->Location = System::Drawing::Point(36, 197);
			this->lbl_2->Name = L"lbl_2";
			this->lbl_2->Size = System::Drawing::Size(222, 27);
			this->lbl_2->TabIndex = 2;
			this->lbl_2->Text = L"Введите матрицу";
			// 
			// numericUpDown
			// 
			this->numericUpDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->numericUpDown->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->numericUpDown->Location = System::Drawing::Point(497, 76);
			this->numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->Name = L"numericUpDown";
			this->numericUpDown->Size = System::Drawing::Size(123, 35);
			this->numericUpDown->TabIndex = 3;
			this->numericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToResizeColumns = false;
			this->dataGridView->AllowUserToResizeRows = false;
			this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView->ColumnHeadersHeight = 34;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView->EnableHeadersVisualStyles = false;
			this->dataGridView->GridColor = System::Drawing::Color::DeepSkyBlue;
			this->dataGridView->Location = System::Drawing::Point(42, 222);
			this->dataGridView->Name = L"dataGridView";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView->RowHeadersWidth = 50;
			this->dataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->dataGridView->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView->RowTemplate->Height = 28;
			this->dataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView->Size = System::Drawing::Size(578, 402);
			this->dataGridView->TabIndex = 4;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_CellContentClick);
			this->dataGridView->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &MyForm::dataGridView_CellFormatting);
			this->dataGridView->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_CellValueChanged);
			this->dataGridView->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &MyForm::dataGridView_EditingControlShowing);
			// 
			// btn_create_matrix
			// 
			this->btn_create_matrix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btn_create_matrix->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_create_matrix->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->btn_create_matrix->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_create_matrix->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_create_matrix->Font = (gcnew System::Drawing::Font(L"Courier New", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_create_matrix->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_create_matrix->Location = System::Drawing::Point(41, 122);
			this->btn_create_matrix->Name = L"btn_create_matrix";
			this->btn_create_matrix->Size = System::Drawing::Size(577, 72);
			this->btn_create_matrix->TabIndex = 5;
			this->btn_create_matrix->Text = L"Создать матрицу";
			this->btn_create_matrix->UseVisualStyleBackColor = false;
			this->btn_create_matrix->Click += gcnew System::EventHandler(this, &MyForm::btn_create_matrix_Click);
			// 
			// btn_run
			// 
			this->btn_run->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btn_run->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_run->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_run->Font = (gcnew System::Drawing::Font(L"Courier New", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_run->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_run->Location = System::Drawing::Point(42, 708);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(579, 72);
			this->btn_run->TabIndex = 6;
			this->btn_run->TabStop = false;
			this->btn_run->Text = L"Запуск алгоритма";
			this->btn_run->UseVisualStyleBackColor = false;
			this->btn_run->Click += gcnew System::EventHandler(this, &MyForm::btn_run_Click);
			// 
			// btn_random
			// 
			this->btn_random->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btn_random->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_random->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_random->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_random->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_random->Location = System::Drawing::Point(44, 630);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(577, 72);
			this->btn_random->TabIndex = 7;
			this->btn_random->TabStop = false;
			this->btn_random->Text = L"Заполнить случайными числами";
			this->btn_random->UseVisualStyleBackColor = false;
			this->btn_random->Click += gcnew System::EventHandler(this, &MyForm::btn_random_Click);
			// 
			// panel_1
			// 
			this->panel_1->BackColor = System::Drawing::Color::Black;
			this->panel_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_1->Location = System::Drawing::Point(41, 822);
			this->panel_1->Name = L"panel_1";
			this->panel_1->Size = System::Drawing::Size(943, 661);
			this->panel_1->TabIndex = 8;
			// 
			// panel_2
			// 
			this->panel_2->BackColor = System::Drawing::Color::Black;
			this->panel_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_2->Location = System::Drawing::Point(1019, 822);
			this->panel_2->Name = L"panel_2";
			this->panel_2->Size = System::Drawing::Size(946, 661);
			this->panel_2->TabIndex = 9;
			// 
			// lbl_3
			// 
			this->lbl_3->AutoSize = true;
			this->lbl_3->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lbl_3->Location = System::Drawing::Point(236, 1492);
			this->lbl_3->Name = L"lbl_3";
			this->lbl_3->Size = System::Drawing::Size(524, 31);
			this->lbl_3->TabIndex = 10;
			this->lbl_3->Text = L"Связный неориентированный граф";
			// 
			// Lbl_4
			// 
			this->Lbl_4->AutoSize = true;
			this->Lbl_4->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lbl_4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->Lbl_4->Location = System::Drawing::Point(1204, 1492);
			this->Lbl_4->Name = L"Lbl_4";
			this->Lbl_4->Size = System::Drawing::Size(626, 31);
			this->Lbl_4->TabIndex = 11;
			this->Lbl_4->Text = L"Каркас с минимальным суммарным весом";
			this->Lbl_4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// lbl_status
			// 
			this->lbl_status->AutoSize = true;
			this->lbl_status->Font = (gcnew System::Drawing::Font(L"Courier New", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_status->ForeColor = System::Drawing::Color::SkyBlue;
			this->lbl_status->Location = System::Drawing::Point(645, 153);
			this->lbl_status->Name = L"lbl_status";
			this->lbl_status->Size = System::Drawing::Size(0, 41);
			this->lbl_status->TabIndex = 12;
			this->lbl_status->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// btn_minimaze
			// 
			this->btn_minimaze->BackColor = System::Drawing::Color::MidnightBlue;
			this->btn_minimaze->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_minimaze->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minimaze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minimaze->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_minimaze->Location = System::Drawing::Point(1852, 0);
			this->btn_minimaze->Name = L"btn_minimaze";
			this->btn_minimaze->Size = System::Drawing::Size(67, 64);
			this->btn_minimaze->TabIndex = 13;
			this->btn_minimaze->Text = L"_";
			this->btn_minimaze->UseVisualStyleBackColor = false;
			this->btn_minimaze->Click += gcnew System::EventHandler(this, &MyForm::btn_minimaze_Click);
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// lst_box
			// 
			this->lst_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lst_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lst_box->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lst_box->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lst_box->FormattingEnabled = true;
			this->lst_box->ItemHeight = 31;
			this->lst_box->Location = System::Drawing::Point(652, 222);
			this->lst_box->Name = L"lst_box";
			this->lst_box->Size = System::Drawing::Size(1313, 558);
			this->lst_box->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label1->Location = System::Drawing::Point(748, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(605, 63);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Алгоритм Краскала";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->btn_stop);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_minimaze);
			this->panel1->Controls->Add(this->btn_exit);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1995, 64);
			this->panel1->TabIndex = 16;
			// 
			// btn_stop
			// 
			this->btn_stop->BackColor = System::Drawing::Color::MidnightBlue;
			this->btn_stop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_stop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_stop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_stop->Location = System::Drawing::Point(1779, 0);
			this->btn_stop->Name = L"btn_stop";
			this->btn_stop->Size = System::Drawing::Size(67, 64);
			this->btn_stop->TabIndex = 17;
			this->btn_stop->Text = L"||";
			this->btn_stop->UseVisualStyleBackColor = false;
			this->btn_stop->Click += gcnew System::EventHandler(this, &MyForm::btn_stop_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1996, 1532);
			this->Controls->Add(this->panel_2);
			this->Controls->Add(this->lst_box);
			this->Controls->Add(this->lbl_status);
			this->Controls->Add(this->Lbl_4);
			this->Controls->Add(this->lbl_3);
			this->Controls->Add(this->panel_1);
			this->Controls->Add(this->btn_random);
			this->Controls->Add(this->btn_run);
			this->Controls->Add(this->btn_create_matrix);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->numericUpDown);
			this->Controls->Add(this->lbl_2);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Алгоритм Краскала";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool paused = false;
		int node_сount;
		array<Point>^ node_positions; 

		value struct edge {
			int u;
			int v;
			int weight;
		};

		ref class DSU {
			array<int>^ parent;
		public:
			DSU(int n) {
				parent = gcnew array<int>(n + 1);
				for (int i = 0; i <= n; i++) parent[i] = i;
			}
			int find(int i) {
				if (parent[i] == i) return i;
				return parent[i] = find(parent[i]);
			}
			void unite(int i, int j) {
				int root_i = find(i);
				int root_j = find(j);
				if (root_i != root_j) parent[root_i] = root_j;
			}
		};

		System::Collections::Generic::List<edge>^ animation_edges;
		System::Collections::Generic::List<edge>^ curent_MST;
		int current_edge_index;
		DSU^ animation_DSU;

		//Функция для получения списка всех ребер
		System::Collections::Generic::List<edge>^ GetEdgesFromGrid() {
			auto edges = gcnew System::Collections::Generic::List<edge>();
			int n = dataGridView->RowCount;

			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) { 
					if (dataGridView->Rows[i]->Cells[j]->Value != nullptr) {

						String^ cell_val = dataGridView->Rows[i]->Cells[j]->Value->ToString();
						if (!String::IsNullOrWhiteSpace(cell_val)) {
							int w = System::Convert::ToInt32(cell_val);
							if (w > 0) {
								edge e;
								e.u = i;
								e.v = j;
								e.weight = w;
								edges->Add(e);
							}
						}

					}
				}
			}
			return edges;
		}

	private:System::Void dataGridView_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0 && e->RowIndex != e->ColumnIndex) {
			//копируем значение в симметричную ячейку
			dataGridView->Rows[e->ColumnIndex]->Cells[e->RowIndex]->Value = dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
		}
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormDialog2^ dyn = gcnew MyFormDialog2();
		if (dyn->ShowDialog() == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private:
		System::Void btn_create_matrix_Click(System::Object^ sender, System::EventArgs^ e) {
			
			timer->Stop();
			current_edge_index = 0;
			paused = false;
			btn_stop->Text = "||";

			if (animation_edges != nullptr) animation_edges->Clear();
			if (curent_MST != nullptr) curent_MST->Clear();

			node_сount = (int)numericUpDown->Value;
			node_positions = gcnew array<Point>(node_сount);
			Random^ rnd = gcnew Random();
			int n = node_сount;
			int padding = 60; // Отступ от краев панели
			int min_distance = 55; // минимальное расстояние между центрами вершин

			for (int i = 0; i < node_сount; i++) {
				bool position_is_ok = false;
				Point new_point;
				int attempts = 0;

				while (!position_is_ok && attempts < 1000) { // Увеличен лимит итераций
					position_is_ok = true;
					new_point = Point(
						rnd->Next(padding, panel_1->Width - padding),
						rnd->Next(padding, panel_1->Height - padding)
					);

					for (int j = 0; j < i; j++) {
						double dx = new_point.X - node_positions[j].X;
						double dy = new_point.Y - node_positions[j].Y;
						double dist = Math::Sqrt(dx * dx + dy * dy);

						if (dist < min_distance) {
							position_is_ok = false;
						}
					}
					attempts++;
				}

				node_positions[i] = new_point;
			}

			dataGridView->AllowUserToAddRows = false;
			dataGridView->RowCount = n;
			dataGridView->ColumnCount = n;

			for (int i = 0; i < n; i++) {
				dataGridView->Columns[i]->Width = 30;
				char letter = (char)(65 + i);
				dataGridView->Columns[i]->HeaderText = gcnew String(letter, 1);
				dataGridView->Rows[i]->HeaderCell->Value = gcnew String(letter, 1);

				for (int j = 0; j < n; j++) {
					if (i == j) {
						dataGridView->Rows[i]->Cells[j]->Value = "0";
						dataGridView->Rows[i]->Cells[j]->ReadOnly = true;
					}
				}
			}

			//Настройка заголовков таблицы
			for (int i = 0; i < n; i++) {
				char letter = (char)(65 + i);
				dataGridView->Columns[i]->HeaderText = gcnew String(letter, 1);
				dataGridView->Rows[i]->HeaderCell->Value = gcnew String(letter, 1);
				dataGridView->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
			}
		}

	private: System::Void dataGridView_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
		// Проверяем, что в ячейке есть значение
		if (e->Value != nullptr) {
			String^ cell_text = e->Value->ToString();

			// Если значение равно "0"
			if (cell_text == "0") {
				e->CellStyle->ForeColor = Color::White; // Устанавливаем белый цвет текста
				e->CellStyle->SelectionForeColor = Color::Cyan; // Цвет текста при выделении
			}
			else {
				e->CellStyle->ForeColor = Color::DeepSkyBlue;
			}
		}
	}

	private: System::Void btn_random_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		//Проверяем, создана ли матрица(количество строк больше 0)
		int rows = dataGridView->RowCount;
		bool is_matrix_created = false;

		if (rows > 0) {
			is_matrix_created = true;
		}
		//Если матрица создана — заполняем, если нет — выводим предупреждение
		if (is_matrix_created) {
			// Проходим только по верхней треугольной части для симметрии
			for (int i = 0; i < rows; i++) {
				for (int j = i + 1; j < rows; j++) {

					int weight = rand->Next(1, 51);

					// Устанавливаем симметричные значения
					dataGridView->Rows[i]->Cells[j]->Value = weight.ToString();
					dataGridView->Rows[j]->Cells[i]->Value = weight.ToString();
				}
			}
		}
		else {

			MyFormDialog^ dlg = gcnew MyFormDialog();
			dlg->lbl_st->Text = "Сначала создайте матрицу, указав количество вершин";
			dlg->lbl_st->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			dlg->lbl_st->AutoSize = true;
			dlg->Width = dlg->lbl_st->Width + 60;
			dlg->Height = dlg->lbl_st->Height + dlg->btn_ok->Height + 80;
			dlg->btn_ok->Left = (dlg->ClientSize.Width - dlg->btn_ok->Width) / 2;
			dlg->btn_ok->Top = dlg->lbl_st->Bottom + 20;
			dlg->ShowDialog();

		}
	}
	void bubble_sort_edges(System::Collections::Generic::List<edge>^ edges) {
		int n = edges->Count;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (edges[j].weight > edges[j + 1].weight) {
					edge temp = edges[j];
					edges[j] = edges[j + 1];
					edges[j + 1] = temp;
				}
			 }
		}
	}

	private: bool is_edge_in_MST(edge target) {
		bool found = false;
		if (curent_MST != nullptr) {
			for (int i = 0; i < curent_MST->Count; i++) {
				edge e = curent_MST[i];
				// Проверяем неориентированную связь (в обе стороны)
				if ((e.u == target.u && e.v == target.v) || (e.u == target.v && e.v == target.u)) {
					found = true;
				}
			}
		}
		return found;
	}
	void DrawGraph(Panel^ p, System::Collections::Generic::List<edge>^ edges_to_draw, int node_count, bool is_result_panel) {
		if (node_positions != nullptr) {
			Graphics^ g = p->CreateGraphics();
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			g->TextRenderingHint = System::Drawing::Text::TextRenderingHint::AntiAlias;
			g->Clear(Color::Black);

			StringFormat^ sf = gcnew StringFormat();
			sf->Alignment = StringAlignment::Center;
			sf->LineAlignment = StringAlignment::Center;
			System::Drawing::Font^ f_weight = gcnew System::Drawing::Font("Consolas", 11, FontStyle::Bold);

			// --- ОТРИСОВКА РЕБЕР ---
			for each (edge e in edges_to_draw) {
				if (e.u < node_positions->Length && e.v < node_positions->Length) {
					Point p1 = node_positions[e.u];
					Point p2 = node_positions[e.v];

					Color c;
					float thick;
					bool draw_weight = false;

						if (is_result_panel) {
							if (is_edge_in_MST(e)) {
								c = Color::Cyan;
								thick = 2.5f;
								draw_weight = true; // Рисуем веса только для каркаса
							}
							else {
								c = Color::RoyalBlue;
								thick = 1.0f;
								draw_weight = false; 
							}
						}
							else {
								c = Color::RoyalBlue;
								thick = 1.5f;
								draw_weight = true;
							}
								Pen^ pen = gcnew Pen(c, thick);
								g->DrawLine(pen, (float)p1.X, (float)p1.Y, (float)p2.X, (float)p2.Y);

								  // отрисовка веса
								  if (draw_weight) {
									  float midX = (p1.X + p2.X) / 2.0f;
									  float midY = (p1.Y + p2.Y) / 2.0f;
									  float dx = (float)p2.X - p1.X, dy = (float)p2.Y - p1.Y;
									  float len = (float)Math::Sqrt(dx * dx + dy * dy);

									  if (len > 0) {
										  float nx = -dy / len, ny = dx / len;
										  float tx = midX + nx * 14.0f, ty = midY + ny * 14.0f;
										  String^ s = e.weight.ToString();
										  SizeF sz = g->MeasureString(s, f_weight);

										  //Подложка под цифры
										  g->FillRectangle(Brushes::Black, tx - sz.Width / 2.0f, ty - sz.Height / 2.0f, sz.Width, sz.Height);
										  g->DrawString(s, f_weight, Brushes::White, tx, ty, sf);
									  }
								  }
								  delete pen;
							  }
						  }
						  // --- ОТРИСОВКА ВЕРШИН ---
						  int n_size = 30;
						  System::Drawing::Font^ f_node = gcnew System::Drawing::Font("Consolas", 11, FontStyle::Bold);
						  for (int i = 0; i < node_count; i++) {
							  if (i < node_positions->Length) {
								  Point pos = node_positions[i];
								  RectangleF r((float)pos.X - n_size / 2.0f, (float)pos.Y - n_size / 2.0f, (float)n_size, (float)n_size);

								  g->FillEllipse(Brushes::Black, r);
								  g->DrawEllipse(gcnew Pen(Color::DeepSkyBlue, 2.5f), r);
								  g->DrawString(((wchar_t)('A' + i)).ToString(), f_node, Brushes::White, r, sf);
							  }
						  }
						  delete g;
					  }
				  }
	
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {

		int n = (int)numericUpDown->Value;
		bool can_start = false;
		animation_edges = GetEdgesFromGrid();

		if (animation_edges->Count == 0) {

			MyFormDialog^ dlg = gcnew MyFormDialog();
			dlg->lbl_st->Text = "Таблица пуста или веса не введены! Пожалуйста, заполните матрицу",
				dlg->ShowDialog();
		}
		else {
			can_start = true;
		}

		if (can_start) {
			bubble_sort_edges(animation_edges);
			//Сброс состояния для анимации
			curent_MST = gcnew System::Collections::Generic::List<edge>();
			animation_DSU = gcnew DSU((int)numericUpDown->Value);
			current_edge_index = 0;

			lst_box->Items->Clear();

			//Отрисовываем пустой исходный граф слева
			DrawGraph(panel_1, animation_edges, n, false); 

			timer->Start();
		}
	}
	private: System::Void btn_minimaze_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {

		timer->Interval = 1000;

		int n = (int)numericUpDown->Value;

		// Условие: пока не перебрали все ребра и не построили каркас (n-1 ребер)
		if (current_edge_index < animation_edges->Count && curent_MST->Count < n - 1) {

			// Берем следующее ребро из отсортированного списка
			edge current_e = animation_edges[current_edge_index++];

			// Конвертируем индексы в буквы для лога
			char u_letter = (char)(65 + current_e.u);
			char v_letter = (char)(65 + current_e.v);
			String^ name_u = gcnew String(u_letter, 1);
			String^ name_v = gcnew String(v_letter, 1);

			// Проверяем на цикл через DSU
			if (animation_DSU->find(current_e.u) != animation_DSU->find(current_e.v)) {
				animation_DSU->unite(current_e.u, current_e.v);
				curent_MST->Add(current_e);

				lbl_status->Text = String::Format("Добавлено: {0} - {1} (вес {2})", name_u, name_v, current_e.weight);

				String^ log_entry = String::Format("{0}) Ребро {1} - {2}, вес: {3} — ОК (Добавлено)",
					current_edge_index, name_u, name_v, current_e.weight);

				lst_box->Items->Add(log_entry);
			}
			else {
				String^ Log_entry = String::Format("{0}) Ребро {1} - {2}, вес: {3} — Пропуск (Цикл!)",
					current_edge_index, name_u, name_v, current_e.weight);
				lst_box->Items->Add(Log_entry);

				lbl_status->Text = String::Format("Пропуск ребра {0}-{1}", name_u, name_v);
			}

			// Автоматическая прокрутка ListBox вниз к последней записи
			lst_box->SelectedIndex = lst_box->Items->Count - 1;

			// Перерисовываем правую панель, чтобы видеть прогресс
			DrawGraph(panel_2, animation_edges, node_сount, true);
			}
			else {

				timer->Stop();
				int total_weight = 0;
				for each (edge mst_edge in curent_MST) {
					total_weight += mst_edge.weight;
				}

				lst_box->Items->Add("------------------------------------------");
				lst_box->Items->Add("Алгоритм завершен успешно.");
				lst_box->Items->Add("Итоговый вес каркаса: " + total_weight.ToString());
				lbl_status->Text = "Готово!";
			}
		}

	private: System::Void panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Panel^ p = dynamic_cast<Panel^>(sender);
		if (p != nullptr) {
			Pen^ sky_blue_pen = gcnew Pen(Color::DeepSkyBlue, 2);
			e->Graphics->DrawRectangle(sky_blue_pen, 0, 0, p->Width - 1, p->Height - 1);
		}
	}

	private: System::Void btn_stop_Click(System::Object^ sender, System::EventArgs^ e) {
		// Если алгоритм на паузе — запускаем его обратно
		if (paused) {
			timer->Start();
			paused = false;
			btn_stop->Text = "||";
			btn_stop->ForeColor = Color::DeepSkyBlue;
		}
		// Если алгоритм работает — ставим на паузу
		else if (timer->Enabled) {
			timer->Stop();
			paused = true;
			btn_stop->Text = ">";
			btn_stop->ForeColor = Color::Blue;
		}
	}

	private: System::Void dataGridView_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e) {
		// Получаем доступ к текстовому полю внутри ячейки
		TextBox^ tb = dynamic_cast<TextBox^>(e->Control);
		if (tb != nullptr) {
			// Удаляем старый обработчик, чтобы они не накапливались
			tb->KeyPress -= gcnew KeyPressEventHandler(this, &MyForm::only_digits_key_press);
			// Добавляем новый
			tb->KeyPress += gcnew KeyPressEventHandler(this, &MyForm::only_digits_key_press);
		}
	}
	private: System::Void only_digits_key_press(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверяем, НЕ является ли символ клавишей Backspace
		if (e->KeyChar != 0x08) {

			// Если это не Backspace, проверяем, является ли символ цифрой
			if (!Char::IsDigit(e->KeyChar)) {
				// Если это буква или спецсимвол — блокируем
				e->Handled = true;
			}
		}
	}
};
};






