#pragma once
#include <cmath>
#include <exception>
namespace Lab01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ info_variant_label;
	private: System::Windows::Forms::Label^ info_x_label;
	private: System::Windows::Forms::Label^ info_z_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ result_info_label;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::TextBox^ entry_x;
	private: System::Windows::Forms::TextBox^ entry_z;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ process_button;
	private: System::Windows::Forms::Button^ reset_button;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->info_variant_label = (gcnew System::Windows::Forms::Label());
			this->info_x_label = (gcnew System::Windows::Forms::Label());
			this->info_z_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->result_info_label = (gcnew System::Windows::Forms::Label());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->entry_x = (gcnew System::Windows::Forms::TextBox());
			this->entry_z = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->process_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// info_variant_label
			// 
			this->info_variant_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_variant_label->Location = System::Drawing::Point(32, 20);
			this->info_variant_label->Name = L"info_variant_label";
			this->info_variant_label->Size = System::Drawing::Size(215, 34);
			this->info_variant_label->TabIndex = 0;
			this->info_variant_label->Text = L"Вариант 11";
			// 
			// info_x_label
			// 
			this->info_x_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_x_label->Location = System::Drawing::Point(32, 205);
			this->info_x_label->Name = L"info_x_label";
			this->info_x_label->Size = System::Drawing::Size(180, 30);
			this->info_x_label->TabIndex = 1;
			this->info_x_label->Text = L"Введите х:";
			// 
			// info_z_label
			// 
			this->info_z_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_z_label->Location = System::Drawing::Point(32, 259);
			this->info_z_label->Name = L"info_z_label";
			this->info_z_label->Size = System::Drawing::Size(180, 30);
			this->info_z_label->TabIndex = 2;
			this->info_z_label->Text = L"Введите z:";
			this->info_z_label->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Вычислите значение выражения";
			// 
			// result_info_label
			// 
			this->result_info_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_info_label->Location = System::Drawing::Point(32, 379);
			this->result_info_label->Name = L"result_info_label";
			this->result_info_label->Size = System::Drawing::Size(203, 30);
			this->result_info_label->TabIndex = 4;
			this->result_info_label->Text = L"Результат равен:";
			this->result_info_label->UseWaitCursor = true;
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(241, 375);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(202, 35);
			this->result_label->TabIndex = 5;
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// entry_x
			// 
			this->entry_x->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->entry_x->Location = System::Drawing::Point(218, 201);
			this->entry_x->Name = L"entry_x";
			this->entry_x->Size = System::Drawing::Size(225, 34);
			this->entry_x->TabIndex = 6;
			this->entry_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// entry_z
			// 
			this->entry_z->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->entry_z->Location = System::Drawing::Point(218, 255);
			this->entry_z->Name = L"entry_z";
			this->entry_z->Size = System::Drawing::Size(225, 34);
			this->entry_z->TabIndex = 7;
			this->entry_z->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 97);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(370, 82);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// process_button
			// 
			this->process_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->process_button->Location = System::Drawing::Point(37, 315);
			this->process_button->Name = L"process_button";
			this->process_button->Size = System::Drawing::Size(155, 43);
			this->process_button->TabIndex = 9;
			this->process_button->Text = L"Вычислить";
			this->process_button->UseVisualStyleBackColor = true;
			this->process_button->Click += gcnew System::EventHandler(this, &MyForm::process_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset_button->Location = System::Drawing::Point(258, 315);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(155, 43);
			this->reset_button->TabIndex = 10;
			this->reset_button->Text = L"Сброс";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &MyForm::reset_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(472, 443);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->process_button);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->entry_z);
			this->Controls->Add(this->entry_x);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->result_info_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->info_z_label);
			this->Controls->Add(this->info_x_label);
			this->Controls->Add(this->info_variant_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"МДК 01.02. Лабораторная работа №1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	// метод для осуществления вычислений и проверок вводимых значений
	private: System::Void process_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double x, z;
		if ((this->entry_x->Text == "" || this->entry_z->Text == "")) {
			MessageBox::Show(this, "Введите значения полей", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			x = System::Convert::ToDouble(this->entry_x->Text);
			z = System::Convert::ToDouble(this->entry_z->Text);
			if (x < -2 && z == 0) {
				this->entry_x->ForeColor = Color::Red;
				this->entry_z->ForeColor = Color::Red;
				MessageBox::Show(this, "Вводимые значения ошибочные в обоих полях", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (x < -2) {
				this->entry_x->ForeColor = Color::Red;
				MessageBox::Show(this, "x должно быть больше или равно -2", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (z == 0) {
				this->entry_z->ForeColor = Color::Red;
				MessageBox::Show(this, "z не может быть равно нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				double num = sqrt(2 + x) * pow(cos(atan(1 / z)), 2);
				this->result_label->Text = System::Convert::ToString(num);
			}
		}
		catch (FormatException^) {
			if (!Double::TryParse(this->entry_x->Text, x)) {
				this->entry_x->ForeColor = Color::Red;
				if (!Double::TryParse(this->entry_z->Text, z)) {
					this->entry_x->ForeColor = Color::Red;
					this->entry_z->ForeColor = Color::Red;
					MessageBox::Show("Некорректный ввод. Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					MessageBox::Show(this, "В поле введено некорректное значение", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else if (!Double::TryParse(this->entry_z->Text, z)) {
				this->entry_z->ForeColor = Color::Red;
				if (!Double::TryParse(this->entry_x->Text, x)) {
					this->entry_x->ForeColor = Color::Red;
					this->entry_z->ForeColor = Color::Red;
					MessageBox::Show("Некорректный ввод. Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					MessageBox::Show(this, "В поле введено некорректное значение", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	// метод очитски экрана от данных
	private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->entry_x->ForeColor = Color::Black;
		this->entry_x->Text = "";
		this->entry_z->ForeColor = Color::Black;
		this->entry_z->Text = "";
		this->result_label->Text = "";
	}
	};
}