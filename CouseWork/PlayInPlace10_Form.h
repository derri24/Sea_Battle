
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
	/// Сводка для PlayInPlace10_Form
	/// </summary>
	public ref class PlayInPlace10_Form : public System::Windows::Forms::Form
	{
	public:
		PlayInPlace10_Form(void)
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
		~PlayInPlace10_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ FirstPictureBox;
	private: System::Windows::Forms::PictureBox^ LastPictureBox;


	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ GiveUpButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ QueuePlayer;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayInPlace10_Form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->FirstPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->LastPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->GiveUpButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->QueuePlayer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-179, -47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1240, 663);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// FirstPictureBox
			// 
			this->FirstPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirstPictureBox.Image")));
			this->FirstPictureBox->Location = System::Drawing::Point(34, 108);
			this->FirstPictureBox->Name = L"FirstPictureBox";
			this->FirstPictureBox->Size = System::Drawing::Size(330, 330);
			this->FirstPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->FirstPictureBox->TabIndex = 3;
			this->FirstPictureBox->TabStop = false;
			this->FirstPictureBox->Click += gcnew System::EventHandler(this, &PlayInPlace10_Form::pictureBox2_Click);
			this->FirstPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PlayInPlace10_Form::FirstPictureBox_MouseClick);
			// 
			// LastPictureBox
			// 
			this->LastPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LastPictureBox.Image")));
			this->LastPictureBox->Location = System::Drawing::Point(473, 108);
			this->LastPictureBox->Name = L"LastPictureBox";
			this->LastPictureBox->Size = System::Drawing::Size(330, 330);
			this->LastPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->LastPictureBox->TabIndex = 4;
			this->LastPictureBox->TabStop = false;
			this->LastPictureBox->Click += gcnew System::EventHandler(this, &PlayInPlace10_Form::pictureBox3_Click);
			this->LastPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PlayInPlace10_Form::LastPictureBox_MouseClick);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(34, 84);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(331, 22);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(473, 84);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(330, 22);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(6, 110);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(23, 328);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(443, 108);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(24, 328);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			// 
			// GiveUpButton
			// 
			this->GiveUpButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GiveUpButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GiveUpButton.Image")));
			this->GiveUpButton->Location = System::Drawing::Point(14, 444);
			this->GiveUpButton->Name = L"GiveUpButton";
			this->GiveUpButton->Size = System::Drawing::Size(151, 48);
			this->GiveUpButton->TabIndex = 10;
			this->GiveUpButton->Text = L"Сдаться";
			this->GiveUpButton->UseVisualStyleBackColor = true;
			this->GiveUpButton->Click += gcnew System::EventHandler(this, &PlayInPlace10_Form::GiveUpButton_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(4, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L" Поле игрока 1 ";
			this->label1->UseMnemonic = false;
			this->label1->Click += gcnew System::EventHandler(this, &PlayInPlace10_Form::label1_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(439, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L" Поле игрока 2";
			this->label3->UseMnemonic = false;
			// 
			// QueuePlayer
			// 
			this->QueuePlayer->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueuePlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QueuePlayer.Image")));
			this->QueuePlayer->Location = System::Drawing::Point(4, 12);
			this->QueuePlayer->Name = L"QueuePlayer";
			this->QueuePlayer->Size = System::Drawing::Size(236, 28);
			this->QueuePlayer->TabIndex = 14;
			this->QueuePlayer->Text = L"Ход первого игрока";
			this->QueuePlayer->UseMnemonic = false;
			// 
			// PlayInPlace10_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(825, 505);
			this->Controls->Add(this->QueuePlayer);
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
			this->Name = L"PlayInPlace10_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Ходит 1-й игрок";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &PlayInPlace10_Form::PlayInPlace10_Form_FormClosing);
			this->Load += gcnew System::EventHandler(this, &PlayInPlace10_Form::PlayInPlace10_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		int NumberPlayer = 1;
		const int PixelSize = 33;
		int CountPartShipFirstPlace = 0;
		int  CountPartShipLastPlace = 0;
		System::Windows::Forms::PictureBox^ picturebox;

	private: System::Void PlayInPlace10_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void PlayInPlace10_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		  

	private: System::Void GiveUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NumberPlayer == 1) {
			CountPartShipFirstPlace = 20;
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Победил второй игрок!!!",
				"Уведомление о победе",
				System::Windows::Forms::MessageBoxButtons::OK);
		}
		else if (NumberPlayer == 2) {
			CountPartShipLastPlace = 20;
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Победил первый игрок!!!.",
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
			   picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Killed.png");
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
						   if (((i == 0) || ((TempPlace[i - 1, j] != 1) && (TempPlace[i - 1, j] != 2))) && ((i + 1 == 9) || ((TempPlace[i + 2, j] != 1) && (TempPlace[i + 2, j] != 2)))) {
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
							   ((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) &&
								   ((j == 9) || ((TempPlace[i, j + 1] != 1) && (TempPlace[i, j + 1] != 2)))) {
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
						   if (((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) && ((j + 1 == 9) || ((TempPlace[i, j + 2] != 1) && (TempPlace[i, j + 2] != 2)))) {
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
							   ((j == 0) || ((TempPlace[i, j - 1] != 1) && (TempPlace[i, j - 1] != 2))) &&
							   ((j == 9) || ((TempPlace[i, j + 1] != 1) && (TempPlace[i, j + 1] != 2)))) {
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

		   void PrintError(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		   {
			   if ((CountPartShipFirstPlace == 20) || (CountPartShipLastPlace == 20)) {
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
				   if (Class1::LastPlace[X, Y] == -1) {
					   PrintAway(X, Y, LastPictureBox);
					  
				   }
				   else if (Class1::LastPlace[X, Y] == 2) {
					   PrintWounded(X, Y, LastPictureBox);
					   CheckigKilledShip(Class1::LastPlace, LastPictureBox);
				   }
			   }
			   else if (NumberPlayer == 2) {
				   if (Class1::FirstPlace[X, Y] == -1) {
					   PrintAway(X, Y, FirstPictureBox);
				   }
				   else if (Class1::FirstPlace[X, Y] == 2) {
					   PrintWounded(X, Y, FirstPictureBox);
					   CheckigKilledShip(Class1::FirstPlace, FirstPictureBox);
				   }
			   }
		   }

		   int  CheckPartShipLastPlace(int X, int Y) {
			   if ((Class1::LastPlace[X, Y - 1] == 2) || (Class1::LastPlace[X, Y + 1] == 2) ||
				   (Class1::LastPlace[X - 1, Y] == 2) || (Class1::LastPlace[X + 1, Y] == 2)) {
				   return 0;///ранила
			   }
			   else
				   return 1;
		   }

		   int CheckPartShipFirstPlace(int X, int Y) {
			   if ((Class1::FirstPlace[X, Y - 1] == 2) || (Class1::FirstPlace[X, Y + 1] == 2) ||
				   (Class1::FirstPlace[X - 1, Y] == 2) || (Class1::FirstPlace[X + 1, Y] == 2)) {
				   return 0;
			   }
			   else
				   return 1;
		   }

		   void CheckShot(int X, int Y) {
			   if (Class1::FirstPlace[X, Y] == 1) {
				   if (NumberPlayer == 1) {
					   //считаем сколько рядом единиц, если потом двоек столько же то закрашиваем, иначе 
					   Class1::FirstPlace[X, Y] = 2;

				   }
				   else if (NumberPlayer == 2) {

				   }

			   }
		   }

		   void DetermineTheWinner() {
			   if (CountPartShipFirstPlace == 20) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Победил второй игрок!!!",
					   "Уведомление о победе ", System::Windows::Forms::MessageBoxButtons::OK);
			   }
			   else if (CountPartShipLastPlace == 20) {
				   System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					   "Победил первый игрок!!!",
					   "Уведомление о победе ",
					   System::Windows::Forms::MessageBoxButtons::OK);
			   }
		   }

		   void Shot(int X, int Y) {
			   if (NumberPlayer == 1) {
				   if (Class1::LastPlace[X, Y] == 1) {
					   Class1::LastPlace[X, Y] = 2;
					   PrintShot(X, Y);
					   CountPartShipLastPlace++;
					   //ранил

				   }
				   else if (Class1::LastPlace[X, Y] == 0) {
					   Class1::LastPlace[X, Y] = -1;
					   PrintShot(X, Y);
					   NumberPlayer = 2;
					   PlayInPlace10_Form::Text = "Ходит 2-й игрок";
					   QueuePlayer->Text = "Ход второго игрока";
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

			   }
			   else if (NumberPlayer == 2) {
				   if (Class1::FirstPlace[X, Y] == 1) {
					   Class1::FirstPlace[X, Y] = 2;
					   PrintShot(X, Y);
					   CountPartShipFirstPlace++;
					   //ранил


				   }
				   else if (Class1::FirstPlace[X, Y] == 0) {
					   Class1::FirstPlace[X, Y] = -1;
					   PrintShot(X, Y);
					   NumberPlayer = 1;
					   PlayInPlace10_Form::Text = "Ходит 1-й игрок";
					   QueuePlayer->Text = "Ход первого игрока";
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
			   }
			   DetermineTheWinner();
		   }



	private: System::Void FirstPictureBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if ((CountPartShipFirstPlace == 20) || (CountPartShipLastPlace == 20)) {
			return;
		}
		if (NumberPlayer == 2) {
			int FirstPlace_X = e->Location.X / 33;
			int FirstPlace_Y = e->Location.Y / 33;

			//	System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("X: " + FirstPlace_X + "Y: " + FirstPlace_Y);
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
		if ((CountPartShipFirstPlace == 20) || (CountPartShipLastPlace == 20)) {
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
