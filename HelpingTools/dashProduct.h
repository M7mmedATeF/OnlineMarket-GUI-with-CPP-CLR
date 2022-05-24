#pragma once

#include "../OnlineMarketGUI/Product.h" as_friend; 
#include "../OnlineMarketGUI/User.h";
#include "prodEditor.h"
#include <vector>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace HelpingTools {

	/// <summary>
	/// Summary for dashProduct
	/// </summary>
	public ref class dashProduct : public System::Windows::Forms::UserControl
	{
	public:
		vector<Product>* products;
		int id;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	public: System::Windows::Forms::Label^ pcompany;
	private:
	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::Label^ pquantity;
	private:
	private: System::Windows::Forms::Label^ label5;
	public:
	public: System::Windows::Forms::Label^ pprice;
	private:
	private: System::Windows::Forms::Label^ label12;
	public:
	public: System::Windows::Forms::Label^ poffer;
	private:

	public:
		int pid;
		dashProduct()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	public:
		void getPRData(vector<Product>* products) {
			this->products = products;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::Label^ pname;
	private:







	private:




	private:






	public: System::Windows::Forms::Label^ pcategory;
	private:


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel2;

	private:



	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashProduct::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pname = (gcnew System::Windows::Forms::Label());
			this->pcategory = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pcompany = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pquantity = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pprice = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->poffer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(169, 90);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &dashProduct::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(909, 2);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(909, 2);
			this->panel2->TabIndex = 2;
			// 
			// pname
			// 
			this->pname->AutoSize = true;
			this->pname->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pname->Location = System::Drawing::Point(3, 0);
			this->pname->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->pname->Name = L"pname";
			this->pname->Size = System::Drawing::Size(167, 32);
			this->pname->TabIndex = 2;
			this->pname->Text = L"Product Name";
			this->pname->UseCompatibleTextRendering = true;
			// 
			// pcategory
			// 
			this->pcategory->AutoSize = true;
			this->pcategory->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcategory->Location = System::Drawing::Point(187, 5);
			this->pcategory->Margin = System::Windows::Forms::Padding(0, 5, 3, 0);
			this->pcategory->Name = L"pcategory";
			this->pcategory->Size = System::Drawing::Size(82, 25);
			this->pcategory->TabIndex = 10;
			this->pcategory->Text = L"Category";
			this->pcategory->UseCompatibleTextRendering = true;
			this->pcategory->Click += gcnew System::EventHandler(this, &dashProduct::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(170, 5);
			this->label10->Margin = System::Windows::Forms::Padding(0, 5, 3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"-";
			this->label10->UseCompatibleTextRendering = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->Location = System::Drawing::Point(758, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 43);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dashProduct::button1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button3->Location = System::Drawing::Point(758, 54);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 43);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &dashProduct::button3_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->pname);
			this->flowLayoutPanel1->Controls->Add(this->label10);
			this->flowLayoutPanel1->Controls->Add(this->pcategory);
			this->flowLayoutPanel1->Location = System::Drawing::Point(189, 10);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(436, 38);
			this->flowLayoutPanel1->TabIndex = 18;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->Controls->Add(this->pcompany);
			this->flowLayoutPanel2->Controls->Add(this->label3);
			this->flowLayoutPanel2->Controls->Add(this->pquantity);
			this->flowLayoutPanel2->Controls->Add(this->label5);
			this->flowLayoutPanel2->Controls->Add(this->pprice);
			this->flowLayoutPanel2->Controls->Add(this->label12);
			this->flowLayoutPanel2->Controls->Add(this->poffer);
			this->flowLayoutPanel2->Location = System::Drawing::Point(189, 54);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(563, 39);
			this->flowLayoutPanel2->TabIndex = 19;
			// 
			// pcompany
			// 
			this->pcompany->AutoSize = true;
			this->pcompany->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcompany->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->pcompany->Location = System::Drawing::Point(3, 0);
			this->pcompany->Margin = System::Windows::Forms::Padding(3, 0, 50, 0);
			this->pcompany->Name = L"pcompany";
			this->pcompany->Size = System::Drawing::Size(113, 32);
			this->pcompany->TabIndex = 21;
			this->pcompany->Text = L"Company";
			this->pcompany->UseCompatibleTextRendering = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(166, 4);
			this->label3->Margin = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Quantity:";
			this->label3->UseCompatibleTextRendering = true;
			// 
			// pquantity
			// 
			this->pquantity->AutoSize = true;
			this->pquantity->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pquantity->Location = System::Drawing::Point(249, 4);
			this->pquantity->Margin = System::Windows::Forms::Padding(0, 4, 50, 0);
			this->pquantity->Name = L"pquantity";
			this->pquantity->Size = System::Drawing::Size(15, 25);
			this->pquantity->TabIndex = 24;
			this->pquantity->Text = L"5";
			this->pquantity->UseCompatibleTextRendering = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(314, 4);
			this->label5->Margin = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 25);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Price:";
			this->label5->UseCompatibleTextRendering = true;
			// 
			// pprice
			// 
			this->pprice->AutoSize = true;
			this->pprice->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pprice->Location = System::Drawing::Point(367, 4);
			this->pprice->Margin = System::Windows::Forms::Padding(0, 4, 50, 0);
			this->pprice->Name = L"pprice";
			this->pprice->Size = System::Drawing::Size(26, 25);
			this->pprice->TabIndex = 26;
			this->pprice->Text = L"5$";
			this->pprice->UseCompatibleTextRendering = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(443, 4);
			this->label12->Margin = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 25);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Offer:";
			this->label12->UseCompatibleTextRendering = true;
			// 
			// poffer
			// 
			this->poffer->AutoSize = true;
			this->poffer->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->poffer->Location = System::Drawing::Point(497, 4);
			this->poffer->Margin = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->poffer->Name = L"poffer";
			this->poffer->Size = System::Drawing::Size(30, 25);
			this->poffer->TabIndex = 28;
			this->poffer->Text = L"0%";
			this->poffer->UseCompatibleTextRendering = true;
			// 
			// dashProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"dashProduct";
			this->Size = System::Drawing::Size(909, 101);
			this->Load += gcnew System::EventHandler(this, &dashProduct::dashProduct_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
		
		public: property String^ name {
			void set(String^ data) {
				this->pname->Text = data;
			}
		}
			
		public: property String^ category {
			void set(String^ data) {
				this->pcategory->Text = data;
			}
		}

		public: property String^ company {
			void set(String^ data) {
				this->pcompany->Text = data;
			}
		}

		public: property String^ quantity {
			void set(String^ data) {
				this->pquantity->Text = data;
			}
		}

		public: property String^ price {
			void set(String^ data) {
				this->pprice->Text = data;
			}
		}

		public: property String^ offer {
			void set(String^ data) {
				this->poffer->Text = data + "%";
			}
		}

		public: property int Product_id {
			void set(int data) {
				pid = data;
			}
			int get() {
				return pid;
			}
		}
#pragma endregion
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dashProduct_Load(System::Object^ sender, System::EventArgs^ e) {
}
	
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
	public: event EventHandler<int>^ edit;
	public: event EventHandler<int>^ removeProduct;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	edit(this, pid);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	removeProduct(this, pid);
}
};
}
