#pragma once
#include <vector>
#include <iomanip>
#include <fstream>
#include <regex>
#include "User.h";
#include "Product.h";

namespace OnlineMarketGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		bool editmode = true;
		int editPos = 0;
		bool dragging = false;
		double mouseX;
		double mouseY;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button8;



	public:
		vector<Product>* products;
		vector<User>* users;
		vector<int>* carte;
		vector<int>* carteQuantity;
		User* LoggedUser;
		int loggedInID;
		int currentProd;

	public:


	public:

	public:

	public:
		int rateId;
	private: System::Windows::Forms::Panel^ panel3;
	public:

	private: System::Windows::Forms::Panel^ viewpanel;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ totalprice;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ offer;
	private: System::Windows::Forms::Label^ price;
	private: System::Windows::Forms::Label^ quantity;
	private: System::Windows::Forms::Label^ company;
	private: System::Windows::Forms::Label^ seller;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ pname;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ pcategory;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::FlowLayoutPanel^ spanel;
	private: System::Windows::Forms::FlowLayoutPanel^ dashpanel;

	private: System::Windows::Forms::Panel^ cartPanelContainer;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::FlowLayoutPanel^ cartepanel;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ tprice;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ dashpanelContainer;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ editPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::Label^ sellProductCounter;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ userProfile;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button15;

private: System::Windows::Forms::TextBox^ textBox7;




private: System::Windows::Forms::TextBox^ textBox6;




	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Panel^ srccontainer;
