#pragma once
#pragma comment(lib, "winmm.lib")

#include <winsock2.h>
#include <Ws2tcpip.h>
#include <stdio.h>
#include "iostream"
#include "conio.h"
#include <vector>
#include <atlstr.h>
#include <msclr/marshal_cppstd.h>
#include <windows.h>
#include <mmsystem.h>

#include <string>
#include <sstream>
#include <iterator>
#include <stdio.h>
#include <string>

#include <sys/types.h>


#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>

extern int sock;

namespace Zappy_client2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Threading;

	/// <summary>
	/// Description résumée de MyForm2
	/// </summary>

	template<typename Out>
	void split(const std::string &s, char delim, Out result) {
		std::stringstream ss;
		ss.str(s);
		std::string item;
		while (std::getline(ss, item, delim)) {
			*(result++) = item;
		}
	}

	static std::vector<std::string> splited(const std::string &s, char delim) {
		std::vector<std::string> elems;
		split(s, delim, std::back_inserter(elems));
		return elems;
	}

	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		//static void manuloop()
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID_team;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Life;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time_life;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Level;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Food;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Linemate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Deraumere;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sibur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mendiane;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Phiras;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Thystame;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID_team = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Life = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time_life = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Level = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Food = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Linemate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Deraumere = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sibur = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mendiane = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phiras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Thystame = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(777, 145);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(55, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(669, 145);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 39);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(887, 145);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 39);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(983, 145);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(54, 39);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1093, 145);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(54, 39);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1193, 145);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(52, 39);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1282, 145);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(55, 39);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(182, 145);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(56, 39);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(275, 145);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(54, 39);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(382, 145);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(52, 37);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(450, 145);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(55, 37);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(575, 143);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(52, 39);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 15;
			this->pictureBox13->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->ID_team,
					this->Life, this->Time_life, this->Y, this->X, this->Level, this->Food, this->Linemate, this->Deraumere, this->Sibur, this->Mendiane,
					this->Phiras, this->Thystame
			});
			this->dataGridView1->Location = System::Drawing::Point(103, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1272, 525);
			this->dataGridView1->TabIndex = 16;
			// 
			// ID_team
			// 
			this->ID_team->HeaderText = L"ID_team";
			this->ID_team->Name = L"ID_team";
			this->ID_team->ReadOnly = true;
			this->ID_team->Width = 76;
			// 
			// Life
			// 
			this->Life->HeaderText = L"Life";
			this->Life->Name = L"Life";
			this->Life->ReadOnly = true;
			this->Life->Width = 76;
			// 
			// Time_life
			// 
			this->Time_life->HeaderText = L"Time_life";
			this->Time_life->Name = L"Time_life";
			this->Time_life->ReadOnly = true;
			this->Time_life->Width = 76;
			// 
			// Y
			// 
			this->Y->HeaderText = L"Y";
			this->Y->Name = L"Y";
			this->Y->ReadOnly = true;
			this->Y->Width = 40;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 40;
			// 
			// Level
			// 
			this->Level->HeaderText = L"Level";
			this->Level->Name = L"Level";
			this->Level->ReadOnly = true;
			this->Level->Width = 76;
			// 
			// Food
			// 
			this->Food->HeaderText = L"Food";
			this->Food->Name = L"Food";
			this->Food->ReadOnly = true;
			this->Food->Width = 76;
			// 
			// Linemate
			// 
			this->Linemate->HeaderText = L"Linemate";
			this->Linemate->Name = L"Linemate";
			this->Linemate->ReadOnly = true;
			this->Linemate->Width = 76;
			// 
			// Deraumere
			// 
			this->Deraumere->HeaderText = L"Deraumere";
			this->Deraumere->Name = L"Deraumere";
			this->Deraumere->ReadOnly = true;
			this->Deraumere->Width = 76;
			// 
			// Sibur
			// 
			this->Sibur->HeaderText = L"Sibur";
			this->Sibur->Name = L"Sibur";
			this->Sibur->ReadOnly = true;
			this->Sibur->Width = 76;
			// 
			// Mendiane
			// 
			this->Mendiane->HeaderText = L"Mendiane";
			this->Mendiane->Name = L"Mendiane";
			this->Mendiane->ReadOnly = true;
			this->Mendiane->Width = 76;
			// 
			// Phiras
			// 
			this->Phiras->HeaderText = L"Phiras";
			this->Phiras->Name = L"Phiras";
			this->Phiras->ReadOnly = true;
			this->Phiras->Width = 76;
			// 
			// Thystame
			// 
			this->Thystame->HeaderText = L"Thystame";
			this->Thystame->Name = L"Thystame";
			this->Thystame->ReadOnly = true;
			this->Thystame->Width = 76;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1284, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 30);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(501, 145);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(55, 37);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 18;
			this->pictureBox11->TabStop = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1407, 727);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
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
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"Zappy_client";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e)
	{
		char *sendbuf = "spec\n";
		char buffer[1024];
		char buffer2[1];
		std::string result;
		std::vector<std::string> res;
		std::vector<std::string> elem;
		std::vector<std::string> elem2;
		std::vector<std::string> total;
		std::string tmp;
		std::string both;

		buffer2[0] = 0;
		recv(sock, buffer, sizeof(buffer), 0);
		send(sock, sendbuf, (int)strlen(sendbuf), 0);
		std::cout << buffer << std::endl; // Welcome msg
		std::cout << "Sock == " << sock << std::endl; // le socket
	}

void manuloop()
	{

		char *sendbuf2 = "Manu\n";
		char buffer[1024];
		char buffer2[1];
		std::string result;
		std::vector<std::string> res;
		std::vector<std::string> elem;
		std::vector<std::string> elem2;
		std::vector<std::string> total;
		std::string tmp;
		std::string both;

		buffer2[0] = 0;

		
		send(sock, sendbuf2, (int)strlen(sendbuf2), 0);

		while (recv(sock, buffer2, sizeof(buffer2), 0) > 0)
		{
			result += buffer2[0];
			if (result.find("\r") != std::string::npos)
				break;
			buffer2[0] = 0;
		}
		dataGridView1->Rows->Clear();
		res = splited(result, '['); // recupere tout entre les crochets
		for (int i = 0; i < res.size(); i += 1)
		{
			tmp = res[i];
			dataGridView1->Rows->Add();
			elem = splited(tmp, ';');
			for (int j = 0; j < elem.size(); j += 1)
			{
				elem2 = splited(elem[j], ' ');
				int n = 0;
				std::string lolz = elem2[1];
				n = std::stoi(lolz);
				dataGridView1->Rows[i]->Cells[j]->Value = n;
			}
		}
		dataGridView1->Update();
	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	while (1)
	{
		manuloop();
	}
}
};
}
