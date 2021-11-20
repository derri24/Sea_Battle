#pragma once
#include "CreatePlace10_Form.h"
#include "CreatePlace15_Form.h"

namespace CouseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PlaceSelectionForm
	/// </summary>
	public ref class PlaceSelectionForm : public System::Windows::Forms::Form
	{
	public:
		PlaceSelectionForm(void)
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
		~PlaceSelectionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ Place10_Button;
	private: System::Windows::Forms::Button^ Place15_Button;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlaceSelectionForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Place10_Button = (gcnew System::Windows::Forms::Button());
			this->Place15_Button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-11, -28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 329);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Place10_Button
			// 
			this->Place10_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Place10_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place10_Button.Image")));
			this->Place10_Button->Location = System::Drawing::Point(73, 123);
			this->Place10_Button->Name = L"Place10_Button";
			this->Place10_Button->Size = System::Drawing::Size(317, 61);
			this->Place10_Button->TabIndex = 2;
			this->Place10_Button->Text = L"Поле 10*10";
			this->Place10_Button->UseVisualStyleBackColor = true;
			this->Place10_Button->Click += gcnew System::EventHandler(this, &PlaceSelectionForm::Place10_Button_Click);
			// 
			// Place15_Button
			// 
			this->Place15_Button->Font = (gcnew System::Drawing::Font(L"Georgia", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Place15_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place15_Button.Image")));
			this->Place15_Button->Location = System::Drawing::Point(73, 190);
			this->Place15_Button->Name = L"Place15_Button";
			this->Place15_Button->Size = System::Drawing::Size(317, 61);
			this->Place15_Button->TabIndex = 3;
			this->Place15_Button->Text = L"Поле 15*15";
			this->Place15_Button->UseVisualStyleBackColor = true;
			this->Place15_Button->Click += gcnew System::EventHandler(this, &PlaceSelectionForm::Place15_Button_Click);
			// 
			// PlaceSelectionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 261);
			this->Controls->Add(this->Place15_Button);
			this->Controls->Add(this->Place10_Button);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PlaceSelectionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Sea_Battle";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &PlaceSelectionForm::PlaceSelectionForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int CheckClosing=1;
	private: System::Void Place10_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CreatePlace10_Form^ Temp = gcnew CreatePlace10_Form();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();
	}
	private: System::Void Place15_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CreatePlace15_Form^ Temp = gcnew CreatePlace15_Form();
		Temp->Top = this->Top;
		Temp->Left = this->Left;
		Temp->ShowDialog();
		CheckClosing = 0;
		this->Close();
	}
	private: System::Void PlaceSelectionForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (CheckClosing!=0) {
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
