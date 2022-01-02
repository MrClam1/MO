#pragma once

#include "Class.h"

namespace MO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ действиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заказыToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заказыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->действиеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1300, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действиеToolStripMenuItem
			// 
			this->действиеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->заказыToolStripMenuItem });
			this->действиеToolStripMenuItem->Name = L"действиеToolStripMenuItem";
			this->действиеToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->действиеToolStripMenuItem->Text = L"Действие";
			// 
			// заказыToolStripMenuItem
			// 
			this->заказыToolStripMenuItem->Name = L"заказыToolStripMenuItem";
			this->заказыToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->заказыToolStripMenuItem->Text = L"Заказы";
			this->заказыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заказыToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 512);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 447);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Анализ заказа";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 547);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 483);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите индекс:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(689, 402);
			this->dataGridView1->TabIndex = 6;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(707, 27);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(581, 402);
			this->chart1->TabIndex = 7;
			this->chart1->Text = L"chart1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(864, 447);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Итог";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(502, 447);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Выгодный вариант";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(707, 483);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(581, 316);
			this->listBox1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(439, 501);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(439, 547);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(439, 596);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(439, 641);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"label8";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 819);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::Data::Odbc::OdbcConnection^ connection = gcnew System::Data::Odbc::OdbcConnection("Dsn=Indv;dbq=D:\\FILES\\C++ PROJECT\\MO\\DB.mdb;driverid=25;fil=MS Access;maxbuffersize=2048;pagetimeout=5;uid=admin");

	private: System::Void заказыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Hide();
		label3->Hide();
		label4->Hide();
		label5->Hide();
		label6->Hide();
		label7->Hide();
		label8->Hide();
		dataGridView1->Show();
		label1->Show();
		label2->Show();
		button1->Show();
		textBox1->Show();
		String^ test_command = "SELECT Order.* FROM [Order];";
		System::Data::Odbc::OdbcCommand^ command = gcnew System::Data::Odbc::OdbcCommand(test_command);

		try {
			command->Connection = connection;
			connection->Open();
			System::Data::Odbc::OdbcDataReader^ data1 = command->ExecuteReader();

			dataGridView1->Columns->Clear();

			dataGridView1->Columns->Add("1", "ID заказа");
			dataGridView1->Columns->Add("2", "Объект заказа");
			dataGridView1->Columns->Add("3", "Объем работы");
			dataGridView1->Columns->Add("4", "Кол-во станд. строителей");
			dataGridView1->Columns->Add("5", "Срок (кол-во недель)");
			dataGridView1->Columns->Add("6", "Производительность (в неделю)");
			dataGridView1->Columns->Add("7", "Штраф (в неделю)");
			dataGridView1->Columns->Add("8", "Цена проекта");
			dataGridView1->Columns->Add("9", "Зарплата строителям");

			while (data1->Read()) {
				dataGridView1->Rows->Add(data1["Code"], data1["NameOrder"], data1["Work"], data1["Workers"], data1["Term"], data1["WorkPerWeek"], data1["Recovery"], data1["Summa"], data1["Salary"]);
			}
			connection->Close();
		}
		catch (System::Data::Odbc::OdbcException^ e) {
			String^ errorMessages = "";
			for (int i = 0; i < e->Errors->Count; i++) {
				errorMessages += "Index #" + i + "\n" +
					"Message: " + e->Errors[i]->Message + "\n" +
					"NativeError: " + e->Errors[i]->NativeError + "\n" +
					"Source: " + e->Errors[i]->Source + "\n" +
					"SQL: " + e->Errors[i]->SQLState + "\n";
			}
			MessageBox::Show(errorMessages);
		}
		connection->Close();

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Hide();
		label1->Hide();
		label2->Hide();
		button1->Hide();
		textBox1->Hide();
		chart1->Hide();
		listBox1->Hide();
		label3->Hide();
		label4->Hide();
		label5->Hide();
		label6->Hide();
		label7->Hide();
		label8->Hide();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && !textBox1->Text->Contains(" ")) {
			String^ test_command1 = "SELECT Order.* FROM [Order] Where Code = " + textBox1->Text + ";";
			System::Data::Odbc::OdbcCommand^ command = gcnew System::Data::Odbc::OdbcCommand(test_command1);
			command->Connection = connection;
			connection->Open();
			System::Data::Odbc::OdbcDataReader^ data1 = command->ExecuteReader();
			if (data1->HasRows == 1) {
				ArrayList^ order = gcnew ArrayList();
				dataGridView1->Columns->Clear();

				dataGridView1->Columns->Add("1", "ID заказа");
				dataGridView1->Columns->Add("2", "Объект заказа");
				dataGridView1->Columns->Add("3", "Объем работы");
				dataGridView1->Columns->Add("4", "Кол-во станд. строителей");
				dataGridView1->Columns->Add("5", "Срок (кол-во недель)");
				dataGridView1->Columns->Add("6", "Производительность (в неделю)");
				dataGridView1->Columns->Add("7", "Штраф (в неделю)");
				dataGridView1->Columns->Add("8", "Цена проекта");
				dataGridView1->Columns->Add("9", "Зарплата строителям");

				while (data1->Read()) {
					order->Add(data1["Code"]);
					order->Add(data1["NameOrder"]);
					order->Add(data1["Work"]);
					order->Add(data1["Workers"]);
					order->Add(data1["Term"]);
					order->Add(data1["WorkPerWeek"]);
					order->Add(data1["Recovery"]);
					order->Add(data1["Summa"]);
					order->Add(data1["Salary"]);
					dataGridView1->Rows->Add(data1["Code"], data1["NameOrder"], data1["Work"], data1["Workers"], data1["Term"], data1["WorkPerWeek"], data1["Recovery"], data1["Summa"], data1["Salary"]);
					label1->Hide();
					label2->Hide();
					button1->Hide();
					textBox1->Hide();
					textBox1->Clear();
				}
				chart1->Show();
				listBox1->Show();
				listBox1->Items->Clear();
				label3->Show();
				label4->Show();
				label5->Show();
				label6->Show();
				label7->Show();
				label8->Show();
				chart1->Series->Clear();
				Series^ series1 = gcnew Series(L"F");
				series1->Color = Color::Blue;
				series1->IsVisibleInLegend = true;
				series1->IsXValueIndexed = true;
				series1->ChartType = SeriesChartType::Line;
				chart1->Series->Add(series1);

				ArrayList^ res = gcnew ArrayList();
				Class function;
				res = function.Oper(order);
				for (int i = 1; i <= res->Count/3; i++) {
					series1->Points->AddXY(i, Convert::ToSingle(res[i - 1]->ToString()));
				}
				int count = 1;
				for (int i = res->Count / 3; i < res->Count; i = i + 2) {
					this->listBox1->Items->Add("Кол-во работников: " + count + ". Прибыль от проекта: " + Convert::ToSingle(res[count - 1]->ToString()) + ". Потрачено недель: " + Convert::ToSingle(res[i]->ToString()) + ". Штрафных недель: " + Convert::ToSingle(res[i + 1]->ToString()));
					count++;
				}
				float max = 0;
				int index = 0;
				for (int i = 0; i < res->Count/3; i++) {
					if (Convert::ToSingle(res[i]->ToString()) > max) {
						max = Convert::ToSingle(res[i]->ToString());
						index = i;
					}
				}
				label5->Text = "Максимальная прибыль: " + max;
				label6->Text = "Кол-во работников: " + (index + 1);
				label7->Text = "Потрачено недель: " + Convert::ToSingle(res[res->Count / 3 + index * 2]->ToString());
				label8->Text = "Штрафных недель: " + Convert::ToSingle(res[res->Count / 3 + index  * 2 + 1]->ToString());
				
			}
			else {
				String^ errorMessages = "Заказ с данным индексом: " + textBox1->Text + " не обнаружен! Пожалуйста, проверьте!";
				MessageBox::Show(errorMessages);
			}
			connection->Close();
		}
		else {
			String^ errorMessages = "Вводимое значение либо пусто, либо имеет пробелы! Пожалуйста, проверьте!";
			MessageBox::Show(errorMessages);
		}
	}
};
}
