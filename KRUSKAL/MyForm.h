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
			this->btn_run = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_CellContentClick);
			// 
			// btn_create_matrix
			// 
			this->btn_create_matrix->Location = System::Drawing::Point(102, 365);
			this->btn_create_matrix->Name = L"btn_create_matrix";
			this->btn_create_matrix->Size = System::Drawing::Size(153, 44);
			this->btn_create_matrix->TabIndex = 5;
			this->btn_create_matrix->Text = L"Создать матрицу";
			this->btn_create_matrix->UseVisualStyleBackColor = true;
			this->btn_create_matrix->Click += gcnew System::EventHandler(this, &MyForm::btn_create_matrix_Click);
			// 
			// btn_run
			// 
			this->btn_run->Location = System::Drawing::Point(458, 35);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(223, 59);
			this->btn_run->TabIndex = 6;
			this->btn_run->Text = L"Запуск алгоритма";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &MyForm::btn_run_Click);
			// 
			// btn_random
			// 
			this->btn_random->Location = System::Drawing::Point(1097, 95);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(194, 77);
			this->btn_random->TabIndex = 7;
			this->btn_random->Text = L"Заполнить случайными числами";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &MyForm::btn_random_Click);
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
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1303, 978);
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
			for (int j = 0; j < n;j++) {

				if (dataGridView->Rows[i]->Cells[j]->Value != nullptr) {
					int w = System::Convert::ToInt32(dataGridView->Rows[i]->Cells[j]->Value);

					if (w > 0) {
						edge e;
						e.u = i; e.v = j;
						e.weight = w;
						edges->Add(e);
					}
				}
			}
		}
		return edges;
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void btn_create_matrix_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = (int)numericUpDown->Value; // получаем n из элемента 2
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
}

private: System::Void btn_random_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rand = gcnew Random();
	int n = dataGridView->RowCount;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			int weight = rand->Next(1, 30); // Веса от  1 до 20

			dataGridView->Rows[i]->Cells[j]->Value = weight.ToString();
			dataGridView->Rows[j]->Cells[i]->Value = weight.ToString();
		}
	}
}

	   void bubble_sort_edges(System::Collections::Generic::List<edge>^ edges) {
		   int n = edges->Count;
		   for (int i = 0; i < n; i++) {
			   for (int j = 0; j < n - i - 1; j++) {
				   if (edges[i].weight > edges[j + 1].weight) {
					   edge temp = edges[j];
					   edges[j] = edges[j + 1];
					   edges[j + 1] = temp;
				   }
			   }
		   }
	   }


void DrawGraph(Panel^ p, System::Collections::Generic::List<edge>^ edges, int nodeCount, bool isResult) {
		   Graphics^ g = p->CreateGraphics();
		   g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias; 
		   g->Clear(Color::White);

		   int R = Math::Min(p->Width, p->Height) / 2 - 30; // Радиус круга
		   Point center(p->Width / 2, p->Height / 2);

		   // 1. Рисуем ребра
		   Pen^ edgePen = gcnew Pen(isResult ? Color::DarkRed : Color::Black, 2);
		   for each (edge e in edges) {
			   float angle1 = 2 * Math::PI * e.u / nodeCount;
			   float angle2 = 2 * Math::PI * e.v / nodeCount;

			   Point p1(center.X + R * Math::Cos(angle1), center.Y + R * Math::Sin(angle1));
			   Point p2(center.X + R * Math::Cos(angle2), center.Y + R * Math::Sin(angle2));

			   g->DrawLine(edgePen, p1, p2);

			   // Рисуем вес ребра в рамке (как на твоем эскизе)
			   String^ weightStr = e.weight.ToString();
			   Point mid((p1.X + p2.X) / 2, (p1.Y + p2.Y) / 2);
			   g->FillRectangle(Brushes::White, mid.X - 10, mid.Y - 10, 20, 20);
			   g->DrawRectangle(Pens::Black, mid.X - 10, mid.Y - 10, 20, 20);
			   g->DrawString(weightStr, gcnew System::Drawing::Font("Arial", 8), Brushes::Black, mid.X - 8, mid.Y - 7);
		   }

		   // 2. Рисуем вершины
		   for (int i = 0; i < nodeCount; i++) {
			   float angle = 2 * Math::PI * i / nodeCount;
			   int x = center.X + R * Math::Cos(angle) - 15;
			   int y = center.Y + R * Math::Sin(angle) - 15;

			   g->FillEllipse(Brushes::White, x, y, 30, 30);
			   g->DrawEllipse(Pens::Black, x, y, 30, 30);

			   // Corrected DrawString call
			   g->DrawString((i + 1).ToString(), gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold),
				   Brushes::Black, (float)(x + 7), (float)(y + 7));
		   }
	   }

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = (int)numericUpDown->Value;
	System::Collections::Generic::List<edge>^all_edges = GetEdgesFromGrid(); //получаем все ребра
	//сортируем ребра во весу Лямбда
	bubble_sort_edges(all_edges);

	System::Collections::Generic::List<edge>^ mst_edges = gcnew System::Collections::Generic::List<edge>();
	DSU^ dsu = gcnew DSU(n);
	int total_weight = 0;

	for each (edge e in all_edges) {
		if (dsu->find(e.u) != dsu->find(e.v)) {
			dsu->unite(e.u, e.v);
			mst_edges->Add(e);
			total_weight += e.weight;
		}
	}

	//Вывод текста

	lbl_status->Text = "Готово. Количество рёбер в каркасе(MST): " + mst_edges->Count;
//	lbl_total_weight->Text = "Суммарный вес каркаса: " + total_weight;

	DrawGraph(panel_1, GetEdgesFromGrid(), n, false); //Исходный граф
	DrawGraph(panel_2, mst_edges, n, true); //Остовной граф
}
};
}
