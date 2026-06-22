#pragma once

#include "MyFormDialog.h"
#include "MyFormDialog2.h"
#include <cmath>

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

			this->panel_1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel_1_MouseClick);
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


	private: System::Windows::Forms::Button^ btn_help;
	private: System::Windows::Forms::Button^ btn_info;


	private: System::Windows::Forms::Button^ btn_next;

	private: System::Windows::Forms::Button^ btn_clear;



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
			this->btn_info = (gcnew System::Windows::Forms::Button());
			this->btn_help = (gcnew System::Windows::Forms::Button());
			this->btn_stop = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
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
			this->lbl_1->Size = System::Drawing::Size(388, 31);
			this->lbl_1->TabIndex = 1;
			this->lbl_1->Text = L"Выберите вершины графа";
			// 
			// lbl_2
			// 
			this->lbl_2->AutoSize = true;
			this->lbl_2->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_2->ForeColor = System::Drawing::Color::SkyBlue;
			this->lbl_2->Location = System::Drawing::Point(36, 197);
			this->lbl_2->Name = L"lbl_2";
			this->lbl_2->Size = System::Drawing::Size(250, 27);
			this->lbl_2->TabIndex = 2;
			this->lbl_2->Text = L"Заполните матрицу";
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
			this->numericUpDown->ReadOnly = true;
			this->numericUpDown->Size = System::Drawing::Size(123, 35);
			this->numericUpDown->TabIndex = 3;
			this->numericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToResizeColumns = false;
			this->dataGridView->AllowUserToResizeRows = false;
			this->dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
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
			this->lst_box->Size = System::Drawing::Size(1313, 465);
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
			this->panel1->Controls->Add(this->btn_info);
			this->panel1->Controls->Add(this->btn_help);
			this->panel1->Controls->Add(this->btn_stop);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_minimaze);
			this->panel1->Controls->Add(this->btn_exit);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1995, 64);
			this->panel1->TabIndex = 16;
			// 
			// btn_info
			// 
			this->btn_info->BackColor = System::Drawing::Color::MidnightBlue;
			this->btn_info->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_info->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_info->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_info->Location = System::Drawing::Point(204, 0);
			this->btn_info->Name = L"btn_info";
			this->btn_info->Size = System::Drawing::Size(299, 64);
			this->btn_info->TabIndex = 20;
			this->btn_info->Text = L"О программе";
			this->btn_info->UseVisualStyleBackColor = false;
			this->btn_info->Click += gcnew System::EventHandler(this, &MyForm::btn_info_Click);
			// 
			// btn_help
			// 
			this->btn_help->BackColor = System::Drawing::Color::MidnightBlue;
			this->btn_help->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_help->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_help->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_help->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_help->Location = System::Drawing::Point(3, 0);
			this->btn_help->Name = L"btn_help";
			this->btn_help->Size = System::Drawing::Size(195, 64);
			this->btn_help->TabIndex = 19;
			this->btn_help->Text = L"Помощь";
			this->btn_help->UseVisualStyleBackColor = false;
			this->btn_help->Click += gcnew System::EventHandler(this, &MyForm::btn_help_Click);
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
			// btn_next
			// 
			this->btn_next->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btn_next->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_next->Font = (gcnew System::Drawing::Font(L"Courier New", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_next->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_next->Location = System::Drawing::Point(712, 708);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(579, 72);
			this->btn_next->TabIndex = 17;
			this->btn_next->TabStop = false;
			this->btn_next->Text = L"Следующий шаг";
			this->btn_next->UseVisualStyleBackColor = false;
			this->btn_next->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btn_clear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Courier New", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_clear->Location = System::Drawing::Point(1316, 708);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(579, 72);
			this->btn_clear->TabIndex = 18;
			this->btn_clear->TabStop = false;
			this->btn_clear->Text = L"Очистка интерфейса";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1996, 1532);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_next);
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

		// Переменные для интерактивного ввода мышью
		int selected_node_index = -1; // Индекс первой выбранной вершины для создания ребра
		int max_nodes = 10;           // Максимальное количество вершин

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

		// Функция для получения списка всех ребер
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

		// Метод динамического расширения матрицы при добавлении вершин мышью
		void AddNodeToMatrix() {
			int n = dataGridView->RowCount + 1;
			dataGridView->AllowUserToAddRows = false;
			dataGridView->RowCount = n;
			dataGridView->ColumnCount = n;

			// Корректируем значение в счетчике, чтобы интерфейс соответствовал
			if ((int)numericUpDown->Value < n) {
				numericUpDown->Value = n;
			}
			node_сount = n;

			// Настраиваем новую строку и столбец
			for (int i = 0; i < n; i++) {
				dataGridView->Columns[i]->Width = 30;
				char letter = (char)(65 + i);
				dataGridView->Columns[i]->HeaderText = gcnew String(letter, 1);
				dataGridView->Rows[i]->HeaderCell->Value = gcnew String(letter, 1);
				dataGridView->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;

				if (dataGridView->Rows[i]->Cells[i]->Value == nullptr || dataGridView->Rows[i]->Cells[i]->Value->ToString() != "0") {
					dataGridView->Rows[i]->Cells[i]->Value = "0";
					dataGridView->Rows[i]->Cells[i]->ReadOnly = true;
				}
			}
		}

	private: System::Void dataGridView_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		// ЗАЩИТА 1: Выполняем код только тогда, когда индексы корректны и вершины созданы 
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0 && node_positions != nullptr) {

			// Обрабатываем только изменения в ячейках связей (игнорируем диагональ i == j)
			if (e->RowIndex != e->ColumnIndex) {
				Object^ source_val = dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
				Object^ target_val = dataGridView->Rows[e->ColumnIndex]->Cells[e->RowIndex]->Value;

				String^ source_str = (source_val != nullptr) ? source_val->ToString() : "";
				String^ target_str = (target_val != nullptr) ? target_val->ToString() : "";

				// ЗАЩИТА 2: Синхронизируем симметричную ячейку ТОЛЬКО если значения РАЗЛИЧАЮТСЯ.
				if (source_str != target_str) {
					dataGridView->Rows[e->ColumnIndex]->Cells[e->RowIndex]->Value = source_str;
				}

				// Перерисовываем исходный граф на panel_1, чтобы сразу видеть изменения на лету
				System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
				DrawGraph(panel_1, current_edges, dataGridView->RowCount, false);
			}
		}
	}
		   System::Void panel_1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			   int click_radius = 20; // Сфера клика
			   int target_node = -1;

			   // Шаг 1. Поиск вершины, по которой кликнули
			   if (node_positions != nullptr) {
				   for (int i = 0; i < node_positions->Length && target_node == -1; i++) {
					   double dx = e->X - node_positions[i].X;
					   double dy = e->Y - node_positions[i].Y;
					   if (Math::Sqrt(dx * dx + dy * dy) < click_radius) {
						   target_node = i;
					   }
				   }
			   }

			   // ЛОГИКА ДЛЯ ЛЕВОЙ КНОПКИ МЫШИ (ЛКМ)
			   if (e->Button == System::Windows::Forms::MouseButtons::Left) {

				   // 1. КЛИК ПО ПУСТОМУ МЕСТУ — Создание новой вершины (Произвольное расположение)
				   if (target_node == -1) {
					   int current_nodes_num = (node_positions != nullptr) ? node_positions->Length : 0;
					   max_nodes = (int)numericUpDown->Maximum;

					   if (current_nodes_num >= max_nodes) {
						   MyFormDialog^ err_dlg = gcnew MyFormDialog();
						   err_dlg->Size = System::Drawing::Size(590, 180);


						   if (err_dlg->lbl_st != nullptr) {
							   err_dlg->lbl_st->Text = "Достигнуто максимальное количество вершин!";
							   err_dlg->lbl_st->Location = System::Drawing::Point(20, 30);
							   err_dlg->lbl_st->Size = System::Drawing::Size(360, 40);
							   err_dlg->lbl_st->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
						   }
						   if (err_dlg->btn_ok != nullptr) {
							   err_dlg->btn_ok->Location = System::Drawing::Point((err_dlg->ClientSize.Width - err_dlg->btn_ok->Width) / 2, 90);
						   }
						   err_dlg->ShowDialog();
					   }
					   else {
						   // Добавляем точную координату клика мыши
						   Array::Resize(node_positions, current_nodes_num + 1);
						   node_positions[current_nodes_num] = Point(e->X, e->Y);

						   // Синхронизируем DataGridView
						   AddNodeToMatrix();
						   selected_node_index = -1;

						   node_сount = node_positions->Length;
						   if (node_сount <= (int)numericUpDown->Maximum) {
							   numericUpDown->Value = node_сount;
						   }

						   System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
						   DrawGraph(panel_1, current_edges, node_positions->Length, false);
					   }
				   }
				   // 2. КЛИК ПО СУЩЕСТВУЮЩЕЙ ВЕРШИНЕ (Создание ребра)
				   else {
					   if (selected_node_index == -1) {
						   // Выбираем первую вершину для ребра
						   selected_node_index = target_node;

						   // Подсвечиваем выбранную вершину
						   System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
						   DrawGraph(panel_1, current_edges, dataGridView->RowCount, false);

						   // Визуально выделим выбранную вершину маленьким кружком поверх
						   Graphics^ g = panel_1->CreateGraphics();
						   g->DrawEllipse(gcnew Pen(Color::Orange, 3.0f), node_positions[selected_node_index].X - 17, node_positions[selected_node_index].Y - 17, 34, 34);
						   delete g;
					   }
					   else {
						   // Если выбрали ту же самую вершину — снимаем выделение
						   if (selected_node_index == target_node) {
							   selected_node_index = -1;
							   System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
							   DrawGraph(panel_1, current_edges, dataGridView->RowCount, false);
						   }
						   // Соединяем две разные вершины ребром
						   else {
							   MyFormDialog^ dlg = gcnew MyFormDialog();
							   dlg->Size = System::Drawing::Size(350, 190);

							   wchar_t char_u = (wchar_t)('A' + selected_node_index);
							   wchar_t char_v = (wchar_t)('A' + target_node);
							   String^ name_u = gcnew String(char_u, 1);
							   String^ name_v = gcnew String(char_v, 1);

							   if (dlg->lbl_st != nullptr) {
								   dlg->lbl_st->Text = String::Format("Введите вес ребра {0} - {1}:", name_u, name_v);
								   dlg->lbl_st->Location = System::Drawing::Point(25, 20);
								   dlg->lbl_st->Size = System::Drawing::Size(300, 30);
								   dlg->lbl_st->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
							   }

							   TextBox^ txt_weight = gcnew TextBox();
							   txt_weight->Location = System::Drawing::Point(25, 65);
							   txt_weight->Width = 300;
							   txt_weight->Text = "1";
							   txt_weight->MaxLength = 3;
							   txt_weight->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
							   txt_weight->BackColor = System::Drawing::Color::FromArgb(20, 20, 25);
							   txt_weight->ForeColor = System::Drawing::Color::White;
							   txt_weight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
							   txt_weight->Font = gcnew System::Drawing::Font("Consolas", 12, System::Drawing::FontStyle::Bold);
							   txt_weight->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Cell_KeyPress);

							   dlg->Controls->Add(txt_weight);

							   if (dlg->btn_ok != nullptr) {
								   dlg->btn_ok->Size = System::Drawing::Size(110, 35);
								   dlg->btn_ok->Location = System::Drawing::Point((dlg->ClientSize.Width - dlg->btn_ok->Width) / 2, 125);
							   }

							   dlg->ActiveControl = txt_weight;

							   if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
								   int w = 0;
								   if (Int32::TryParse(txt_weight->Text, w) && w > 0) {
									   dataGridView->Rows[selected_node_index]->Cells[target_node]->Value = w.ToString();
								   }
								   else {
									   MyFormDialog^ err_dlg = gcnew MyFormDialog();
									   err_dlg->Size = System::Drawing::Size(600, 180);

									   if (err_dlg->lbl_st != nullptr) {
										   err_dlg->lbl_st->Text = "Вес ребра должен быть положительным числом!";
										   err_dlg->lbl_st->Location = System::Drawing::Point(20, 30);
										   err_dlg->lbl_st->Size = System::Drawing::Size(360, 40);
										   err_dlg->lbl_st->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
									   }

									   if (err_dlg->btn_ok != nullptr) {
										   err_dlg->btn_ok->Location = System::Drawing::Point((err_dlg->ClientSize.Width - err_dlg->btn_ok->Width) / 2, 90);
									   }

									   err_dlg->ShowDialog();
								   }
							   }

							   selected_node_index = -1;
							   System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
							   DrawGraph(panel_1, current_edges, node_positions->Length, false);
						   }
					   }
				   }
			   }

			   // ЛОГИКА ДЛЯ ПРАВОЙ КНОПКИ МЫШИ (ПКМ) — УДАЛЕНИЕ ВЕРШИНЫ
			   if (e->Button == System::Windows::Forms::MouseButtons::Right) {
				   if (target_node != -1 && node_positions != nullptr) {

					   if (target_node < dataGridView->ColumnCount) dataGridView->Columns->RemoveAt(target_node);
					   if (target_node < dataGridView->RowCount) dataGridView->Rows->RemoveAt(target_node);
					   dataGridView->ColumnCount = dataGridView->RowCount;

					   // Сдвиг координат для бесшовного удаления из произвольных точек
					   for (int i = target_node; i < node_positions->Length - 1; i++) {
						   node_positions[i] = node_positions[i + 1];
					   }
					   Array::Resize(node_positions, node_positions->Length - 1);

					   selected_node_index = -1;
					   node_сount = node_positions->Length;

					   if (node_сount >= (int)numericUpDown->Minimum) {
						   numericUpDown->Value = node_сount;
					   }

					   System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
					   DrawGraph(panel_1, current_edges, node_positions->Length, false);
				   }
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

	private:System::Void btn_create_matrix_Click(System::Object^ sender, System::EventArgs^ e) {

		timer->Stop();
		current_edge_index = 0;
		paused = false;
		btn_stop->Text = "||";

		if (animation_edges != nullptr) animation_edges->Clear();
		if (curent_MST != nullptr) curent_MST->Clear();

		node_сount = (int)numericUpDown->Value;
		int n = node_сount;

		// Выделяем память под массив круговых позиций
		node_positions = gcnew array<Point>(node_сount);

		// Расчёт координат строго по окружности
		int R = Math::Min(panel_1->Width, panel_1->Height) / 2 - 35;
		Point center(panel_1->Width / 2, panel_1->Height / 2);

		for (int i = 0; i < node_сount; i++) {
			float angle = 2 * (float)Math::PI * i / node_сount;
			node_positions[i] = Point(
				(int)(center.X + R * Math::Cos(angle)),
				(int)(center.Y + R * Math::Sin(angle))
			);
		}

		dataGridView->AllowUserToAddRows = false;
		dataGridView->RowCount = n;
		dataGridView->ColumnCount = n;
		for (int i = 0; i < n; i++) {
			dataGridView->Columns[i]->Width = 30;
			char letter = (char)(65 + i);
			dataGridView->Columns[i]->HeaderText = gcnew String(letter, 1);
			dataGridView->Rows[i]->HeaderCell->Value = gcnew String(letter, 1);
			dataGridView->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
			for (int j = 0; j < n; j++) {
				if (i == j) {
					dataGridView->Rows[i]->Cells[j]->Value = "0";
					dataGridView->Rows[i]->Cells[j]->ReadOnly = true;
				}
				else {
					dataGridView->Rows[i]->Cells[j]->Value = "";
				}
			}
		}

		Graphics^ g1 = panel_1->CreateGraphics(); g1->Clear(Color::Black); delete g1;
		Graphics^ g2 = panel_2->CreateGraphics(); g2->Clear(Color::Black); delete g2;

		DrawGraph(panel_1, nullptr, n, false);
	}

	private: System::Void dataGridView_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
		if (e->Value != nullptr) {
			String^ cell_text = e->Value->ToString();
			if (cell_text == "0") {
				e->CellStyle->ForeColor = Color::White;
				e->CellStyle->SelectionForeColor = Color::Cyan;
			}
			else {
				e->CellStyle->ForeColor = Color::DeepSkyBlue;
			}
		}
	}

	private: System::Void btn_random_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		int rows = dataGridView->RowCount;
		bool is_matrix_created = (rows > 0);

		if (is_matrix_created) {
			// Задаем вероятность появления нуля. 
			// 0.30 означает, что примерно 30% ячеек (рёбер) гарантированно станут нулями.
			double zero_probability = 0.30;

			for (int i = 0; i < rows; i++) {
				// Диагональ матрицы смежности (связь вершины самой с собой) всегда 0
				dataGridView->Rows[i]->Cells[i]->Value = "0";

				for (int j = i + 1; j < rows; j++) {
					int weight = 0;

					// NextDouble() возвращает случайное число от 0.0 до 1.0
					if (rand->NextDouble() >= zero_probability) {
						weight = rand->Next(1, 51);
					}

					// Заполняем зеркально для неориентированного графа
					dataGridView->Rows[i]->Cells[j]->Value = weight.ToString();
					dataGridView->Rows[j]->Cells[i]->Value = weight.ToString();
				}
			}

			// Перерисовываем панели
			System::Collections::Generic::List<edge>^ current_edges = GetEdgesFromGrid();
			DrawGraph(panel_1, current_edges, rows, false);
		}
		else {
			MyFormDialog^ dlg = gcnew MyFormDialog();
			dlg->lbl_st->Text = "Сначала создайте матрицу, указав количество вершин, или кликните по левой панели!";
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

	private: 
		bool is_edge_in_MST(edge target) {
		bool found = false;
		if (curent_MST != nullptr) {
			for (int i = 0; i < curent_MST->Count; i++) {
				edge e = curent_MST[i];
				if ((e.u == target.u && e.v == target.v) || (e.u == target.v && e.v == target.u)) {
					found = true;
				}
			}
		}
		return found;
	}

		void DrawGraph(Panel^ p, System::Collections::Generic::List<edge>^ edges_to_draw, int node_count, bool is_result_panel) {
			// Отрисовываем граф только если есть вершины и массив координат инициализирован
			if (node_count > 0 && node_positions != nullptr && node_positions->Length >= node_count) {

				Graphics^ g = p->CreateGraphics();
				g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
				g->TextRenderingHint = System::Drawing::Text::TextRenderingHint::AntiAlias;
				g->Clear(Color::Black); // Черный красивый фон панели

				StringFormat^ sf = gcnew StringFormat();
				sf->Alignment = StringAlignment::Center;
				sf->LineAlignment = StringAlignment::Center;
				System::Drawing::Font^ f_weight = gcnew System::Drawing::Font("Consolas", 11, FontStyle::Bold);

				// --- ОПРЕДЕЛЕНИЕ СПИСКА РЕБЕР ---
				System::Collections::Generic::List<edge>^ actual_edges = nullptr;
				if (is_result_panel) {
					actual_edges = GetEdgesFromGrid(); // Для панели результата берем ребра из матрицы
				}
				else {
					actual_edges = edges_to_draw;     // Для обычной панели берем переданный список
				}

				// --- ОТРИСОВКА РЕБЕР (выполняется, только если список существует) ---
				if (actual_edges != nullptr) {
					for (int i = 0; i < actual_edges->Count; i++) {
						edge e = actual_edges[i];

						// Проверка границ массива во избежание падения программы
						if (e.u < node_count && e.v < node_count) {
							Point p1 = node_positions[e.u];
							Point p2 = node_positions[e.v];

							Color c;
							float thick;
							bool draw_weight = false;

							if (is_result_panel) {
								if (is_edge_in_MST(e)) {
									c = Color::Cyan;
									thick = 2.5f;
									draw_weight = true;
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

							// Отрисовка подложки и значения веса ребра
							if (draw_weight) {
								float midX = (p1.X + p2.X) / 2.0f;
								float midY = (p1.Y + p2.Y) / 2.0f;

								float dx = (float)p2.X - p1.X;
								float dy = (float)p2.Y - p1.Y;
								float len = (float)Math::Sqrt(dx * dx + dy * dy);

								if (len > 0) {
									float nx = -dy / len;
									float ny = dx / len;

									float tx = midX + nx * 14.0f;
									float ty = midY + ny * 14.0f;

									String^ s = e.weight.ToString();
									SizeF sz = g->MeasureString(s, f_weight);

									g->FillRectangle(Brushes::Black, tx - sz.Width / 2.0f, ty - sz.Height / 2.0f, sz.Width, sz.Height);
									g->DrawString(s, f_weight, Brushes::White, tx, ty, sf);
								}
							}
							delete pen;
						}
					}
				}

				// --- ОТРИСОВКА ВЕРШИН (выполняется всегда) ---
				int n_size = 34;
				System::Drawing::Font^ f_node = gcnew System::Drawing::Font("Consolas", 11, FontStyle::Bold);
				for (int i = 0; i < node_count; i++) {
					Point pos = node_positions[i]; // Координаты берутся строго из массива (не пересчитываются на лету)
					RectangleF r((float)pos.X - n_size / 2.0f, (float)pos.Y - n_size / 2.0f, (float)n_size, (float)n_size);

					g->FillEllipse(Brushes::Black, r);
					g->DrawEllipse(gcnew Pen(Color::DeepSkyBlue, 2.5f), r);
					g->DrawString(((wchar_t)('A' + i)).ToString(), f_node, Brushes::White, r, sf);
				}

				delete sf;
				delete f_weight;
				delete f_node;
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

		int n = dataGridView->RowCount;

		if (current_edge_index < animation_edges->Count && curent_MST->Count < n - 1) {
			edge current_e = animation_edges[current_edge_index++];
			char u_letter = (char)(65 + current_e.u);
			char v_letter = (char)(65 + current_e.v);
			String^ name_u = gcnew String(u_letter, 1);
			String^ name_v = gcnew String(v_letter, 1);

			if (animation_DSU->find(current_e.u) != animation_DSU->find(current_e.v)) {
				animation_DSU->unite(current_e.u, current_e.v);
				curent_MST->Add(current_e);
				lbl_status->Text = String::Format("Добавлено: {0} - {1} (вес {2})", name_u, name_v, current_e.weight);
				String^ log_entry = String::Format("{0}) Ребро {1} - {2}, вес: {3} — ОК (Добавлено)",
					current_edge_index, name_u, name_v, current_e.weight);
				lst_box->Items->Add(log_entry);
			}
			else {
				String^ Log_entry = String::Format("{0}) Ребро {1} - {2}, вес: {3} – Пропуск (Цикл!)",
					current_edge_index, name_u, name_v, current_e.weight);
				lst_box->Items->Add(Log_entry);
				lbl_status->Text = String::Format("Пропуск ребра {0}-{1}", name_u, name_v);
			}

			lst_box->SelectedIndex = lst_box->Items->Count - 1;
			DrawGraph(panel_2, animation_edges, node_сount, true);
		}
		else {
			timer->Stop();
			int total_weight = 0;

			for (int i = 0; i < curent_MST->Count; i++) {
				edge mst_edge = curent_MST[i];
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
		if (paused) {
			timer->Start();
			paused = false;
			btn_stop->Text = "||";
			btn_stop->ForeColor = Color::DeepSkyBlue;
		}
		else if (timer->Enabled) {
			timer->Stop();
			paused = true;
			btn_stop->Text = ">";
			btn_stop->ForeColor = Color::Blue;
		}
	}

	private: System::Void dataGridView_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e) {
		TextBox^ tb = safe_cast<TextBox^>(e->Control);
		if (tb != nullptr) {
			tb->MaxLength = 3;
			tb->KeyPress -= gcnew KeyPressEventHandler(this, &MyForm::Cell_KeyPress);
			tb->KeyPress += gcnew KeyPressEventHandler(this, &MyForm::Cell_KeyPress);
		}
	}

	private: System::Void Cell_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
			e->Handled = true;
		}
	}
	private: System::Void only_digits_key_press(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar != 0x08) {
			if (!Char::IsDigit(e->KeyChar)) {
				e->Handled = true;
			}
		}
	}

	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. Останавливаем таймер анимации
		timer->Stop();
		paused = false;
		btn_stop->Text = "||";
		btn_stop->ForeColor = Color::DeepSkyBlue;

		// 2. Сбрасываем numericUpDown в минимальный лимит
		numericUpDown->Value = numericUpDown->Minimum;

		// 3. Сбрасываем данные графа
		node_сount = 0;
		node_positions = gcnew array<Point>(0);

		selected_node_index = -1;
		current_edge_index = 0;
		animation_DSU = nullptr;

		if (animation_edges != nullptr) {
			animation_edges->Clear();
		}
		if (curent_MST != nullptr) {
			curent_MST->Clear();
		}

		// 4. Полностью очищаем таблицу (матрицу смежности)
		dataGridView->Rows->Clear();
		dataGridView->Columns->Clear();
		dataGridView->RowCount = 1;
		dataGridView->ColumnCount = 1;

		// 5. Очищаем логи и статусы
		lst_box->Items->Clear();
		lbl_status->Text = "Интерфейс очищен. Ожидание ввода.";

		// 6. Очищаем графические панели и восстанавливаем рамки
		if (panel_1 != nullptr) {
			Graphics^ g1 = panel_1->CreateGraphics();
			g1->Clear(Color::Black);
			Pen^ sky_blue_pen = gcnew Pen(Color::DeepSkyBlue, 2);
			g1->DrawRectangle(sky_blue_pen, 0, 0, panel_1->Width - 1, panel_1->Height - 1);
			delete sky_blue_pen;
			delete g1;
		}

		if (panel_2 != nullptr) {
			Graphics^ g2 = panel_2->CreateGraphics();
			g2->Clear(Color::Black);
			Pen^ sky_blue_pen = gcnew Pen(Color::DeepSkyBlue, 2);
			g2->DrawRectangle(sky_blue_pen, 0, 0, panel_2->Width - 1, panel_2->Height - 1);
			delete sky_blue_pen;
			delete g2;
		}
	}
		   void ExecuteNextStep() {
			   // Проверяем существование списка и границы индекса
			   if (this->animation_edges != nullptr && this->current_edge_index < this->animation_edges->Count) {

				   edge e = this->animation_edges[this->current_edge_index];

				   // Проверка компонентов через СНМ
				   if (this->animation_DSU->find(e.u) != this->animation_DSU->find(e.v)) {
					   this->animation_DSU->unite(e.u, e.v);
					   this->curent_MST->Add(e);
					   this->lst_box->Items->Add((this->current_edge_index + 1) + ") Ребро " +
						   ((wchar_t)('A' + e.u)).ToString() + " - " + ((wchar_t)('A' + e.v)).ToString() +
						   ", вес: " + e.weight + " – ОК (Добавлено)");
				   }
				   else {
					   this->lst_box->Items->Add((this->current_edge_index + 1) + ") Ребро " +
						   ((wchar_t)('A' + e.u)).ToString() + " - " + ((wchar_t)('A' + e.v)).ToString() +
						   ", вес: " + e.weight + " – Пропуск (Цикл!)");
				   }

				   this->lst_box->SelectedIndex = this->lst_box->Items->Count - 1;

				   // Отрисовка результатов
				   DrawGraph(this->panel_1, this->animation_edges, this->node_сount, false);
				   DrawGraph(this->panel_2, this->curent_MST, this->node_сount, true);

				   this->current_edge_index = this->current_edge_index + 1;

				   if (this->current_edge_index >= this->animation_edges->Count) {
					   this->lbl_status->Text = "Алгоритм завершен. Минимальное остовное дерево построено!";
					   this->timer->Stop();

					   int total_weight = 0;

					   for (int i = 0; i < this->curent_MST->Count; i++) {
						   edge mst_edge = this->curent_MST[i];
						   total_weight += mst_edge.weight;
					   }

					   lst_box->Items->Add("------------------------------------------");
					   lst_box->Items->Add("Алгоритм завершен успешно.");
					   lst_box->Items->Add("Итоговый вес каркаса: " + total_weight.ToString());
					   lbl_status->Text = "Готово!";
				   }
			   }
		   }

	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. Принудительно останавливаем автоматический таймер анимации
		this->timer->Stop();
		this->paused = true;

		// 2. Если данные ещё не инициализированы, пытаемся их подготовить
		if (this->animation_edges == nullptr || this->animation_DSU == nullptr || (this->current_edge_index == 0 && this->curent_MST->Count == 0)) {

			this->animation_edges = GetEdgesFromGrid();

			// ПРОВЕРКА: Если граф пустой, ребер нет (ничего не введено)
			if (this->animation_edges == nullptr || this->animation_edges->Count == 0) {

				String^ error_msg = "Граф не инициализирован! Невозможно выполнить шаг";
				MyFormDialog^ dialog = gcnew MyFormDialog();
				dialog->Size = System::Drawing::Size(680, 180);
				dialog->lbl_st->Text = error_msg;

				if (dialog->btn_ok != nullptr) {
					int centerX = (dialog->ClientSize.Width - dialog->btn_ok->Width) / 2;
					dialog->btn_ok->Location = System::Drawing::Point(centerX, dialog->btn_ok->Location.Y);
				}

				dialog->ShowDialog();
			}

			// Если ребра успешно найдены, выполняем инициализацию и сортировку
			if (this->animation_edges != nullptr && this->animation_edges->Count > 0) {

				// --- СОРТИРОВКА ПУЗЫРЬКОМ  ---
				for (int i = 0; i < this->animation_edges->Count - 1; i++) {
					for (int j = 0; j < this->animation_edges->Count - i - 1; j++) {

						// Если текущее ребро тяжелее следующего — меняем их местами
						if (this->animation_edges[j].weight > this->animation_edges[j + 1].weight) {
							edge temp = this->animation_edges[j];
							this->animation_edges[j] = this->animation_edges[j + 1];
							this->animation_edges[j + 1] = temp;
						}
					}
				}
				// --- КОНЕЦ СОРТИРОВКИ ---

				// Инициализируем DSU и список под минимальное остовное дерево
				this->animation_DSU = gcnew DSU(this->node_сount);
				this->curent_MST = gcnew System::Collections::Generic::List<edge>();
				this->current_edge_index = 0;

				this->lst_box->Items->Clear();
				this->lst_box->Items->Add("Инициализация пошагового режима. Рёбра отсортированы.");
				this->lbl_status->Text = "Выполнение: Пошаговый режим...";
			}
		}

		if (this->current_edge_index < this->animation_edges->Count) {
			// Вызываем логику одного шага
			ExecuteNextStep();
		}
		else {

			// 5. Сбрасываем состояние, чтобы можно было запустить алгоритм заново
			this->animation_edges = nullptr;
			this->animation_DSU = nullptr; // Желательно сбросить и DSU
			this->curent_MST = nullptr;
		}
	}

	private: System::Void btn_help_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. Наш структурированный текст справки
		String^ help_text =
			"ПРОГРАММНЫЙ КОМПЛЕКС: ВИЗУАЛИЗАЦИЯ АЛГОРИТМА КРАСКАЛА\n" +
			"==================================================\n\n" +
			"ДАННАЯ ПРОГРАММА ПРЕДНАЗНАЧЕНА ДЛЯ:\n" +
			"• Построения произвольных неориентированных графов;\n" +
			"• Пошагового или автоматического поиска минимального остовного дерева (MST);\n" +
			"• Демонстрации работы структуры данных СНМ (Система непересекающихся множеств).\n\n" +
			"ОСНОВНЫЕ ВОЗМОЖНОСТИ И КНОПКИ УПРАВЛЕНИЯ:\n" +
			"--------------------------------------------------\n" +
			"1. Клик ЛКМ по пустому месту — Создать новую вершину графа.\n" +
			"2. Клик ЛКМ по вершине 'А', затем по 'В' — Соединить их ребром (откроется ввод веса).\n" +
			"3. Клик ПКМ по любой вершине — Полное удаление вершины и всех связанных рёбер.\n" +
			"4. Кнопка 'Создать матрицу' — Генерирует пустую сетку таблицы для ручного ввода.\n" +
			"5. Кнопка 'Следующий шаг' — Выполняет ровно одну итерацию алгоритма Краскала.\n" +
			"6. Кнопка 'Старт / Пауза' — Запуск или остановка непрерывной автоматической анимации.\n" +
			"7. Кнопка 'Очистить' — Сброс интерфейса, удаление графа и скрытие таблицы.\n\n" +
			"ПРАВИЛА ВВОДА ВЕСОВ И ОГРАНИЧЕНИЯ:\n" +
			"--------------------------------------------------\n" +
			"1. Вес ребра должен быть строго ПОЛОЖИТЕЛЬНЫМ целым числом (от 1 до 999).\n" +
			"2. Ввод символов, букв или отрицательных значений автоматически блокируется.\n" +
			"3. Алгоритм предварительно сортирует рёбра методом ПУЗЫРЬКА по возрастанию веса.\n" +
			"4. Ребро добавляется в остов только в том случае, если оно НЕ образует цикл.";

		// 2. Создаем экземпляр диалогового окна
		MyFormDialog^ dialog = gcnew MyFormDialog();

		// 3. Измеряем точные габариты текста в пикселях
		// Задаем максимальные ограничения для замера (ширина 800, высота с запасом)
		System::Drawing::Size proposeSize = System::Drawing::Size(950, 2000);
		System::Drawing::Size textSize = TextRenderer::MeasureText(help_text, dialog->lbl_st->Font, proposeSize, TextFormatFlags::WordBreak);

		// 4. Вычисляем необходимые размеры самого окна на основе замеров текста
		int calculatedWidth = 860; 
		int calculatedHeight = textSize.Height + 140; 
		if (calculatedHeight < 550) {
			calculatedHeight = 550;
		}

		dialog->Size = System::Drawing::Size(calculatedWidth, calculatedHeight);

		// 5. Динамически позиционируем встроенную кнопку ОК ровно по центру в самом низу окна
		if (dialog->btn_ok != nullptr) {
			int centerX = (dialog->ClientSize.Width - dialog->btn_ok->Width) / 2;
			int bottomY = dialog->ClientSize.Height - dialog->btn_ok->Height - 20;
			dialog->btn_ok->Location = System::Drawing::Point(centerX, bottomY);
		}

		// 6. Настраиваем текстовую метку lbl_st под новые размеры окна
		if (dialog->lbl_st != nullptr) {
			dialog->lbl_st->AutoSize = false;
			dialog->lbl_st->Location = System::Drawing::Point(30, 20);

			int availableHeight = dialog->btn_ok->Location.Y - dialog->lbl_st->Location.Y - 15;
			dialog->lbl_st->Size = System::Drawing::Size(800, availableHeight);

			dialog->lbl_st->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			dialog->lbl_st->Text = help_text;
		}

		// 7. Отображаем полностью подогнанное под текст окно
		dialog->ShowDialog();
	}

	private: System::Void btn_info_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. Формируем полный текст 
		String^ about_text =
			"Программа: Визуализация алгоритма Краскала\n" +
			"Год: 2026\n" +
			"Разработчик: Н.А. Червякова\n" +
			"Курс: ИКТб-2301-04-20";

		// 2. Создаем экземпляр диалогового окна
		MyFormDialog^ dialog = gcnew MyFormDialog();

		// 3. Немного увеличиваем общую высоту окна (до 260), чтобы точно всё влезло
		dialog->Size = System::Drawing::Size(580, 260);

		// 4. Тонкая настройка текстовой метки lbl_st
		if (dialog->lbl_st != nullptr) {
			dialog->lbl_st->AutoSize = false;
			dialog->lbl_st->Location = System::Drawing::Point(35, 30);
			dialog->lbl_st->Size = System::Drawing::Size(510, 120);
			dialog->lbl_st->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			dialog->lbl_st->Text = about_text;
		}

		// 5. Динамическое позиционирование встроенной кнопки ОК ровно по центру внизу
		if (dialog->btn_ok != nullptr) {

			int centerX = (dialog->ClientSize.Width - dialog->btn_ok->Width) / 2;
			int bottomY = dialog->ClientSize.Height - dialog->btn_ok->Height - 20;

			dialog->btn_ok->Location = System::Drawing::Point(centerX, bottomY);
		}

		dialog->ShowDialog();
	}
	};
}




