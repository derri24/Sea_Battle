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
	/// Сводка для PlayInPlace10WithBot_Form
	/// </summary>
	public ref class PlayInPlace10WithBot_Form : public System::Windows::Forms::Form
	{
	public:
		PlayInPlace10WithBot_Form(void)
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
		~PlayInPlace10WithBot_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ GiveUpButton;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ LastPictureBox;
	private: System::Windows::Forms::PictureBox^ FirstPictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayInPlace10WithBot_Form::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GiveUpButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->LastPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->FirstPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(443, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 25);
			this->label3->TabIndex = 24;
			this->label3->Text = L" Поле бота";
			this->label3->UseMnemonic = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(8, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 25);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Моё поле";
			this->label1->UseMnemonic = false;
			// 
			// GiveUpButton
			// 
			this->GiveUpButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GiveUpButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GiveUpButton.Image")));
			this->GiveUpButton->Location = System::Drawing::Point(18, 411);
			this->GiveUpButton->Name = L"GiveUpButton";
			this->GiveUpButton->Size = System::Drawing::Size(151, 48);
			this->GiveUpButton->TabIndex = 22;
			this->GiveUpButton->Text = L"Сдаться";
			this->GiveUpButton->UseVisualStyleBackColor = true;
			this->GiveUpButton->Click += gcnew System::EventHandler(this, &PlayInPlace10WithBot_Form::GiveUpButton_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(447, 75);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(24, 328);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 21;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(10, 77);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(23, 328);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 20;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(477, 51);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(330, 22);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 19;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(38, 51);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(331, 22);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			// 
			// LastPictureBox
			// 
			this->LastPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LastPictureBox.Image")));
			this->LastPictureBox->Location = System::Drawing::Point(477, 75);
			this->LastPictureBox->Name = L"LastPictureBox";
			this->LastPictureBox->Size = System::Drawing::Size(330, 330);
			this->LastPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->LastPictureBox->TabIndex = 17;
			this->LastPictureBox->TabStop = false;
			this->LastPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PlayInPlace10WithBot_Form::LastPictureBox_MouseClick);
			// 
			// FirstPictureBox
			// 
			this->FirstPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirstPictureBox.Image")));
			this->FirstPictureBox->Location = System::Drawing::Point(38, 75);
			this->FirstPictureBox->Name = L"FirstPictureBox";
			this->FirstPictureBox->Size = System::Drawing::Size(330, 330);
			this->FirstPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->FirstPictureBox->TabIndex = 16;
			this->FirstPictureBox->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-175, -80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1240, 663);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// PlayInPlace10WithBot_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(842, 470);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GiveUpButton);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->LastPictureBox);
			this->Controls->Add(this->FirstPictureBox);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PlayInPlace10WithBot_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Sea_Battle";
			this->Load += gcnew System::EventHandler(this, &PlayInPlace10WithBot_Form::PlayInPlace10WithBot_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

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
	}
	private: System::Void PlayInPlace10WithBot_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (Class1::MyPlace[i, j] == 1) {
					picturebox = gcnew System::Windows::Forms::PictureBox();
					picturebox->Height = 33;
					picturebox->Width = 33;
					picturebox->Top = FirstPictureBox->Top + PixelSize * j;
					picturebox->Left = FirstPictureBox->Left + PixelSize * i;
					picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\1a.png");
					picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
					Controls->Add(picturebox);
					picturebox->BringToFront();
				}
			}
		}
	}
		   void DetermineTheWinner() {
			   if (CountPartShipFirstPlace == 20) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Победил бот!!!",
					   "Уведомление о победе ", System::Windows::Forms::MessageBoxButtons::OK);
			   }
			   else if (CountPartShipLastPlace == 20) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Вы победили!!!",
					   "Уведомление о победе ",
					   System::Windows::Forms::MessageBoxButtons::OK);
			   }
		   }

		   void RandomShotBot_LightLvl() {
			   int Shot_X, Shot_Y;
			   srand(time(0));
			   Shot_X = rand() % 10;
			   Shot_Y = rand() % 10;

			   while ((Class1::MyPlace[Shot_X, Shot_Y] == 2) || (Class1::MyPlace[Shot_X, Shot_Y] == -1)) {
				   Shot_X = rand() % 10;
				   Shot_Y = rand() % 10;
			   }
			   if (Class1::MyPlace[Shot_X, Shot_Y] == 1) {
				   Class1::MyPlace[Shot_X, Shot_Y] = 2;
				   PrintWounded(Shot_X, Shot_Y, FirstPictureBox);
				   CheckigKilledShip(Class1::MyPlace, FirstPictureBox);


				   CountPartShipFirstPlace++;
				   RandomShotBot_LightLvl();
			   }
			   else if (Class1::MyPlace[Shot_X, Shot_Y] == 0) {
				   Class1::MyPlace[Shot_X, Shot_Y] = -1;
				   PrintAway(Shot_X, Shot_Y, FirstPictureBox);
			   }

		   }



		   void PrintOutline(int Temp_X, int Temp_Y, array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   for (int i = Temp_X - 1; i <= Temp_X + 1; i++) {
				   for (int j = Temp_Y - 1; j <= Temp_Y + 1; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0) && (TempPlace[i, j] == 0)) {
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
			   picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Wounded.png");
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
			   picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Away.png");
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
			   picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Killed.png");
		   }



		   void CheckingKilledHorizontalShip(array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   int i = 0;
			   for (int j = 0; j < 10; j++) {
				   while (i < 10) {
					   if ((i + 3 < 10) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2) && (TempPlace[i + 2, j] == 2) && (TempPlace[i + 3, j] == 2))) {
						   if (((i == 0) || (TempPlace[i - 1, j] != 1)) && ((i + 3 == 9) || (TempPlace[i + 4, j] != 1))) {
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
					   else if ((i + 2 < 10) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2) && (TempPlace[i + 2, j] == 2))) {
						   if (((i == 0) || (TempPlace[i - 1, j] != 1)) && ((i + 2 == 9) || (TempPlace[i + 3, j] != 1))) {
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
					   else if ((i + 1 < 10) && ((TempPlace[i, j] == 2) && (TempPlace[i + 1, j] == 2))) {
						   if (((i == 0) || ((TempPlace[i - 1, j] != 1)&&(TempPlace[i - 1, j] != 2))) && ((i + 1 == 9) || ((TempPlace[i + 2, j] != 1)&&(TempPlace[i + 2, j] != 2)))) {
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
							   ((i == 9) || ((TempPlace[i + 1, j] != 1) && (TempPlace[i + 1, j] != 2))) &&
							   (((j == 0)) || (((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) &&
								   ((j == 9) || (((TempPlace[i, j + 1] != 1) && (TempPlace[i, j + 1] != 2)))))) {
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

		   void CheckigKilledShip(array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   CheckingKilledHorizontalShip(TempPlace, TempPlacePictureBox);
			   CheckingKilledVerticalShip(TempPlace, TempPlacePictureBox);
		   }

		   void CheckingKilledVerticalShip(array<int, 2>^ TempPlace, System::Windows::Forms::PictureBox^ TempPlacePictureBox) {
			   int j = 0;
			   for (int i = 0; i < 10; i++) {
				   while (j < 10) {
					   if ((j + 3 < 10) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2) && (TempPlace[i, j + 2] == 2) && (TempPlace[i, j + 3] == 2))) {
						   if (((j == 0) || (TempPlace[i, j - 1] != 1)) && ((j + 3 == 9) || (TempPlace[i, j + 4] != 1))) {
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
					   else if ((j + 2 < 10) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2) && (TempPlace[i, j + 2] == 2))) {
						   if (((j == 0) || (TempPlace[i, j - 1] != 1)) && ((j + 2 == 9) || (TempPlace[i, j + 3] != 1))) {
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
					   else if ((j + 1 < 10) && ((TempPlace[i, j] == 2) && (TempPlace[i, j + 1] == 2))) {
						   if (((j == 0) || ((TempPlace[i, j - 1] != 1)&&(TempPlace[i, j - 1] != 2))) && ((j + 1 == 9) || ((TempPlace[i, j + 2] != 1) && (TempPlace[i, j + 2] != 2)))) {
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
							   ((i == 9) || ((TempPlace[i + 1, j] != 1) && (TempPlace[i + 1, j] != 2))) &&
							   (((j == 0)) || (((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) &&
								   ((j == 9) || (((TempPlace[i, j + 1] != 1) && (TempPlace[i, j + 1] != 2)))))) {
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


		   void RandomShotBot_MiddleLvl() {

			   if (Flag == 1)
			   {
				   CheckNextShot();

			   }

			   else {
				   int Shot_X, Shot_Y;
				   srand(time(0));
				   Shot_X = rand() % 10;
				   Shot_Y = rand() % 10;

				   while ((Class1::MyPlace[Shot_X, Shot_Y] == 2) || (Class1::MyPlace[Shot_X, Shot_Y] == -1)) {
					   Shot_X = rand() % 10;
					   Shot_Y = rand() % 10;

				   }
				   if (Class1::MyPlace[Shot_X, Shot_Y] == 1) {
					   Class1::MyPlace[Shot_X, Shot_Y] = 2;

					   LastShot_X = Shot_X;
					   LastShot_Y = Shot_Y;

					   PrintWounded(Shot_X, Shot_Y, FirstPictureBox);
					   CheckigKilledShip(Class1::MyPlace, FirstPictureBox);


					   CountPartShipFirstPlace++;
					   FirstShot_X = Shot_X;
					   FirstShot_Y = Shot_Y;


					   CheckNextShot();



				   }
				   else if (Class1::MyPlace[Shot_X, Shot_Y] == 0) {
					   Class1::MyPlace[Shot_X, Shot_Y] = -1;
					   PrintAway(Shot_X, Shot_Y, FirstPictureBox);
				   }
			   }
		   }


		   void CheckNextShot() {
			   if (Flag_Top == 0) {
				   LastShot_Y = LastShot_Y - 1;
				   if ((LastShot_Y > -1) && ((Class1::MyPlace[LastShot_X, LastShot_Y] != 2) || (Class1::MyPlace[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace[LastShot_X, LastShot_Y] == 1) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = 2;
						   PrintWounded(LastShot_X, LastShot_Y, FirstPictureBox);

						   CheckigKilledShip(Class1::MyPlace, FirstPictureBox);


						   CheckNextShot();
					   }
					   else if (Class1::MyPlace[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = -1;
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
				   if ((LastShot_Y < 10) && ((Class1::MyPlace[LastShot_X, LastShot_Y] != 2) || (Class1::MyPlace[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace[LastShot_X, LastShot_Y] == 1) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = 2;
						   PrintWounded(LastShot_X, LastShot_Y, FirstPictureBox);


						   CheckigKilledShip(Class1::MyPlace, FirstPictureBox);

						   CheckNextShot();
					   }
					   else if (Class1::MyPlace[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = -1;
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
				   if ((LastShot_X > -1) && ((Class1::MyPlace[LastShot_X, LastShot_Y] != 2) || (Class1::MyPlace[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace[LastShot_X, LastShot_Y] == 1) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = 2;
						   PrintWounded(LastShot_X, LastShot_Y, FirstPictureBox);


						   CheckigKilledShip(Class1::MyPlace, FirstPictureBox);

						   CheckNextShot();
					   }
					   else if (Class1::MyPlace[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = -1;
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
				   if ((LastShot_X < 10) && ((Class1::MyPlace[LastShot_X, LastShot_Y] != 2) || (Class1::MyPlace[LastShot_X, LastShot_Y] != -1))) {
					   if (Class1::MyPlace[LastShot_X, LastShot_Y] == 1) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = 2;
						   PrintWounded(LastShot_X, LastShot_Y, FirstPictureBox);


						   CheckigKilledShip(Class1::MyPlace, FirstPictureBox);
						   CheckNextShot();
					   }
					   else if (Class1::MyPlace[LastShot_X, LastShot_Y] == 0) {
						   Class1::MyPlace[LastShot_X, LastShot_Y] = -1;
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


		   void ChooseLvlDifficulties() {
			   if (Class1::ChooseLvl == 1) {
				   RandomShotBot_LightLvl();
			   }
			   else if (Class1::ChooseLvl == 2) {
				   RandomShotBot_MiddleLvl();
			   }
			   else if (Class1::ChooseLvl == 3) {

			   }
		   }

		   void PrintMyShot(int X, int Y) {
			   if (Class1::BotPlace[X, Y] == -1) {
				   PrintAway(X, Y, LastPictureBox);
			   }
			   else if (Class1::BotPlace[X, Y] == 2) {
				   PrintWounded(X, Y, LastPictureBox);
				   CheckigKilledShip(Class1::BotPlace, LastPictureBox);

			   }
		   }

		   void Shot(int X, int Y) {
			   if (Class1::BotPlace[X, Y] == 1) {
				   Class1::BotPlace[X, Y] = 2;
				   PrintMyShot(X, Y);
				   CheckigKilledShip(Class1::BotPlace, LastPictureBox);

				   CountPartShipLastPlace++;
				   //ранил

			   }
			   else if (Class1::BotPlace[X, Y] == 0) {
				   Class1::BotPlace[X, Y] = -1;
				   PrintMyShot(X, Y);

				   /*  RandomShotBot_LightLvl();*/
				   ChooseLvlDifficulties();
				   //мимо
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
		if ((CountPartShipFirstPlace == 20) || (CountPartShipLastPlace == 20)) {
			return;
		}
		int LastPlace_X = e->Location.X / 33;
		int LastPlace_Y = e->Location.Y / 33;
		Shot(LastPlace_X, LastPlace_Y);

	}
	};
}
