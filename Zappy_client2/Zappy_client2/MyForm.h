#pragma once

#include <winsock2.h>
#include <Ws2tcpip.h>
#include <stdio.h>
#include "iostream"
#include "conio.h"
#include <vector>
#include <atlstr.h>
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include "MyForm2.h"

#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>

using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

#pragma comment(lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")
#define WIN32_LEAN_AND_MEAN
#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT 5554

int sock;

namespace Zappy_client2 {


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(268, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connect to server";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(294, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 282);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(236, 22);
			this->textBox2->TabIndex = 2;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(22, 22);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(70, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(22, 22);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(70, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"IP Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(56, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Port";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(569, 503);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Help";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(13, 503);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 35);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Credits";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(736, 577);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Zappy_client";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WSADATA WSAData;
		SOCKADDR_IN sin;
		char *new_add = (char*)(void*)Marshal::StringToHGlobalAnsi(textBox1->Text);
		int port = System::Convert::ToInt64(textBox2->Text);

		WSAStartup(MAKEWORD(2, 0), &WSAData);
		sock = socket(AF_INET, SOCK_STREAM, 0);
		sin.sin_addr.s_addr = inet_addr(new_add);
		sin.sin_family = AF_INET;
		sin.sin_port = htons(port);
		if (connect(sock, (SOCKADDR *)&sin, sizeof(sin)) == -1) // mettre une erreur DEDANS
		{
			MessageBox::Show("Invalid IP or PORT, Please retry");
			printf("Error\n");
		}
		else // mettre le cas ou CA MARCHE ici.
		{
			this->Hide(); // Cache la premiere fenetre
			MyForm2^ nform = gcnew MyForm2(); // créer la 2eme
			nform->ShowDialog(); // Affiche la nouvelle
		}	
		std::cout << sock << std::endl;
		return;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show("Utilisation : \n- Enter a valid IP Address \n- Enter a valid Port");
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Application Made by Emmanuel Vallenet ( Epitech Marseille TEK 2 )\n");
}
};
}
