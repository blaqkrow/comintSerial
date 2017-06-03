/////////////////////////////////////////////////////////////////////////////////
// IMPORTATNT SETTINGS:
// 1. Under Properties --> General --> Set to CLR support.
// 2. Using LIB file to load DLL:
//	  o Put the serial_comm.lib file in the <Project Name> folder:
//    o Put the serial_comm.dll file in the [Debug] or [Release] folder:
/////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <windows.h>	 

extern "C" 
{
	extern int	Serial_SetComport(unsigned char Comport);
	extern int	Serial_SetBaudrate(unsigned int Baudrate);
	extern int	Serial_SetNumDataBit(unsigned char NumStartBit);
	extern int	Serial_SetNumStopBit(unsigned char NumStopBit);
	extern int	Serial_SetParity(unsigned char Parity);
	extern int	Serial_Open(void);
	extern int	Serial_Close(void);
	extern int	Serial_ClearBuffer(void);
	extern void Serial_SetReceiveTimeout(unsigned int TimeoutMsec);
	extern int	Serial_Send(unsigned char *SendPacketPtr, unsigned int SendLen);
	extern int	Serial_Receive(unsigned char *ReceivePacketPtr, unsigned int BytesToReceive, unsigned int *ActualBytesReceived);
}

namespace TestSerialComm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 249);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"SerialComm";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

