#pragma once

namespace Proyecto_Integrador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de form_listbox
	/// </summary>
	public ref class form_listbox : public System::Windows::Forms::Form
	{
	public:
		form_listbox(void)
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
		~form_listbox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form_listbox::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 41);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 108);
			this->listBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(244, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_listbox::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(244, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form_listbox::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(244, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &form_listbox::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(244, 128);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Eliminar Todo";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &form_listbox::button6_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &form_listbox::timer1_Tick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(350, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &form_listbox::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &form_listbox::pictureBox2_Click);
			// 
			// form_listbox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 164);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"form_listbox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"form_listbox";
			this->Load += gcnew System::EventHandler(this, &form_listbox::form_listbox_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: static int index,num, total, leer_boolean=0,salir=0;
		public: array<String^>^ cadena;
		public: array<Char>^ delimitador;
		static String^ delimitador_string = ",";	//Declaro el delimitador que tomare como referencia para poder añadir item
		String^ linea;		//Variable tipo String para almacenar la cadena
		void solo_leer(){	//funcion void para la lectura del txt
			StreamReader^ leer = gcnew StreamReader("..\\datos\\informacion.txt"); //Declaro mi metodo de lectura
			delimitador = delimitador_string->ToCharArray();	//Convierto mi delimitador_string a tipo array char
			cadena;						//Variable cadena de tipo array char
			linea = leer->ReadLine();	//Almaceno la cadena 
			cadena = linea->Split(delimitador);//Almaceno dentro del array cadena mi variable linea ya separada por delimitador coma
			for(num=0; num < cadena->Length; num++){//For sencillo para mostrar en el listbox lo que contenga el array cadena
				listBox1->Items->Add(cadena[num]);//Imprimo mi listbox con la cadena correspondiente
			}
			leer->Close();
		}
		void leer_txt(){
			StreamReader^ leer = gcnew StreamReader("..\\datos\\informacion.txt"); //Declaro mi metodo de lectura
			delimitador = delimitador_string->ToCharArray();	//Convierto mi delimitador_string a tipo array char
			cadena;						//Variable cadena de tipo array char
			linea = leer->ReadLine();	//Almaceno la cadena 
			leer->Close();
			if(linea == nullptr){	//Verifico si el txt tiene informacion  si no tiene inserto directamente
				escribir_txt2();
				MessageBox::Show("Texto Insertado Correctamente","Exito!!",
					MessageBoxButtons::OK,MessageBoxIcon::Information);
				MessageBox::Show("Registros totales: "+listBox1->Items->Count,"Exito!!",
					MessageBoxButtons::OK,MessageBoxIcon::Information);
			}else{					//Si no tiene informacion leo todo el txt y posteriormente lo inserto
				cadena = linea->Split(delimitador);//Almaceno dentro del array cadena mi variable linea ya separada por delimitador coma
				escribir_txt3();				   //Abro el metodo escribir_txt3 para insertar
				StreamReader^ leer = gcnew StreamReader("..\\datos\\informacion.txt"); //Declaro mi metodo de lectura
				linea = leer->ReadLine();			//Almaceno la nueva cadena 
				cadena = linea->Split(delimitador);//Almaceno dentro del array cadena mi variable linea ya separada por delimitador coma
				for(num=0; num < cadena->Length; num++){//For sencillo para mostrar en el listbox lo que contenga el array cadena
				listBox1->Items->Add(cadena[num]);//Imprimo mi listbox con la cadena correspondiente
				}
				leer->Close();		//Cierro mi metodo
				MessageBox::Show("Texto Insertado Correctamente","Exito!!",
					MessageBoxButtons::OK,MessageBoxIcon::Information);
				MessageBox::Show("Registros totales: "+listBox1->Items->Count,"Exito!!",
					MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
		}
		void escribir_txt2(){
			StreamWriter^ sw = gcnew StreamWriter("..\\datos\\informacion.txt"); //Metodo de escritura
			listBox1->SelectedIndex = listBox1->Items->Count-1;//cuento los items y selecciono el ultimo
			sw->Write(listBox1->Text);			//Agregar cadena al txt
			sw->Close();						//Cierro mi metodo
		}
		void escribir_txt3(){
			StreamWriter^ sw = gcnew StreamWriter("..\\datos\\informacion.txt"); //Metodo de escritura
			for(num=0; num < cadena->Length; num++){//For sencillo para mostrar en el listbox lo que contenga el array cadena
				sw->Write(cadena[num]+",");			//Agregar cadena al txt
			}
			listBox1->SelectedIndex = listBox1->Items->Count-1;//cuento los items y selecciono el ultimo
			sw->Write(listBox1->Text);			//Agregar cadena al txt
			sw->Close();						//Cierro mi metodo
			listBox1->Items->Clear();			//Limpio el listbox
		}
		void borrar_txt(){
			StreamWriter^ sw = gcnew StreamWriter("..\\datos\\informacion.txt"); //Objeto de escritura
			sw->Write("");			//Agregar cadena al txt
			sw->Close();			//Cierro mi metodo
		}
		void eliminar_texto(){
			StreamWriter^ sw = gcnew StreamWriter("..\\datos\\informacion.txt");
			for(num=0; num < listBox1->Items->Count; num++){//For sencillo para mostrar en el listbox lo que contenga el array cadena
				listBox1->SelectedIndex = num;			//Me posiciono en el index del listbox dependiendo de mi for
				if(num == listBox1->Items->Count-1){	//Evaluacion para saber cuando sea el ultimo item de mi listbox y no agregar coma (,)
					sw->Write(listBox1->Text);			//Agregar cadena al txt
				}else{									//En caso de no ser la ultima cadena sigo incertando
					sw->Write(listBox1->Text+",");		//Agregar cadena al txt
				}
			}
			sw->Close();						//Cierro el metodo
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					 if(textBox1->Text==""){	//valido que si se capture en el textbox
						 MessageBox::Show("Falta Ingresar texto en el textbox","Error",
							MessageBoxButtons::OK,MessageBoxIcon::Error);
					 }else{
						listBox1->Items->Add(textBox1->Text);	//Copio la cadena a mi listbox
						textBox1->Clear();						//limpio mi textbox tambien se puede hacer esto textBox1->Text="";
						leer_txt();								//Llamo funcion leer e inserto texto al txt
					 }
				 }
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					 if (textBox1->Text == "") //valido que si se capture en el textbox
					 {	
						 MessageBox::Show("Falta Ingresar texto en el textbox", "Error",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 else{
						 index = listBox1->FindString(this->textBox1->Text);//Busco en el listbox lo que hay en el textbox
						 if (index >= 0){
							 listBox1->SelectedIndex = index;	//Me posiciono en el listbox en el que coincide la busqueda
							 MessageBox::Show("Texto Encontrado", "Exito!!",
								 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 }
						 else{
							 MessageBox::Show("Texto no encontrado", "No encontrado",
								 MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						 }
					 }
				 }
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
					 if(listBox1->SelectedIndex  == -1){ //verifico que se alla seleccionado algun item del listbox
						 MessageBox::Show("Falta seleccionar el item a eliminar","Error!",
							 MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
					 }else{
						 listBox1->Items->RemoveAt(listBox1->SelectedIndex); //remuevo el item seleccionado en dado caso que se selecciones primero
						 eliminar_texto();		//llamo al metodo de eliminar
						 MessageBox::Show("Texto Eliminiado Correctamente","Exito!!",
							 MessageBoxButtons::OK,MessageBoxIcon::Information);
						 MessageBox::Show("Registros totales: "+listBox1->Items->Count,"Exito!!",
							MessageBoxButtons::OK,MessageBoxIcon::Information);
					}
				 }
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
					 listBox1->Items->Clear();			//Limpio mi listbox cada que se genera el evento
					 borrar_txt();						//Eliminio la informacion de mi txt
					 textBox1->Clear();					//Limpio el textBox1
				 }
		private: System::Void form_listbox_Load(System::Object^  sender, System::EventArgs^  e) {
				 }
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
					 solo_leer();
					 timer1->Enabled = false;
				 }
		private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
					 this->Close();
				 }
		private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
					 salir=1;
					 this->Close();
				 }
};
}
