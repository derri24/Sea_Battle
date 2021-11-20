#pragma once
#define  VERTICAL 1
#define  HORIZONTAL 0
#define SHIP 1
#include"PlayInPlace15_Form.h"

namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreatePlace15_Form
	/// </summary>
	public ref class CreatePlace15_Form : public System::Windows::Forms::Form
	{
	public:
		CreatePlace15_Form(void)
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
		~CreatePlace15_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ RandomButton;
	private: System::Windows::Forms::Button^ ClearPlaceButton;
	private: System::Windows::Forms::Button^ TurnShipButton;
	private: System::Windows::Forms::Button^ Ship1_Button;
	private: System::Windows::Forms::Button^ Ship2_Button;
	private: System::Windows::Forms::Button^ Ship3_Button;
	private: System::Windows::Forms::Button^ Ship4_Button;
	private: System::Windows::Forms::Button^ Ship5_Button;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreatePlace15_Form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->RandomButton = (gcnew System::Windows::Forms::Button());
			this->ClearPlaceButton = (gcnew System::Windows::Forms::Button());
			this->TurnShipButton = (gcnew System::Windows::Forms::Button());
			this->Ship1_Button = (gcnew System::Windows::Forms::Button());
			this->Ship2_Button = (gcnew System::Windows::Forms::Button());
			this->Ship3_Button = (gcnew System::Windows::Forms::Button());
			this->Ship4_Button = (gcnew System::Windows::Forms::Button());
			this->Ship5_Button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(504, 475);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-25, -49);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(914, 629);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(34, 32);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(466, 480);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(34, 13);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(466, 17);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(11, 32);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(20, 480);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// RandomButton
			// 
			this->RandomButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RandomButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RandomButton.Image")));
			this->RandomButton->Location = System::Drawing::Point(502, 377);
			this->RandomButton->Margin = System::Windows::Forms::Padding(2);
			this->RandomButton->Name = L"RandomButton";
			this->RandomButton->Size = System::Drawing::Size(229, 31);
			this->RandomButton->TabIndex = 20;
			this->RandomButton->Text = L"Расставить рандомно";
			this->RandomButton->UseVisualStyleBackColor = true;
			this->RandomButton->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::RandomButton_Click);
			// 
			// ClearPlaceButton
			// 
			this->ClearPlaceButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearPlaceButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClearPlaceButton.Image")));
			this->ClearPlaceButton->Location = System::Drawing::Point(502, 412);
			this->ClearPlaceButton->Margin = System::Windows::Forms::Padding(2);
			this->ClearPlaceButton->Name = L"ClearPlaceButton";
			this->ClearPlaceButton->Size = System::Drawing::Size(229, 31);
			this->ClearPlaceButton->TabIndex = 19;
			this->ClearPlaceButton->Text = L"Очистить поле";
			this->ClearPlaceButton->UseVisualStyleBackColor = true;
			this->ClearPlaceButton->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::ClearPlaceButton_Click);
			// 
			// TurnShipButton
			// 
			this->TurnShipButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TurnShipButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TurnShipButton.Image")));
			this->TurnShipButton->Location = System::Drawing::Point(502, 249);
			this->TurnShipButton->Margin = System::Windows::Forms::Padding(2);
			this->TurnShipButton->Name = L"TurnShipButton";
			this->TurnShipButton->Size = System::Drawing::Size(229, 31);
			this->TurnShipButton->TabIndex = 18;
			this->TurnShipButton->Text = L"Повернуть корабль";
			this->TurnShipButton->UseVisualStyleBackColor = true;
			this->TurnShipButton->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::TurnShipButton_Click);
			// 
			// Ship1_Button
			// 
			this->Ship1_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship1_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship1_Button.Image")));
			this->Ship1_Button->Location = System::Drawing::Point(503, 192);
			this->Ship1_Button->Margin = System::Windows::Forms::Padding(2);
			this->Ship1_Button->Name = L"Ship1_Button";
			this->Ship1_Button->Size = System::Drawing::Size(228, 36);
			this->Ship1_Button->TabIndex = 17;
			this->Ship1_Button->Text = L"Однопалубный: 5";
			this->Ship1_Button->UseVisualStyleBackColor = true;
			this->Ship1_Button->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::Ship1_Button_Click);
			// 
			// Ship2_Button
			// 
			this->Ship2_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship2_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship2_Button.Image")));
			this->Ship2_Button->Location = System::Drawing::Point(504, 152);
			this->Ship2_Button->Margin = System::Windows::Forms::Padding(2);
			this->Ship2_Button->Name = L"Ship2_Button";
			this->Ship2_Button->Size = System::Drawing::Size(227, 36);
			this->Ship2_Button->TabIndex = 16;
			this->Ship2_Button->Text = L"Двухпалубный: 4";
			this->Ship2_Button->UseVisualStyleBackColor = true;
			this->Ship2_Button->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::Ship2_Button_Click);
			// 
			// Ship3_Button
			// 
			this->Ship3_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship3_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship3_Button.Image")));
			this->Ship3_Button->Location = System::Drawing::Point(504, 112);
			this->Ship3_Button->Margin = System::Windows::Forms::Padding(2);
			this->Ship3_Button->Name = L"Ship3_Button";
			this->Ship3_Button->Size = System::Drawing::Size(227, 36);
			this->Ship3_Button->TabIndex = 15;
			this->Ship3_Button->Text = L"Трёхпалубный: 3";
			this->Ship3_Button->UseVisualStyleBackColor = true;
			this->Ship3_Button->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::Ship3_Button_Click);
			// 
			// Ship4_Button
			// 
			this->Ship4_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship4_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship4_Button.Image")));
			this->Ship4_Button->Location = System::Drawing::Point(504, 72);
			this->Ship4_Button->Margin = System::Windows::Forms::Padding(2);
			this->Ship4_Button->Name = L"Ship4_Button";
			this->Ship4_Button->Size = System::Drawing::Size(227, 36);
			this->Ship4_Button->TabIndex = 14;
			this->Ship4_Button->Text = L"Четырёхпалубный: 2";
			this->Ship4_Button->UseVisualStyleBackColor = true;
			this->Ship4_Button->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::Ship4_Button_Click);
			// 
			// Ship5_Button
			// 
			this->Ship5_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship5_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship5_Button.Image")));
			this->Ship5_Button->Location = System::Drawing::Point(503, 32);
			this->Ship5_Button->Margin = System::Windows::Forms::Padding(2);
			this->Ship5_Button->Name = L"Ship5_Button";
			this->Ship5_Button->Size = System::Drawing::Size(228, 36);
			this->Ship5_Button->TabIndex = 21;
			this->Ship5_Button->Text = L"Пятипалубный: 1";
			this->Ship5_Button->UseVisualStyleBackColor = true;
			this->Ship5_Button->Click += gcnew System::EventHandler(this, &CreatePlace15_Form::Ship5_Button_Click);
			// 
			// CreatePlace15_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 531);
			this->Controls->Add(this->Ship5_Button);
			this->Controls->Add(this->RandomButton);
			this->Controls->Add(this->ClearPlaceButton);
			this->Controls->Add(this->TurnShipButton);
			this->Controls->Add(this->Ship1_Button);
			this->Controls->Add(this->Ship2_Button);
			this->Controls->Add(this->Ship3_Button);
			this->Controls->Add(this->Ship4_Button);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CreatePlace15_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Sea_Battle";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreatePlace15_Form::CreatePlace15_Form_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int CheckClosing = 1;
		int** MyPlace;
		int count_1 = 5;
		int count_2 = 4;
		int count_3 = 3;
		int count_4 = 2;
		int count_5 = 1;
		int ChooseShip = 0;
		int turn = VERTICAL;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PlayInPlace15_Form^ Temp = gcnew PlayInPlace15_Form();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();
	}
	private: System::Void CreatePlace15_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (CheckClosing != 0) {
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Изменения не будут сохранены. Вы действительно желаете выйти?",
				"Уведомление",
				System::Windows::Forms::MessageBoxButtons::OKCancel,
				System::Windows::Forms::MessageBoxIcon::Warning);
			if (result != System::Windows::Forms::DialogResult::OK)
				e->Cancel = true;
		}
	}

		   void Ship5(int x, int y, int location)
		   {
			   if (location == VERTICAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x][y + 1] = SHIP;
				   MyPlace[x][y + 2] = SHIP;
				   MyPlace[x][y + 3] = SHIP;
				   MyPlace[x][y + 4] = SHIP;
			   }
			   else if (location == HORIZONTAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x + 1][y] = SHIP;
				   MyPlace[x + 2][y] = SHIP;
				   MyPlace[x + 3][y] = SHIP;
				   MyPlace[x + 4][y] = SHIP;
			   }
		   }
		   void Ship4(int x, int y, int location)
		   {
			   if (location == VERTICAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x][y + 1] = SHIP;
				   MyPlace[x][y + 2] = SHIP;
				   MyPlace[x][y + 3] = SHIP;
			   }
			   else if (location == HORIZONTAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x + 1][y] = SHIP;
				   MyPlace[x + 2][y] = SHIP;
				   MyPlace[x + 3][y] = SHIP;
			   }
		   }
		   void Ship3(int x, int y, int location)
		   {
			   if (location == VERTICAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x][y + 1] = SHIP;
				   MyPlace[x][y + 2] = SHIP;
			   }
			   else if (location == HORIZONTAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x + 1][y] = SHIP;
				   MyPlace[x + 2][y] = SHIP;
			   }
		   }
		   void Ship2(int x, int y, int location)
		   {
			   if (location == VERTICAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x][y + 1] = SHIP;
			   }
			   else if (location == HORIZONTAL) {
				   MyPlace[x][y] = SHIP;
				   MyPlace[x + 1][y] = SHIP;
			   }
		   }
		   void Ship1(int x, int y)
		   {
			   MyPlace[x][y] = SHIP;
		   }
		   void CreateShip(int x, int y) {
			   if (ChooseShip == 1) {
				   Ship1(x, y);
			   }
			   else if (ChooseShip == 2) {
				   Ship2(x, y, turn);
			   }
			   else if (ChooseShip == 2) {
				   Ship2(x, y, turn);
			   }
			   else if (ChooseShip == 3) {
				   Ship3(x, y, turn);
			   }
			   else if (ChooseShip == 4) {
				   Ship4(x, y, turn);
			   }
			   else if (ChooseShip == 5) {
				   Ship5(x, y, turn);
			   }
		   }

	private: System::Void Ship5_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_5 > 0) {
			Ship5_Button->Text = "Пятипалубный: " + --count_5;
			ChooseShip = 5;
			System::Windows::Forms::PictureBox^ picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = 157;
			picturebox->Width = 31;
			picturebox->Top = 35;
			picturebox->Left = 35;
			picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Корабли\\Корабли 15\\5.png");
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
		}
	}
	private: System::Void Ship4_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_4 > 0) {
			Ship4_Button->Text = "Четырёхпалубный: " + --count_4;
			ChooseShip = 4;
			System::Windows::Forms::PictureBox^ picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = 125;
			picturebox->Width = 31;
			picturebox->Top = 35;
			picturebox->Left = 35;
			picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Корабли\\Корабли 15\\4.png");
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
		}
	}
	private: System::Void Ship3_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_3 > 0) {
			Ship3_Button->Text = "Трёхпалубный: " + --count_3;
			ChooseShip = 3;
			System::Windows::Forms::PictureBox^ picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = 93;
			picturebox->Width = 31;
			picturebox->Top = 35;
			picturebox->Left = 35;
			picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Корабли\\Корабли 15\\3.png");
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
		}
	}
	private: System::Void Ship2_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_2 > 0) {
			Ship2_Button->Text = "Двухпалубный: " + --count_2;
			ChooseShip = 2;
			System::Windows::Forms::PictureBox^ picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = 62;
			picturebox->Width = 31;
			picturebox->Top = 35;
			picturebox->Left = 35;
			picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Корабли\\Корабли 15\\2.png");
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
		}
	}
	private: System::Void Ship1_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_1 > 0) {
			Ship1_Button->Text = "Однопалубный: " + --count_1;
			ChooseShip = 1;
			System::Windows::Forms::PictureBox^ picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = 31;
			picturebox->Width = 31;
			picturebox->Top = 35;
			picturebox->Left = 35;
			picturebox->Image = System::Drawing::Image::FromFile("C:\\Users\\Dasha\\Desktop\\Поля Курсач\\Корабли\\Корабли 15\\1.png");
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
		}
	}
	private: System::Void RandomButton_Click(System::Object^ sender, System::EventArgs^ e) {
		count_1 = 0;
		count_2 = 0;
		count_3 = 0;
		count_4 = 0;
		count_5 = 0;
		Ship1_Button->Text = "Однопалубный: " + count_1;
		Ship2_Button->Text = "Двухпалубный: " + count_2;
		Ship3_Button->Text = "Трёхпалубный: " + count_3;
		Ship4_Button->Text = "Четырёхпалубный: " + count_4;
		Ship5_Button->Text = "Пятипалубный: " + count_5;
	}
	private: System::Void ClearPlaceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		count_1 = 5;
		count_2 = 4;
		count_3 = 3;
		count_4 = 2;
		count_5 = 1;
		Ship1_Button->Text = "Однопалубный: " + count_1;
		Ship2_Button->Text = "Двухпалубный: " + count_2;
		Ship3_Button->Text = "Трёхпалубный: " + count_3;
		Ship4_Button->Text = "Четырёхпалубный: " + count_4;
		Ship5_Button->Text = "Пятипалубный: " + count_5;
	}

	private: System::Void TurnShipButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn == VERTICAL) {
			turn == HORIZONTAL;
		}
		else if (turn == HORIZONTAL) {
			turn == VERTICAL;
		}
	}
};
}
