#pragma once

namespace HangMan {

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
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(106, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(245, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Guess";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::IndianRed;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(297, 500);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 48);
			this->button2->TabIndex = 2;
			this->button2->Text = L"NewGame";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(177, 415);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(38, 38);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(114, 510);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Lives remaing: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(171, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"-------";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"obraz0.png");
			this->imageList1->Images->SetKeyName(1, L"obraz1.png");
			this->imageList1->Images->SetKeyName(2, L"obraz2.png");
			this->imageList1->Images->SetKeyName(3, L"obraz3.png");
			this->imageList1->Images->SetKeyName(4, L"obraz4.png");
			this->imageList1->Images->SetKeyName(5, L"obraz5.png");
			this->imageList1->Images->SetKeyName(6, L"obraz6.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(448, 573);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"HangMan";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma endregion

			
		array<String^>^ bankSlow;
		String^ wylosowaneSlo;
		String^ wykryteSlo;
		int liczbaBledow;
		Random^ generator;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		bankSlow = gcnew array<String^>{ "RIZZ", "OHIO", "SIGMA", "TIKTOK", "SKIBIDI" };
		generator = gcnew Random();

		
		liczbaBledow = 0;
		pictureBox1->Image = imageList1->Images[liczbaBledow];

		label1->Text = "Lives remaining: " + (6 - liczbaBledow).ToString();

		int wylosowanyIndeks = generator->Next(bankSlow->Length);
		wylosowaneSlo = bankSlow[wylosowanyIndeks];
		wykryteSlo = "";

		for (int i = 0; i < wylosowaneSlo->Length; i++) {
			wykryteSlo += "_";
		}

		String^ tekstDoWyswietlenia = "";
		for (int i = 0; i < wykryteSlo->Length; i++) {
			tekstDoWyswietlenia += wykryteSlo[i] + " ";
		}
		label2->Text = tekstDoWyswietlenia;
		
	}

		   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	liczbaBledow = 0;
	button1->Enabled = true; 

	pictureBox1->Image = imageList1->Images[liczbaBledow];
	label1->Text = "Lives remaining: " + (6 - liczbaBledow).ToString();

	
	int wylosowanyIndeks = generator->Next(bankSlow->Length);
	wylosowaneSlo = bankSlow[wylosowanyIndeks];
	wykryteSlo = "";

	for (int i = 0; i < wylosowaneSlo->Length; i++) {
		wykryteSlo += "_";
	}

	
	String^ tekstDoWyswietlenia = "";
	for (int i = 0; i < wykryteSlo->Length; i++) {
		tekstDoWyswietlenia += wykryteSlo[i] + " ";
	}
	label2->Text = tekstDoWyswietlenia;

	
	textBox1->Text = "";
	textBox1->Focus();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text->Length == 0) return;

	
	String^ wpisanyTekst = textBox1->Text->ToUpper();
	wchar_t litera = wpisanyTekst[0];

	bool trafiony = false;
	String^ noweWykryte = "";

	
	for (int i = 0; i < wylosowaneSlo->Length; i++) {
		
		if (wylosowaneSlo[i] == litera) {
			noweWykryte += litera;
			trafiony = true;
		}
		else {
			
			noweWykryte += wykryteSlo[i];
		}
	}

	
	wykryteSlo = noweWykryte;

	
	if (trafiony) {
		
		String^ tekstDoWyswietlenia = "";
		for (int i = 0; i < wykryteSlo->Length; i++) {
			tekstDoWyswietlenia += wykryteSlo[i] + " ";
		}
		label2->Text = tekstDoWyswietlenia;

		
		if (!wykryteSlo->Contains("_")) {
			MessageBox::Show("Sigma ! You won !", " END OF THE GAME");
			button1->Enabled = false; 
		}
	}
	
	else {
		liczbaBledow++; 

		
		if (liczbaBledow <= 6) {
			pictureBox1->Image = imageList1->Images[liczbaBledow];
			label1->Text = "Lives remaining: " + (6 - liczbaBledow).ToString();
		}

		
		if (liczbaBledow == 6) {
			MessageBox::Show("Skibidi toilet... You Lost! PASSWORD is : " + wylosowaneSlo, "END OF THE GAME");
			button1->Enabled = false; 
		}
	}

	
	textBox1->Text = "";
	textBox1->Focus();
}
};
}  

		
