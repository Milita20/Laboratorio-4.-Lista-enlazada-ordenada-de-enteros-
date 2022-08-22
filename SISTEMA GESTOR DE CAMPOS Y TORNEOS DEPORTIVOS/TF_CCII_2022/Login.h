#pragma once
#include "Menu_Inicio.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;			///Extencion para MySql

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

////////////Forma de conectarce a la base de datos. solo para el login/////////

	private: String^ conexionstring = "datasource=localhost; username=root; password=1234; database=sistema_deportivo;";
	private: MySqlConnection^ conex = gcnew MySqlConnection(conexionstring);		//Para conectarce a la base de datos.

///////////////////////////////////////////////////////////////////////////////

	private: System::Windows::Forms::TextBox^ text_usua;
	private: System::Windows::Forms::TextBox^ text_pasword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_iniciar;
	private: System::Windows::Forms::Label^ label_titulo;



	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

/////////////////////////COMPONENTES DEL ENTORNO GRAFICO///////////////////////
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text_usua = (gcnew System::Windows::Forms::TextBox());
			this->text_pasword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_iniciar = (gcnew System::Windows::Forms::Button());
			this->label_titulo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_usua
			// 
			this->text_usua->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Italic));
			this->text_usua->Location = System::Drawing::Point(138, 93);
			this->text_usua->Multiline = true;
			this->text_usua->Name = L"text_usua";
			this->text_usua->Size = System::Drawing::Size(233, 45);
			this->text_usua->TabIndex = 1;
			this->text_usua->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->text_usua->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// text_pasword
			// 
			this->text_pasword->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_pasword->Location = System::Drawing::Point(138, 173);
			this->text_pasword->Multiline = true;
			this->text_pasword->Name = L"text_pasword";
			this->text_pasword->PasswordChar = '*';
			this->text_pasword->Size = System::Drawing::Size(233, 38);
			this->text_pasword->TabIndex = 2;
			this->text_pasword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->text_pasword->TextChanged += gcnew System::EventHandler(this, &Login::text_pasword_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(138, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(138, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Constraseña";
			// 
			// btn_iniciar
			// 
			this->btn_iniciar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn_iniciar->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_iniciar->Location = System::Drawing::Point(190, 258);
			this->btn_iniciar->Name = L"btn_iniciar";
			this->btn_iniciar->Size = System::Drawing::Size(120, 36);
			this->btn_iniciar->TabIndex = 5;
			this->btn_iniciar->Text = L"Iniciar";
			this->btn_iniciar->UseVisualStyleBackColor = false;
			this->btn_iniciar->Click += gcnew System::EventHandler(this, &Login::btn_iniciar_Click);
			// 
			// label_titulo
			// 
			this->label_titulo->AutoSize = true;
			this->label_titulo->Font = (gcnew System::Drawing::Font(L"Poor Richard", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_titulo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_titulo->Location = System::Drawing::Point(134, 27);
			this->label_titulo->Name = L"label_titulo";
			this->label_titulo->Size = System::Drawing::Size(250, 24);
			this->label_titulo->TabIndex = 6;
			this->label_titulo->Text = L"INICIO ADMINISTRADOR";
			this->label_titulo->Click += gcnew System::EventHandler(this, &Login::label3_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(514, 378);
			this->Controls->Add(this->label_titulo);
			this->Controls->Add(this->btn_iniciar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_pasword);
			this->Controls->Add(this->text_usua);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Login::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//////////////////////FUNCIONES PARA BOTONES //////////////////////////////

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void text_pasword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	////////Funcion para el boton de iniciar//////////////////
	private: System::Void btn_iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "Select * from administradores where usuario = '" + text_usua->Text + "' and contra = '" + text_pasword->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conex);
		MySqlDataReader^ dataReader;

		try
		{
			this->conex->Open();
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read())
			{
				MessageBox::Show(L"Bienvenido " + text_usua->Text);
				TF_CCII_2022::Menu_Inicio^ Segundo_Formulario = gcnew TF_CCII_2022::Menu_Inicio();
				this->Visible = false;
				Segundo_Formulario->ShowDialog();
				this->~Login();

			}
			else
			{
				MessageBox::Show(L"Usuario Incorrecto");
			}
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
		}
	}

	};
}
