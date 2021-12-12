#pragma once
#include"PlaceSelectionForm.h"
#include "SelectDifficultlyLevelPlayWithBot.h"

namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary1;

	/// <summary>
	/// Сводка для OpponentSelectionForm
	/// </summary>
	public ref class OpponentSelectionForm : public System::Windows::Forms::Form
	{
	public:
		OpponentSelectionForm(void)
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
		~OpponentSelectionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ RobotPlayButton;
	private: System::Windows::Forms::Button^ FriendPlayButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OpponentSelectionForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->RobotPlayButton = (gcnew System::Windows::Forms::Button());
			this->FriendPlayButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-17, -21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(462, 292);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// RobotPlayButton
			// 
			this->RobotPlayButton->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RobotPlayButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RobotPlayButton.Image")));
			this->RobotPlayButton->Location = System::Drawing::Point(63, 133);
			this->RobotPlayButton->Name = L"RobotPlayButton";
			this->RobotPlayButton->Size = System::Drawing::Size(315, 50);
			this->RobotPlayButton->TabIndex = 1;
			this->RobotPlayButton->Text = L"Играть с ботом";
			this->RobotPlayButton->UseVisualStyleBackColor = true;
			this->RobotPlayButton->Click += gcnew System::EventHandler(this, &OpponentSelectionForm::RobotPlayButton_Click);
			// 
			// FriendPlayButton
			// 
			this->FriendPlayButton->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriendPlayButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FriendPlayButton.Image")));
			this->FriendPlayButton->Location = System::Drawing::Point(63, 189);
			this->FriendPlayButton->Name = L"FriendPlayButton";
			this->FriendPlayButton->Size = System::Drawing::Size(315, 51);
			this->FriendPlayButton->TabIndex = 2;
			this->FriendPlayButton->Text = L"Играть с другом";
			this->FriendPlayButton->UseVisualStyleBackColor = true;
			this->FriendPlayButton->Click += gcnew System::EventHandler(this, &OpponentSelectionForm::FriendPlayButton_Click);
			// 
			// OpponentSelectionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 250);
			this->Controls->Add(this->FriendPlayButton);
			this->Controls->Add(this->RobotPlayButton);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OpponentSelectionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Sea_Battle";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &OpponentSelectionForm::OpponentSelectionForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int CheckClosing = 1;

	private: System::Void RobotPlayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::ChoosingOpponent = 2;
		this->Hide();
		SelectDifficultlyLevelPlayWithBot^ Temp = gcnew SelectDifficultlyLevelPlayWithBot();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();

	}
	private: System::Void FriendPlayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::ChoosingOpponent = 1;
		this->Hide();
		PlaceSelectionForm^ Temp = gcnew PlaceSelectionForm();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();
	}
	private: System::Void OpponentSelectionForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
	};
}