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
			this->btn_exit->Location = System::Drawing::Point(1441, 0);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(70, 64);
			this->btn_exit->TabIndex = 0;
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
			this->lbl_1->Location = System::Drawing::Point(37, 86);
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
			this->lbl_2->Location = System::Drawing::Point(38, 203);
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
			this->numericUpDown->Font = (gcnew System::Drawing::Font(L"Courier New", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->numericUpDown->Location = System::Drawing::Point(497, 86);
			this->numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->Name = L"numericUpDown";
			this->numericUpDown->Size = System::Drawing::Size(123, 28);
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
			this->dataGridView->Location = System::Drawing::Point(42, 233);
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
			this->dataGridView->Size = System::Drawing::Size(578, 411);
			this->dataGridView->TabIndex = 4;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_CellContentClick);
			this->dataGridView->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_CellValueChanged);
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
			this->btn_create_matrix->Location = System::Drawing::Point(43, 128);
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
			this->btn_run->Location = System::Drawing::Point(44, 728);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(576, 72);
			this->btn_run->TabIndex = 6;
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
			this->btn_random->Location = System::Drawing::Point(43, 650);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(577, 72);
			this->btn_random->TabIndex = 7;
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
			this->panel_1->Size = System::Drawing::Size(699, 519);
			this->panel_1->TabIndex = 8;
			// 
			// panel_2
			// 
			this->panel_2->BackColor = System::Drawing::Color::Black;
			this->panel_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_2->Location = System::Drawing::Point(759, 822);
			this->panel_2->Name = L"panel_2";
			this->panel_2->Size = System::Drawing::Size(717, 519);
			this->panel_2->TabIndex = 9;
			// 
			// lbl_3
			// 
			this->lbl_3->AutoSize = true;
			this->lbl_3->Font = (gcnew System::Drawing::Font(L"Courier New", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lbl_3->Location = System::Drawing::Point(149, 1351);
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
			this->Lbl_4->Location = System::Drawing::Point(817, 1351);
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
			this->lbl_status->Location = System::Drawing::Point(633, 169);
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
			this->btn_minimaze->Location = System::Drawing::Point(1368, 0);
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
			this->lst_box->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lst_box->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lst_box->FormattingEnabled = true;
			this->lst_box->ItemHeight = 27;
			this->lst_box->Location = System::Drawing::Point(640, 233);
			this->lst_box->Name = L"lst_box";
			this->lst_box->Size = System::Drawing::Size(836, 567);
			this->lst_box->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label1->Location = System::Drawing::Point(485, -1);
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
			this->panel1->Size = System::Drawing::Size(1514, 64);
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
			this->btn_stop->Location = System::Drawing::Point(1295, 0);
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
			this->ClientSize = System::Drawing::Size(1514, 1401);
			this->Controls->Add(this->lst_box);
			this->Controls->Add(this->lbl_status);
			this->Controls->Add(this->Lbl_4);
			this->Controls->Add(this->lbl_3);
			this->Controls->Add(this->panel_2);
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
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	bool paused = false;

	public: value struct edge {
		int u; //Откуда 
		int v; //Куда
		int weight; //Вес
	};

		  // Класс DSU (Система непересекающихся множеств)
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

		  //Функция для получения списка всех ребер
		  System::Collections::Generic::List<edge>^ GetEdgesFromGrid() {
			  auto edges = gcnew System::Collections::Generic::List<edge>();
			  int n = dataGridView->RowCount;

			  for (int i = 0; i < n; i++) {
				  for (int j = i + 1; j < n; j++) { // Начинаем с i + 1 
					  if (dataGridView->Rows[i]->Cells[j]->Value != nullptr) {

						  String^ cellVal = dataGridView->Rows[i]->Cells[j]->Value->ToString();
						  if (!String::IsNullOrWhiteSpace(cellVal)) {
							  int w = System::Convert::ToInt32(cellVal);
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

	private:
		System::Collections::Generic::List<edge>^ animation_edges; //Список всех отсортированных ребер
		System::Collections::Generic::List<edge>^ curent_MST; //Список ребер, уже принятых в каркас
		int current_edge_index; //Индекс ребра, которое проверяем сейчас
		DSU^ animation_DSU; //CHM для проверки циклов


	private:System::Void dataGridView_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0 && e->RowIndex != e->ColumnIndex) {
			//копируем значение в симметричную ячейку
			dataGridView->Rows[e->ColumnIndex]->Cells[e->RowIndex]->Value = dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
		}
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult
			result = MessageBox::Show("Вы уверены?", "Выход", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}

	}
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btn_create_matrix_Click(System::Object^ sender, System::EventArgs^ e) {

		int n = (int)numericUpDown->Value; // получаем n из элемента 2

		dataGridView->AllowUserToAddRows = false;

		dataGridView->RowCount = n;
		dataGridView->ColumnCount = n;


		for (int i = 0; i < n; i++) {
			dataGridView->Columns[i]->Width = 30; // делаем ячейки квадратными

			for (int j = 0; j < n; j++) {
				if (i == j) {
					dataGridView->Rows[i]->Cells[j]->Value = "0";
					dataGridView->Rows[i]->Cells[j]->ReadOnly = true; // диагональ всегда 0
				}
			}
		}

		//Настройка заголовков таблицы
		for (int i = 0; i < n; i++) {
			char letter = (char)(65 + i);
			dataGridView->Columns[i]->HeaderText = gcnew String(letter, 1);
			dataGridView->Rows[i]->HeaderCell->Value = gcnew String(letter, 1);
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
			MessageBox::Show("Сначала создайте матрицу, указав количество вершин.",
				"Внимание", 
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
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

		   void DrawGraph(Panel^ p, System::Collections::Generic::List<edge>^ edges, int nodeCount, bool isResult) {
			   Graphics^ g = p->CreateGraphics();
			   g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias; // Гладкие линии
			   g->Clear(Color::Black); // Очистка черным цветом

			   int R = Math::Min(p->Width, p->Height) / 2 - 40;
			   Point center(p->Width / 2, p->Height / 2);

			   // Цвет ребер: обычные — тускло-синие, результат (MST) — ярко-голубой
			   Color edgeColor = isResult ? Color::Cyan : Color::FromArgb(50, 50, 150);
			   Pen^ edgePen = gcnew Pen(edgeColor, isResult ? 3 : 1);

			   for each (edge e in edges) {
				   // Вычисление координат вершин
				   float a1 = 2 * Math::PI * e.u / nodeCount;
				   float a2 = 2 * Math::PI * e.v / nodeCount;
				   Point p1(center.X + R * Math::Cos(a1), center.Y + R * Math::Sin(a1));
				   Point p2(center.X + R * Math::Cos(a2), center.Y + R * Math::Sin(a2));

				   // Рисуем само ребро
				   g->DrawLine(edgePen, p1, p2);

				   // Блок отрисовки веса в рамке
				   Point mid((p1.X + p2.X) / 2, (p1.Y + p2.Y) / 2);
				   String^ weightStr = e.weight.ToString();
				   System::Drawing::Font^ font = gcnew System::Drawing::Font("Consolas", 9, FontStyle::Bold);

				   SizeF size = g->MeasureString(weightStr, font);
				   int padding = 4;
				   Rectangle rect(mid.X - size.Width / 2 - padding / 2,
					   mid.Y - size.Height / 2 - padding / 2,
					   size.Width + padding,
					   size.Height + padding);

				   // Рисуем подложку, рамку и текст
				   g->FillRectangle(gcnew SolidBrush(Color::Black), rect);
				   g->DrawRectangle(gcnew Pen(Color::DeepSkyBlue, 1), rect);
				   g->DrawString(weightStr, font, Brushes::White,
					   mid.X - size.Width / 2, mid.Y - size.Height / 2);
			   }


			   // Вершины: голубая обводка, белый текст
			   for (int i = 0; i < nodeCount; i++) {
				   float angle = 2 * Math::PI * i / nodeCount;
				   int x = center.X + R * Math::Cos(angle) - 15;
				   int y = center.Y + R * Math::Sin(angle) - 15;

				   g->FillEllipse(Brushes::Black, x, y, 30, 30); // Черный фон внутри узла
				   g->DrawEllipse(gcnew Pen(Color::DeepSkyBlue, 2), x, y, 30, 30); // Голубой ободок

				   char letter = (char)(65 + i);
				   g->DrawString(gcnew String(letter, 1), gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold),
					   Brushes::White, (float)(x + 7), (float)(y + 6));
			   }
		   }

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {

		int n = (int)numericUpDown->Value;
		bool can_start = false;

		//Получаем ребра из матрицы 
		animation_edges = GetEdgesFromGrid();

		if (animation_edges->Count == 0) {
			MessageBox::Show("Таблица пуста или веса не введены! Пожалуйста, заполните матрицу.",
				"Внимание", MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
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
			DrawGraph(panel_1, animation_edges, n, false); //Исходный граф
			timer->Start();
		}
	}
	private: System::Void btn_minimaze_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		
			timer->Interval = 1000;

			// n - количество вершин из numericUpDown
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
					String^ logEntry = String::Format("{0}) Ребро {1} - {2}, вес: {3} — Пропуск (Цикл!)",
						current_edge_index, name_u, name_v, current_e.weight);
					lst_box->Items->Add(logEntry);

					lbl_status->Text = String::Format("Пропуск ребра {0}-{1}", name_u, name_v);
				}

				// Автоматическая прокрутка ListBox вниз к последней записи
				lst_box->SelectedIndex = lst_box->Items->Count - 1;

				// Перерисовываем правую панель, чтобы видеть прогресс
				DrawGraph(panel_2, curent_MST, n, true);
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
			Pen^ skyBluePen = gcnew Pen(Color::DeepSkyBlue, 2);
			e->Graphics->DrawRectangle(skyBluePen, 0, 0, p->Width - 1, p->Height - 1);
		}
	}

	private: System::Void btn_stop_Click(System::Object^ sender, System::EventArgs^ e) {

		// Если алгоритм на паузе — запускаем его обратно
		if (paused) {
			timer->Start();           
			paused = false;          
			btn_stop->Text = "||";     
			btn_stop->ForeColor = Color::DeepSkyBlue; // Возвращаем неоновый цвет
		}
		// Если алгоритм работает — ставим на паузу
		else if (timer->Enabled) {
			timer->Stop();          
			paused = true;          
			btn_stop->Text = ">";     
			btn_stop->ForeColor = Color::Blue; 
		}
	}
};
};





