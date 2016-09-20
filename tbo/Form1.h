#pragma once
#include <fstream>


namespace tbo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	static int matriks[9][3];
	static int status;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^  timer1;





	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label5;






	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>


		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(411, 115);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(27, 77);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(412, 115);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(27, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(413, 115);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(27, 77);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(244, 356);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(27, 77);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(244, 356);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(27, 77);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(244, 356);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(27, 77);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(414, 346);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(26, 27);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(414, 370);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(77, 27);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(416, 370);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(77, 27);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 14;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(414, 370);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(77, 27);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 15;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(415, 346);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(26, 27);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 16;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(187, 176);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(77, 27);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 17;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(187, 176);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(77, 27);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 18;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Form1::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(187, 176);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(77, 27);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 19;
			this->pictureBox14->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(412, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 32);
			this->button1->TabIndex = 22;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::AliceBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Tomato;
			this->button2->Location = System::Drawing::Point(474, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"+ mobil utara";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::AliceBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Tomato;
			this->button3->Location = System::Drawing::Point(517, 527);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 24;
			this->button3->Text = L"+1 mobil selatan";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::AliceBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Tomato;
			this->button4->Location = System::Drawing::Point(547, 356);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 25;
			this->button4->Text = L"+mobil timur";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::AliceBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Tomato;
			this->button5->Location = System::Drawing::Point(12, 356);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"+ mobil barat";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(433, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(476, 532);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(628, 361);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(106, 361);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"1";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(285, 526);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(26, 36);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 31;
			this->pictureBox15->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightPink;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(597, 13);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Reset Mobil";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(379, 0);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(26, 36);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 33;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(645, 313);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(36, 26);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 34;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(2, 217);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(36, 26);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 35;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(645, 281);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(36, 26);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 36;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(285, 271);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(26, 36);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 37;
			this->pictureBox20->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(414, 77);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 32);
			this->button7->TabIndex = 38;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button8->Location = System::Drawing::Point(12, 9);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 24);
			this->button8->TabIndex = 39;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button9->Location = System::Drawing::Point(12, 39);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 24);
			this->button9->TabIndex = 40;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"KG Drops of Jupiter", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MistyRose;
			this->label5->Location = System::Drawing::Point(578, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 23);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Time: 0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(684, 562);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Coral;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		static int start=524;
		static int su=0;
		static int st=645;
		static int sb=2;
		static int stu=645;
		static int stulurus=271;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	this->pictureBox1->Hide();
	this->pictureBox2->Hide();
	this->pictureBox3->Hide();
	this->pictureBox4->Hide();
	this->pictureBox5->Hide();
	this->pictureBox6->Hide();
	this->pictureBox7->Hide();
	this->pictureBox8->Hide();
	this->pictureBox9->Hide();
	this->pictureBox10->Hide();
	this->pictureBox11->Hide();
	this->pictureBox12->Hide();
	this->pictureBox13->Hide();
	this->pictureBox14->Hide();

    ifstream fin;
    fin.open("file.txt");

	for(int i = 0; i<= 8; i++)
	{
		for(int j = 0; j <3; j++)
		{
			fin>>matriks[i][j];
		}
	}	

	fin.close();

	for(int i=1;i<=8;i++)
	{
		matriks[i][1]=matriks[i-1][1]+matriks[i][1];
	}



	this->pictureBox15->Location = System::Drawing::Point(284, start);
	this->pictureBox16->Location = System::Drawing::Point(379, su);
	this->pictureBox17->Location = System::Drawing::Point(st,315);
	this->pictureBox18->Location = System::Drawing::Point(sb,219);
	this->pictureBox19->Location = System::Drawing::Point(stu,281);
	this->pictureBox20->Location = System::Drawing::Point(285,stulurus);
	this->pictureBox20->Hide();


	status = matriks[0][0];

	
	//this->timer1->Start();


	}

	static int count = 0;
	static int waktu=0;

	static int time=0;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		waktu++;
		time++;
		this->label5->Text="Time: "+Convert::ToString(time);

		
		if(waktu > 250)
			waktu = waktu-250;
	
		if (status == matriks[0][0])
		{
			if((waktu%250) == matriks[0][1])
				status = matriks[0][2];

		}

		if(status == matriks[1][0]) 
		{
			if((waktu%250) == matriks[1][1])
			status = matriks[1][2];
		}
		if(status == matriks[2][0])
		{
			if((waktu%250) == matriks[2][1])
			status = matriks[2][2];
		}

		if(status ==  matriks[3][0])
		{
			if((waktu%250)== matriks[3][1])
			status = matriks[3][2];
		}

		if(status == matriks[4][0])
		{
			if((waktu%250) == matriks[4][1])
			status = matriks[4][2];
		}

		if(status == matriks[5][0])
		{
			if((waktu%250) == matriks[5][1])
			status = matriks[5][2];
		}

		if(status == matriks[6][0])
		{
			if((waktu%250) == matriks[6][1])
			status = matriks[6][2];
		}

		if(status == matriks[7][0])
		{
			if((waktu%250) == matriks[7][1])
			status = matriks[7][2];
		}

		if(status == matriks[8][0])
		{
			if(waktu == matriks[8][1])
			status = matriks[8][2];
		}

		
		if((waktu%250) > 135 && (waktu%250) < 235 && clicked == true)
		{
				 count++;
				 
				 if(count == 15)
				 {	
					 waktu = 0;
					status = matriks[0][0];
					clicked = false;
				 }
		}
		


			int US = status / 1000;
			if(US == 1)
			{
				
				this->pictureBox1->Show();
				this->pictureBox2->Hide();
				this->pictureBox3->Hide();
				
				this->pictureBox4->Show();
				this->pictureBox5->Hide();
				this->pictureBox6->Hide();
			}
			else
			{
				if(US == 2)
				{
					
					this->pictureBox1->Hide();
					this->pictureBox2->Show();
					this->pictureBox3->Hide();
					
					this->pictureBox4->Hide();
					this->pictureBox5->Show();
					this->pictureBox6->Hide();
				}
				else
				{
					
					this->pictureBox1->Hide();
					this->pictureBox2->Hide();
					this->pictureBox3->Show();
					
					this->pictureBox4->Hide();
					this->pictureBox5->Hide();
					this->pictureBox6->Show();
				}
			}
			int TU = (status%1000) / 100;
			if(TU == 1)
			{
				
				this->pictureBox7->Show();
				this->pictureBox11->Hide();
			}
			else
			{

				this->pictureBox7->Hide();
				this->pictureBox11->Show();
					
			}

			int T = (status%100)/10;
			if(T == 1)
			{
				
				this->pictureBox8->Show();
				this->pictureBox9->Hide();
				this->pictureBox10->Hide();
			}		
			else
			{
				if(T == 2)
				{
					
					this->pictureBox8->Hide();
					this->pictureBox9->Show();
					this->pictureBox10->Hide();
				}
				else
				{
					
					this->pictureBox8->Hide();
					this->pictureBox9->Hide();
					this->pictureBox10->Show();
				}
			}

			int B = ((status%1000)%100)%10;
			if(B == 1)
			{
				
				this->pictureBox12->Show();
				this->pictureBox13->Hide();
				this->pictureBox14->Hide();
			}
			else
			{
				if(B == 2)
				{
					
					this->pictureBox12->Hide();
					this->pictureBox13->Show();
					this->pictureBox14->Hide();
				}
				else
				{
					
					this->pictureBox12->Hide();
					this->pictureBox13->Hide();
					this->pictureBox14->Show();
				}
			}

			if((mu>10 || ms>10) && ((mu>= 2*mb) ||( mu>=2* mt)|| (ms>= 2*mb) ||( ms>=2* mt) ) && (waktu>=5 && waktu <125) )
			{
				status = matriks[6][0];
				waktu = 125;
			}



			if(US==3)
			{
				
				start=start-32;
				su=su+32;
				this->pictureBox15->Location = System::Drawing::Point(284, start);
				this->pictureBox16->Location = System::Drawing::Point(379, su);
				if(start<0 )
				{
					this->pictureBox15->Location = System::Drawing::Point(284, 524);
					start=524;
				}

				if(su> 524)
				{
					this->pictureBox16->Location = System::Drawing::Point(379, 0);
					su=0;
				}
			}

			if(US==1 || US==2)
			{
				int checkpoint=364;
				
				if(start>checkpoint)
				{
					start=start-32;
					this->pictureBox15->Location = System::Drawing::Point(284, start);
					
				}
				else if(start==checkpoint)
				{

				}
				else
				{
						start=start-32;
						this->pictureBox15->Location = System::Drawing::Point(284, start);
						if(start<0)
						{
							this->pictureBox15->Location = System::Drawing::Point(284, 524);
							start=524;
						}
		
				}

				int cekutara=160;
				if(su<cekutara)
				{
					su=su+32;
					this->pictureBox16->Location = System::Drawing::Point(379, su);
					
				}
				else if(su==cekutara)
				{

				}
				else
				{
						su=su+32;
						this->pictureBox16->Location = System::Drawing::Point(379, su);
						if(su>524)
						{
							this->pictureBox16->Location = System::Drawing::Point(379, 0);
							su=0;
						}
	
				}
	
			}
			
			
			if(T==3)
			{
				st=st-20;
				this->pictureBox17->Location = System::Drawing::Point(st,315);

				if(st<1 )
				{
					this->pictureBox17->Location = System::Drawing::Point(645,315);
					st=645;
				}

			}

			if(T==1 || T==2)
			{
				int cektimur=425;
				
				if(st>cektimur)
				{
					st=st-20;
					this->pictureBox17->Location = System::Drawing::Point(st,315);
					
				}
				else if(st==cektimur)
				{

				}
				else
				{
						st=st-20;
						this->pictureBox17->Location = System::Drawing::Point(st,315);
						if(st<1)
						{
							this->pictureBox17->Location = System::Drawing::Point(645,315);
							st=645;
						}
				}
			}

		

			if(B==3)
			{
				sb=sb+20;
				this->pictureBox18->Location = System::Drawing::Point(sb,219);

				if(sb>645 )
				{
					this->pictureBox18->Location = System::Drawing::Point(2,219);
					sb=2;
				}

			}

			if(B==1 || B==2)
			{
				int cekbarat=222;
				
				if(sb<cekbarat)
				{
					sb=sb+20;
					this->pictureBox18->Location = System::Drawing::Point(sb,219);
					
				}
				else if(sb==cekbarat)
				{

				}
				else
				{
						sb=sb+20;
						this->pictureBox18->Location = System::Drawing::Point(sb,219);
						if(sb>645)
						{
							this->pictureBox18->Location = System::Drawing::Point(2,219);
							sb=2;
						}

				}
	
			}

			
			if(TU==3)
			{
				if(stu<306 )
				{
					this->pictureBox19->Hide();
					this->pictureBox20->Show();
					
					stulurus=stulurus-20;
					this->pictureBox20->Location = System::Drawing::Point(285,stulurus);


				}
				else
				{
					stu=stu-20;
					this->pictureBox19->Location = System::Drawing::Point(stu,281);
				}

				if(stulurus<0)
				{
					this->pictureBox20->Hide();
					this->pictureBox20->Location = System::Drawing::Point(285, 271);
					stulurus=285;
					this->pictureBox19->Location = System::Drawing::Point(645,281);
					stu=645;
					this->pictureBox19->Show();

				}

			}

			
			if(TU==1 || TU==2)
			{
				int cektu=425;
				
				if(stu>cektu)
				{
					stu=stu-20;

					this->pictureBox19->Location = System::Drawing::Point(stu,281);
					
				}
				else if(stu==cektu)
				{

				}
				else
				{
						
						if(stu<360 )
						{
							this->pictureBox19->Hide();
							this->pictureBox20->Show();
					
							stulurus=stulurus-20;
							this->pictureBox20->Location = System::Drawing::Point(285,stulurus);


						}
						else
						{
							stu=stu-20;
							this->pictureBox19->Location = System::Drawing::Point(stu,281);
						}

						if(stulurus<0)
						{
							this->pictureBox20->Hide();
							this->pictureBox20->Location = System::Drawing::Point(285, 271);
							stulurus=285;
							this->pictureBox19->Location = System::Drawing::Point(645,281);
							stu=645;
							this->pictureBox19->Show();

						}
				}
			}




		
		}
		
	


		static bool clicked= false;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(waktu > 135 && waktu < 235)
			{	 clicked = true;
			 count = 0; }
			 }
			 
	static int mu=0;
	static int ms=0;
	static int mb=0;
	static int mt=0;

	

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 mu=mu+1;
			 this->label1->Text=Convert::ToString(mu);
			
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 ms=ms+1;
			  this->label2->Text=Convert::ToString(ms);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 mt=mt+1;
			  this->label3->Text=Convert::ToString(mt);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 mb=mb+1;
			 this->label4->Text=Convert::ToString(mb);
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 mu=ms=mb=mt=0;
			 this->label1->Text=Convert::ToString(mu);
			 this->label2->Text=Convert::ToString(ms);
			 this->label3->Text=Convert::ToString(mt);
			 this->label4->Text=Convert::ToString(mb);


		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Start();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
		 }
};
}

