enum sendStatus {
  idle,
  isQueued,
  isPreparing,
  ReadyForSend,
  AbortSending,
  WaitingForSendFinished
};
enum recieveStatus {
  idle,
  isWaiting,
  capsuleIsNear
};

sendStatus sendStatus = idle;
recieveStatus recieveStatus = idle;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
