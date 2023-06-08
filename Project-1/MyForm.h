#pragma once
#include <msclr\marshal_cppstd.h>
#include <algorithm>

namespace Project1 {

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_calculate;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;





	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colnum1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnFe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnPb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumFnl;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::Label^ labelResult;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Colnum1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnFe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumFnl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Почва", L"Вода", L"Воздух" });
			this->comboBox1->Location = System::Drawing::Point(123, 54);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Выберите среду";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 58);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Анализ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Colnum1,
					this->ColumnFe, this->Column1, this->ColumnPb, this->ColumFnl
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 133);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(749, 295);
			this->dataGridView1->TabIndex = 2;
			// 
			// Colnum1
			// 
			this->Colnum1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Colnum1->HeaderText = L"Номер пробы";
			this->Colnum1->MinimumWidth = 6;
			this->Colnum1->Name = L"Colnum1";
			// 
			// ColumnFe
			// 
			this->ColumnFe->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumnFe->HeaderText = L"Железо";
			this->ColumnFe->MinimumWidth = 6;
			this->ColumnFe->Name = L"ColumnFe";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Нитраты";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// ColumnPb
			// 
			this->ColumnPb->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumnPb->HeaderText = L"Свинец";
			this->ColumnPb->MinimumWidth = 6;
			this->ColumnPb->Name = L"ColumnPb";
			// 
			// ColumFnl
			// 
			this->ColumFnl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumFnl->HeaderText = L"Фенол";
			this->ColumFnl->MinimumWidth = 6;
			this->ColumFnl->Name = L"ColumFnl";
			// 
			// button_clear
			// 
			this->button_clear->Location = System::Drawing::Point(60, 470);
			this->button_clear->Margin = System::Windows::Forms::Padding(4);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(100, 28);
			this->button_clear->TabIndex = 3;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click_1);
			// 
			// button_calculate
			// 
			this->button_calculate->Location = System::Drawing::Point(292, 470);
			this->button_calculate->Margin = System::Windows::Forms::Padding(4);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(100, 28);
			this->button_calculate->TabIndex = 4;
			this->button_calculate->Text = L"Расчёт";
			this->button_calculate->UseVisualStyleBackColor = true;
			this->button_calculate->Click += gcnew System::EventHandler(this, &MyForm::button_calculate_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(465, 470);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(461, 450);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Степень загрязнения";
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(829, 432);
			this->button_add->Margin = System::Windows::Forms::Padding(4);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(101, 28);
			this->button_add->TabIndex = 7;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(860, 412);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Проба";
			// 
			// button_del
			// 
			this->button_del->Location = System::Drawing::Point(831, 466);
			this->button_del->Margin = System::Windows::Forms::Padding(4);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(100, 28);
			this->button_del->TabIndex = 9;
			this->button_del->Text = L"Удалить";
			this->button_del->UseVisualStyleBackColor = true;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->BackColor = System::Drawing::Color::Yellow;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelResult->Location = System::Drawing::Point(641, 470);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 25);
			this->labelResult->TabIndex = 10;
			this->labelResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(947, 550);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button_calculate);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<double>^ PDK;
		
	private: System::Void dataGridView1_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		int count = dataGridView1->Rows->Count;
		dataGridView1->Rows[count - 1]->Cells[0]->Value = count;
	}


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 1)
		{
			dataGridView1->Columns[4]->HeaderText = ("Фенол");
			dataGridView1->Columns[2]->HeaderText = ("Нитраты");
			PDK = gcnew array<double>{0.3, 3.3, 0.03, 0.001 };
			for (int i = 1; i < dataGridView1->ColumnCount; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = PDK[i - 1];
			}
		}
	else if (comboBox1->SelectedIndex == 0)
		{
			dataGridView1->Columns[4]->HeaderText = ("Бензол");
			dataGridView1->Columns[2]->HeaderText = ("Нитраты");
			PDK = gcnew array<double>{3.0, 130, 32, 0.3};
			for (int i = 1; i < dataGridView1->ColumnCount; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = PDK[i - 1];
			}
		}
	else if (comboBox1->SelectedIndex == 2)
		{
			dataGridView1->Columns[2]->HeaderText = ("Нитриты");
			dataGridView1->Columns[4]->HeaderText = ("Фенол");
			PDK = gcnew array<double>{0.04, 0.4, 0.001, 0.4};
			for (int i = 1; i < dataGridView1->ColumnCount; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = PDK[i - 1];
			}
		}
	}
	private: System::Void button_clear_Click_1(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
	}


private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add();
	dataGridView1->Rows[0]->Cells[0]->Value = "ПДК";
}
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add();
	int countRows = dataGridView1->Rows->Count;
	dataGridView1->Rows[countRows - 1]->Cells[0]->Value = (countRows - 1).ToString();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->Rows->Count > 1) {
		auto selectedRows = dataGridView1->SelectedCells;
		for (int i = 0; i < selectedRows->Count; i++)
		{
			if (selectedRows[i]->RowIndex != 0) {
				int selectedindex = selectedRows[i]->RowIndex;
				dataGridView1->Rows->RemoveAt(selectedindex);
				for (int j = selectedindex; j < dataGridView1->Rows->Count; j++)
				{
					dataGridView1->Rows[j]->Cells[0]->Value = j;
				}
			}
		}
	}
}
private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ variantsResult = gcnew array<String^>{
		"Условно чистая", "слабо загрязненная", "загрязненная",
			"грязная", "очень грязная"};
	ChangeSimbol();
	int countprob = dataGridView1->Rows->Count - 1;
	int countelements = dataGridView1->ColumnCount;
	float allmeanprob = 0;
	for (int i = 1; i < dataGridView1->Columns->Count; i++) {
		float countprobprev = 0;
		array <float>^ continuesprob = gcnew array <float>(countprob);
		for (int j = 1; j < dataGridView1->Rows->Count; j++) {
			float value = Convert::ToSingle(dataGridView1->Rows[j]->Cells[i]->Value);
			continuesprob[j - 1] = value / PDK[i - 1];
			if (value > PDK[i - 1]){
				countprobprev++;
			}
		} 
	
		float meanprob = 0;
		
		for (int n = 0; n < countprob; n++) {

			meanprob += (continuesprob[n] * (countprobprev / countprob));
		}
		
		allmeanprob += meanprob;
	}
	textBox1->Text = allmeanprob.ToString();
	if (allmeanprob < 1) {
		labelResult->Text = variantsResult[0];
		labelResult->BackColor = Color::Green;
	}
	else if (allmeanprob >= 1 && allmeanprob <= 2) {
		labelResult->Text = variantsResult[1];
		labelResult->BackColor = Color::Yellow;
	}
	else if (allmeanprob > 2 && allmeanprob <= 4) {
		labelResult->Text = variantsResult[2];
		labelResult->BackColor = Color::Yellow;
	}
	else if (allmeanprob > 4 && allmeanprob <= 10) {
		labelResult->Text = variantsResult[3];
		labelResult->BackColor = Color::Red;
	}
	else if (allmeanprob > 10) {
		labelResult->Text = variantsResult[4];
		labelResult->BackColor = Color::Red;
	}
}

void ChangeSimbol() {
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		for (int j = 0; j < dataGridView1->Columns->Count; j++) {
			String^ value = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
			std::string tempStr = msclr::interop::marshal_as<std::string>(value);
			const char x = '.';
			const char y = ',';
			std::replace(tempStr.begin(), tempStr.end(), x, y);
			value = msclr::interop::marshal_as<String^>(tempStr);
			dataGridView1->Rows[i]->Cells[j]->Value = value;
		}
	}
}
};
}
