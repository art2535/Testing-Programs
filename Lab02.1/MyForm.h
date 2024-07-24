#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
namespace Lab021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ VariantLabel;
	private: System::Windows::Forms::Label^ InfoLabel;
	private: System::Windows::Forms::Label^ FirstSideLabel;

	private: System::Windows::Forms::Label^ SecondSideLabel;
	private: System::Windows::Forms::Label^ ThirdSideLabel;
	private: System::Windows::Forms::TextBox^ FirstSideEntry;
	private: System::Windows::Forms::TextBox^ SecondSideEntry;
	private: System::Windows::Forms::TextBox^ ThirdSideEntry;
	private: System::Windows::Forms::Button^ ResultButton;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ ResetButton;
	protected:
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->VariantLabel = (gcnew System::Windows::Forms::Label());
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->FirstSideLabel = (gcnew System::Windows::Forms::Label());
			this->SecondSideLabel = (gcnew System::Windows::Forms::Label());
			this->ThirdSideLabel = (gcnew System::Windows::Forms::Label());
			this->FirstSideEntry = (gcnew System::Windows::Forms::TextBox());
			this->SecondSideEntry = (gcnew System::Windows::Forms::TextBox());
			this->ThirdSideEntry = (gcnew System::Windows::Forms::TextBox());
			this->ResultButton = (gcnew System::Windows::Forms::Button());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// VariantLabel
			// 
			this->VariantLabel->AutoSize = true;
			this->VariantLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VariantLabel->Location = System::Drawing::Point(32, 20);
			this->VariantLabel->Name = L"VariantLabel";
			this->VariantLabel->Size = System::Drawing::Size(131, 25);
			this->VariantLabel->TabIndex = 0;
			this->VariantLabel->Text = L"Вариант 11";
			// 
			// InfoLabel
			// 
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoLabel->Location = System::Drawing::Point(33, 60);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(606, 82);
			this->InfoLabel->TabIndex = 1;
			this->InfoLabel->Text = L"Идентифицировать треугольник по трем сторонам (остроугольный, прямоугольный, тупо"
				L"угольный, равнобедренный, равносторонний)";
			// 
			// FirstSideLabel
			// 
			this->FirstSideLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstSideLabel->Location = System::Drawing::Point(33, 158);
			this->FirstSideLabel->Name = L"FirstSideLabel";
			this->FirstSideLabel->Size = System::Drawing::Size(296, 55);
			this->FirstSideLabel->TabIndex = 2;
			this->FirstSideLabel->Text = L"Введите первую сторону треугольника:";
			// 
			// SecondSideLabel
			// 
			this->SecondSideLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SecondSideLabel->Location = System::Drawing::Point(33, 223);
			this->SecondSideLabel->Name = L"SecondSideLabel";
			this->SecondSideLabel->Size = System::Drawing::Size(296, 55);
			this->SecondSideLabel->TabIndex = 3;
			this->SecondSideLabel->Text = L"Введите вторую сторону треугольника:";
			// 
			// ThirdSideLabel
			// 
			this->ThirdSideLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ThirdSideLabel->Location = System::Drawing::Point(33, 288);
			this->ThirdSideLabel->Name = L"ThirdSideLabel";
			this->ThirdSideLabel->Size = System::Drawing::Size(296, 55);
			this->ThirdSideLabel->TabIndex = 4;
			this->ThirdSideLabel->Text = L"Введите третью сторону треугольника:";
			// 
			// FirstSideEntry
			// 
			this->FirstSideEntry->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstSideEntry->Location = System::Drawing::Point(382, 163);
			this->FirstSideEntry->Multiline = true;
			this->FirstSideEntry->Name = L"FirstSideEntry";
			this->FirstSideEntry->Size = System::Drawing::Size(257, 50);
			this->FirstSideEntry->TabIndex = 5;
			this->FirstSideEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->FirstSideEntry->UseWaitCursor = true;
			// 
			// SecondSideEntry
			// 
			this->SecondSideEntry->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F));
			this->SecondSideEntry->Location = System::Drawing::Point(382, 228);
			this->SecondSideEntry->Multiline = true;
			this->SecondSideEntry->Name = L"SecondSideEntry";
			this->SecondSideEntry->Size = System::Drawing::Size(257, 50);
			this->SecondSideEntry->TabIndex = 6;
			this->SecondSideEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ThirdSideEntry
			// 
			this->ThirdSideEntry->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F));
			this->ThirdSideEntry->Location = System::Drawing::Point(382, 293);
			this->ThirdSideEntry->Multiline = true;
			this->ThirdSideEntry->Name = L"ThirdSideEntry";
			this->ThirdSideEntry->Size = System::Drawing::Size(257, 50);
			this->ThirdSideEntry->TabIndex = 7;
			this->ThirdSideEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ResultButton
			// 
			this->ResultButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResultButton->Location = System::Drawing::Point(37, 371);
			this->ResultButton->Name = L"ResultButton";
			this->ResultButton->Size = System::Drawing::Size(218, 48);
			this->ResultButton->TabIndex = 8;
			this->ResultButton->Text = L"Идентифицировать";
			this->ResultButton->UseVisualStyleBackColor = true;
			this->ResultButton->Click += gcnew System::EventHandler(this, &MyForm::ResultButton_Click);
			// 
			// ResultLabel
			// 
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResultLabel->Location = System::Drawing::Point(359, 371);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(292, 227);
			this->ResultLabel->TabIndex = 9;
			this->ResultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ResetButton
			// 
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResetButton->Location = System::Drawing::Point(37, 438);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(218, 48);
			this->ResetButton->TabIndex = 11;
			this->ResetButton->Text = L"Сброс";
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MyForm::ResetButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 626);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->ResultLabel);
			this->Controls->Add(this->ResultButton);
			this->Controls->Add(this->ThirdSideEntry);
			this->Controls->Add(this->SecondSideEntry);
			this->Controls->Add(this->FirstSideEntry);
			this->Controls->Add(this->ThirdSideLabel);
			this->Controls->Add(this->SecondSideLabel);
			this->Controls->Add(this->FirstSideLabel);
			this->Controls->Add(this->InfoLabel);
			this->Controls->Add(this->VariantLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"МДК 01.02. Лабораторная работа №2. Часть 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ResultButton_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, c;
		if (this->FirstSideEntry->Text == "" || this->SecondSideEntry->Text == "" ||
			this->ThirdSideEntry->Text == "") 
		{
			MessageBox::Show("Введите значения полей.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		try
		{
			a = System::Convert::ToDouble(this->FirstSideEntry->Text);
			b = System::Convert::ToDouble(this->SecondSideEntry->Text);
			c = System::Convert::ToDouble(this->ThirdSideEntry->Text);
			if (a <= 0 || b <= 0 || c <= 0) 
			{
				this->FirstSideEntry->ForeColor = Color::Red;
				this->SecondSideEntry->ForeColor = Color::Red;
				this->ThirdSideEntry->ForeColor = Color::Red;
				MessageBox::Show("Стороны треугольника не могут быть отрицательными или равны 0.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			double alpha = acos((a * a + b * b - c * c) / (2 * a * b));
			double beta = acos((a * a + c * c - b * b) / (2 * a * c));
			double gamma = acos((b * b + c * c - a * a) / (2 * b * c));
			if (a + b > c && a + c > b && b + c > a)
			{
				if (a == b && a == c && b == c)
					this->ResultLabel->Text = "Треугольник равносторонний";
				else if (a == b || a == c || b == c)
					this->ResultLabel->Text = "Треугольник равнобедренный";
				else if (alpha == M_PI / 2 || beta == M_PI / 2 || gamma == M_PI / 2)
					this->ResultLabel->Text = "Треугольник прямоугольный";
				else if ((alpha > M_PI / 2 || beta > M_PI / 2 || gamma > M_PI / 2) && alpha + beta + gamma == M_PI)
					this->ResultLabel->Text = "Треугольник тупоугольный";
				else
					this->ResultLabel->Text = "Треугольник остроугольный";
			}
			else 
			{
				this->FirstSideEntry->ForeColor = Color::Red;
				this->SecondSideEntry->ForeColor = Color::Red;
				this->ThirdSideEntry->ForeColor = Color::Red;
				MessageBox::Show("Треугольник нельзя построить.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (FormatException^) 
		{
			if (!Double::TryParse(this->FirstSideEntry->Text, a)) 
			{
				this->FirstSideEntry->ForeColor = Color::Red;
				if (!Double::TryParse(this->SecondSideEntry->Text, b)) 
				{
					this->SecondSideEntry->ForeColor = Color::Red;
					if (!Double::TryParse(this->ThirdSideEntry->Text, c)) 
					{
						this->ThirdSideEntry->ForeColor = Color::Red;
						MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
						MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
					MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (!Double::TryParse(this->SecondSideEntry->Text, b)) 
			{
				this->SecondSideEntry->ForeColor = Color::Red;
				if (!Double::TryParse(this->FirstSideEntry->Text, a)) 
				{
					this->FirstSideEntry->ForeColor = Color::Red;
					if (!Double::TryParse(this->ThirdSideEntry->Text, c)) 
					{
						this->ThirdSideEntry->ForeColor = Color::Red;
						MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
						MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
					MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (!Double::TryParse(this->ThirdSideEntry->Text, b)) 
			{
				this->ThirdSideEntry->ForeColor = Color::Red;
				if (!Double::TryParse(this->FirstSideEntry->Text, b)) 
				{
					this->FirstSideEntry->ForeColor = Color::Red;
					if (!Double::TryParse(this->SecondSideEntry->Text, c)) 
					{
						this->SecondSideEntry->ForeColor = Color::Red;
						MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
						MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
					MessageBox::Show("Неверный ввод! Введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ResultLabel->Text = "";
		this->FirstSideEntry->Text = "";
		this->FirstSideEntry->ForeColor = Color::Black;
		this->SecondSideEntry->Text = "";
		this->SecondSideEntry->ForeColor = Color::Black;
		this->ThirdSideEntry->Text = "";
		this->ThirdSideEntry->ForeColor = Color::Black;
	}
	};
}