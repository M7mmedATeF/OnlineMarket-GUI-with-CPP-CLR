#pragma once

#include <vector>
#include <fstream>
#include <string>
#include "User.h";
#include "Product.h";
#include "Dashboard.h";
#include "LoginForm.h"

namespace OnlineMarketGUI {

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
		std::vector<User>* users;
		std::vector<Product>* products;
	private: System::Windows::Forms::Panel^ panel3;



	public:

	public:
		bool gotUsersData = false;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	public:
		int counter = 0;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			products = new std::vector<Product>();
			users = new std::vector<User>();
			selectProducts();
			selectUsers();
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

	protected:

	private: System::Windows::Forms::Timer^ timer1;



	private: System::ComponentModel::IContainer^ components;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 15;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(732, 411);
			this->panel3->TabIndex = 1;
			this->panel3->UseWaitCursor = true;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			this->panel3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel3_MouseDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Andalus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(690, 384);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"V2.01";
			this->label1->UseWaitCursor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 326);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 78);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(732, 411);
			this->Controls->Add(this->panel3);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (counter <= 724 || !gotUsersData ) {
			counter += 4;
		}
		else {
			Form^ login = gcnew LoginForm(users, products);
			this->Hide();
			timer1->Enabled = false;
			login->ShowDialog();
			exit(1);
			
		}
	}

	// Files Code
	void selectUsers() {
		ifstream file;
		file.open("users.txt");
		string data = "";
		while (!file.eof()) {
			User temp;
			// ID
			std::getline(file, data);
			if (data == "")
				break;
			temp.id = stoi(data);

			// Name
			std::getline(file, temp.name);

			// email
			std::getline(file, temp.email);

			// is_seller
			std::getline(file, data);
			int x = stoi(data);
			temp.is_seller = x;

			// phone
			std::getline(file, temp.phone);

			// password
			std::getline(file, temp.password);

			this->users->push_back(temp);

		}
		file.close();
		
		this->gotUsersData = true;
	}
	
	void selectProducts() {
		ifstream file;
		file.open("products.txt");
		Product temp;
		string data = "";
		while (!file.eof()) {
			// ID
			std::getline(file, data);
			if (data == "")
				break;
			temp.id = stoi(data);

			// Name
			std::getline(file, temp.name);

			// Company
			std::getline(file, temp.company);

			// Quantity
			std::getline(file, data);
			temp.quantity = stoi(data);

			// Price
			std::getline(file, data);
			temp.price = stod(data);

			// Seller_Id
			std::getline(file, data);
			temp.seller_id = stoi(data);

			// Category
			std::getline(file, temp.category);
			
			// offer
			std::getline(file, data);
			temp.offer = stoi(data);
			
			this->products->push_back(temp);

		}
		file.close();

		this->gotUsersData = true;
	}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	
}
};
}
