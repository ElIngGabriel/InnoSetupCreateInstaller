#pragma once
#include "form_listbox.h"
#include "picturebox.h"

namespace Proyecto_Integrador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public: 
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  listboxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pictureBoxToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->listboxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->listboxToolStripMenuItem, 
				this->pictureBoxToolStripMenuItem, this->salirToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(381, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// listboxToolStripMenuItem
			// 
			this->listboxToolStripMenuItem->Name = L"listboxToolStripMenuItem";
			this->listboxToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->listboxToolStripMenuItem->Text = L"Listbox";
			this->listboxToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::listboxToolStripMenuItem_Click);
			// 
			// pictureBoxToolStripMenuItem
			// 
			this->pictureBoxToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBoxToolStripMenuItem->Name = L"pictureBoxToolStripMenuItem";
			this->pictureBoxToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->pictureBoxToolStripMenuItem->Text = L"PictureBox";
			this->pictureBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pictureBoxToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 219);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void listboxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 form_listbox^x = gcnew form_listbox();		//creas el objeto del formulario al que rediriges
				 this->Hide();								//Ocultas el formulario	actual							
				 x->ShowDialog();							//Metodo para llamar al formulario			
				 if(x->salir==1){
					 this->Close();
				 }else{
					 this->Show();								//Metodo para volver a mostrar el formulario oculto
					 delete x;
				 }
			 }
	private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();	
			 }
	private: System::Void pictureBoxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 picturebox^x = gcnew picturebox();		//creas el objeto del formulario al que rediriges
				 this->Hide();							//Ocultas el formulario	actual							
				 x->ShowDialog();						//Metodo para llamar al formulario
				 if(x->salir==1){
					 this->Close();
				 }else{
					this->Show();						//Metodo para volver a mostrar el formulario oculto
					delete x;
				 }
			 }
};
}

