// Note:
// Without this extern "C", will lead to linker error:
// 1>test_serial_com_dll.obj : error LNK2028: unresolved token (0A000017) "short __cdecl Serial_Close(void)" (?Serial_Close@@$$FYAFXZ) referenced in function "private: void __clrcall test_serial_com_dll::Form1::button1_Click(class System::Object ^,class System::EventArgs ^)" (?button1_Click@Form1@test_serial_com_dll@@$$FA$AAMXP$AAVObject@System@@P$AAVEventArgs@4@@Z)
#ifdef __cplusplus
extern "C" {
#endif

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

#ifdef __cplusplus
}
#endif