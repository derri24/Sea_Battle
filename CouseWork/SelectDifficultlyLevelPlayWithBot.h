#pragma once
#include "PlaceSelectionForm.h"

namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SelectDifficultlyLevelPlayWithBot
	/// </summary>
	public ref class SelectDifficultlyLevelPlayWithBot : public System::Windows::Forms::Form
	{
	public:
		SelectDifficultlyLevelPlayWithBot(void)
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
		~SelectDifficultlyLevelPlayWithBot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ EasyLvlButton;
	private: System::Windows::Forms::Button^ MiddleLvlButton;
	private: System::Windows::Forms::Button^ DifficultLvlButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectDifficultlyLevelPlayWithBot::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->EasyLvlButton = (gcnew System::Windows::Forms::Button());
			this->MiddleLvlButton = (gcnew System::Windows::Forms::Button());
			this->DifficultLvlButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-18, -9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(427, 280);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// EasyLvlButton
			// 
			this->EasyLvlButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EasyLvlButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EasyLvlButton.Image")));
			this->EasyLvlButton->Location = System::Drawing::Point(71, 112);
			this->EasyLvlButton->Name = L"EasyLvlButton";
			this->EasyLvlButton->Size = System::Drawing::Size(275, 39);
			this->EasyLvlButton->TabIndex = 1;
			this->EasyLvlButton->Text = L"Лёгкий уровень";
			this->EasyLvlButton->UseVisualStyleBackColor = true;
			this->EasyLvlButton->Click += gcnew System::EventHandler(this, &SelectDifficultlyLevelPlayWithBot::button1_Click);
			// 
			// MiddleLvlButton
			// 
			this->MiddleLvlButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MiddleLvlButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MiddleLvlButton.Image")));
			this->MiddleLvlButton->Location = System::Drawing::Point(71, 157);
			this->MiddleLvlButton->Name = L"MiddleLvlButton";
			this->MiddleLvlButton->Size = System::Drawing::Size(275, 39);
			this->MiddleLvlButton->TabIndex = 2;
			this->MiddleLvlButton->Text = L"Средний уровень";
			this->MiddleLvlButton->UseVisualStyleBackColor = true;
			this->MiddleLvlButton->Click += gcnew System::EventHandler(this, &SelectDifficultlyLevelPlayWithBot::button2_Click);
			// 
			// DifficultLvlButton
			// 
			this->DifficultLvlButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DifficultLvlButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DifficultLvlButton.Image")));
			this->DifficultLvlButton->Location = System::Drawing::Point(71, 202);
			this->DifficultLvlButton->Name = L"DifficultLvlButton";
			this->DifficultLvlButton->Size = System::Drawing::Size(275, 39);
			this->DifficultLvlButton->TabIndex = 3;
			this->DifficultLvlButton->Text = L"Сложный уровень";
			this->DifficultLvlButton->UseVisualStyleBackColor = true;
			this->DifficultLvlButton->Click += gcnew System::EventHandler(this, &SelectDifficultlyLevelPlayWithBot::button3_Click);
			// 
			// SelectDifficultlyLevelPlayWithBot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 258);
			this->Controls->Add(this->DifficultLvlButton);
			this->Controls->Add(this->MiddleLvlButton);
			this->Controls->Add(this->EasyLvlButton);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SelectDifficultlyLevelPlayWithBot";
			this->Text = L"Sea_Battle";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SelectDifficultlyLevelPlayWithBot::SelectDifficultlyLevelPlayWithBot_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SelectDifficultlyLevelPlayWithBot::SelectDifficultlyLevelPlayWithBot_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int CheckClosing = 1;
	private: System::Void SelectDifficultlyLevelPlayWithBot_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::ChooseLvl = 1;
		this->Hide();
		PlaceSelectionForm^ Temp = gcnew PlaceSelectionForm();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::ChooseLvl = 2;
		this->Hide();
		PlaceSelectionForm^ Temp = gcnew PlaceSelectionForm();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::ChooseLvl = 3;
		this->Hide();
		PlaceSelectionForm^ Temp = gcnew PlaceSelectionForm();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();
	}
	private: System::Void SelectDifficultlyLevelPlayWithBot_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
