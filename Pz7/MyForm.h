#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace Pz7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ListBox^ listBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 50);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(231, 297);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(218, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 24);
			this->textBox2->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Fuchsia;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(-4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 506);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 70);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вивести чергу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->ShowToolTips = true;
			this->tabControl1->Size = System::Drawing::Size(884, 531);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->checkedListBox1);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(876, 505);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(591, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 62);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Очистити чергу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Верхній елемент черги", L"Кількість елементів в черзі",
					L"Видалити перший елемент"
			});
			this->checkedListBox1->Location = System::Drawing::Point(512, 53);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(276, 61);
			this->checkedListBox1->TabIndex = 4;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel2->Location = System::Drawing::Point(447, 214);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(385, 125);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 79);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Додати нові значення";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(876, 505);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завадання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(337, 374);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(152, 71);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Обчислити";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(69, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введіть розмір черги";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(289, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 24);
			this->textBox3->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel3->Location = System::Drawing::Point(537, 108);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(264, 227);
			this->panel3->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(23, 132);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(217, 56);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Видалити елементи черги";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(23, 44);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(217, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Додати значення черги";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(87, 148);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(193, 148);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->panel4);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(876, 505);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завадання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(335, 373);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(152, 71);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Обчислити";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(67, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(287, 59);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 24);
			this->textBox4->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel4->Location = System::Drawing::Point(535, 107);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(264, 227);
			this->panel4->TabIndex = 8;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->Location = System::Drawing::Point(23, 132);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(217, 56);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Видалити елементи черги";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button9->Location = System::Drawing::Point(23, 44);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(217, 56);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Додати елементи черги";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(85, 147);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(193, 148);
			this->listBox2->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 531);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Collections::Generic::Queue<int> numbersQueue;
		System::Collections::Generic::Queue<int> myQueue1;
		System::Collections::Generic::Queue<System::String^>^ StrQueue;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersQueue.Enqueue(10);
	numbersQueue.Enqueue(20);
	numbersQueue.Enqueue(30);

	textBox1->Clear();
	for each (int number in numbersQueue) {
		textBox1->AppendText(number.ToString() + "\r\n");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = Convert::ToInt32(textBox2->Text);
	numbersQueue.Enqueue(number);
	textBox1->Clear();
	for each (int num in numbersQueue) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
	textBox2->Clear();
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->GetItemChecked(0)) { // "Верхній елемент черги"
		if (numbersQueue.Count > 0) {
			MessageBox::Show("Поточний верхній елемент: " + numbersQueue.Peek().ToString());
		}
		else {
			MessageBox::Show("Черга порожня.");
		}
	}
	else if (checkedListBox1->GetItemChecked(1)) { // "Кількість елементів в черзі"
		int count = numbersQueue.Count;
		MessageBox::Show("Кількість елементів у черзі: " + count.ToString());
	}
	else if (checkedListBox1->GetItemChecked(2)) { // "Dequeue"
		if (numbersQueue.Count > 0) {
			int removedElement = numbersQueue.Dequeue();
			MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString());
		}
		else {
			MessageBox::Show("Не можна видалити, черга порожня.");
		}
	}

	textBox1->Clear();

	for each (int num in numbersQueue) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersQueue.Clear();
	textBox1->Clear();
	MessageBox::Show("Черга очищена.");
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox3->Text);

	for (int i = 0; i < size; ++i) {
		int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Елемент черги", "Введіть значення елементів черги", "", 200, 200));

		myQueue1.Enqueue(inputValue);
		listBox1->Items->Add(inputValue.ToString());
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myQueue1.Count > 0) {
		myQueue1.Dequeue();
		if (listBox1->Items->Count > 0) {
			listBox1->Items->RemoveAt(0);
		}
	}
	else {
		listBox1->Items->Add("Черга порожня");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	int evenCount = 0;

	for each (int value in myQueue1) {
		// Перевірка: чи число парне (value % 2 == 0) та чи належить діапазону від 10 до 20
		if (value % 2 == 0 && value >= 10 && value <= 20) {
			sum += value;
			evenCount++;
		}
	}

	if (evenCount > 0) {
		double average = (double)sum / evenCount;
		MessageBox::Show("Середнє значення парних чисел у діапазоні від 10 до 20: " + average.ToString(), "Результат");
	}
	else {
		MessageBox::Show("Немає парних чисел у діапазоні від 10 до 20.", "Результат");
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox4->Text);
	for (int i = 0; i < size; ++i) {
		String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("Введіть значення елементів черги", "Введіть значення елемента черги", "", 200, 200);
		StrQueue.Enqueue(inputValue);
		listBox2->Items->Add(inputValue);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrQueue.Count > 0) {
		StrQueue.Dequeue();
		if (listBox2->Items->Count > 0)
			listBox2->Items->RemoveAt(0);
	}
	else {
		listBox2->Items->Add("Черга порожня");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int CountChars = 0;

	for (int i = 0; i < listBox2->Items->Count; i++) {
		String^ value = listBox2->Items[i]->ToString();
		CountChars += value->Length;
	}

	MessageBox::Show("Загальна кількість символів: " + CountChars, "Підсумок символів");
}
};
}