private: System::Windows::Forms::FlowLayoutPanel^ srcPanel;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::FlowLayoutPanel^ offerpanel;






	public:
		int pos;
		Dashboard(vector<User>* users, vector<Product>* products, int LoggedInID)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->loggedInID = LoggedInID;
			this->users = users;
			this->products = products;
			carte = new vector<int>;
			carteQuantity = new vector<int>;
			for (int i = 0; i < users->size(); i++) {
				if (users->at(i).id == LoggedInID) {
					pos = i;
					LoggedUser = &users->at(i);
					if ((users->at(i).is_seller) == 0) {
						button4->Visible = false;
					}
					break;
				}
				label1->Text = (users->at(i).is_seller).ToString();
			}
			viewOfferProducts();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Splitter^ splitter2;


	private: System::Windows::Forms::Panel^ panel2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->offerpanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->cartPanelContainer = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tprice = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cartepanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->spanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->viewpanel = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->totalprice = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->offer = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			this->quantity = (gcnew System::Windows::Forms::Label());
			this->company = (gcnew System::Windows::Forms::Label());
			this->seller = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pname = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pcategory = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->editPanel = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dashpanelContainer = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->sellProductCounter = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->dashpanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->userProfile = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->srccontainer = (gcnew System::Windows::Forms::Panel());
			this->srcPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->cartPanelContainer->SuspendLayout();
			this->panel6->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->viewpanel->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->flowLayoutPanel3->SuspendLayout();
			this->editPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->dashpanelContainer->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->userProfile->SuspendLayout();
			this->srccontainer->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Controls->Add(this->splitter1);
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button16);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->flowLayoutPanel1->Size = System::Drawing::Size(195, 471);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::flowLayoutPanel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(195, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->splitter1->Location = System::Drawing::Point(0, 139);
			this->splitter1->Margin = System::Windows::Forms::Padding(0, 15, 0, 10);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(195, 3);
			this->splitter1->TabIndex = 1;
			this->splitter1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 152);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(195, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"  Hot Offers";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseCompatibleTextRendering = true;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 203);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(195, 51);
			this->button2->TabIndex = 3;
			this->button2->Text = L"  Store";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseCompatibleTextRendering = true;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button16->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button16->Location = System::Drawing::Point(0, 254);
			this->button16->Margin = System::Windows::Forms::Padding(0);
			this->button16->Name = L"button16";
			this->button16->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button16->Size = System::Drawing::Size(195, 51);
			this->button16->TabIndex = 7;
			this->button16->Text = L"   Search";
			this->button16->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button16->UseCompatibleTextRendering = true;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Dashboard::button16_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 305);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(195, 51);
			this->button3->TabIndex = 4;
			this->button3->Text = L"   My Orders";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseCompatibleTextRendering = true;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 356);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(195, 51);
			this->button5->TabIndex = 6;
			this->button5->Text = L"   Profile";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseCompatibleTextRendering = true;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Dashboard::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 407);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(195, 51);
			this->button4->TabIndex = 5;
			this->button4->Text = L"   Dashboard";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseCompatibleTextRendering = true;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->splitter2);
			this->panel1->Location = System::Drawing::Point(198, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1035, 596);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->offerpanel);
			this->panel3->Controls->Add(this->cartPanelContainer);
			this->panel3->Controls->Add(this->spanel);
			this->panel3->Controls->Add(this->viewpanel);
			this->panel3->Controls->Add(this->editPanel);
			this->panel3->Controls->Add(this->dashpanelContainer);
			this->panel3->Controls->Add(this->userProfile);
			this->panel3->Controls->Add(this->srccontainer);
			this->panel3->Location = System::Drawing::Point(3, 46);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1032, 547);
			this->panel3->TabIndex = 2;
			// 
			// offerpanel
			// 
			this->offerpanel->AutoScroll = true;
			this->offerpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->offerpanel->Location = System::Drawing::Point(0, 0);
			this->offerpanel->Name = L"offerpanel";
			this->offerpanel->Size = System::Drawing::Size(1032, 547);
			this->offerpanel->TabIndex = 10;
			this->offerpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::offerpanel_Paint);
			// 
			// cartPanelContainer
			// 
			this->cartPanelContainer->Controls->Add(this->panel6);
			this->cartPanelContainer->Controls->Add(this->cartepanel);
			this->cartPanelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cartPanelContainer->Location = System::Drawing::Point(0, 0);
			this->cartPanelContainer->Name = L"cartPanelContainer";
			this->cartPanelContainer->Size = System::Drawing::Size(1032, 547);
			this->cartPanelContainer->TabIndex = 9;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->flowLayoutPanel4);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 499);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1032, 48);
			this->panel6->TabIndex = 11;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->button12);
			this->flowLayoutPanel4->Controls->Add(this->tprice);
			this->flowLayoutPanel4->Controls->Add(this->label2);
			this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel4->Location = System::Drawing::Point(582, 3);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(447, 50);
			this->flowLayoutPanel4->TabIndex = 0;
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button12->FlatAppearance->BorderSize = 3;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button12->Location = System::Drawing::Point(311, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(133, 38);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Buy";
			this->button12->UseCompatibleTextRendering = true;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Dashboard::button12_Click);
			// 
			// tprice
			// 
			this->tprice->AutoSize = true;
			this->tprice->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tprice->Location = System::Drawing::Point(269, 10);
			this->tprice->Margin = System::Windows::Forms::Padding(0, 10, 10, 0);
			this->tprice->Name = L"tprice";
			this->tprice->Size = System::Drawing::Size(29, 24);
			this->tprice->TabIndex = 4;
			this->tprice->Text = L"0$";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(193, 10);
			this->label2->Margin = System::Windows::Forms::Padding(3, 10, 0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Total Price:";
			// 
			// cartepanel
			// 
			this->cartepanel->AutoScroll = true;
			this->cartepanel->Location = System::Drawing::Point(0, 0);
			this->cartepanel->Name = L"cartepanel";
			this->cartepanel->Size = System::Drawing::Size(1032, 499);
			this->cartepanel->TabIndex = 10;
			// 
			// spanel
			// 
			this->spanel->AutoScroll = true;
			this->spanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spanel->Location = System::Drawing::Point(0, 0);
			this->spanel->Name = L"spanel";
			this->spanel->Size = System::Drawing::Size(1032, 547);
			this->spanel->TabIndex = 7;
			// 
			// viewpanel
			// 
			this->viewpanel->Controls->Add(this->button10);
			this->viewpanel->Controls->Add(this->panel4);
			this->viewpanel->Controls->Add(this->totalprice);
			this->viewpanel->Controls->Add(this->label11);
			this->viewpanel->Controls->Add(this->button9);
			this->viewpanel->Controls->Add(this->offer);
			this->viewpanel->Controls->Add(this->price);
			this->viewpanel->Controls->Add(this->quantity);
			this->viewpanel->Controls->Add(this->company);
			this->viewpanel->Controls->Add(this->seller);
			this->viewpanel->Controls->Add(this->panel5);
			this->viewpanel->Controls->Add(this->flowLayoutPanel3);
			this->viewpanel->Controls->Add(this->label8);
			this->viewpanel->Controls->Add(this->label6);
			this->viewpanel->Controls->Add(this->label5);
			this->viewpanel->Controls->Add(this->label4);
			this->viewpanel->Controls->Add(this->label3);
			this->viewpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->viewpanel->Location = System::Drawing::Point(0, 0);
			this->viewpanel->Name = L"viewpanel";
			this->viewpanel->Size = System::Drawing::Size(1032, 547);
			this->viewpanel->TabIndex = 8;
			this->viewpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::viewpanel_Paint_1);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(-2, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(59, 50);
			this->button10->TabIndex = 19;
			this->button10->Text = L"<";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Dashboard::button10_Click_1);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel4->Location = System::Drawing::Point(49, 95);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(509, 3);
			this->panel4->TabIndex = 18;
			// 
			// totalprice
			// 
			this->totalprice->AutoSize = true;
			this->totalprice->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalprice->ForeColor = System::Drawing::Color::White;
			this->totalprice->Location = System::Drawing::Point(205, 388);
			this->totalprice->Name = L"totalprice";
			this->totalprice->Size = System::Drawing::Size(97, 37);
			this->totalprice->TabIndex = 17;
			this->totalprice->Text = L"Total Price";
			this->totalprice->UseCompatibleTextRendering = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(53, 388);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(127, 37);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Price per Pice:";
			this->label11->UseCompatibleTextRendering = true;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button9->FlatAppearance->BorderSize = 3;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button9->Location = System::Drawing::Point(49, 457);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(949, 64);
			this->button9->TabIndex = 15;
			this->button9->Text = L"Add To Carte";
			this->button9->UseCompatibleTextRendering = true;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Dashboard::button9_Click_1);
			// 
			// offer
			// 
			this->offer->AutoSize = true;
			this->offer->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->offer->ForeColor = System::Drawing::Color::White;
			this->offer->Location = System::Drawing::Point(205, 334);
			this->offer->Name = L"offer";
			this->offer->Size = System::Drawing::Size(51, 37);
			this->offer->TabIndex = 14;
			this->offer->Text = L"Offer";
			this->offer->UseCompatibleTextRendering = true;
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::White;
			this->price->Location = System::Drawing::Point(205, 282);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(50, 37);
			this->price->TabIndex = 13;
			this->price->Text = L"Price";
			this->price->UseCompatibleTextRendering = true;
			// 
			// quantity
			// 
			this->quantity->AutoSize = true;
			this->quantity->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity->ForeColor = System::Drawing::Color::White;
			this->quantity->Location = System::Drawing::Point(205, 231);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(80, 37);
			this->quantity->TabIndex = 12;
			this->quantity->Text = L"Quantity";
			this->quantity->UseCompatibleTextRendering = true;
			// 
			// company
			// 
			this->company->AutoSize = true;
			this->company->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->company->ForeColor = System::Drawing::Color::White;
			this->company->Location = System::Drawing::Point(205, 178);
			this->company->Name = L"company";
			this->company->Size = System::Drawing::Size(86, 37);
			this->company->TabIndex = 11;
			this->company->Text = L"Company";
			this->company->UseCompatibleTextRendering = true;
			// 
			// seller
			// 
			this->seller->AutoSize = true;
			this->seller->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seller->ForeColor = System::Drawing::Color::White;
			this->seller->Location = System::Drawing::Point(205, 127);
			this->seller->Name = L"seller";
			this->seller->Size = System::Drawing::Size(56, 37);
			this->seller->TabIndex = 10;
			this->seller->Text = L"Seller";
			this->seller->UseCompatibleTextRendering = true;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->pictureBox2);
			this->panel5->Location = System::Drawing::Point(610, 52);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(388, 364);
			this->panel5->TabIndex = 9;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(361, 327);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->pname);
			this->flowLayoutPanel3->Controls->Add(this->label9);
			this->flowLayoutPanel3->Controls->Add(this->pcategory);
			this->flowLayoutPanel3->Location = System::Drawing::Point(49, 47);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(509, 50);
			this->flowLayoutPanel3->TabIndex = 7;
			// 
			// pname
			// 
			this->pname->AutoSize = true;
			this->pname->Font = (gcnew System::Drawing::Font(L"Oswald", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->pname->Location = System::Drawing::Point(3, 0);
			this->pname->Name = L"pname";
			this->pname->Size = System::Drawing::Size(168, 47);
			this->pname->TabIndex = 0;
			this->pname->Text = L"Product Name";
			this->pname->UseCompatibleTextRendering = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(177, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 34);
			this->label9->TabIndex = 8;
			this->label9->Text = L"_";
			this->label9->UseCompatibleTextRendering = true;
			// 
			// pcategory
			// 
			this->pcategory->AutoSize = true;
			this->pcategory->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcategory->ForeColor = System::Drawing::Color::White;
			this->pcategory->Location = System::Drawing::Point(197, 5);
			this->pcategory->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->pcategory->Name = L"pcategory";
			this->pcategory->Size = System::Drawing::Size(83, 37);
			this->pcategory->TabIndex = 5;
			this->pcategory->Text = L"Category";
			this->pcategory->UseCompatibleTextRendering = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(53, 334);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 37);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Offer:";
			this->label8->UseCompatibleTextRendering = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(53, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 37);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Seller:";
			this->label6->UseCompatibleTextRendering = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(53, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 37);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Price:";
			this->label5->UseCompatibleTextRendering = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(53, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 37);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Quantity:";
			this->label4->UseCompatibleTextRendering = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(53, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 37);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Company:";
			this->label3->UseCompatibleTextRendering = true;
			// 
			// editPanel
			// 
			this->editPanel->Controls->Add(this->label19);
			this->editPanel->Controls->Add(this->label18);
			this->editPanel->Controls->Add(this->label17);
			this->editPanel->Controls->Add(this->button14);
			this->editPanel->Controls->Add(this->numericUpDown3);
			this->editPanel->Controls->Add(this->numericUpDown2);
			this->editPanel->Controls->Add(this->numericUpDown1);
			this->editPanel->Controls->Add(this->button13);
			this->editPanel->Controls->Add(this->textBox3);
			this->editPanel->Controls->Add(this->textBox2);
			this->editPanel->Controls->Add(this->label16);
			this->editPanel->Controls->Add(this->label15);
			this->editPanel->Controls->Add(this->label14);
			this->editPanel->Controls->Add(this->label13);
			this->editPanel->Controls->Add(this->label12);
			this->editPanel->Controls->Add(this->textBox1);
			this->editPanel->Controls->Add(this->label10);
			this->editPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editPanel->Location = System::Drawing::Point(0, 0);
			this->editPanel->Name = L"editPanel";
			this->editPanel->Size = System::Drawing::Size(1032, 547);
			this->editPanel->TabIndex = 11;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(185, 223);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(110, 17);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Category is Required";
			this->label19->UseCompatibleTextRendering = true;
			this->label19->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(185, 155);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(113, 17);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Company is Required";
			this->label18->UseCompatibleTextRendering = true;
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(185, 93);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(95, 17);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Name is Required";
			this->label17->UseCompatibleTextRendering = true;
			this->label17->Visible = false;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button14->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(784, 464);
			this->button14->Margin = System::Windows::Forms::Padding(0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(197, 51);
			this->button14->TabIndex = 14;
			this->button14->Text = L"Add Product";
			this->button14->UseCompatibleTextRendering = true;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Dashboard::button14_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->numericUpDown3->ForeColor = System::Drawing::Color::White;
			this->numericUpDown3->Location = System::Drawing::Point(183, 327);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(798, 31);
			this->numericUpDown3->TabIndex = 13;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->numericUpDown2->ForeColor = System::Drawing::Color::White;
			this->numericUpDown2->Location = System::Drawing::Point(183, 255);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(798, 31);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->numericUpDown1->ForeColor = System::Drawing::Color::White;
			this->numericUpDown1->Location = System::Drawing::Point(183, 398);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(798, 31);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(784, 464);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(197, 51);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Save Changes";
			this->button13->UseCompatibleTextRendering = true;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Dashboard::button13_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(183, 186);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(798, 31);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(183, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(798, 31);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(63, 326);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(77, 34);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Quantity:";
			this->label16->UseCompatibleTextRendering = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(63, 398);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 34);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Offer:";
			this->label15->UseCompatibleTextRendering = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(63, 186);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 34);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Category:";
			this->label14->UseCompatibleTextRendering = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(63, 254);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 34);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Price:";
			this->label13->UseCompatibleTextRendering = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(63, 117);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 34);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Company:";
			this->label12->UseCompatibleTextRendering = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(183, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(798, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(63, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 34);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Name:";
			this->label10->UseCompatibleTextRendering = true;
			// 
			// dashpanelContainer
			// 
			this->dashpanelContainer->Controls->Add(this->flowLayoutPanel5);
			this->dashpanelContainer->Controls->Add(this->panel7);
			this->dashpanelContainer->Controls->Add(this->button11);
			this->dashpanelContainer->Controls->Add(this->dashpanel);
			this->dashpanelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dashpanelContainer->Location = System::Drawing::Point(0, 0);
			this->dashpanelContainer->Name = L"dashpanelContainer";
			this->dashpanelContainer->Size = System::Drawing::Size(1032, 547);
			this->dashpanelContainer->TabIndex = 12;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Controls->Add(this->sellProductCounter);
			this->flowLayoutPanel5->Controls->Add(this->label7);
			this->flowLayoutPanel5->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel5->Location = System::Drawing::Point(522, 502);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(302, 45);
			this->flowLayoutPanel5->TabIndex = 10;
			// 
			// sellProductCounter
			// 
			this->sellProductCounter->AutoSize = true;
			this->sellProductCounter->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sellProductCounter->Location = System::Drawing::Point(260, 5);
			this->sellProductCounter->Margin = System::Windows::Forms::Padding(0, 5, 7, 0);
			this->sellProductCounter->Name = L"sellProductCounter";
			this->sellProductCounter->Size = System::Drawing::Size(35, 31);
			this->sellProductCounter->TabIndex = 11;
			this->sellProductCounter->Text = L"20";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(123, 5);
			this->label7->Margin = System::Windows::Forms::Padding(3, 5, 0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 31);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Total Products:";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 496);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1032, 2);
			this->panel7->TabIndex = 8;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(832, 502);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(197, 45);
			this->button11->TabIndex = 7;
			this->button11->Text = L"Add New Product";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Dashboard::button11_Click);
			// 
			// dashpanel
			// 
			this->dashpanel->AutoScroll = true;
			this->dashpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->dashpanel->Location = System::Drawing::Point(0, 0);
			this->dashpanel->Margin = System::Windows::Forms::Padding(0);
			this->dashpanel->Name = L"dashpanel";
			this->dashpanel->Padding = System::Windows::Forms::Padding(5, 5, 5, 0);
			this->dashpanel->Size = System::Drawing::Size(1032, 496);
			this->dashpanel->TabIndex = 6;
			// 
			// userProfile
			// 
			this->userProfile->Controls->Add(this->label24);
			this->userProfile->Controls->Add(this->label23);
			this->userProfile->Controls->Add(this->checkBox1);
			this->userProfile->Controls->Add(this->textBox8);
			this->userProfile->Controls->Add(this->label20);
			this->userProfile->Controls->Add(this->label21);
			this->userProfile->Controls->Add(this->label22);
			this->userProfile->Controls->Add(this->button15);
			this->userProfile->Controls->Add(this->textBox7);
			this->userProfile->Controls->Add(this->textBox6);
			this->userProfile->Controls->Add(this->label25);
			this->userProfile->Controls->Add(this->label26);
			this->userProfile->Controls->Add(this->label27);
			this->userProfile->Controls->Add(this->textBox5);
			this->userProfile->Controls->Add(this->label28);
			this->userProfile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userProfile->Location = System::Drawing::Point(0, 0);
			this->userProfile->Name = L"userProfile";
			this->userProfile->Size = System::Drawing::Size(1032, 547);
			this->userProfile->TabIndex = 13;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(185, 254);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(114, 17);
			this->label24->TabIndex = 21;
			this->label24->Text = L"Password is Required";
			this->label24->UseCompatibleTextRendering = true;
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(63, 360);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(73, 34);
			this->label23->TabIndex = 20;
			this->label23->Text = L"Is Seller:";
			this->label23->UseCompatibleTextRendering = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->checkBox1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->checkBox1->FlatAppearance->BorderSize = 2;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Oswald", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->checkBox1->Location = System::Drawing::Point(183, 374);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(12, 11);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(183, 285);
			this->textBox8->MaxLength = 20;
			this->textBox8->Name = L"textBox8";
			this->textBox8->PasswordChar = '*';
			this->textBox8->Size = System::Drawing::Size(798, 31);
			this->textBox8->TabIndex = 18;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->UseSystemPasswordChar = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(185, 325);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(114, 17);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Password is Required";
			this->label20->UseCompatibleTextRendering = true;
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(185, 188);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 17);
			this->label21->TabIndex = 16;
			this->label21->Text = L"Email is Required";
			this->label21->UseCompatibleTextRendering = true;
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(185, 126);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(95, 17);
			this->label22->TabIndex = 15;
			this->label22->Text = L"Name is Required";
			this->label22->UseCompatibleTextRendering = true;
			this->label22->Visible = false;
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button15->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(784, 353);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(197, 51);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Save Changes";
			this->button15->UseCompatibleTextRendering = true;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Dashboard::button15_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(183, 219);
			this->textBox7->MaxLength = 11;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(798, 31);
			this->textBox7->TabIndex = 9;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(183, 150);
			this->textBox6->MaxLength = 50;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(798, 31);
			this->textBox6->TabIndex = 7;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(63, 219);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 34);
			this->label25->TabIndex = 4;
			this->label25->Text = L"Phone:";
			this->label25->UseCompatibleTextRendering = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(63, 287);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(85, 34);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Password:";
			this->label26->UseCompatibleTextRendering = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(63, 150);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(56, 34);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Email: ";
			this->label27->UseCompatibleTextRendering = true;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(183, 86);
			this->textBox5->MaxLength = 30;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(798, 31);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(63, 86);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(54, 34);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Name:";
			this->label28->UseCompatibleTextRendering = true;
			// 
			// srccontainer
			// 
			this->srccontainer->Controls->Add(this->srcPanel);
			this->srccontainer->Controls->Add(this->panel8);
			this->srccontainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->srccontainer->Location = System::Drawing::Point(0, 0);
			this->srccontainer->Name = L"srccontainer";
			this->srccontainer->Size = System::Drawing::Size(1032, 547);
			this->srccontainer->TabIndex = 14;
			// 
			// srcPanel
			// 
			this->srcPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->srcPanel->Location = System::Drawing::Point(0, 49);
			this->srcPanel->Name = L"srcPanel";
			this->srcPanel->Size = System::Drawing::Size(1032, 498);
			this->srcPanel->TabIndex = 1;
			this->srcPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::srcPanel_Paint);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->textBox4);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1032, 49);
			this->panel8->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(3, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(1017, 38);
			this->textBox4->TabIndex = 0;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Dashboard::textBox4_KeyPress);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1032, 44);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel2_Paint);
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::panel2_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::panel2_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::panel2_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Oswald", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Hot Offers";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(967, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 34);
			this->button8->TabIndex = 1;
			this->button8->Text = L"-";
			this->button8->UseCompatibleTextRendering = true;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Dashboard::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(998, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 34);
			this->button7->TabIndex = 0;
			this->button7->Text = L"X";
			this->button7->UseCompatibleTextRendering = true;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click);
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->splitter2->Location = System::Drawing::Point(0, 0);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(3, 596);
			this->splitter2->TabIndex = 0;
			this->splitter2->TabStop = false;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Size = System::Drawing::Size(150, 100);
			this->splitContainer1->TabIndex = 0;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->flowLayoutPanel2->Controls->Add(this->button6);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::BottomUp;
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 470);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(195, 126);
			this->flowLayoutPanel2->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(0, 75);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(197, 51);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Logout";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Dashboard::button6_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->ClientSize = System::Drawing::Size(1236, 602);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Dashboard";
			this->Padding = System::Windows::Forms::Padding(3);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->cartPanelContainer->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->viewpanel->ResumeLayout(false);
			this->viewpanel->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->editPanel->ResumeLayout(false);
			this->editPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->dashpanelContainer->ResumeLayout(false);
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel5->PerformLayout();
			this->userProfile->ResumeLayout(false);
			this->userProfile->PerformLayout();
			this->srccontainer->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	mouseX = Cursor->Position.X - this->Left;
	mouseY = Cursor->Position.Y - this->Top;
}
private: System::Void panel2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging) {
		this->Location = Point(Cursor->Position.X - mouseX, Cursor->Position.Y - mouseY);
		
	}
}
private: System::Void panel2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(1);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	// Minimize form
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void dashProduct1_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: void viewStoreProducts() {
		spanel->Controls->Clear();
		for (int i = 0; i < products->size(); i++) {
			if (products->at(i).quantity != 0) {
				HelpingTools::storeProduct^ temp = gcnew HelpingTools::storeProduct();
				temp->pname->Text = gcnew String(products->at(i).name.data());
				temp->pcompany->Text = gcnew String(products->at(i).company.data());
				temp->viewProduct += gcnew System::EventHandler<System::Int32 >(this, &Dashboard::storeProduct1_viewProduct);
				temp->Width = 330;
				temp->pos = i;
				spanel->Controls->Add(temp);
			}
		}
	}

	private: void viewOfferProducts() {
		offerpanel->Controls->Clear();
		for (int i = 0; i < products->size(); i++) {
			if (products->at(i).offer != 0 && products->at(i).quantity != 0) {
				HelpingTools::offersProduct^ temp = gcnew HelpingTools::offersProduct();
				temp->pname->Text = gcnew String(products->at(i).name.data());
				temp->pcompany->Text = gcnew String(products->at(i).company.data());
				temp->viewProduct += gcnew System::EventHandler<System::Int32 >(this, &Dashboard::storeProduct1_viewProduct);
				temp->Width = 330;
				temp->pos = i;
				temp->label1->Text = products->at(i).offer.ToString() + "% OFF";
				offerpanel->Controls->Add(temp);
			}
		}
	}
		
