
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define  VERTICAL 1
#define  HORIZONTAL 0
#define SHIP 1
#include "stdio.h"
#include "stdlib.h"
#include "PlayInPlace10_Form.h"
#include "PlayInPlace10WithBot_Form.h"
#include "ctime"
#include <string>




namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary1;
	/// <summary>
	/// Сводка для CreatePlace10_Form
	/// </summary>
	public ref class CreatePlace10_Form : public System::Windows::Forms::Form
	{
	public:
		CreatePlace10_Form(void)
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
		~CreatePlace10_Form()
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

	private: System::Windows::Forms::Button^ Ship4_Button;
	private: System::Windows::Forms::Button^ Ship3_Button;
	private: System::Windows::Forms::Button^ Ship2_Button;
	private: System::Windows::Forms::Button^ Ship1_Button;
	private: System::Windows::Forms::Button^ TurnShipButton;
	private: System::Windows::Forms::Button^ ClearPlaceButton;
	private: System::Windows::Forms::Button^ RandomButton;
	private: System::Windows::Forms::Button^ DownaldShipButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreatePlace10_Form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Ship4_Button = (gcnew System::Windows::Forms::Button());
			this->Ship3_Button = (gcnew System::Windows::Forms::Button());
			this->Ship2_Button = (gcnew System::Windows::Forms::Button());
			this->Ship1_Button = (gcnew System::Windows::Forms::Button());
			this->TurnShipButton = (gcnew System::Windows::Forms::Button());
			this->ClearPlaceButton = (gcnew System::Windows::Forms::Button());
			this->RandomButton = (gcnew System::Windows::Forms::Button());
			this->DownaldShipButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(407, 411);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::button1_Click);
			this->button1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::button1_KeyPress);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-49, -20);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(756, 528);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(40, 92);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(330, 330);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(40, 68);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(330, 22);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(9, 92);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 330);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// Ship4_Button
			// 
			this->Ship4_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship4_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship4_Button.Image")));
			this->Ship4_Button->Location = System::Drawing::Point(407, 68);
			this->Ship4_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ship4_Button->Name = L"Ship4_Button";
			this->Ship4_Button->Size = System::Drawing::Size(250, 40);
			this->Ship4_Button->TabIndex = 6;
			this->Ship4_Button->Text = L"Четырёхпалубный: 1";
			this->Ship4_Button->UseVisualStyleBackColor = true;
			this->Ship4_Button->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::Ship4_Button_Click);
			this->Ship4_Button->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::Ship4_Button_KeyPress);
			// 
			// Ship3_Button
			// 
			this->Ship3_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship3_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship3_Button.Image")));
			this->Ship3_Button->Location = System::Drawing::Point(407, 112);
			this->Ship3_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ship3_Button->Name = L"Ship3_Button";
			this->Ship3_Button->Size = System::Drawing::Size(250, 40);
			this->Ship3_Button->TabIndex = 7;
			this->Ship3_Button->Text = L"Трёхпалубный: 2";
			this->Ship3_Button->UseVisualStyleBackColor = true;
			this->Ship3_Button->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::Ship3_Button_Click);
			this->Ship3_Button->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::Ship3_Button_KeyPress);
			// 
			// Ship2_Button
			// 
			this->Ship2_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship2_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship2_Button.Image")));
			this->Ship2_Button->Location = System::Drawing::Point(407, 156);
			this->Ship2_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ship2_Button->Name = L"Ship2_Button";
			this->Ship2_Button->Size = System::Drawing::Size(250, 40);
			this->Ship2_Button->TabIndex = 8;
			this->Ship2_Button->Text = L"Двухпалубный: 3";
			this->Ship2_Button->UseVisualStyleBackColor = true;
			this->Ship2_Button->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::Ship2_Button_Click);
			this->Ship2_Button->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::Ship2_Button_KeyPress);
			// 
			// Ship1_Button
			// 
			this->Ship1_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ship1_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ship1_Button.Image")));
			this->Ship1_Button->Location = System::Drawing::Point(407, 200);
			this->Ship1_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ship1_Button->Name = L"Ship1_Button";
			this->Ship1_Button->Size = System::Drawing::Size(250, 40);
			this->Ship1_Button->TabIndex = 9;
			this->Ship1_Button->Text = L"Однопалубный: 4";
			this->Ship1_Button->UseVisualStyleBackColor = true;
			this->Ship1_Button->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::Ship1_Button_Click);
			this->Ship1_Button->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::Ship1_Button_KeyPress);
			// 
			// TurnShipButton
			// 
			this->TurnShipButton->Enabled = false;
			this->TurnShipButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TurnShipButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TurnShipButton.Image")));
			this->TurnShipButton->Location = System::Drawing::Point(407, 286);
			this->TurnShipButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TurnShipButton->Name = L"TurnShipButton";
			this->TurnShipButton->Size = System::Drawing::Size(250, 38);
			this->TurnShipButton->TabIndex = 10;
			this->TurnShipButton->Text = L"Повернуть корабль";
			this->TurnShipButton->UseVisualStyleBackColor = true;
			this->TurnShipButton->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::TurnShipButton_Click);
			this->TurnShipButton->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::TurnShipButton_KeyPress);
			// 
			// ClearPlaceButton
			// 
			this->ClearPlaceButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearPlaceButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClearPlaceButton.Image")));
			this->ClearPlaceButton->Location = System::Drawing::Point(407, 369);
			this->ClearPlaceButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ClearPlaceButton->Name = L"ClearPlaceButton";
			this->ClearPlaceButton->Size = System::Drawing::Size(250, 38);
			this->ClearPlaceButton->TabIndex = 11;
			this->ClearPlaceButton->Text = L"Очистить поле";
			this->ClearPlaceButton->UseVisualStyleBackColor = true;
			this->ClearPlaceButton->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::ClearPlaceButton_Click);
			this->ClearPlaceButton->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::ClearPlaceButton_KeyPress);
			// 
			// RandomButton
			// 
			this->RandomButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RandomButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RandomButton.Image")));
			this->RandomButton->Location = System::Drawing::Point(407, 331);
			this->RandomButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RandomButton->Name = L"RandomButton";
			this->RandomButton->Size = System::Drawing::Size(250, 34);
			this->RandomButton->TabIndex = 12;
			this->RandomButton->Text = L"Расставить рандомно";
			this->RandomButton->UseVisualStyleBackColor = true;
			this->RandomButton->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::RandomButton_Click);
			this->RandomButton->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::RandomButton_KeyPress);
			// 
			// DownaldShipButton
			// 
			this->DownaldShipButton->Enabled = false;
			this->DownaldShipButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DownaldShipButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DownaldShipButton.Image")));
			this->DownaldShipButton->Location = System::Drawing::Point(407, 244);
			this->DownaldShipButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DownaldShipButton->Name = L"DownaldShipButton";
			this->DownaldShipButton->Size = System::Drawing::Size(250, 38);
			this->DownaldShipButton->TabIndex = 13;
			this->DownaldShipButton->Text = L"Установить корабль";
			this->DownaldShipButton->UseVisualStyleBackColor = true;
			this->DownaldShipButton->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::DownaldShipButton_Click);
			this->DownaldShipButton->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreatePlace10_Form::DownaldShipButton_KeyPress);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(689, 28);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(90, 24);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreatePlace10_Form::помощьToolStripMenuItem_Click);
			// 
			// CreatePlace10_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(689, 463);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->DownaldShipButton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->RandomButton);
			this->Controls->Add(this->ClearPlaceButton);
			this->Controls->Add(this->TurnShipButton);
			this->Controls->Add(this->Ship1_Button);
			this->Controls->Add(this->Ship2_Button);
			this->Controls->Add(this->Ship3_Button);
			this->Controls->Add(this->Ship4_Button);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CreatePlace10_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"1 Игрок";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreatePlace10_Form::CreatePlace10_Form_FormClosing);
			this->Load += gcnew System::EventHandler(this, &CreatePlace10_Form::CreatePlace10_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		const int PixelSize = 33;
		const int Smeschenie = 33;


		int CheckClosing = 1;
		int count_1 = 4;
		int count_2 = 3;
		int count_3 = 2;
		int count_4 = 1;
		int ChooseShip = 0;
		int turn = VERTICAL;
		int CountClick = 1;
		int Y = 0, X = 0;

		System::Windows::Forms::PictureBox^ picturebox;


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Class1::ChoosingOpponent == 1) {
			if (CountClick == 1) {
				if (count_1 + count_2 + count_3 + count_4 == 0) {
					CountClick++;
					Class1::FirstPlace = gcnew array<int, 2>(10, 10);
					for (int i = 0; i < 10; i++) {
						for (int j = 0; j < 10; j++) {
							Class1::FirstPlace[i, j] = Class1::MyPlace[i, j];
						}
					}
					pictureBox2->BringToFront();
					count_1 = 4;
					count_2 = 3;
					count_3 = 2;
					count_4 = 1;
					Ship1_Button->Text = "Однопалубный: " + count_1;
					Ship2_Button->Text = "Двухпалубный: " + count_2;
					Ship3_Button->Text = "Трёхпалубный: " + count_3;
					Ship4_Button->Text = "Четырёхпалубный: " + count_4;

					Ship1_Button->Enabled = true;
					Ship2_Button->Enabled = true;
					Ship3_Button->Enabled = true;
					Ship4_Button->Enabled = true;

					for (int i = 0; i < 10; i++) {
						for (int j = 0; j < 10; j++) {
							Class1::MyPlace[i, j] = 0;
						}
					}


					CreatePlace10_Form::Text = "2 Игрок";
				}
				else {
					System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
						"Ошибка! Расставлены не все корабли.",
						"Уведомление об ошибке",
						System::Windows::Forms::MessageBoxButtons::OK,
						System::Windows::Forms::MessageBoxIcon::Error);
				}

			}
			else if (CountClick == 2) {
				if (count_1 + count_2 + count_3 + count_4 == 0) {
					Class1::LastPlace = gcnew array<int, 2>(10, 10);
					for (int i = 0; i < 10; i++) {
						for (int j = 0; j < 10; j++) {
							Class1::LastPlace[i, j] = Class1::MyPlace[i, j];
						}
					}
					this->Hide();
					PlayInPlace10_Form^ Temp = gcnew PlayInPlace10_Form();
					Temp->Top = this->Top;
					Temp->Left = this->Left;
					Temp->ShowDialog();
					CheckClosing = 0;
					this->Close();
				}
				else {
					System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
						"Ошибка! Расставлены не все корабли.",
						"Уведомление об ошибке",
						System::Windows::Forms::MessageBoxButtons::OK,
						System::Windows::Forms::MessageBoxIcon::Error);
				}
			}
		}
		else if (Class1::ChoosingOpponent == 2) {
			if (count_1 + count_2 + count_3 + count_4 == 0) {
				this->Hide();
				PlayInPlace10WithBot_Form^ Temp = gcnew PlayInPlace10WithBot_Form();
				Temp->Top = this->Top;
				Temp->Left = this->Left;
				Temp->ShowDialog();
				CheckClosing = 0;
				this->Close();
			}
			else {
				System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					"Ошибка! Расставлены не все корабли.",
					"Уведомление об ошибке",
					System::Windows::Forms::MessageBoxButtons::OK,
					System::Windows::Forms::MessageBoxIcon::Error);
			}

		}

	}

	private: System::Void CreatePlace10_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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

		   void Ship4(int location)
		   {
			   if (location == HORIZONTAL) {
				   Class1::MyPlace[X, Y] = SHIP;
				   Class1::MyPlace[X + 1, Y] = SHIP;
				   Class1::MyPlace[X + 2, Y] = SHIP;
				   Class1::MyPlace[X + 3, Y] = SHIP;
			   }
			   else if (location == VERTICAL) {
				   Class1::MyPlace[X, Y] = SHIP;
				   Class1::MyPlace[X, Y + 1] = SHIP;
				   Class1::MyPlace[X, Y + 2] = SHIP;
				   Class1::MyPlace[X, Y + 3] = SHIP;
			   }
		   }
		   void Ship3(int location)
		   {
			   if (location == HORIZONTAL) {
				   Class1::MyPlace[X, Y] = SHIP;
				   Class1::MyPlace[X + 1, Y] = SHIP;
				   Class1::MyPlace[X + 2, Y] = SHIP;
			   }
			   else if (location == VERTICAL) {
				   Class1::MyPlace[X, Y] = SHIP;
				   Class1::MyPlace[X, Y + 1] = SHIP;
				   Class1::MyPlace[X, Y + 2] = SHIP;
			   }
		   }

		   void Ship2(int location)
		   {
			   if (location == HORIZONTAL) {
				   Class1::MyPlace[X, Y] = SHIP;
				   Class1::MyPlace[X + 1, Y] = SHIP;
			   }
			   else if (location == VERTICAL) {
				   Class1::MyPlace[X, Y] = SHIP;
				   Class1::MyPlace[X, Y + 1] = SHIP;
			   }
		   }

		   void Ship1()
		   {
			   Class1::MyPlace[X, Y] = SHIP;
		   }

		   void CreateShip() {
			   if (ChooseShip == 1) {
				   Ship1();
			   }
			   else if (ChooseShip == 2) {
				   Ship2(turn);
			   }
			   else if (ChooseShip == 3) {
				   Ship3(turn);
			   }
			   else if (ChooseShip == 4) {
				   Ship4(turn);
			   }
		   }




	private: System::Void Ship4_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_4 > 0) {
			Ship4_Button->Text = "Четырёхпалубный: " + --count_4;
			ChooseShip = 4;
			picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = PixelSize * 4;
			picturebox->Width = PixelSize;
			picturebox->Top = pictureBox2->Top;
			picturebox->Left = pictureBox2->Left;
			picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\4a.png"));
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
			turn = VERTICAL;
			DownaldShipButton->Enabled = true;
			TurnShipButton->Enabled = true;
			Ship1_Button->Enabled = false;
			Ship2_Button->Enabled = false;
			Ship3_Button->Enabled = false;
			Ship4_Button->Enabled = false;

		}
	}
	private: System::Void Ship3_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_3 > 0) {
			Ship3_Button->Text = "Трёхпалубный: " + --count_3;
			ChooseShip = 3;
			picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = PixelSize * 3;
			picturebox->Width = PixelSize;
			picturebox->Top = pictureBox2->Top;
			picturebox->Left = pictureBox2->Left;
			picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\3a.png"));
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
			turn = VERTICAL;
			DownaldShipButton->Enabled = true;
			TurnShipButton->Enabled = true;
			Ship1_Button->Enabled = false;
			Ship2_Button->Enabled = false;
			Ship3_Button->Enabled = false;
			Ship4_Button->Enabled = false;
		}
	}
	private: System::Void Ship2_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_2 > 0) {
			Ship2_Button->Text = "Двухпалубный: " + --count_2;
			ChooseShip = 2;
			picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = PixelSize * 2;
			picturebox->Width = PixelSize;
			picturebox->Top = pictureBox2->Top;
			picturebox->Left = pictureBox2->Left;
			picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\2a.png"));
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
			turn = VERTICAL;
			DownaldShipButton->Enabled = true;
			TurnShipButton->Enabled = true;
			Ship1_Button->Enabled = false;
			Ship2_Button->Enabled = false;
			Ship3_Button->Enabled = false;
			Ship4_Button->Enabled = false;
		}
	}
	private: System::Void Ship1_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count_1 > 0) {
			Ship1_Button->Text = "Однопалубный: " + --count_1;
			ChooseShip = 1;
			picturebox = gcnew System::Windows::Forms::PictureBox();
			picturebox->Height = PixelSize;
			picturebox->Width = PixelSize;
			picturebox->Top = pictureBox2->Top;
			picturebox->Left = pictureBox2->Left;
			picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\1a.png"));
			picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			Controls->Add(picturebox);
			picturebox->BringToFront();
			turn = VERTICAL;
			DownaldShipButton->Enabled = true;
			TurnShipButton->Enabled = true;
			Ship1_Button->Enabled = false;
			Ship2_Button->Enabled = false;
			Ship3_Button->Enabled = false;
			Ship4_Button->Enabled = false;
		}

	}
		   int ChekShip1Horizontal() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 1; i++) {
				   for (int j = Y - 1; j <= Y + 1; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip2Horizontal() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 2; i++) {
				   for (int j = Y - 1; j <= Y + 1; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip3Horizontal() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 3; i++) {
				   for (int j = Y - 1; j <= Y + 1; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip4Horizontal() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 4; i++) {
				   for (int j = Y - 1; j <= Y + 1; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip1Vertical() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 1; i++) {
				   for (int j = Y - 1; j <= Y + 1; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip2Vertical() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 1; i++) {
				   for (int j = Y - 1; j <= Y + 2; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip3Vertical() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 1; i++) {
				   for (int j = Y - 1; j <= Y + 3; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int ChekShip4Vertical() {
			   int Count = 0;
			   for (int i = X - 1; i <= X + 1; i++) {
				   for (int j = Y - 1; j <= Y + 4; j++) {
					   if ((i < 10) && (i >= 0) && (j < 10) && (j >= 0))
						   if (Class1::MyPlace[i, j] == 1) {
							   Count++;
						   }
				   }
			   }
			   return Count;
		   }

		   int CheckVerticalShipPlace() {
			   int Count;
			   if (ChooseShip == 1) {
				   Count = ChekShip1Vertical();
			   }
			   else if (ChooseShip == 2) {
				   Count = ChekShip2Vertical();
			   }
			   else if (ChooseShip == 3) {
				   Count = ChekShip3Vertical();
			   }
			   else if (ChooseShip == 4) {
				   Count = ChekShip4Vertical();
			   }
			   return Count;
		   }

		   int CheckHorizontalShipPlace() {
			   int Count;
			   if (ChooseShip == 1) {
				   Count = ChekShip1Horizontal();
			   }
			   else if (ChooseShip == 2) {
				   Count = ChekShip2Horizontal();
			   }
			   else if (ChooseShip == 3) {
				   Count = ChekShip3Horizontal();
			   }
			   else if (ChooseShip == 4) {
				   Count = ChekShip4Horizontal();
			   }
			   return Count;
		   }

		   int CheckShipPlace() {
			   int Count;
			   if (turn == VERTICAL) {
				   Count = CheckVerticalShipPlace();
			   }
			   else if (turn == HORIZONTAL) {
				   Count = CheckHorizontalShipPlace();
			   }
			   if (Count > 0)
				   return 1;
			   else
				   return 0;
		   }

		   void PaintingShip() {
			   picturebox = gcnew System::Windows::Forms::PictureBox();
			   picturebox->Top = pictureBox2->Top + Y * PixelSize;
			   picturebox->Left = pictureBox2->Left + X * PixelSize;
			   picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   Controls->Add(picturebox);
			   picturebox->BringToFront();
			   if (turn == VERTICAL) {
				   picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\" + ChooseShip + "a.png"));
				   picturebox->Height = PixelSize * ChooseShip;
				   picturebox->Width = PixelSize;
			   }
			   else if (turn == HORIZONTAL) {
				   picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\" + ChooseShip + "b.png"));
				   picturebox->Height = PixelSize;
				   picturebox->Width = PixelSize * ChooseShip;

			   }
		   }

		   void RandomShipPlace() {
			   srand(time(0));
			   int temp = 1;
			   int size;
			   int SizeShip[10] = { 4, 3, 3, 2, 2, 2, 1, 1, 1, 1 };
			   for (int i = 0; i < 10; i++)
				   for (int j = 0; j < 10; j++) {
					   Class1::MyPlace[i, j] = 0;
				   }
			   pictureBox2->BringToFront();
			   for (int i = 0; i < 10; i++) {
				   ChooseShip = SizeShip[i];
				   Y = rand() % 10;
				   X = rand() % 10;
				   turn = rand() % 2;
				   temp = 1;
				   while (temp != 0) {
					   temp = CheckShipPlace();
					   if ((temp == 0) && (((turn == VERTICAL) && (10 - Y >= ChooseShip)) || ((turn == HORIZONTAL) && (10 - X >= ChooseShip)))) {
						   CreateShip();
						   if (CountClick != -1) {
							   PaintingShip();
						   }
					   }
					   else {
						   temp = 1;
						   Y = rand() % 10;
						   X = rand() % 10;
						   turn = rand() % 2;
					   }
				   }
			   }
			   Y = 0;
			   X = 0;

		   }

	private: System::Void RandomButton_Click(System::Object^ sender, System::EventArgs^ e) {
		count_1 = 0;
		count_2 = 0;
		count_3 = 0;
		count_4 = 0;
		Ship1_Button->Text = "Однопалубный: " + count_1;
		Ship2_Button->Text = "Двухпалубный: " + count_2;
		Ship3_Button->Text = "Трёхпалубный: " + count_3;
		Ship4_Button->Text = "Четырёхпалубный: " + count_4;
		RandomShipPlace();

	}
		   void ClearPlace() {
			   for (int i = 0; i < 10; i++)
				   for (int j = 0; j < 10; j++) {
					   Class1::MyPlace[i, j] = 0;
				   }
		   }

	private: System::Void ClearPlaceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		count_1 = 4;
		count_2 = 3;
		count_3 = 2;
		count_4 = 1;
		Ship1_Button->Text = "Однопалубный: " + count_1;
		Ship2_Button->Text = "Двухпалубный: " + count_2;
		Ship3_Button->Text = "Трёхпалубный: " + count_3;
		Ship4_Button->Text = "Четырёхпалубный: " + count_4;


		Ship1_Button->Enabled = true;
		Ship2_Button->Enabled = true;
		Ship3_Button->Enabled = true;
		Ship4_Button->Enabled = true;
		ClearPlace();

		pictureBox2->BringToFront();

	}

	private: System::Void TurnShipButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int temp = 0;
		if (turn == VERTICAL) {
			temp = picturebox->Height;
			picturebox->Height = picturebox->Width;
			picturebox->Width = temp;
			picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\" + ChooseShip + "b.png"));
			turn = HORIZONTAL;
		}
		else if (turn == HORIZONTAL) {
			temp = picturebox->Height;
			picturebox->Height = picturebox->Width;
			picturebox->Width = temp;
			picturebox->Image = System::Drawing::Image::FromFile(System::IO::Path::GetFullPath("Pictures\\" + ChooseShip + "a.png"));
			turn = VERTICAL;
		}
		FixCoordinate();
	}
		   void ChangePlaceShip(int Direction) {
			   if ((Direction == 115) && (pictureBox2->Top + pictureBox2->Height) > picturebox->Top + picturebox->Height) {
				   picturebox->Top = picturebox->Top + Smeschenie;
				   Y = Y + 1;
			   }
			   else if ((Direction == 119) && (pictureBox2->Top < picturebox->Top)) {
				   picturebox->Top = picturebox->Top - Smeschenie;
				   Y = Y - 1;
			   }
			   else if ((Direction == 100) && (pictureBox2->Left + pictureBox2->Width) > picturebox->Left + picturebox->Width) {
				   picturebox->Left = picturebox->Left + Smeschenie;
				   X = X + 1;
			   }
			   else if ((Direction == 97) && (pictureBox2->Left < picturebox->Left)) {
				   picturebox->Left = picturebox->Left - Smeschenie;
				   X = X - 1;
			   }

		   }

		   void FixCoordinate() {
			   int size = 0;
			   if ((pictureBox2->Top + pictureBox2->Height) < picturebox->Top + picturebox->Height) {
				   picturebox->Top = pictureBox2->Top + pictureBox2->Height - picturebox->Height;
				   Y = 10 - ChooseShip;
			   }
			   else if ((pictureBox2->Top > picturebox->Top)) {
				   picturebox->Top = pictureBox2->Top;

			   }
			   else if ((pictureBox2->Left + pictureBox2->Width) < picturebox->Left + picturebox->Width) {
				   picturebox->Left = pictureBox2->Left + pictureBox2->Width - picturebox->Width;
				   X = 10 - ChooseShip;
			   }
			   else if ((pictureBox2->Left > picturebox->Left)) {
				   picturebox->Left = pictureBox2->Left;
			   }
		   }

	private: System::Void Ship4_Button_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void Ship3_Button_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void Ship2_Button_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void Ship1_Button_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}


	private: System::Void DownaldShipButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckShipPlace() == 1) {
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Ошибка! Корабль не может стоять на корбале.",
				"Уведомление об ошибке",
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error);
		}
		else {
			CreateShip();
			Y = 0;
			X = 0;
			Ship1_Button->Enabled = true;
			Ship2_Button->Enabled = true;
			Ship3_Button->Enabled = true;
			Ship4_Button->Enabled = true;
			DownaldShipButton->Enabled = false;
			TurnShipButton->Enabled = false;
		}


	}
	private: System::Void CreatePlace10_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		Class1::BotPlace = gcnew array<int, 2>(10, 10);
		Class1::MyPlace = gcnew array<int, 2>(10, 10);
		CountClick = -1;
		RandomShipPlace();
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++) {
				Class1::BotPlace[i, j] = Class1::MyPlace[i, j];
			}
		CountClick = 1;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++) {
				Class1::MyPlace[i, j] = 0;
			}

	}
	private: System::Void DownaldShipButton_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void TurnShipButton_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void RandomButton_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void ClearPlaceButton_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);
	}
	private: System::Void button1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		ChangePlaceShip(e->KeyChar);

	}
	private: System::Void помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
