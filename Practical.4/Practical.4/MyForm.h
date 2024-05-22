#pragma once
#include "Function.h"
namespace Practical4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			cont1 = gcnew Cont(textBox15);
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
	private: Cont^ cont1;
	private: System::Windows::Forms::TabControl^ TabControl1;

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label28;

	protected:

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
			this->TabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->TabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabControl1
			// 
			this->TabControl1->Controls->Add(this->tabPage1);
			this->TabControl1->Controls->Add(this->tabPage2);
			this->TabControl1->Controls->Add(this->tabPage3);
			this->TabControl1->Controls->Add(this->tabPage4);
			this->TabControl1->Controls->Add(this->tabPage5);
			this->TabControl1->Controls->Add(this->tabPage8);
			this->TabControl1->Controls->Add(this->tabPage9);
			this->TabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TabControl1->Location = System::Drawing::Point(12, 7);
			this->TabControl1->Name = L"TabControl1";
			this->TabControl1->SelectedIndex = 0;
			this->TabControl1->Size = System::Drawing::Size(902, 589);
			this->TabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox17);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 38);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(894, 547);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Linear";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(420, 300);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(150, 34);
			this->textBox17->TabIndex = 11;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(430, 235);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 29);
			this->label22->TabIndex = 10;
			this->label22->Text = L"f(x)=";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(37, 20);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(8, 8);
			this->button9->TabIndex = 9;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->ForeColor = System::Drawing::Color::OrangeRed;
			this->button8->Location = System::Drawing::Point(420, 365);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 45);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Сalculate";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(60, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 29);
			this->label9->TabIndex = 7;
			this->label9->Text = L"f(x)=kx+b";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(121, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 34);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(120, 175);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 34);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(120, 235);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 34);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"b";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"k";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::LimeGreen;
			this->button1->Location = System::Drawing::Point(60, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 38);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(894, 547);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Quadratic";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(420, 300);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(150, 34);
			this->textBox18->TabIndex = 12;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(430, 235);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(60, 29);
			this->label23->TabIndex = 11;
			this->label23->Text = L"f(x)=";
			// 
			// button10
			// 
			this->button10->ForeColor = System::Drawing::Color::OrangeRed;
			this->button10->Location = System::Drawing::Point(420, 365);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(131, 45);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Сalculate";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Location = System::Drawing::Point(60, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 29);
			this->label10->TabIndex = 9;
			this->label10->Text = L"f(x)=ax^2+bx+c";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::LimeGreen;
			this->button2->Location = System::Drawing::Point(60, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 29);
			this->label7->TabIndex = 7;
			this->label7->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"c";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"b";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"a";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(120, 295);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(140, 34);
			this->textBox7->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(120, 235);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(140, 34);
			this->textBox6->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(120, 175);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 34);
			this->textBox5->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(120, 115);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 34);
			this->textBox4->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox19);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 38);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(894, 547);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Trigonometric";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(420, 300);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(150, 34);
			this->textBox19->TabIndex = 6;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(430, 235);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(60, 29);
			this->label24->TabIndex = 5;
			this->label24->Text = L"f(x)=";
			// 
			// button11
			// 
			this->button11->ForeColor = System::Drawing::Color::OrangeRed;
			this->button11->Location = System::Drawing::Point(420, 365);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(127, 47);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Сalculate";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(60, 30);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(118, 29);
			this->label11->TabIndex = 3;
			this->label11->Text = L"f(x)=sin(x)";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::LimeGreen;
			this->button3->Location = System::Drawing::Point(60, 365);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(120, 175);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(140, 34);
			this->textBox8->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(40, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 29);
			this->label8->TabIndex = 0;
			this->label8->Text = L"x";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox20);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->textBox10);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 38);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(894, 547);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Power";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(420, 300);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(150, 34);
			this->textBox20->TabIndex = 8;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(430, 235);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(60, 29);
			this->label25->TabIndex = 7;
			this->label25->Text = L"f(x)=";
			// 
			// button12
			// 
			this->button12->ForeColor = System::Drawing::Color::OrangeRed;
			this->button12->Location = System::Drawing::Point(420, 365);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(122, 45);
			this->button12->TabIndex = 6;
			this->button12->Text = L"Сalculate";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::LimeGreen;
			this->button4->Location = System::Drawing::Point(60, 365);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 45);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(120, 235);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(140, 34);
			this->textBox10->TabIndex = 4;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(120, 175);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(140, 34);
			this->textBox9->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(40, 235);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 29);
			this->label14->TabIndex = 2;
			this->label14->Text = L"x";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(40, 175);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 29);
			this->label13->TabIndex = 1;
			this->label13->Text = L"a";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Location = System::Drawing::Point(60, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 29);
			this->label12->TabIndex = 0;
			this->label12->Text = L"f(x)=x^a";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->textBox21);
			this->tabPage5->Controls->Add(this->label26);
			this->tabPage5->Controls->Add(this->button13);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->tabControl2);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage5->Location = System::Drawing::Point(4, 38);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(894, 547);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Indicator";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(420, 300);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(150, 34);
			this->textBox21->TabIndex = 9;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(430, 235);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 29);
			this->label26->TabIndex = 8;
			this->label26->Text = L"f(x)=";
			// 
			// button13
			// 
			this->button13->ForeColor = System::Drawing::Color::OrangeRed;
			this->button13->Location = System::Drawing::Point(420, 365);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(128, 44);
			this->button13->TabIndex = 7;
			this->button13->Text = L"Сalculate";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::LimeGreen;
			this->button5->Location = System::Drawing::Point(60, 365);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 45);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(120, 175);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(140, 34);
			this->textBox12->TabIndex = 5;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(120, 235);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(140, 34);
			this->textBox11->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(40, 235);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 29);
			this->label17->TabIndex = 3;
			this->label17->Text = L"x";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(40, 175);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 29);
			this->label16->TabIndex = 2;
			this->label16->Text = L"a";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label15->Location = System::Drawing::Point(61, 33);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 29);
			this->label15->TabIndex = 1;
			this->label15->Text = L"f(x)=a^x";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(386, 169);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(8, 8);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 38);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(0, 0);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 38);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(0, 0);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"tabPage7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->textBox22);
			this->tabPage8->Controls->Add(this->label27);
			this->tabPage8->Controls->Add(this->button14);
			this->tabPage8->Controls->Add(this->button6);
			this->tabPage8->Controls->Add(this->textBox14);
			this->tabPage8->Controls->Add(this->textBox13);
			this->tabPage8->Controls->Add(this->label20);
			this->tabPage8->Controls->Add(this->label19);
			this->tabPage8->Controls->Add(this->label18);
			this->tabPage8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage8->Location = System::Drawing::Point(4, 38);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(894, 547);
			this->tabPage8->TabIndex = 5;
			this->tabPage8->Text = L"InverseProportion";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(420, 300);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(150, 34);
			this->textBox22->TabIndex = 8;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(430, 235);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(60, 29);
			this->label27->TabIndex = 7;
			this->label27->Text = L"f(x)=";
			// 
			// button14
			// 
			this->button14->ForeColor = System::Drawing::Color::OrangeRed;
			this->button14->Location = System::Drawing::Point(420, 365);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(121, 45);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Сalculate";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::LimeGreen;
			this->button6->Location = System::Drawing::Point(60, 365);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 45);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Add";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(120, 235);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(140, 34);
			this->textBox14->TabIndex = 4;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(120, 175);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(140, 34);
			this->textBox13->TabIndex = 3;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(40, 235);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 29);
			this->label20->TabIndex = 2;
			this->label20->Text = L"x";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(40, 175);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 29);
			this->label19->TabIndex = 1;
			this->label19->Text = L"k";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label18->Location = System::Drawing::Point(61, 33);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(90, 29);
			this->label18->TabIndex = 0;
			this->label18->Text = L"f(x)=k/x";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->label28);
			this->tabPage9->Controls->Add(this->textBox23);
			this->tabPage9->Controls->Add(this->textBox16);
			this->tabPage9->Controls->Add(this->label21);
			this->tabPage9->Controls->Add(this->button7);
			this->tabPage9->Controls->Add(this->textBox15);
			this->tabPage9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage9->Location = System::Drawing::Point(4, 38);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(894, 547);
			this->tabPage9->TabIndex = 6;
			this->tabPage9->Text = L"Output";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(27, 430);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(287, 29);
			this->label28->TabIndex = 5;
			this->label28->Text = L"Sum function in container ";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(327, 427);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(254, 34);
			this->textBox23->TabIndex = 4;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(74, 14);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(117, 34);
			this->textBox16->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(27, 14);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(24, 29);
			this->label21->TabIndex = 2;
			this->label21->Text = L"x";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::MediumBlue;
			this->button7->Location = System::Drawing::Point(32, 473);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 46);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Output";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(32, 54);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(842, 352);
			this->textBox15->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 597);
			this->Controls->Add(this->TabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double k = Convert::ToDouble(textBox3->Text);
		double b = Convert::ToDouble(textBox2->Text);
		cont1->addFunction(gcnew LinearFunction(k, b));
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(textBox4->Text);
		double b = Convert::ToDouble(textBox5->Text);
		double c = Convert::ToDouble(textBox6->Text);
		cont1->addFunction(gcnew QuadraticFunction(a, b, c));
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		cont1->addFunction(gcnew TrigonometricFunction());
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(textBox9->Text);		
		cont1->addFunction(gcnew PowerFunction(a));
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(textBox12->Text);		
		cont1->addFunction(gcnew IndicatorFunction(a));
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		double k = Convert::ToDouble(textBox13->Text);		
		cont1->addFunction(gcnew InverseProportionalityFunction(k));
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {		
		double x = Convert::ToDouble(textBox16->Text);
		cont1->Output();
		textBox23->Text = System::Convert::ToString(cont1->SumFunctionValues(x));	
		
	}

    private: Function^ f;
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Convert::ToDouble(textBox1->Text);
		double k = Convert::ToDouble(textBox3->Text);
		double b = Convert::ToDouble(textBox2->Text);
		f = gcnew LinearFunction(k, b);
		textBox17->Text = System::Convert::ToString(f->Evaluate(x));

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Convert::ToDouble(textBox7->Text);
		double a = Convert::ToDouble(textBox4->Text);
		double b = Convert::ToDouble(textBox5->Text);
		double c = Convert::ToDouble(textBox6->Text);
		f = gcnew QuadraticFunction(a, b, c);
		textBox18->Text = System::Convert::ToString(f->Evaluate(x));
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Convert::ToDouble(textBox8->Text);
		f = gcnew TrigonometricFunction();
		textBox19->Text = System::Convert::ToString(f->Evaluate(x));
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Convert::ToDouble(textBox10->Text);
		double a = Convert::ToDouble(textBox9->Text);
		f = gcnew PowerFunction(a);
		textBox20->Text = System::Convert::ToString(f->Evaluate(x));
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Convert::ToDouble(textBox11->Text);
		double a = Convert::ToDouble(textBox12->Text);
		f = gcnew IndicatorFunction(a);
		textBox21->Text = System::Convert::ToString(f->Evaluate(x));
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Convert::ToDouble(textBox14->Text);
		double a = Convert::ToDouble(textBox13->Text);
		f = gcnew InverseProportionalityFunction(a);
		textBox22->Text = System::Convert::ToString(f->Evaluate(x));
	}

};
}