private: System::Void flowLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void storeProduct1_like(System::Object^ sender, System::EventArgs^ e) {
	
}
	
	// Developer Code
		private:
			void saveProducts() {
			std::ofstream file;
			file.open("products.txt");
			for (int i = 0; i < products->size(); i++) {
				file << products->at(i).id << endl
					<< products->at(i).name << endl
					<< products->at(i).company << endl
					<< products->at(i).quantity << endl
					<< products->at(i).price << endl
					<< products->at(i).seller_id << endl
					<< products->at(i).category << endl
					<< products->at(i).offer << endl;
			}
			file.close();
		}	
			string SysToStd(String^ word) {
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(word);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, word->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void spanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void storeProduct1_viewProduct(System::Object^ sender, System::Int32 e) {
	viewpanel->BringToFront();
	currentProd = e;
	String^ sellerName;
	for (int i = 0; i < users->size(); i++) {
		if (users->at(i).id == products->at(e).seller_id) {
			sellerName = gcnew String(users->at(i).name.data());
			break;
		}
	}
	seller->Text = sellerName;
	company->Text = gcnew String(products->at(e).company.data());
	pname->Text = gcnew String(products->at(e).name.data());
	pcategory->Text = gcnew String(products->at(e).category.data());
	quantity->Text = products->at(e).quantity.ToString();
	price->Text = products->at(e).price.ToString() + "$";
	offer->Text = products->at(e).offer.ToString();
	totalprice->Text = (products->at(e).price - (products->at(e).offer * products->at(e).price / 100)).ToString()+"$";
}
	
private: System::Void carteProduct1_deleteProduct(System::Object^ sender, System::Int32 e) {
	carte->erase(carte->begin() + e);
	carteQuantity->erase(carte->begin() + e);
	viewCarte();
}

private: System::Void carteProduct1_addQuantity(System::Object^ sender, int e) {
	// Get Data From Source
	int pos = e;
	int quantity = (int)((sender)->GetType()->GetProperty("prodPos")->GetValue(sender));

	// Check for quantity
	if (products->at(carte->at(pos)).quantity >= quantity) {
		// add quantity
		carteQuantity->at(pos) = quantity;
		viewCarte();
	}
	else {
		MessageBox::Show("You have exceeded the available quantity");
	}
	
}
private: System::Void viewpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void viewpanel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	viewpanel->SendToBack();
}
	private: void viewCarte() {
		cartepanel->Controls->Clear();
		double totalPrice = 0;
		for (int i = 0; i < carte->size(); i++)
		{
			HelpingTools::carteProduct^ temp = gcnew HelpingTools::carteProduct();
			temp->pos = i;
			temp->pname->Text = gcnew String(products->at(carte->at(i)).name.data());
			temp->pcategory->Text = gcnew String(products->at(carte->at(i)).category.data());
			temp->quantity->Text = carteQuantity->at(i).ToString();
			temp->price->Text = products->at(carte->at(i)).price.ToString();
			temp->offer->Text = products->at(carte->at(i)).offer.ToString();
			totalPrice += (carteQuantity->at(i) * (products->at(carte->at(i)).price - (products->at(carte->at(i)).offer * products->at(carte->at(i)).price / 100)));
			temp->totalprice->Text = (carteQuantity->at(i) * (products->at(carte->at(i)).price - (products->at(carte->at(i)).offer * products->at(carte->at(i)).price / 100))).ToString();
			temp->deleteProduct += gcnew System::EventHandler<System::Int32 >(this, &Dashboard::carteProduct1_deleteProduct);
			temp->addQuantity += gcnew System::EventHandler<int>(this, &Dashboard::carteProduct1_addQuantity);
			temp->numericUpDown1->Value = carteQuantity->at(i);
			temp->Width = 1010;
			cartepanel->Controls->Add(temp);
		}
		tprice->Text = totalPrice.ToString()+"$";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Store";
	viewStoreProducts();
	spanel->BringToFront();
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int x = currentProd;
	bool notfound = true;
	for (int i = 0; i < carte->size(); i++) {
		if (carte->at(i) == x) {
			notfound = false;
			break;
		}
	}
	if(notfound){
		carteQuantity->push_back(1);
		carte->push_back(x);
	}
}
private: System::Void offerpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Hot Offers";
	viewOfferProducts();
	offerpanel->BringToFront();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Carte";
	viewCarte();
	cartPanelContainer->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Profile";
	textBox5->Text = gcnew String(LoggedUser->name.data());
	textBox6->Text = gcnew String(LoggedUser->email.data());
	textBox7->Text = gcnew String(LoggedUser->phone.data());
	textBox8->Text = gcnew String(LoggedUser->password.data());
	checkBox1->Checked = LoggedUser->is_seller;
	userProfile->BringToFront();
}
	   
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Dashboard";
	dashpanelContainer->BringToFront();
	viewdashProducts();
}
	   void viewdashProducts() {
		   dashpanel->Controls->Clear();
		   int counter = 0;
		   for (int i = 0; i < products->size(); i++) {
				if (products->at(i).seller_id == LoggedUser->id) {
					HelpingTools::dashProduct^ temp = gcnew HelpingTools::dashProduct();
					temp->pid = products->at(i).id;
					temp->pname->Text = gcnew String(products->at(i).name.data());
					temp->pcategory->Text = gcnew String(products->at(i).category.data());
					temp->pcompany->Text = gcnew String(products->at(i).company.data());
					temp->pprice->Text = products->at(i).price.ToString() + "$";
					temp->pquantity->Text = products->at(i).quantity.ToString();
					temp->poffer->Text = products->at(i).offer.ToString() + "%";
					temp->Width = 998;
					temp->removeProduct += gcnew System::EventHandler<System::Int32 >(this, &Dashboard::dashProduct1_removeProduct);
					temp->edit += gcnew System::EventHandler<System::Int32 >(this, &Dashboard::dashProduct1_edit);
					counter++;
					dashpanel->Controls->Add(temp);
				}
		   }
		   sellProductCounter->Text = counter.ToString();
	   }
	
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void dashProduct1_removeProduct(System::Object^ sender, System::Int32 e) {
	int x = e;
	for (int i = 0; i < products->size(); i++) {
		if (products->at(i).id == x) {
			products->erase(products->begin() + i);
			break;
		}
	}
	viewdashProducts();
}
private: System::Void dashProduct1_edit(System::Object^ sender, System::Int32 e) {
	for (int i = 0; i < products->size(); i++) {
		if (products->at(i).id == e) {
			editPos = i;
			editmode = true;
			editPanel->BringToFront();
			initializeeditPanel(i);
			break;
		}
	}
}
	void initializeeditPanel(int pos) {
		if (editmode) {
			label1->Text = "Edit " + gcnew String(products->at(pos).name.data());
			textBox1->Text = gcnew String(products->at(pos).name.data());
			textBox2->Text = gcnew String(products->at(pos).company.data());
			textBox3->Text = gcnew String(products->at(pos).category.data());
			numericUpDown2->Value = (int)products->at(pos).price;
			numericUpDown3->Value = (int)products->at(pos).quantity;
			numericUpDown1->Value = (int)products->at(pos).offer;
			button13->Visible = true;
			button14->Visible = false;
		}
		else {
			label1->Text = "Add New Product";
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			numericUpDown2->Value = 1;
			numericUpDown3->Value = 1;
			numericUpDown1->Value = 0;
			button14->Visible = true;
			button13->Visible = false;
		}
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkEditAdd(textBox1->Text, textBox3->Text, textBox2->Text)) {
		Product temp;
		temp.id = products->back().id + 1;
		temp.seller_id = LoggedUser->id;
		temp.name = SysToStd(textBox1->Text);
		temp.company = SysToStd(textBox2->Text);
		temp.category = SysToStd(textBox3->Text);
		temp.price = (int)numericUpDown2->Value;
		temp.quantity = (int)numericUpDown3->Value;
		temp.offer = (int)numericUpDown1->Value;
		products->push_back(temp);
		saveProducts();
		viewdashProducts();
		dashpanelContainer->BringToFront();
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if(checkEditAdd(textBox1->Text, textBox3->Text, textBox2->Text)){
		products->at(editPos).name = SysToStd(textBox1->Text);
		products->at(editPos).company = SysToStd(textBox2->Text);
		products->at(editPos).category = SysToStd(textBox3->Text);
		products->at(editPos).price = (int)numericUpDown2->Value;
		products->at(editPos).quantity = (int)numericUpDown3->Value;
		products->at(editPos).offer = (int)numericUpDown1->Value;
		saveProducts();
		viewdashProducts();
		dashpanelContainer->BringToFront();
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	editmode = false;
	initializeeditPanel(0);
	editPanel->BringToFront();
}
	private: bool checkEditAdd(String^ name, String^ category, String^ company) {
		bool check = true;
		label17->Visible = false;
		label18->Visible = false;
		label19->Visible = false;
		if (name == "") {
			label17->Visible = true;
			check = false;
		}
		if (category == "") {
			label19->Visible = true;
			check = false;
		}
		if (company == "") {
			label18->Visible = true;
			check = false;
		}
		return check;
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	checkUser(SysToStd(textBox5->Text), SysToStd(textBox8->Text), SysToStd(textBox6->Text), checkBox1->Checked, SysToStd(textBox7->Text));
}
	   bool is_found(string data) {
		   for (int i = 0; i < users->size(); i++) {
			   if (data == toLowerCase(users->at(i).email) && LoggedUser->id != users->at(i).id) {
				   return true;
			   }
			   else {
				   return false;
			   }
		   }


	   }
	   // Edit User
	   void checkUser(string name, string password, string email, bool is_seller, string phone) {
		   bool found = false, allRight = true;
		   if (!(isEmail(email))) {
			   label12->Visible = true;
			   label12->Text = "invalid email";
		   }
		   else {
			   found = is_found(email);
			   if (found) {
				   // found ERR
				   label21->Visible = true;
				   label21->Text = "email is already Used Before";
				   allRight = false;
			   }
		   }

		   if (!isName(name)) {
			   // name ERR
			   label22->Visible = true;
			   label22->Text = "name can not be less than 3 characters";
			   allRight = false;
		   }

		   if (!isPhone(phone)) {
			   // phone ERR
			   label23->Visible = true;
			   label23->Text = "invalid phone";
			   allRight = false;
		   }

		   if (!isPassword(password)) {
			   // Password Err
			   label20->Visible = true;
			   label20->Text = "password can not be less than 5 characters";
			   allRight = false;
		   }

		   if (allRight) {
			   LoggedUser->name = name;
			   LoggedUser->email = email;
			   LoggedUser->phone = phone;
			   LoggedUser->password = password;
			   if (is_seller) {
					LoggedUser->is_seller = true;
			   }
			   else {
					LoggedUser->is_seller = false;
			   }
			   saveUsersData();
			   Application::Restart();
		   }
	   }
	   void saveUsersData() {
		   std::ofstream file;
		   file.open("users.txt");
		   for (int i = 0; i < users->size(); i++) {
			   string crtData;
			   file << users->at(i).id << endl;
			   file << users->at(i).name << endl;
			   file << users->at(i).email << endl;
			   file << users->at(i).is_seller << endl;
			   file << users->at(i).phone << endl;
			   file << users->at(i).password << endl;
		   }
		   file.close();
	   }
	   bool isEmail(string email) {
		   //[[:w:]] word character: digit, number or under score
		   const regex pattern("[[:w:]]+@[[:w:]]+\.com");

		   return regex_match(email, pattern);
	   }
	   bool isName(string name) {
		   if (name.length() < 3)
			   return false;
		   else
			   return true;
	   }
	   bool isPhone(string phone)
	   {
		   bool m = true;
		   bool n = false;

		   for (int i = 0; i < phone.length(); i++) {
			   if (isdigit(phone[i]) == 0) {
				   m = false;
				   break;
			   }
		   }

		   if (phone.length() >= 11 && phone.length() <= 13)
			   n = true;

		   return (n && m);

	   }
	   bool isPassword(string password) {
		   if (password.length() < 5)
			   return false;
		   else
			   return true;
	   }
	   string toLowerCase(string data) {
		   for (int i = 0; i < data.length(); i++) {
			   if ((int)data[i] >= 65 && (int)data[i] <= 90) {
				   data[i] = (int)data[i] + 32;
			   }
		   }
		   return data;
	   }
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < carte->size(); i++) {
		products->at(carte->at(i)).quantity -= carteQuantity->at(i);
	}
	carte->clear();
	carteQuantity->clear();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Search";
	srccontainer->BringToFront();
}
private: System::Void srcPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   void showSearchProducts(String^ key) {
		   srcPanel->Controls->Clear();
		   for (int i = 0; i < products->size(); i++) {
				if (toLowerCase(products->at(i).name).find(toLowerCase(SysToStd(key))) != string::npos || toLowerCase(products->at(i).category).find(toLowerCase(SysToStd(key))) != string::npos || toLowerCase(products->at(i).company).find(toLowerCase(SysToStd(key))) != string::npos) {
					HelpingTools::searchProduct^ temp = gcnew HelpingTools::searchProduct();
					temp->pname->Text = gcnew String(products->at(i).name.data());
					temp->pcompany->Text = gcnew String(products->at(i).company.data());
					temp->Width = 330;
					temp->pos = i;
					temp->showProduct += gcnew System::EventHandler<System::Int32 >(this, &Dashboard::storeProduct1_viewProduct);
					srcPanel->Controls->Add(temp);
			   }
			}
		}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	showSearchProducts(textBox4->Text);
}

};
}

// 
