#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace HelpingTools {

	/// <summary>
	/// Summary for carteProduct
	/// </summary>
	public ref class carteProduct : public System::Windows::Forms::UserControl
	{
	public:
		int pos;
		carteProduct(void)
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
		~carteProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	public: System::Windows::Forms::Label^ pname;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ pcategory;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	public: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ price;
	public: System::Windows::Forms::Label^ quantity;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ offer;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ totalprice;
	public: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;
	public:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pname = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pcategory = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			this->quantity = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->offer = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->totalprice = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->Location = System::Drawing::Point(635, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &carteProduct::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Oswald", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button2->Location = System::Drawing::Point(705, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &carteProduct::button2_Click);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->pname);
			this->flowLayoutPanel3->Controls->Add(this->label9);
			this->flowLayoutPanel3->Controls->Add(this->pcategory);
			this->flowLayoutPanel3->Location = System::Drawing::Point(12, 13);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(616, 50);
			this->flowLayoutPanel3->TabIndex = 8;
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
			this->pname->Click += gcnew System::EventHandler(this, &carteProduct::pname_Click);
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
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(634, 4);
			this->label1->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Quantity:";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(635, 31);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(64, 29);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 121);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(801, 2);
			this->panel1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(161, 80);
			this->label2->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 29);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Price:";
			this->label2->UseCompatibleTextRendering = true;
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::White;
			this->price->Location = System::Drawing::Point(209, 80);
			this->price->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(30, 29);
			this->price->TabIndex = 14;
			this->price->Text = L"10$";
			this->price->UseCompatibleTextRendering = true;
			// 
			// quantity
			// 
			this->quantity->AutoSize = true;
			this->quantity->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity->ForeColor = System::Drawing::Color::White;
			this->quantity->Location = System::Drawing::Point(371, 80);
			this->quantity->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(11, 29);
			this->quantity->TabIndex = 16;
			this->quantity->Text = L"1";
			this->quantity->UseCompatibleTextRendering = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(300, 80);
			this->label4->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 29);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Quantity:";
			this->label4->UseCompatibleTextRendering = true;
			// 
			// offer
			// 
			this->offer->AutoSize = true;
			this->offer->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->offer->ForeColor = System::Drawing::Color::White;
			this->offer->Location = System::Drawing::Point(63, 80);
			this->offer->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->offer->Name = L"offer";
			this->offer->Size = System::Drawing::Size(39, 29);
			this->offer->TabIndex = 18;
			this->offer->Text = L"25%";
			this->offer->UseCompatibleTextRendering = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(15, 80);
			this->label6->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 29);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Offer:";
			this->label6->UseCompatibleTextRendering = true;
			// 
			// totalprice
			// 
			this->totalprice->AutoSize = true;
			this->totalprice->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalprice->ForeColor = System::Drawing::Color::White;
			this->totalprice->Location = System::Drawing::Point(528, 80);
			this->totalprice->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->totalprice->Name = L"totalprice";
			this->totalprice->Size = System::Drawing::Size(34, 29);
			this->totalprice->TabIndex = 20;
			this->totalprice->Text = L"7.5$";
			this->totalprice->UseCompatibleTextRendering = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Oswald", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(445, 80);
			this->label8->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 29);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Total Price:";
			this->label8->UseCompatibleTextRendering = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel2->Location = System::Drawing::Point(15, 62);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(258, 1);
			this->panel2->TabIndex = 21;
			// 
			// carteProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->totalprice);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->offer);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->quantity);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->price);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"carteProduct";
			this->Size = System::Drawing::Size(801, 123);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: event EventHandler<int>^ deleteProduct;
		public: event EventHandler<int>^ addQuantity;
		public: property int prodPos {
			int get() {
				int x = numericUpDown1->Value.ToInt32(numericUpDown1->Value);
				return x;
			}
		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		addQuantity(this, pos);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteProduct(this, pos);
	}
private: System::Void pname_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
