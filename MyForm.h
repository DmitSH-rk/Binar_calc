#pragma once
#include "Functions.h"
namespace Bin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//myArray2 = gcnew List<int>();
			comboBox1->Items->Add("Десятичная в двоичную");
			comboBox1->Items->Add("Восьмиричная в двоичная");
			//this->button1->Click += First;
			//this->button1->Click += Second;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: String^ tex;
	//private: String^ tex2;
	//private: List <int>^ myArray2;
	private: Functions f;
	private:System::EventHandler ^First  = gcnew System::EventHandler(this, &MyForm::button1_Click);
	private:System::EventHandler ^Second = gcnew System::EventHandler(this, &MyForm::button3_Click);
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(78, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Converted number";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(36, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(190, 25);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Write a number";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(236, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 24);
			this->button2->TabIndex = 4;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(36, 155);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(229, 27);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->textBox1->Text;
		if (ContainsOnlyDigits(text)) {
			this->tex = text;
		}
		else {
			MessageBox::Show("Здесь должно быть число", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
    //проверочная функция
	private: bool ContainsOnlyDigits(String^ text) {
		for each (Char c in text) {
			if (!Char::IsDigit(c)) {
				return false;
			}
		}
		return true;
	}
	//переворачивание массива
	private: System::Void reverseArray(List<int>^ arr) {
		int length = arr->Count;
		for (int i = 0; i < length / 2; ++i) {
			int temp = arr[i]; 
			arr[i] = arr[length - i - 1];
			arr[length - i - 1] = temp;
		}
	}
	//разложение для decaltobin
	private: int raz(String^ tet) {
		List<int>^ myArray2 = gcnew List<int>();
		int tet1 = System::Int32::Parse(tet);
		int var1 = 0;
		while (tet1 > 0) {
			int digit = tet1 % 10; 
			myArray2->Add(digit);
			tet1 /= 10;
		}
		reverseArray(myArray2);
		int j = myArray2->Count -1;
		for (int i = 0; i <= myArray2->Count - 1; i++) {
			 var1 = myArray2[i] * Math::Pow(8, j) + var1;
			 j--;
		}
		return var1;

	}
	//разложение для dec 
	private: int raz1(String^ tet) {
		List<int>^ myArray2 = gcnew List<int>();
		int tet1 = System::Int32::Parse(tet);
		int var1 = 0;
		while (tet1 > 0) {
			int digit = tet1 % 10;
			myArray2->Add(digit);
			tet1 /= 10;
		}
		reverseArray(myArray2);
		int j = myArray2->Count - 1;
		for (int i = 0; i <= myArray2->Count - 1; i++) {
			var1 = myArray2[i] * Math::Pow(10, j) + var1;
			j--;
		}
		return var1;
	}
	//перевод в деятичную
	private: System::Void decaltobin(String^ str) {
		int test = raz(this->tex);
		//int fdf = System::Convert::ToInt32(str);
		String^ binary = "";
		while( test > 0) {
			int bin = test % 2;
			binary += System::Convert::ToString(bin);
			test /= 2;
		}
		
		this->label2->Text = binary;
	}
	//расчет в восьмиричную
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			decaltobin(this->tex);
			f.Insert(textBox1->Text, label2->Text);
		}
		catch (ArgumentNullException^) { MessageBox::Show("Выберите систему исчесления", "Ошибка компиляции", MessageBoxButtons::OK, MessageBoxIcon::Error); }
		//List<int>^ htr = raz(this->tex);
		//String^ binar;
		//for (int i = 0; i < htr->Count; i++) {
		//	binar += System::Convert::ToString(htr[i]);
		//
		//}
		//this->label2->Text = binar;
	}
	//расчет в десятичную
	private: System::Void dec(String^ tex3) {
		int pol = raz1(tex3);
		String^ nib = "";
		while (pol > 0) {
			int bim = pol % 2;
			nib += System::Convert::ToString(bim);
			pol /= 2;
		}
		this->label2->Text = nib;
		
		
	}
	//применение восьмиричной
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		dec(this->tex);
		f.Insert(textBox1->Text, label2->Text);
		
	}
	//применение десятичной
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "";
		this->label2->Text = "Converted number";
	}
	//выбор из списка
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ item = comboBox1->SelectedItem->ToString();
		//this->button1->Click -= this->First;
		//this->button1->Click -= this->Second;
		
		if (item == "Восьмиричная в двоичная") {
			this->button1->Click += this->First;
			

		}
		else if (item == "Десятичная в двоичную") {
			this->button1->Click += this->Second;
			
		}
		
		
	}
};
}
