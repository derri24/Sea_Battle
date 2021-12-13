#pragma once
#include "ctime"
#include "stdlib.h"

namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary1;

	/// <summary>
	/// Сводка для PlayInPlace15WithBot_Form
	/// </summary>
	public ref class PlayInPlace15WithBot_Form : public System::Windows::Forms::Form
	{
	public:
		PlayInPlace15WithBot_Form(void)
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
		~PlayInPlace15WithBot_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GiveUpButton;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ QueuePlayer;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ LastPictureBox;
	private: System::Windows::Forms::PictureBox^ FirstPictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayInPlace15WithBot_Form::typeid));
			this->GiveUpButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->QueuePlayer = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->LastPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->FirstPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// GiveUpButton
			// 
			this->GiveUpButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GiveUpButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GiveUpButton.Image")));
			this->GiveUpButton->Location = System::Drawing::Point(19, 591);
			this->GiveUpButton->Name = L"GiveUpButton";
			this->GiveUpButton->Size = System::Drawing::Size(151, 48);
			this->GiveUpButton->TabIndex = 42;
			this->GiveUpButton->Text = L"Сдаться";
			this->GiveUpButton->UseVisualStyleBackColor = true;
			this->GiveUpButton->Click += gcnew System::EventHandler(this, &PlayInPlace15WithBot_Form::GiveUpButton_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(616, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 25);
			this->label3->TabIndex = 41;
			this->label3->Text = L" Поле бота";
			this->label3->UseMnemonic = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(16, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 25);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Моё поле";
			this->label1->UseMnemonic = false;
			// 
			// QueuePlayer
			// 
			this->QueuePlayer->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueuePlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QueuePlayer.Image")));
			this->QueuePlayer->Location = System::Drawing::Point(15, -29);
			this->QueuePlayer->Name = L"QueuePlayer";
			this->QueuePlayer->Size = System::Drawing::Size(236, 28);
			this->QueuePlayer->TabIndex = 39;
			this->QueuePlayer->Text = L"Ход первого игрока";
			this->QueuePlayer->UseMnemonic = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(19, 87);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(24, 498);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 38;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(619, 93);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(24, 492);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 37;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(649, 64);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(495, 21);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 36;
			this->pictureBox5->TabStop = false;
			// 
			// LastPictureBox
			// 
			this->LastPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LastPictureBox.Image")));
			this->LastPictureBox->Location = System::Drawing::Point(649, 90);
			this->LastPictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LastPictureBox->Name = L"LastPictureBox";
			this->LastPictureBox->Size = System::Drawing::Size(495, 495);
			this->LastPictureBox->TabIndex = 35;
			this->LastPictureBox->TabStop = false;
			this->LastPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PlayInPlace15WithBot_Form::LastPictureBox_MouseClick);
			// 
			// FirstPictureBox
			// 
			this->FirstPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirstPictureBox.Image")));
			this->FirstPictureBox->Location = System::Drawing::Point(49, 90);
			this->FirstPictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FirstPictureBox->Name = L"FirstPictureBox";
			this->FirstPictureBox->Size = System::Drawing::Size(495, 495);
			this->FirstPictureBox->TabIndex = 34;
			this->FirstPictureBox->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(47, 64);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(497, 21);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-39, -73);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1297, 879);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1166, 28);
			this->menuStrip1->TabIndex = 43;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(90, 24);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &PlayInPlace15WithBot_Form::помощьToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// PlayInPlace15WithBot_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1166, 649);
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
			this->Name = L"PlayInPlace15WithBot_Form";
			this->Text = L"Sea_Battle";
			this->Load += gcnew System::EventHandler(this, &PlayInPlace15WithBot_Form::PlayInPlace15WithBot_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		const int PixelSize = 33;
		System::Windows::Forms::PictureBox^ picturebox;
		int NumberPlayer = 1;
		int CountPartShipFirstPlace = 0;
		int  CountPartShipLastPlace = 0;
		int Flag_Top = 0, Flag_Down = 0, Flag_Left = 0, Flag_Right = 0;
		int FirstShot_X, FirstShot_Y;
		int LastShot_X, LastShot_Y;
		int NextShot_X, NextShot_Y;

		int Flag = 0;

	private: System::Void GiveUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CountPartShipLastPlace != 35) {
			CountPartShipFirstPlace = 35;
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Победил бот!!!",
				"Уведомление о победе",
				System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void PlayInPlace15WithBot_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
		for (int i = 0; i < 15; i++) {
			for (int j = 0; j < 15; j++) {
				if (Class1::MyPlace_15[i, j] == 1) {
					picturebox = gcnew System::Windows::Forms::PictureBox();
					picturebox->Height = 33;
					picturebox->Width = 33;
					picturebox->Top = FirstPictureBox->Top + PixelSize * j;
					picturebox->Left = FirstPictureBox->Left + PixelSize * i;
					picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\1a.png"));
					picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
					Controls->Add(picturebox);
					picturebox->BringToFront();
				}
			}
		}
	}
		   void DetermineTheWinner() {
			   if (CountPartShipFirstPlace == 35) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Победил бот!!!",
					   "Уведомление о победе ", System::Windows::Forms::MessageBoxButtons::OK);
			   }
			   else if (CountPartShipLastPlace == 35) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Вы победили!!!",
					   "Уведомление о победе ",
					   System::Windows::Forms::MessageBoxButtons::OK);
			   }
		   }

		   void RandomShotBot_LightLvl() {
			   int Shot_X, Shot_Y;
			   int Count = 0;
			   int CoordinateFlag = 0;
			   Shot_X = rand() % 15;
			   Shot_Y = rand() % 15;

			   while (((Class1::MyPlace_15[Shot_X, Shot_Y] == 2) || (Class1::MyPlace_15[Shot_X, Shot_Y] == -1) || (Class1::MyPlace_15[Shot_X, Shot_Y] == 5)) && (Count < 100)) {
				   Shot_X = rand() % 15;
				   Shot_Y = rand() % 15;
				   Count++;
			   }
			   if (Count > 99)
				   for (int i = 0; ((CoordinateFlag != 1) && (i < 14)); i++) {
					   for (int j = 0; ((CoordinateFlag != 1) && (j < 14)); j++) {
						   if ((Class1::MyPlace_15[i, j] == 0) || (Class1::MyPlace_15[i, j] == 1)) {
							   Shot_X == i;
							   Shot_Y = j;
							   CoordinateFlag = 1;
						   }
					   }
				   }
			   if (Class1::MyPlace_15[Shot_X, Shot_Y] == 1) {
				   GoodShot_FirstLvl(Shot_X, Shot_Y);
				   RandomShotBot_LightLvl();
			   }
			   else if (Class1::MyPlace_15[Shot_X, Shot_Y] == 0) {
				   Class1::MyPlace_15[Shot_X, Shot_Y] = -1;
				   PrintAway(Shot_X, Shot_Y, FirstPictureBox);
			   }

		   }

		   void RandomShotBot_MiddleLvl() {
			   int Count = 0;
			   int CoordinateFlag = 0;
			   if (Flag == 1)
			   {
				   CheckNextShot();
			   }
			   else {
				   int Shot_X, Shot_Y;
				   Shot_X = rand() % 15;
				   Shot_Y = rand() % 15;

				   while (((Class1::MyPlace_15[Shot_X, Shot_Y] == 2) || (Class1::MyPlace_15[Shot_X, Shot_Y] == -1) || (Class1::MyPlace_15[Shot_X, Shot_Y] == 5)) && (Count < 100)) {
					   Shot_X = rand() % 15;
					   Shot_Y = rand() % 15;
					   Count++;

				   }
				   if (Count > 99)
					   for (int i = 0; ((CoordinateFlag != 1) && (i < 14)); i++) {
						   for (int j = 0; ((CoordinateFlag != 1) && (j < 14)); j++) {
							   if ((Class1::MyPlace_15[i, j] == 0) || (Class1::MyPlace_15[i, j] == 1)) {
								   Shot_X == i;
								   Shot_Y = j;
								   CoordinateFlag = 1;
							   }
						   }
					   }
				   if (Class1::MyPlace_15[Shot_X, Shot_Y] == 1) {
					   GoodShot2or3Lvl(Shot_X, Shot_Y);
				   }
				   else if (Class1::MyPlace_15[Shot_X, Shot_Y] == 0) {
					   Class1::MyPlace_15[Shot_X, Shot_Y] = -1;
					   PrintAway(Shot_X, Shot_Y, FirstPictureBox);
				   }
			   }
		   }


		   void RandomShotBot_DifficultLvl() {
			   int Count = 0;
			   int CoordinateFlag = 0;
			   if (Flag == 1)
			   {
				   CheckNextShot();
			   }
			   else {
				   int Probability = rand() % 4;
				   if (Probability == 3) {
					   int Random_X = rand() % 15;
					   int Random_Y = rand() % 15;
					   while ((Class1::MyPlace_15[Random_X, Random_Y] != 1) && (Count < 100)) {
						   Random_X = rand() % 15;
						   Random_Y = rand() % 15;
						   Count++;
					   }
					   if (Count > 99)
						   for (int i = 0; ((CoordinateFlag != 1) && (i < 14)); i++) {
							   for (int j = 0; ((CoordinateFlag != 1) && (j < 14)); j++) {
								   if ((Class1::MyPlace_15[i, j] == 0) || (Class1::MyPlace_15[i, j] == 1)) {
									   Random_X == i;
									   Random_Y = j;
									   CoordinateFlag = 1;
								   }
							   }
						   }
					   GoodShot2or3Lvl(Random_X, Random_Y);
				   }
				   else {
					   RandomShotBot_MiddleLvl();
				   }
			   }

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


		   void CheckNextShot() {
			   if (Flag_Top == 0) {
				   LastShot_Y = LastShot_Y - 1;
				   if ((LastShot_Y > -1) && ((Class1::MyPlace_15[LastShot_X, LastShot_Y] != 2) && (Class1::MyPlace_15[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 1) {
						   GoodShot2or3Lvl(LastShot_X, LastShot_Y);
					   }
					   else if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace_15[LastShot_X, LastShot_Y] = -1;
						   PrintAway(LastShot_X, LastShot_Y, FirstPictureBox);
						   Flag_Top = 1;
						   Flag = 1;
						   LastShot_Y = FirstShot_Y;
					   }
				   }
				   else {
					   Flag_Top = 1;
					   LastShot_Y = FirstShot_Y;
					   CheckNextShot();
				   }
			   }
			   else if (Flag_Down == 0) {
				   LastShot_Y = LastShot_Y + 1;
				   if ((LastShot_Y < 15) && ((Class1::MyPlace_15[LastShot_X, LastShot_Y] != 2) && (Class1::MyPlace_15[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 1) {
						   GoodShot2or3Lvl(LastShot_X, LastShot_Y);
					   }
					   else if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace_15[LastShot_X, LastShot_Y] = -1;
						   PrintAway(LastShot_X, LastShot_Y, FirstPictureBox);
						   Flag_Down = 1;
						   Flag = 1;
						   LastShot_Y = FirstShot_Y;
					   }
				   }
				   else {
					   Flag_Down = 1;
					   LastShot_Y = FirstShot_Y;
					   CheckNextShot();
				   }
			   }
			   else if (Flag_Left == 0) {
				   LastShot_X = LastShot_X - 1;
				   if ((LastShot_X > -1) && ((Class1::MyPlace_15[LastShot_X, LastShot_Y] != 2) && (Class1::MyPlace_15[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 1) {
						   GoodShot2or3Lvl(LastShot_X, LastShot_Y);
					   }
					   else if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace_15[LastShot_X, LastShot_Y] = -1;
						   PrintAway(LastShot_X, LastShot_Y, FirstPictureBox);
						   Flag_Left = 1;
						   Flag = 1;
						   LastShot_X = FirstShot_X;
					   }
				   }
				   else {
					   Flag_Left = 1;
					   LastShot_X = FirstShot_X;
					   CheckNextShot();
				   }
			   }
			   else if (Flag_Right == 0) {
				   LastShot_X = LastShot_X + 1;
				   if ((LastShot_X < 15) && ((Class1::MyPlace_15[LastShot_X, LastShot_Y] != 2) && (Class1::MyPlace_15[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 1) {
						   GoodShot2or3Lvl(LastShot_X, LastShot_Y);
					   }
					   else if (Class1::MyPlace_15[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace_15[LastShot_X, LastShot_Y] = -1;
						   PrintAway(LastShot_X, LastShot_Y, FirstPictureBox);
						   Flag_Right = 1;
						   Flag = 1;
						   LastShot_X = FirstShot_X;
					   }
				   }
				   else {
					   Flag_Right = 1;
					   LastShot_X = FirstShot_X;
					   CheckNextShot();
				   }
			   }
			   else {
				   Flag_Top = 0;
				   Flag_Down = 0;
				   Flag_Left = 0;
				   Flag_Right = 0;
				   Flag = 0;
				   RandomShotBot_MiddleLvl();
			   }

		   }

		   void  GoodShot_FirstLvl(int Temp_X, int Temp_Y) {
			   Class1::MyPlace_15[Temp_X, Temp_Y] = 2;
			   PrintWounded(Temp_X, Temp_Y, FirstPictureBox);
			   CheckigKilledShip(Class1::MyPlace_15, FirstPictureBox);
			   CountPartShipFirstPlace++;
			   DetermineTheWinner();
			   RandomShotBot_LightLvl();
		   }

		   void GoodShot2or3Lvl(int Temp_X, int Temp_Y) {

			   Class1::MyPlace_15[Temp_X, Temp_Y] = 2;
			   LastShot_X = Temp_X;
			   LastShot_Y = Temp_Y;
			   PrintWounded(Temp_X, Temp_Y, FirstPictureBox);
			   CheckigKilledShip(Class1::MyPlace_15, FirstPictureBox);
			   CountPartShipFirstPlace++;
			   DetermineTheWinner();
			   FirstShot_X = Temp_X;
			   FirstShot_Y = Temp_Y;
			   CheckNextShot();
		   }


		   void ChooseLvlDifficulties() {
			   if (Class1::ChooseLvl == 1) {
				   RandomShotBot_LightLvl();
			   }
			   else if (Class1::ChooseLvl == 2) {
				   RandomShotBot_MiddleLvl();
			   }
			   else if (Class1::ChooseLvl == 3) {
				   RandomShotBot_DifficultLvl();
			   }
		   }


		   void PrintMyShot(int X, int Y) {
			   if (Class1::BotPlace_15[X, Y] == -1) {
				   PrintAway(X, Y, LastPictureBox);
			   }
			   else if (Class1::BotPlace_15[X, Y] == 2) {
				   PrintWounded(X, Y, LastPictureBox);
				   CheckigKilledShip(Class1::BotPlace_15, LastPictureBox);
			   }
		   }

		   void Shot(int X, int Y) {
			   if (Class1::BotPlace_15[X, Y] == 1) {
				   Class1::BotPlace_15[X, Y] = 2;
				   PrintMyShot(X, Y);
				   CheckigKilledShip(Class1::BotPlace_15, LastPictureBox);
				   CountPartShipLastPlace++;
			   }
			   else if (Class1::BotPlace_15[X, Y] == 0) {
				   Class1::BotPlace_15[X, Y] = -1;
				   PrintMyShot(X, Y);
				   ChooseLvlDifficulties();
			   }
			   else
			   {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Вы уже стреляли по этим координатам. Повторите выстрел.",
					   "Уведомление об ошибке",
					   System::Windows::Forms::MessageBoxButtons::OK,
					   System::Windows::Forms::MessageBoxIcon::Error);
			   }

			   DetermineTheWinner();
		   }

	private: System::Void LastPictureBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if ((CountPartShipFirstPlace == 35) || (CountPartShipLastPlace == 35)) {
			return;
		}
		int LastPlace_X = e->Location.X / 33;
		int LastPlace_Y = e->Location.Y / 33;
		Shot(LastPlace_X, LastPlace_Y);
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
