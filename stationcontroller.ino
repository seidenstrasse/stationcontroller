#define STATIONID 2

const String[11] stationNames = {"GateToGo1", "GateToGo2", "Sendezentrum", "GF2", "Aufzug", "WelcomeWizzards1", "WelcomeWizzards2", "WorkOut", "Section9", "DesertDruide", "FoodHackingBase"};
const byte[11] stationIds = [3, 4, 6, 7, 8, 12, 13, 14, 15, 16, 17];

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
