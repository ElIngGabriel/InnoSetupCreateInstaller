#pragma once
#include "Form1.h"

namespace Proyecto_Integrador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_usuario;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txt_contrasena;

	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_contrasena = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			// 
			// txt_usuario
			// 
			this->txt_usuario->Location = System::Drawing::Point(121, 17);
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(100, 20);
			this->txt_usuario->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(227, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Entrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// txt_contrasena
			// 
			this->txt_contrasena->Location = System::Drawing::Point(121, 44);
			this->txt_contrasena->Name = L"txt_contrasena";
			this->txt_contrasena->PasswordChar = '*';
			this->txt_contrasena->Size = System::Drawing::Size(100, 20);
			this->txt_contrasena->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña:";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 92);
			this->Controls->Add(this->txt_contrasena);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_usuario);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if((txt_usuario->Text!= "ADMIN") & (txt_contrasena->Text != "1234")){//validacion de usuario
					 MessageBox::Show("Contraseña o Usuario Incorrecto","Error de autentificacion",
						 MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }else{
					 Form1^ x = gcnew Form1();		//Creo el metodo para mostrar otro formulario
					 this->Hide();					//Oculto este Formulario
					 x->ShowDialog();				//Muestro el Formulario que mostrare
					 this->Close();					//Una vez que cierro el form 2 este entra en accion y se cierra tambien
					 
				 }
			 }
};
}
