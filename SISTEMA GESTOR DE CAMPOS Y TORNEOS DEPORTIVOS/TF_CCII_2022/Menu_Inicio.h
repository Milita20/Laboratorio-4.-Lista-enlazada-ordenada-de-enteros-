#pragma once


namespace TF_CCII_2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Administrador
	/// </summary>
	public ref class Menu_Inicio : public System::Windows::Forms::Form
	{
	public:
		Menu_Inicio(void)
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
		~Menu_Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_izq;
	protected:
	private: System::Windows::Forms::Panel^ panel_margen_izq;
	private: System::Windows::Forms::Panel^ panel_bot_izq;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::Button^ btn_clientes;
	private: System::Windows::Forms::Button^ btn_c_deportivos;
	private: System::Windows::Forms::Button^ btn_reservas;
	private: System::Windows::Forms::Button^ btn_torneos;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

/////////////////////////COMPONENTES DEL ENTORNO GRAFICO///////////////////////
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel_izq = (gcnew System::Windows::Forms::Panel());
			this->btn_torneos = (gcnew System::Windows::Forms::Button());
			this->btn_clientes = (gcnew System::Windows::Forms::Button());
			this->btn_c_deportivos = (gcnew System::Windows::Forms::Button());
			this->btn_reservas = (gcnew System::Windows::Forms::Button());
			this->panel_margen_izq = (gcnew System::Windows::Forms::Panel());
			this->panel_bot_izq = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_izq->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_izq
			// 
			this->panel_izq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel_izq->Controls->Add(this->btn_torneos);
			this->panel_izq->Controls->Add(this->btn_clientes);
			this->panel_izq->Controls->Add(this->btn_c_deportivos);
			this->panel_izq->Controls->Add(this->btn_reservas);
			this->panel_izq->Controls->Add(this->panel_margen_izq);
			this->panel_izq->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_izq->Location = System::Drawing::Point(0, 0);
			this->panel_izq->Margin = System::Windows::Forms::Padding(2);
			this->panel_izq->Name = L"panel_izq";
			this->panel_izq->Size = System::Drawing::Size(150, 515);
			this->panel_izq->TabIndex = 0;
			// 
			// btn_torneos
			// 
			this->btn_torneos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_torneos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_torneos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_torneos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_torneos->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_torneos->Location = System::Drawing::Point(0, 258);
			this->btn_torneos->Margin = System::Windows::Forms::Padding(2);
			this->btn_torneos->Name = L"btn_torneos";
			this->btn_torneos->Size = System::Drawing::Size(150, 50);
			this->btn_torneos->TabIndex = 4;
			this->btn_torneos->Text = L"TORNEOS";
			this->btn_torneos->UseVisualStyleBackColor = false;
			// 
			// btn_clientes
			// 
			this->btn_clientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_clientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_clientes->FlatAppearance->BorderSize = 0;
			this->btn_clientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clientes->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_clientes->Location = System::Drawing::Point(0, 219);
			this->btn_clientes->Margin = System::Windows::Forms::Padding(2);
			this->btn_clientes->Name = L"btn_clientes";
			this->btn_clientes->Size = System::Drawing::Size(150, 39);
			this->btn_clientes->TabIndex = 4;
			this->btn_clientes->Text = L"CLIENTES";
			this->btn_clientes->UseVisualStyleBackColor = false;
			this->btn_clientes->Click += gcnew System::EventHandler(this, &Menu_Inicio::btn_clientes_Click);
			// 
			// btn_c_deportivos
			// 
			this->btn_c_deportivos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_c_deportivos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_c_deportivos->FlatAppearance->BorderSize = 0;
			this->btn_c_deportivos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_c_deportivos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_c_deportivos->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_c_deportivos->Location = System::Drawing::Point(0, 180);
			this->btn_c_deportivos->Margin = System::Windows::Forms::Padding(2);
			this->btn_c_deportivos->Name = L"btn_c_deportivos";
			this->btn_c_deportivos->Size = System::Drawing::Size(150, 39);
			this->btn_c_deportivos->TabIndex = 3;
			this->btn_c_deportivos->Text = L"C.DEPORTIVOS";
			this->btn_c_deportivos->UseVisualStyleBackColor = false;
			this->btn_c_deportivos->Click += gcnew System::EventHandler(this, &Menu_Inicio::btn_torneos_Click);
			// 
			// btn_reservas
			// 
			this->btn_reservas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_reservas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_reservas->FlatAppearance->BorderSize = 0;
			this->btn_reservas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_reservas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_reservas->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_reservas->Location = System::Drawing::Point(0, 141);
			this->btn_reservas->Margin = System::Windows::Forms::Padding(2);
			this->btn_reservas->Name = L"btn_reservas";
			this->btn_reservas->Size = System::Drawing::Size(150, 39);
			this->btn_reservas->TabIndex = 2;
			this->btn_reservas->Text = L"RESERVAS";
			this->btn_reservas->UseVisualStyleBackColor = false;
			this->btn_reservas->Click += gcnew System::EventHandler(this, &Menu_Inicio::btn_reservas_Click);
			// 
			// panel_margen_izq
			// 
			this->panel_margen_izq->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen_izq->Location = System::Drawing::Point(0, 0);
			this->panel_margen_izq->Margin = System::Windows::Forms::Padding(2);
			this->panel_margen_izq->Name = L"panel_margen_izq";
			this->panel_margen_izq->Size = System::Drawing::Size(150, 141);
			this->panel_margen_izq->TabIndex = 1;
			// 
			// panel_bot_izq
			// 
			this->panel_bot_izq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel_bot_izq->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_bot_izq->Location = System::Drawing::Point(150, 434);
			this->panel_bot_izq->Margin = System::Windows::Forms::Padding(2);
			this->panel_bot_izq->Name = L"panel_bot_izq";
			this->panel_bot_izq->Size = System::Drawing::Size(797, 81);
			this->panel_bot_izq->TabIndex = 1;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(150, 0);
			this->panel_contenedor->Margin = System::Windows::Forms::Padding(2);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(797, 434);
			this->panel_contenedor->TabIndex = 2;
			// 
			// Menu_Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 515);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_bot_izq);
			this->Controls->Add(this->panel_izq);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Menu_Inicio";
			this->Text = L"Menu Inicio";
			this->panel_izq->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

////////////Template: Funcion template para generar o abrir los otros formularios.///////
		template<class T>		//Template.
		void AbrirFormulario(T formHijo)
		{
			//Verificando cuantos witgets tiene el panel contenedor.
			//Si es mayor a cero, se limpia el panel.
			if (this->panel_contenedor->Controls->Count > 0)
			{
				this->panel_contenedor->Controls->RemoveAt(0);
			}
			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(formHijo);
			this->panel_contenedor->Tag = formHijo;
			formHijo->Show();
		}

//////////////////////FUNCIONES PARA BOTONES //////////////////////////////

	private: System::Void btn_reservas_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_c_deportivos_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_clientes_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_torneos_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
