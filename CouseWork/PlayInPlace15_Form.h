#pragma once

namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary1;

	/// <summary>
	/// Сводка для PlayInPlace15_Form
	/// </summary>
	public ref class PlayInPlace15_Form : public System::Windows::Forms::Form
	{
	public:
		PlayInPlace15_Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PlayInPlace15_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ FirstPictureBox;
	private: System::Windows::Forms::PictureBox^ LastPictureBox;


	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ QueuePlayer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ GiveUpButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayInPlace15_Form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->FirstPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->LastPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->QueuePlayer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GiveUpButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-50, -30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1297, 879);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(36, 107);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(497, 21);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// FirstPictureBox
			// 
			this->FirstPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirstPictureBox.Image")));
			this->FirstPictureBox->Location = System::Drawing::Point(38, 133);
			this->FirstPictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FirstPictureBox->Name = L"FirstPictureBox";
			this->FirstPictureBox->Size = System::Drawing::Size(495, 495);
			this->FirstPictureBox->TabIndex = 23;
			this->FirstPictureBox->TabStop = false;
			this->FirstPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PlayInPlace15_Form::FirstPictureBox_MouseClick);
			// 
			// LastPictureBox
			// 
			this->LastPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LastPictureBox.Image")));
			this->LastPictureBox->Location = System::Drawing::Point(638, 133);
			this->LastPictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LastPictureBox->Name = L"LastPictureBox";
			this->LastPictureBox->Size = System::Drawing::Size(495, 495);
			this->LastPictureBox->TabIndex = 24;
			this->LastPictureBox->TabStop = false;
			this->LastPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PlayInPlace15_Form::LastPictureBox_MouseClick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(638, 107);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(495, 21);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 25;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(608, 136);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(24, 492);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 26;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(8, 130);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(24, 498);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 27;
			this->pictureBox8->TabStop = false;
			// 
			// QueuePlayer
			// 
			this->QueuePlayer->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueuePlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QueuePlayer.Image")));
			this->QueuePlayer->Location = System::Drawing::Point(4, 34);
			this->QueuePlayer->Name = L"QueuePlayer";
			this->QueuePlayer->Size = System::Drawing::Size(236, 28);
			this->QueuePlayer->TabIndex = 28;
			this->QueuePlayer->Text = L"Ход первого игрока";
			this->QueuePlayer->UseMnemonic = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(5, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 25);
			this->label1->TabIndex = 29;
			this->label1->Text = L" Поле игрока 1 ";
			this->label1->UseMnemonic = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(605, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 25);
			this->label3->TabIndex = 30;
			this->label3->Text = L" Поле игрока 2";
			this->label3->UseMnemonic = false;
			// 
			// GiveUpButton
			// 
			this->GiveUpButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GiveUpButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GiveUpButton.Image")));
			this->GiveUpButton->Location = System::Drawing::Point(8, 634);
			this->GiveUpButton->Name = L"GiveUpButton";
			this->GiveUpButton->Size = System::Drawing::Size(151, 48);
			this->GiveUpButton->TabIndex = 31;
			this->GiveUpButton->Text = L"Сдаться";
			this->GiveUpButton->UseVisualStyleBackColor = true;
			this->GiveUpButton->Click += gcnew System::EventHandler(this, &PlayInPlace15_Form::GiveUpButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1159, 28);
			this->menuStrip1->TabIndex = 32;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(90, 24);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &PlayInPlace15_Form::помощьToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// PlayInPlace15_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1159, 687);
			this->Controls->Add(this->GiveUpButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->QueuePlayer);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->LastPictureBox);
			this->Controls->Add(this->FirstPictureBox);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PlayInPlace15_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Ходит 1-й игрок";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &PlayInPlace15_Form::PlayInPlace15_Form_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int NumberPlayer = 1;
		const int PixelSize = 33;
		int CountPartShipFirstPlace = 0;
		int  CountPartShipLastPlace = 0;
		System::Windows::Forms::PictureBox^ picturebox;

	private: System::Void PlayInPlace15_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
			"Изменения не будут сохранены. Вы действительно желаете выйти?",
			"Уведомление",
			System::Windows::Forms::MessageBoxButtons::OKCancel,
			System::Windows::Forms::MessageBoxIcon::Warning);
		if (result != System::Windows::Forms::DialogResult::OK)
			e->Cancel = true;
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GiveUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NumberPlayer == 1) {
			CountPartShipFirstPlace = 35;
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Победил второй игрок!!!",
				"Уведомление о победе",
				System::Windows::Forms::MessageBoxButtons::OK);
		}
		else if (NumberPlayer == 2) {
			CountPartShipLastPlace = 35;
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Победил первый игрок!!!",
				"Уведомление о победе",
				System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
		   void PrintKilled(int Shot_X, int Shot_Y, System::Windows::Forms::PictureBox^ PlacePictureBox) {
			   picturebox = gcnew System::Windows::Forms::PictureBox();
			   picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   Controls->Add(picturebox);
			   picturebox->BringToFront();
			   picturebox->Height = 33;
			   picturebox->Width = 33;
			   picturebox->Top = PlacePictureBox->Top + PixelSize * Shot_Y;
			   picturebox->Left = PlacePictureBox->Left + PixelSize * Shot_X;
			   picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\Killed.png"));
		   }

		   void PrintWounded(int Shot_X, int Shot_Y, System::Windows::Forms::PictureBox^ PlacePictureBox) {
			   picturebox = gcnew System::Windows::Forms::PictureBox();
			   picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   Controls->Add(picturebox);
			   picturebox->BringToFront();
			   picturebox->Height = 33;
			   picturebox->Width = 33;
			   picturebox->Top = PlacePictureBox->Top + PixelSize * Shot_Y;
			   picturebox->Left = PlacePictureBox->Left + PixelSize * Shot_X;
			   picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\Wounded.png"));
		   }

		   void PrintAway(int Shot_X, int Shot_Y, System::Windows::Forms::PictureBox^ PlacePictureBox) {
			   picturebox = gcnew System::Windows::Forms::PictureBox();
			   picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   Controls->Add(picturebox);
			   picturebox->BringToFront();
			   picturebox->Height = 13;
			   picturebox->Width = 13;
			   picturebox->Top = PlacePictureBox->Top + 10 + PixelSize * Shot_Y;
			   picturebox->Left = PlacePictureBox->Left + 10 + PixelSize * Shot_X;
			   picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\Away.png"));
		   }

		   void PrintOutline(int Temp_X, int Temp_Y, array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   for (int i = Temp_X - 1; i <= Temp_X + 1; i++) {
				   for (int j = Temp_Y - 1; j <= Temp_Y + 1; j++) {
					   if ((i < 15) && (i >= 0) && (j < 15) && (j >= 0) && (TempPlace[i, j] == 0)) {
						   TempPlace[i, j] = -1;
						   PrintAway(i, j, TempPlacePictureBox);
					   }

				   }
			   }
		   }
		  
		   void CheckingKilledHorizontalShip(array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   int i = 0;
			   for (int j = 0; j < 15; j++) {
				   while (i < 15) {
					   if ((i + 4 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2) && (TempPlace[i + 2, j] == 2) && (TempPlace[i + 3, j] == 2) && (TempPlace[i + 4, j] == 2))) {
						   if (((i == 0) || (TempPlace[i - 1, j] != 1)) && ((i + 4 == 14) || (TempPlace[i + 5, j] != 1))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i + 1, j] = 5;
							   TempPlace[i + 2, j] = 5;
							   TempPlace[i + 3, j] = 5;
							   TempPlace[i + 4, j] = 5;

							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i + 1, j, TempPlacePictureBox);
							   PrintKilled(i + 2, j, TempPlacePictureBox);
							   PrintKilled(i + 3, j, TempPlacePictureBox);
							   PrintKilled(i + 4, j, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 1, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 2, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 3, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 4, j, TempPlace, TempPlacePictureBox);
							   i += 5;
						   }
						   else {
							   i++;
						   }
					   }
					   else if ((i + 3 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2) && (TempPlace[i + 2, j] == 2) && (TempPlace[i + 3, j] == 2))) {
						   if (((i == 0) || (TempPlace[i - 1, j] != 1)) && ((i + 3 == 14) || (TempPlace[i + 4, j] != 1))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i + 1, j] = 5;
							   TempPlace[i + 2, j] = 5;
							   TempPlace[i + 3, j] = 5;

							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i + 1, j, TempPlacePictureBox);
							   PrintKilled(i + 2, j, TempPlacePictureBox);
							   PrintKilled(i + 3, j, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 1, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 2, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 3, j, TempPlace, TempPlacePictureBox);
							   i += 4;
						   }
						   else {
							   i++;
						   }
					   }
					   else if ((i + 2 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2) && (TempPlace[i + 2, j] == 2))) {
						   if (((i == 0) || ((TempPlace[i - 1, j] != 1) && (TempPlace[i - 1, j] != 2))) &&
							   ((i + 2 == 14) || ((TempPlace[i + 3, j] != 1) && (TempPlace[i + 3, j] != 2)))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i + 1, j] = 5;
							   TempPlace[i + 2, j] = 5;
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i + 1, j, TempPlacePictureBox);
							   PrintKilled(i + 2, j, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 1, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 2, j, TempPlace, TempPlacePictureBox);
							   i += 3;
						   }
						   else {
							   i++;
						   }

					   }
					   else if ((i + 1 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2))) {
						   if (((i == 0) || ((TempPlace[i - 1, j] != 1) && (TempPlace[i - 1, j] != 2)))
							   && ((i + 1 == 14) || ((TempPlace[i + 2, j] != 1) && (TempPlace[i + 2, j] != 2)))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i + 1, j] = 5;
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i + 1, j, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i + 1, j, TempPlace, TempPlacePictureBox);
							   i += 2;
						   }
						   else {
							   i++;
						   }

					   }
					   else if (TempPlace[i, j] == 2) {
						   if (((i == 0) || ((TempPlace[i - 1, j] != 1) && (TempPlace[i - 1, j] != 2))) &&
							   ((i == 14) || ((TempPlace[i + 1, j] != 1) && (TempPlace[i + 1, j] != 2))) &&
							   ((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) &&
							   ((j == 14) || ((TempPlace[i, j + 1] != 1) && (TempPlace[i, j + 1] != 2)))) {
							   TempPlace[i, j] = 5;
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   i += 1;
						   }
						   else {
							   i++;
						   }

					   }
					   else
						   i++;

				   }
				   i = 0;
			   }

		   }

		   void CheckingKilledVerticalShip(array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   int j = 0;
			   for (int i = 0; i < 15; i++) {
				   while (j < 15) {
					   if ((j + 4 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2) && (TempPlace[i, j + 2] == 2) && (TempPlace[i, j + 3] == 2) && (TempPlace[i, j + 4] == 2))) {
						   if (((j == 0) || (TempPlace[i, j - 1] != 1)) && ((j + 4 == 14) || (TempPlace[i, j + 5] != 1))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i, j + 1] = 5;
							   TempPlace[i, j + 2] = 5;
							   TempPlace[i, j + 3] = 5;
							   TempPlace[i, j + 4] = 5;

							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i, j + 1, TempPlacePictureBox);
							   PrintKilled(i, j + 2, TempPlacePictureBox);
							   PrintKilled(i, j + 3, TempPlacePictureBox);
							   PrintKilled(i, j + 4, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 1, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 2, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 3, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 4, TempPlace, TempPlacePictureBox);
							   j += 5;
						   }
						   else {
							   j++;
						   }
					   }
					   else  if ((j + 3 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2) && (TempPlace[i, j + 2] == 2) && (TempPlace[i, j + 3] == 2))) {
						   if (((j == 0) || (TempPlace[i, j - 1] != 1)) && ((j + 3 == 14) || (TempPlace[i, j + 4] != 1))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i, j + 1] = 5;
							   TempPlace[i, j + 2] = 5;
							   TempPlace[i, j + 3] = 5;
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i, j + 1, TempPlacePictureBox);
							   PrintKilled(i, j + 2, TempPlacePictureBox);
							   PrintKilled(i, j + 3, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 1, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 2, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 3, TempPlace, TempPlacePictureBox);
							   j += 4;
						   }
						   else {
							   j++;
						   }
					   }
					   else if ((j + 2 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2)) && (TempPlace[i, j + 2] == 2)) {
						   if (((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2)))
							   && ((j + 2 == 14) || ((TempPlace[i, j + 3] != 1) && (TempPlace[i, j + 3] != 2)))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i, j + 1] = 5;
							   TempPlace[i, j + 2] = 5;
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i, j + 1, TempPlacePictureBox);
							   PrintKilled(i, j + 2, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 1, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 2, TempPlace, TempPlacePictureBox);
							   j += 3;
						   }
						   else {
							   j++;
						   }

					   }
					   else if ((j + 1 < 15) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2))) {
						   if (((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) && ((j + 1 == 14) || ((TempPlace[i, j + 2] != 1) && (TempPlace[i, j + 2] != 2)))) {
							   TempPlace[i, j] = 5;
							   TempPlace[i, j + 1] = 5;
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintKilled(i, j + 1, TempPlacePictureBox);

							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   PrintOutline(i, j + 1, TempPlace, TempPlacePictureBox);
							   j += 2;
						   }
						   else {
							   j++;
						   }

					   }
					   else if (TempPlace[i, j] == 2) {
						   if (((i == 0) || ((TempPlace[i - 1, j] != 1) && (TempPlace[i - 1, j] != 2))) &&
							   ((i == 14) || ((TempPlace[i + 1, j] != 1) && (TempPlace[i + 1, j] != 2))) &&
							   ((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) &&
							   ((j == 14) || ((TempPlace[i, j + 1] != 1) && (TempPlace[i, j + 1] != 2)))) {
							   PrintKilled(i, j, TempPlacePictureBox);
							   PrintOutline(i, j, TempPlace, TempPlacePictureBox);
							   j += 1;
						   }
						   else {
							   j++;
						   }

					   }
					   else
						   j++;
				   }
				   j = 0;
			   }

		   }


		   void CheckigKilledShip(array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   CheckingKilledHorizontalShip(TempPlace, TempPlacePictureBox);
			   CheckingKilledVerticalShip(TempPlace, TempPlacePictureBox);
		   }

		   void PrintError(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		   {
			   if ((CountPartShipFirstPlace == 35) || (CountPartShipLastPlace == 35)) {
				   return;
			   }
			   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				   "Вы уже стреляли по этим координатам. Повторите выстрел.",
				   "Уведомление об ошибке",
				   System::Windows::Forms::MessageBoxButtons::OK,
				   System::Windows::Forms::MessageBoxIcon::Error);
		   }

		   void PrintShot(int X, int Y) {
			   if (NumberPlayer == 1) {
				   if (Class1::LastPlace_15[X, Y] == -1) {
					   PrintAway(X, Y, LastPictureBox);

				   }
				   else if (Class1::LastPlace_15[X, Y] == 2) {
					   PrintWounded(X, Y, LastPictureBox);
					   CheckigKilledShip(Class1::LastPlace_15, LastPictureBox);
				   }
			   }
			   else if (NumberPlayer == 2) {
				   if (Class1::FirstPlace_15[X, Y] == -1) {
					   PrintAway(X, Y, FirstPictureBox);
				   }
				   else if (Class1::FirstPlace_15[X, Y] == 2) {
					   PrintWounded(X, Y, FirstPictureBox);
					   CheckigKilledShip(Class1::FirstPlace_15, FirstPictureBox);
				   }
			   }
		   }

		   int  CheckPartShipLastPlace(int X, int Y) {
			   if ((Class1::LastPlace_15[X, Y - 1] == 2) || (Class1::LastPlace_15[X, Y + 1] == 2) ||
				   (Class1::LastPlace_15[X - 1, Y] == 2) || (Class1::LastPlace_15[X + 1, Y] == 2)) {
				   return 0;
			   }
			   else
				   return 1;
		   }

		   int CheckPartShipFirstPlace(int X, int Y) {
			   if ((Class1::FirstPlace_15[X, Y - 1] == 2) || (Class1::FirstPlace_15[X, Y + 1] == 2) ||
				   (Class1::FirstPlace_15[X - 1, Y] == 2) || (Class1::FirstPlace_15[X + 1, Y] == 2)) {
				   return 0;
			   }
			   else
				   return 1;
		   }

		   void DetermineTheWinner() {
			   if (CountPartShipFirstPlace == 35) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Победил второй игрок!!!",
					   "Уведомление о победе ", System::Windows::Forms::MessageBoxButtons::OK);
			   }
			   else if (CountPartShipLastPlace == 35) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Победил первый игрок!!!",
					   "Уведомление о победе ",
					   System::Windows::Forms::MessageBoxButtons::OK);
			   }
		   }

		   void Shot(int X, int Y) {
			   if (NumberPlayer == 1) {
				   if (Class1::LastPlace_15[X, Y] == 1) {
					   Class1::LastPlace_15[X, Y] = 2;
					   PrintShot(X, Y);
					   CountPartShipLastPlace++;
				   }
				   else if (Class1::LastPlace_15[X, Y] == 0) {
					   Class1::LastPlace_15[X, Y] = -1;
					   PrintShot(X, Y);
					   NumberPlayer = 2;
					   PlayInPlace15_Form::Text = "Ходит 2-й игрок";
					   QueuePlayer->Text = "Ход второго игрока";
				   }
				   else
				   {
					   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
						   "Вы уже стреляли по этим координатам. Повторите выстрел.",
						   "Уведомление об ошибке",
						   System::Windows::Forms::MessageBoxButtons::OK,
						   System::Windows::Forms::MessageBoxIcon::Error);
				   }

			   }
			   else if (NumberPlayer == 2) {
				   if (Class1::FirstPlace_15[X, Y] == 1) {
					   Class1::FirstPlace_15[X, Y] = 2;
					   PrintShot(X, Y);
					   CountPartShipFirstPlace++;
				   }
				   else if (Class1::FirstPlace_15[X, Y] == 0) {
					   Class1::FirstPlace_15[X, Y] = -1;
					   PrintShot(X, Y);
					   NumberPlayer = 1;
					   PlayInPlace15_Form::Text = "Ходит 1-й игрок";
					   QueuePlayer->Text = "Ход первого игрока";
				   }
				   else
				   {
					   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
						   "Вы уже стреляли по этим координатам. Повторите выстрел.",
						   "Уведомление об ошибке",
						   System::Windows::Forms::MessageBoxButtons::OK,
						   System::Windows::Forms::MessageBoxIcon::Error);
				   }
			   }
			   DetermineTheWinner();
		   }


	private: System::Void FirstPictureBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if ((CountPartShipFirstPlace == 35) || (CountPartShipLastPlace == 35)) {
			return;
		}
		if (NumberPlayer == 2) {
			int FirstPlace_X = e->Location.X / 33;
			int FirstPlace_Y = e->Location.Y / 33;
			Shot(FirstPlace_X, FirstPlace_Y);
		}
		else
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Поле недоступно к выстрелу, поскольку не является вражеским.",
				"Уведомление об ошибке",
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
	}
	private: System::Void LastPictureBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if ((CountPartShipFirstPlace == 35) || (CountPartShipLastPlace == 35)) {
			return;
		}
		if (NumberPlayer == 1) {

			int LastPlace_X = e->Location.X / 33;
			int LastPlace_Y = e->Location.Y / 33;

			//	System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("X: " + LastPlace_X + "Y: " + LastPlace_Y);
			Shot(LastPlace_X, LastPlace_Y);
		}
		else {
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Поле недоступно к выстрелу, поскольку не является вражеским.",
				"Уведомление об ошибке",
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);

		}
	}
	private: System::Void помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
			"ПРАВИЛА ИГРЫ:\nвыстрелы проиcходят поочередно в\nслучае, если выстрел является успешным,\nстрелявший игрок повторяет выстрел, в\nобратном случае,стреляет слудующий ирок.\nОбозначения: \n  1)черная точка - МИМО\n  2)обводка оранжевым - РАНИЛ\n  3)обводка красным - УБИЛ",
			"Помощь",
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Information);
	}
	
};
}
