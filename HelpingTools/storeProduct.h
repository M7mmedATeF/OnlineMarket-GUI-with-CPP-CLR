#pragma once

#include <vector>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace HelpingTools {

	/// <summary>
	/// Summary for storeProduct
	/// </summary>
	public ref class storeProduct : public System::Windows::Forms::UserControl
	{
	public:
		int pos=0;
		int rate = 0;
	private: System::Windows::Forms::Button^ button1;
	public:
		std::vector<System::Int32>* args;
		storeProduct(void)
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
		~storeProduct()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	public: System::Windows::Forms::Label^ pname;
	private:

	public:

	private:


	public:


	private:

	public:


	private:

	public:
	public: System::Windows::Forms::Label^ pcompany;
	private:

	public:

	private:
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(storeProduct::typeid));
			this->pname = (gcnew System::Windows::Forms::Label());
			this->pcompany = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pname
			// 
			this->pname->AutoSize = true;
			this->pname->Font = (gcnew System::Drawing::Font(L"Montserrat", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pname->Location = System::Drawing::Point(11, 165);
			this->pname->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->pname->Name = L"pname";
			this->pname->Size = System::Drawing::Size(151, 29);
			this->pname->TabIndex = 2;
			this->pname->Text = L"Product Name";
			this->pname->UseCompatibleTextRendering = true;
			// 
			// pcompany
			// 
			this->pcompany->AutoSize = true;
			this->pcompany->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcompany->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->pcompany->Location = System::Drawing::Point(11, 194);
			this->pcompany->Name = L"pcompany";
			this->pcompany->Size = System::Drawing::Size(113, 32);
			this->pcompany->TabIndex = 21;
			this->pcompany->Text = L"Company";
			this->pcompany->UseCompatibleTextRendering = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 234);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 2);
			this->panel1->TabIndex = 20;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(269, 148);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(210, 179);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 49);
			this->button1->TabIndex = 22;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &storeProduct::button1_Click_1);
			// 
			// storeProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pcompany);
			this->Controls->Add(this->pname);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"storeProduct";
			this->Size = System::Drawing::Size(269, 236);
			this->Load += gcnew System::EventHandler(this, &storeProduct::storeProduct_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
			public: property String^ name {
				void set(String^ n) {
					this->pname->Text = n;
				}
			}
				
			public: property String^ company {
				void set(String^ n) {
					this->pcompany->Text = n;
				}
			}
				
			public: event EventHandler<System::Int32>^ viewProduct;
private: System::Void storeProduct_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	viewProduct(this, pos);
}
};
}
