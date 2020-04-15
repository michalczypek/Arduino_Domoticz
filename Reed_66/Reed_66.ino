

// Enable debug prints to serial monitor
#define MY_DEBUG 


// Enable and select radio type attached
//#define MY_RADIO_NRF24
//#define MY_RADIO_RFM69

// Set LOW transmit power level as default, if you have an amplified NRF-module and
// power your radio separately with a good regulator you can turn up PA level. 
//#define MY_RF24_PA_LEVEL RF24_PA_LOW

// Enable serial gateway
#define MY_GATEWAY_SERIAL

// Define a lower baud rate for Arduino's running on 8 MHz (Arduino Pro Mini 3.3V & SenseBender)
#if F_CPU == 8000000L
#define MY_BAUD_RATE 38400
#endif

// Flash leds on rx/tx/err
// #define MY_LEDS_BLINKING_FEATURE
// Set blinking period
// #define MY_DEFAULT_LED_BLINK_PERIOD 300

// Inverses the behavior of leds
// #define MY_WITH_LEDS_BLINKING_INVERSE

// Enable inclusion mode
#define MY_INCLUSION_MODE_FEATURE
// Enable Inclusion mode button on gateway
#define MY_INCLUSION_BUTTON_FEATURE

// Inverses behavior of inclusion button (if using external pullup)
//#define MY_INCLUSION_BUTTON_EXTERNAL_PULLUP

// Set inclusion mode duration (in seconds)
#define MY_INCLUSION_MODE_DURATION 60 
// Digital pin used for inclusion mode button
#define MY_INCLUSION_MODE_BUTTON_PIN  3 

// Uncomment to override default HW configurations
//#define MY_DEFAULT_ERR_LED_PIN 4  // Error led pin
//#define MY_DEFAULT_RX_LED_PIN  6  // Receive led pin
//#define MY_DEFAULT_TX_LED_PIN  5  // the PCB, on board LED

#include <SPI.h>
#include <MySensors.h>  
#include <Bounce2.h>

// Enable repeater functionality for this node
#define MY_REPEATER_FEATURE

#define NUMBER_OF_RELAYS 69 // Total number of attached relays
#define RELAY_ON 1  // GPIO value to write to turn on attached relay
#define RELAY_OFF 0 // GPIO value to write to turn off attached relay

#define BUTTON4_PIN 4
#define BUTTON5_PIN 5
#define BUTTON6_PIN 6
#define BUTTON7_PIN 7
#define BUTTON8_PIN 8
#define BUTTON9_PIN 9
#define BUTTON10_PIN 10
#define BUTTON11_PIN 11
#define BUTTON12_PIN 12
#define BUTTON13_PIN 13
#define BUTTON14_PIN 14
#define BUTTON15_PIN 15
#define BUTTON16_PIN 16
#define BUTTON17_PIN 17
#define BUTTON18_PIN 18
#define BUTTON19_PIN 19
#define BUTTON20_PIN 20
#define BUTTON21_PIN 21
#define BUTTON22_PIN 22
#define BUTTON23_PIN 23
#define BUTTON24_PIN 24
#define BUTTON25_PIN 25
#define BUTTON26_PIN 26
#define BUTTON27_PIN 27
#define BUTTON28_PIN 28
#define BUTTON29_PIN 29
#define BUTTON30_PIN 30
#define BUTTON31_PIN 31
#define BUTTON32_PIN 32
#define BUTTON33_PIN 33
#define BUTTON34_PIN 34
#define BUTTON35_PIN 35
#define BUTTON36_PIN 36
#define BUTTON37_PIN 37
#define BUTTON38_PIN 38
#define BUTTON39_PIN 39
#define BUTTON40_PIN 40
#define BUTTON41_PIN 41
#define BUTTON42_PIN 42
#define BUTTON43_PIN 43
#define BUTTON44_PIN 44
#define BUTTON45_PIN 45
#define BUTTON46_PIN 46
#define BUTTON47_PIN 47
#define BUTTON48_PIN 48
#define BUTTON49_PIN 49
#define BUTTON50_PIN 50
#define BUTTON51_PIN 51
#define BUTTON52_PIN 52
#define BUTTON53_PIN 53
#define BUTTON54_PIN 54
#define BUTTON55_PIN 55
#define BUTTON56_PIN 56
#define BUTTON57_PIN 57
#define BUTTON58_PIN 58
#define BUTTON59_PIN 59
#define BUTTON60_PIN 60
#define BUTTON61_PIN 61
#define BUTTON62_PIN 62
#define BUTTON63_PIN 63
#define BUTTON64_PIN 64
#define BUTTON65_PIN 65
#define BUTTON66_PIN 66
#define BUTTON67_PIN 67
#define BUTTON68_PIN 68
#define BUTTON69_PIN 69



void before() { 
 
}

Bounce debouncer4 = Bounce();
Bounce debouncer5 = Bounce();
Bounce debouncer6 = Bounce();
Bounce debouncer7 = Bounce();
Bounce debouncer8 = Bounce();
Bounce debouncer9 = Bounce();
Bounce debouncer10 = Bounce();

Bounce debouncer11 = Bounce();
Bounce debouncer12 = Bounce();
Bounce debouncer13 = Bounce();
Bounce debouncer14 = Bounce();
Bounce debouncer15 = Bounce();
Bounce debouncer16 = Bounce();
Bounce debouncer17 = Bounce();
Bounce debouncer18 = Bounce();
Bounce debouncer19 = Bounce();
Bounce debouncer20 = Bounce();

Bounce debouncer21 = Bounce();
Bounce debouncer22 = Bounce();
Bounce debouncer23 = Bounce();
Bounce debouncer24 = Bounce();
Bounce debouncer25 = Bounce();
Bounce debouncer26 = Bounce();
Bounce debouncer27 = Bounce();
Bounce debouncer28 = Bounce();
Bounce debouncer29 = Bounce();
Bounce debouncer30 = Bounce();

Bounce debouncer31 = Bounce();
Bounce debouncer32 = Bounce();
Bounce debouncer33 = Bounce();
Bounce debouncer34 = Bounce();
Bounce debouncer35 = Bounce();
Bounce debouncer36 = Bounce();
Bounce debouncer37 = Bounce();
Bounce debouncer38 = Bounce();
Bounce debouncer39 = Bounce();
Bounce debouncer40 = Bounce();

Bounce debouncer41 = Bounce();
Bounce debouncer42 = Bounce();
Bounce debouncer43 = Bounce();
Bounce debouncer44 = Bounce();
Bounce debouncer45 = Bounce();
Bounce debouncer46 = Bounce();
Bounce debouncer47 = Bounce();
Bounce debouncer48 = Bounce();
Bounce debouncer49 = Bounce();
Bounce debouncer50 = Bounce();

Bounce debouncer51 = Bounce();
Bounce debouncer52 = Bounce();
Bounce debouncer53 = Bounce();
Bounce debouncer54 = Bounce();
Bounce debouncer55 = Bounce();
Bounce debouncer56 = Bounce();
Bounce debouncer57 = Bounce();
Bounce debouncer58 = Bounce();
Bounce debouncer59 = Bounce();
Bounce debouncer60 = Bounce();

Bounce debouncer61 = Bounce();
Bounce debouncer62 = Bounce();
Bounce debouncer63 = Bounce();
Bounce debouncer64 = Bounce();
Bounce debouncer65 = Bounce();
Bounce debouncer66 = Bounce();
Bounce debouncer67 = Bounce();
Bounce debouncer68 = Bounce();
Bounce debouncer69 = Bounce();






void setup() { 
  // Setup locally attached sensors
  delay(10000);
   // Setup the button.
  pinMode(BUTTON4_PIN, INPUT_PULLUP);
  pinMode(BUTTON5_PIN, INPUT_PULLUP);
  pinMode(BUTTON6_PIN, INPUT_PULLUP);
  pinMode(BUTTON7_PIN, INPUT_PULLUP);
  pinMode(BUTTON8_PIN, INPUT_PULLUP);
  pinMode(BUTTON9_PIN, INPUT_PULLUP);
  pinMode(BUTTON10_PIN, INPUT_PULLUP);
  pinMode(BUTTON11_PIN, INPUT_PULLUP);
  pinMode(BUTTON12_PIN, INPUT_PULLUP);
  pinMode(BUTTON13_PIN, INPUT_PULLUP);
  pinMode(BUTTON14_PIN, INPUT_PULLUP);
  pinMode(BUTTON15_PIN, INPUT_PULLUP);
  pinMode(BUTTON16_PIN, INPUT_PULLUP);
  pinMode(BUTTON17_PIN, INPUT_PULLUP);
  pinMode(BUTTON18_PIN, INPUT_PULLUP);
  pinMode(BUTTON19_PIN, INPUT_PULLUP);
  pinMode(BUTTON20_PIN, INPUT_PULLUP);
  pinMode(BUTTON21_PIN, INPUT_PULLUP);
  pinMode(BUTTON22_PIN, INPUT_PULLUP);
  pinMode(BUTTON23_PIN, INPUT_PULLUP);
  pinMode(BUTTON24_PIN, INPUT_PULLUP);
  pinMode(BUTTON25_PIN, INPUT_PULLUP);
  pinMode(BUTTON26_PIN, INPUT_PULLUP);
  pinMode(BUTTON27_PIN, INPUT_PULLUP);
  pinMode(BUTTON28_PIN, INPUT_PULLUP);
  pinMode(BUTTON29_PIN, INPUT_PULLUP);
  pinMode(BUTTON30_PIN, INPUT_PULLUP);
  pinMode(BUTTON31_PIN, INPUT_PULLUP);
  pinMode(BUTTON32_PIN, INPUT_PULLUP);
  pinMode(BUTTON33_PIN, INPUT_PULLUP);
  pinMode(BUTTON34_PIN, INPUT_PULLUP);
  pinMode(BUTTON35_PIN, INPUT_PULLUP);
  pinMode(BUTTON36_PIN, INPUT_PULLUP);
  pinMode(BUTTON37_PIN, INPUT_PULLUP);
  pinMode(BUTTON38_PIN, INPUT_PULLUP);
  pinMode(BUTTON39_PIN, INPUT_PULLUP);
  pinMode(BUTTON40_PIN, INPUT_PULLUP);
  pinMode(BUTTON41_PIN, INPUT_PULLUP);
  pinMode(BUTTON42_PIN, INPUT_PULLUP);
  pinMode(BUTTON43_PIN, INPUT_PULLUP);
  pinMode(BUTTON44_PIN, INPUT_PULLUP);
  pinMode(BUTTON45_PIN, INPUT_PULLUP);
  pinMode(BUTTON46_PIN, INPUT_PULLUP);
  pinMode(BUTTON47_PIN, INPUT_PULLUP);
  pinMode(BUTTON48_PIN, INPUT_PULLUP);
  pinMode(BUTTON49_PIN, INPUT_PULLUP);
  pinMode(BUTTON50_PIN, INPUT_PULLUP);
  pinMode(BUTTON51_PIN, INPUT_PULLUP);
  pinMode(BUTTON52_PIN, INPUT_PULLUP);
  pinMode(BUTTON53_PIN, INPUT_PULLUP);
  pinMode(BUTTON54_PIN, INPUT_PULLUP);
  pinMode(BUTTON55_PIN, INPUT_PULLUP);
  pinMode(BUTTON56_PIN, INPUT_PULLUP);
  pinMode(BUTTON57_PIN, INPUT_PULLUP);
  pinMode(BUTTON58_PIN, INPUT_PULLUP);
  pinMode(BUTTON59_PIN, INPUT_PULLUP);
  pinMode(BUTTON60_PIN, INPUT_PULLUP);
  pinMode(BUTTON61_PIN, INPUT_PULLUP);
  pinMode(BUTTON62_PIN, INPUT_PULLUP);
  pinMode(BUTTON63_PIN, INPUT_PULLUP);
  pinMode(BUTTON64_PIN, INPUT_PULLUP);
  pinMode(BUTTON65_PIN, INPUT_PULLUP);
  pinMode(BUTTON66_PIN, INPUT_PULLUP);
  pinMode(BUTTON67_PIN, INPUT_PULLUP);
  pinMode(BUTTON68_PIN, INPUT_PULLUP);
  pinMode(BUTTON69_PIN, INPUT_PULLUP);

  

  
  // After setting up the button, setup debouncer.
  debouncer4.attach(BUTTON4_PIN);
  debouncer4.interval(5);

  debouncer5.attach(BUTTON5_PIN);
  debouncer5.interval(5);

  debouncer6.attach(BUTTON6_PIN);
  debouncer6.interval(5);

  debouncer7.attach(BUTTON7_PIN);
  debouncer7.interval(5);
  
  debouncer8.attach(BUTTON8_PIN);
  debouncer8.interval(5);

  debouncer9.attach(BUTTON9_PIN);
  debouncer9.interval(5);

  debouncer10.attach(BUTTON10_PIN);
  debouncer10.interval(5);

  debouncer11.attach(BUTTON11_PIN);
  debouncer11.interval(5);

  debouncer12.attach(BUTTON12_PIN);
  debouncer12.interval(5);

  debouncer13.attach(BUTTON13_PIN);
  debouncer13.interval(5);

  debouncer14.attach(BUTTON14_PIN);
  debouncer14.interval(5);

  debouncer15.attach(BUTTON15_PIN);
  debouncer15.interval(5);

  debouncer16.attach(BUTTON16_PIN);
  debouncer16.interval(5);

  debouncer17.attach(BUTTON17_PIN);
  debouncer17.interval(5);

  debouncer18.attach(BUTTON18_PIN);
  debouncer18.interval(5);

  debouncer19.attach(BUTTON19_PIN);
  debouncer19.interval(5);

  debouncer20.attach(BUTTON20_PIN);
  debouncer20.interval(5);

  debouncer21.attach(BUTTON21_PIN);
  debouncer21.interval(5);

  debouncer22.attach(BUTTON22_PIN);
  debouncer22.interval(5);

  debouncer23.attach(BUTTON23_PIN);
  debouncer23.interval(5);

  debouncer24.attach(BUTTON24_PIN);
  debouncer24.interval(5);

  debouncer25.attach(BUTTON25_PIN);
  debouncer25.interval(5);

  debouncer26.attach(BUTTON26_PIN);
  debouncer26.interval(5);

  debouncer27.attach(BUTTON27_PIN);
  debouncer27.interval(5);

  debouncer28.attach(BUTTON28_PIN);
  debouncer28.interval(5);

  debouncer29.attach(BUTTON29_PIN);
  debouncer29.interval(5);

  debouncer30.attach(BUTTON30_PIN);
  debouncer30.interval(5);

  debouncer31.attach(BUTTON31_PIN);
  debouncer31.interval(5);

  debouncer32.attach(BUTTON32_PIN);
  debouncer32.interval(5);

  debouncer33.attach(BUTTON33_PIN);
  debouncer33.interval(5);

  debouncer34.attach(BUTTON34_PIN);
  debouncer34.interval(5);

  debouncer35.attach(BUTTON35_PIN);
  debouncer35.interval(5);

  debouncer36.attach(BUTTON36_PIN);
  debouncer36.interval(5);

  debouncer37.attach(BUTTON37_PIN);
  debouncer37.interval(5);

  debouncer38.attach(BUTTON38_PIN);
  debouncer38.interval(5);

  debouncer39.attach(BUTTON39_PIN);
  debouncer39.interval(5);

  debouncer40.attach(BUTTON40_PIN);
  debouncer40.interval(5);

  debouncer41.attach(BUTTON41_PIN);
  debouncer41.interval(5);

  debouncer42.attach(BUTTON42_PIN);
  debouncer42.interval(5);

  debouncer43.attach(BUTTON43_PIN);
  debouncer43.interval(5);

  debouncer44.attach(BUTTON44_PIN);
  debouncer44.interval(5);

  debouncer45.attach(BUTTON45_PIN);
  debouncer45.interval(5);

  debouncer46.attach(BUTTON46_PIN);
  debouncer46.interval(5);

  debouncer47.attach(BUTTON47_PIN);
  debouncer47.interval(5);

  debouncer48.attach(BUTTON48_PIN);
  debouncer48.interval(5);

  debouncer49.attach(BUTTON49_PIN);
  debouncer49.interval(5);

  debouncer50.attach(BUTTON50_PIN);
  debouncer50.interval(5);

  debouncer51.attach(BUTTON51_PIN);
  debouncer51.interval(5);

  debouncer52.attach(BUTTON52_PIN);
  debouncer52.interval(5);

  debouncer53.attach(BUTTON53_PIN);
  debouncer53.interval(5);

  debouncer54.attach(BUTTON54_PIN);
  debouncer54.interval(5);

  debouncer55.attach(BUTTON55_PIN);
  debouncer55.interval(5);

  debouncer56.attach(BUTTON56_PIN);
  debouncer56.interval(5);

  debouncer57.attach(BUTTON57_PIN);
  debouncer57.interval(5);

  debouncer58.attach(BUTTON58_PIN);
  debouncer58.interval(5);

  debouncer59.attach(BUTTON59_PIN);
  debouncer59.interval(5);

  debouncer60.attach(BUTTON60_PIN);
  debouncer60.interval(5);

  debouncer61.attach(BUTTON61_PIN);
  debouncer61.interval(5);

  debouncer62.attach(BUTTON62_PIN);
  debouncer62.interval(5);

  debouncer63.attach(BUTTON63_PIN);
  debouncer63.interval(5);

  debouncer64.attach(BUTTON64_PIN);
  debouncer64.interval(5);

  debouncer65.attach(BUTTON65_PIN);
  debouncer65.interval(5);

  debouncer66.attach(BUTTON66_PIN);
  debouncer66.interval(5);

  debouncer67.attach(BUTTON67_PIN);
  debouncer67.interval(5);

  debouncer68.attach(BUTTON68_PIN);
  debouncer68.interval(5);

  debouncer69.attach(BUTTON69_PIN);
  debouncer69.interval(5);

  //presentation();
}
void presentation()  
{   
  // Send the sketch version information to the gateway and Controller
  sendSketchInfo("Relay", "1.0");

  for (int sensor=4, pin=BUTTON4_PIN; sensor<=NUMBER_OF_RELAYS;sensor++, pin++) {
    // Register all sensors to gw (they will be created as child devices)
    present(sensor, S_LIGHT);
  }
}


MyMessage msg4(4, V_LIGHT);
MyMessage msg5(5, V_LIGHT);
MyMessage msg6(6, V_LIGHT);
MyMessage msg7(7, V_LIGHT);
MyMessage msg8(8, V_LIGHT);
MyMessage msg9(9, V_LIGHT);
MyMessage msg10(10, V_LIGHT);

MyMessage msg11(11, V_LIGHT);
MyMessage msg12(12, V_LIGHT);
MyMessage msg13(13, V_LIGHT);
MyMessage msg14(14, V_LIGHT);
MyMessage msg15(15, V_LIGHT);
MyMessage msg16(16, V_LIGHT);
MyMessage msg17(17, V_LIGHT);
MyMessage msg18(18, V_LIGHT);
MyMessage msg19(19, V_LIGHT);
MyMessage msg20(20, V_LIGHT);

MyMessage msg21(21, V_LIGHT);
MyMessage msg22(22, V_LIGHT);
MyMessage msg23(23, V_LIGHT);
MyMessage msg24(24, V_LIGHT);
MyMessage msg25(25, V_LIGHT);
MyMessage msg26(26, V_LIGHT);
MyMessage msg27(27, V_LIGHT);
MyMessage msg28(28, V_LIGHT);
MyMessage msg29(29, V_LIGHT);
MyMessage msg30(30, V_LIGHT);

MyMessage msg31(31, V_LIGHT);
MyMessage msg32(32, V_LIGHT);
MyMessage msg33(33, V_LIGHT);
MyMessage msg34(34, V_LIGHT);
MyMessage msg35(35, V_LIGHT);
MyMessage msg36(36, V_LIGHT);
MyMessage msg37(37, V_LIGHT);
MyMessage msg38(38, V_LIGHT);
MyMessage msg39(39, V_LIGHT);
MyMessage msg40(40, V_LIGHT);

MyMessage msg41(41, V_LIGHT);
MyMessage msg42(42, V_LIGHT);
MyMessage msg43(43, V_LIGHT);
MyMessage msg44(44, V_LIGHT);
MyMessage msg45(45, V_LIGHT);
MyMessage msg46(46, V_LIGHT);
MyMessage msg47(47, V_LIGHT);
MyMessage msg48(48, V_LIGHT);
MyMessage msg49(49, V_LIGHT);
MyMessage msg50(50, V_LIGHT);

MyMessage msg51(51, V_LIGHT);
MyMessage msg52(52, V_LIGHT);
MyMessage msg53(53, V_LIGHT);
MyMessage msg54(54, V_LIGHT);
MyMessage msg55(55, V_LIGHT);
MyMessage msg56(56, V_LIGHT);
MyMessage msg57(57, V_LIGHT);
MyMessage msg58(58, V_LIGHT);
MyMessage msg59(59, V_LIGHT);
MyMessage msg60(60, V_LIGHT);

MyMessage msg61(61, V_LIGHT);
MyMessage msg62(62, V_LIGHT);
MyMessage msg63(63, V_LIGHT);
MyMessage msg64(64, V_LIGHT);
MyMessage msg65(65, V_LIGHT);
MyMessage msg66(66, V_LIGHT);
MyMessage msg67(67, V_LIGHT);
MyMessage msg68(68, V_LIGHT);
MyMessage msg69(69, V_LIGHT);




void loop() { 

//-----------------------------------------------------------------------

if (debouncer4.update()) {
      int value4 = debouncer4.read();
    if(value4 == LOW){
         saveState(4, !loadState(4));
         digitalWrite(BUTTON4_PIN, loadState(4)?RELAY_ON:RELAY_OFF);
         send(msg4.set(loadState(4)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer5.update()){
      int value5 = debouncer5.read();
    if(value5 == LOW){
         saveState(5, !loadState(5));
         digitalWrite(BUTTON5_PIN, loadState(5)?RELAY_ON:RELAY_OFF);
         send(msg5.set(loadState(5)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer6.update()) {
      int value6 = debouncer6.read();
    if(value6 == LOW){
         saveState(6, !loadState(6));
         digitalWrite(BUTTON6_PIN, loadState(6)?RELAY_ON:RELAY_OFF);
         send(msg6.set(loadState(6)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer7.update()) {
      int value7 = debouncer7.read();
    if(value7 == LOW){
         saveState(7, !loadState(7));
         digitalWrite(BUTTON7_PIN, loadState(7)?RELAY_ON:RELAY_OFF);
         send(msg7.set(loadState(7)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer8.update()) {
      int value8 = debouncer8.read();
    if(value8 == LOW){
         saveState(8, !loadState(8));
         digitalWrite(BUTTON8_PIN, loadState(8)?RELAY_ON:RELAY_OFF);
         send(msg8.set(loadState(8)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer9.update()) {
      int value9 = debouncer9.read();
    if(value9 == LOW){
         saveState(9, !loadState(9));
         digitalWrite(BUTTON9_PIN, loadState(9)?RELAY_ON:RELAY_OFF);
         send(msg9.set(loadState(9)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer10.update()) {
      int value10 = debouncer10.read();
    if(value10 == LOW){
         saveState(10, !loadState(10));
         digitalWrite(BUTTON10_PIN, loadState(10)?RELAY_ON:RELAY_OFF);
         send(msg10.set(loadState(10)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer11.update()) {
    int value11 = debouncer11.read();
    if(value11 == LOW){
         saveState(11, !loadState(11));
         digitalWrite(BUTTON11_PIN, loadState(11)?RELAY_ON:RELAY_OFF);
         send(msg11.set(loadState(11)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer12.update()) {
      int value12 = debouncer12.read();
    if(value12 == LOW){
         saveState(12, !loadState(12));
         digitalWrite(BUTTON12_PIN, loadState(12)?RELAY_ON:RELAY_OFF);
         send(msg12.set(loadState(12)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer13.update()) {
      int value13 = debouncer13.read();
    if(value13 == LOW){
         saveState(13, !loadState(13));
         digitalWrite(BUTTON13_PIN, loadState(13)?RELAY_ON:RELAY_OFF);
         send(msg13.set(loadState(13)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer14.update()) {
      int value14 = debouncer14.read();
    if(value14 == LOW){
         saveState(14, !loadState(14));
         digitalWrite(BUTTON14_PIN, loadState(14)?RELAY_ON:RELAY_OFF);
         send(msg4.set(loadState(14)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer15.update()){
      int value15 = debouncer15.read();
    if(value15 == LOW){
         saveState(15, !loadState(15));
         digitalWrite(BUTTON15_PIN, loadState(15)?RELAY_ON:RELAY_OFF);
         send(msg15.set(loadState(15)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer16.update()) {
      int value16 = debouncer16.read();
    if(value16 == LOW){
         saveState(16, !loadState(16));
         digitalWrite(BUTTON16_PIN, loadState(16)?RELAY_ON:RELAY_OFF);
         send(msg16.set(loadState(16)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer17.update()) {
      int value17 = debouncer17.read();
    if(value17 == LOW){
         saveState(17, !loadState(17));
         digitalWrite(BUTTON17_PIN, loadState(17)?RELAY_ON:RELAY_OFF);
         send(msg17.set(loadState(17)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer18.update()) {
      int value18 = debouncer18.read();
    if(value18 == LOW){
         saveState(18, !loadState(18));
         digitalWrite(BUTTON18_PIN, loadState(18)?RELAY_ON:RELAY_OFF);
         send(msg18.set(loadState(18)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer19.update()) {
      int value19 = debouncer19.read();
    if(value19 == LOW){
         saveState(19, !loadState(19));
         digitalWrite(BUTTON19_PIN, loadState(19)?RELAY_ON:RELAY_OFF);
         send(msg19.set(loadState(19)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer20.update()) {
      int value20 = debouncer20.read();
    if(value20 == LOW){
         saveState(20, !loadState(20));
         digitalWrite(BUTTON20_PIN, loadState(20)?RELAY_ON:RELAY_OFF);
         send(msg20.set(loadState(20)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer21.update()) {
    int value21 = debouncer21.read();
    if(value21 == LOW){
         saveState(21, !loadState(21));
         digitalWrite(BUTTON21_PIN, loadState(21)?RELAY_ON:RELAY_OFF);
         send(msg21.set(loadState(21)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer22.update()) {
      int value22 = debouncer22.read();
    if(value22 == LOW){
         saveState(22, !loadState(22));
         digitalWrite(BUTTON22_PIN, loadState(22)?RELAY_ON:RELAY_OFF);
         send(msg22.set(loadState(22)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer23.update()) {
      int value23 = debouncer23.read();
    if(value23 == LOW){
         saveState(23, !loadState(23));
         digitalWrite(BUTTON23_PIN, loadState(23)?RELAY_ON:RELAY_OFF);
         send(msg23.set(loadState(23)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer24.update()) {
      int value24 = debouncer24.read();
    if(value24 == LOW){
         saveState(24, !loadState(24));
         digitalWrite(BUTTON24_PIN, loadState(24)?RELAY_ON:RELAY_OFF);
         send(msg24.set(loadState(24)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer25.update()){
      int value25 = debouncer25.read();
    if(value25 == LOW){
         saveState(25, !loadState(25));
         digitalWrite(BUTTON25_PIN, loadState(25)?RELAY_ON:RELAY_OFF);
         send(msg25.set(loadState(25)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer26.update()) {
      int value26 = debouncer26.read();
    if(value26 == LOW){
         saveState(26, !loadState(26));
         digitalWrite(BUTTON26_PIN, loadState(26)?RELAY_ON:RELAY_OFF);
         send(msg26.set(loadState(26)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer27.update()) {
      int value27 = debouncer27.read();
    if(value27 == LOW){
         saveState(27, !loadState(27));
         digitalWrite(BUTTON27_PIN, loadState(27)?RELAY_ON:RELAY_OFF);
         send(msg27.set(loadState(27)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer28.update()) {
      int value28 = debouncer28.read();
    if(value28 == LOW){
         saveState(28, !loadState(28));
         digitalWrite(BUTTON28_PIN, loadState(28)?RELAY_ON:RELAY_OFF);
         send(msg28.set(loadState(28)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer29.update()) {
      int value29 = debouncer29.read();
    if(value29 == LOW){
         saveState(29, !loadState(29));
         digitalWrite(BUTTON29_PIN, loadState(29)?RELAY_ON:RELAY_OFF);
         send(msg29.set(loadState(29)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer30.update()) {
      int value30 = debouncer30.read();
    if(value30 == LOW){
         saveState(30, !loadState(30));
         digitalWrite(BUTTON30_PIN, loadState(30)?RELAY_ON:RELAY_OFF);
         send(msg30.set(loadState(30)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer31.update()) {
    int value31 = debouncer31.read();
    if(value31 == LOW){
         saveState(31, !loadState(31));
         digitalWrite(BUTTON31_PIN, loadState(31)?RELAY_ON:RELAY_OFF);
         send(msg31.set(loadState(31)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer32.update()) {
      int value32 = debouncer32.read();
    if(value32 == LOW){
         saveState(32, !loadState(32));
         digitalWrite(BUTTON32_PIN, loadState(32)?RELAY_ON:RELAY_OFF);
         send(msg32.set(loadState(32)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer33.update()) {
      int value33 = debouncer33.read();
    if(value33 == LOW){
         saveState(33, !loadState(33));
         digitalWrite(BUTTON33_PIN, loadState(33)?RELAY_ON:RELAY_OFF);
         send(msg33.set(loadState(33)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer34.update()) {
      int value34 = debouncer34.read();
    if(value34 == LOW){
         saveState(34, !loadState(34));
         digitalWrite(BUTTON34_PIN, loadState(34)?RELAY_ON:RELAY_OFF);
         send(msg34.set(loadState(34)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer35.update()){
      int value35 = debouncer35.read();
    if(value35 == LOW){
         saveState(35, !loadState(35));
         digitalWrite(BUTTON35_PIN, loadState(35)?RELAY_ON:RELAY_OFF);
         send(msg35.set(loadState(35)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer36.update()) {
      int value36 = debouncer36.read();
    if(value36 == LOW){
         saveState(36, !loadState(36));
         digitalWrite(BUTTON36_PIN, loadState(36)?RELAY_ON:RELAY_OFF);
         send(msg36.set(loadState(36)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer37.update()) {
      int value37 = debouncer37.read();
    if(value37 == LOW){
         saveState(37, !loadState(37));
         digitalWrite(BUTTON37_PIN, loadState(37)?RELAY_ON:RELAY_OFF);
         send(msg37.set(loadState(37)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer38.update()) {
      int value38 = debouncer38.read();
    if(value38 == LOW){
         saveState(38, !loadState(38));
         digitalWrite(BUTTON38_PIN, loadState(38)?RELAY_ON:RELAY_OFF);
         send(msg38.set(loadState(38)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer39.update()) {
      int value39 = debouncer39.read();
    if(value39 == LOW){
         saveState(39, !loadState(39));
         digitalWrite(BUTTON39_PIN, loadState(39)?RELAY_ON:RELAY_OFF);
         send(msg39.set(loadState(39)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer40.update()) {
      int value40 = debouncer40.read();
    if(value40 == LOW){
         saveState(40, !loadState(40));
         digitalWrite(BUTTON40_PIN, loadState(40)?RELAY_ON:RELAY_OFF);
         send(msg40.set(loadState(40)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer41.update()) {
    int value41 = debouncer41.read();
    if(value41 == LOW){
         saveState(41, !loadState(41));
         digitalWrite(BUTTON41_PIN, loadState(41)?RELAY_ON:RELAY_OFF);
         send(msg41.set(loadState(41)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer42.update()) {
      int value42 = debouncer42.read();
    if(value42 == LOW){
         saveState(42, !loadState(42));
         digitalWrite(BUTTON42_PIN, loadState(42)?RELAY_ON:RELAY_OFF);
         send(msg42.set(loadState(42)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer43.update()) {
      int value43 = debouncer43.read();
    if(value43 == LOW){
         saveState(43, !loadState(43));
         digitalWrite(BUTTON43_PIN, loadState(43)?RELAY_ON:RELAY_OFF);
         send(msg43.set(loadState(43)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer44.update()) {
      int value44 = debouncer44.read();
    if(value44 == LOW){
         saveState(44, !loadState(44));
         digitalWrite(BUTTON44_PIN, loadState(44)?RELAY_ON:RELAY_OFF);
         send(msg44.set(loadState(44)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer45.update()){
      int value45 = debouncer45.read();
    if(value45 == LOW){
         saveState(45, !loadState(45));
         digitalWrite(BUTTON45_PIN, loadState(45)?RELAY_ON:RELAY_OFF);
         send(msg45.set(loadState(45)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer46.update()) {
      int value46 = debouncer46.read();
    if(value46 == LOW){
         saveState(46, !loadState(46));
         digitalWrite(BUTTON46_PIN, loadState(46)?RELAY_ON:RELAY_OFF);
         send(msg46.set(loadState(46)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer47.update()) {
      int value47 = debouncer47.read();
    if(value47 == LOW){
         saveState(47, !loadState(47));
         digitalWrite(BUTTON47_PIN, loadState(47)?RELAY_ON:RELAY_OFF);
         send(msg47.set(loadState(47)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer48.update()) {
      int value48 = debouncer48.read();
    if(value48 == LOW){
         saveState(48, !loadState(48));
         digitalWrite(BUTTON48_PIN, loadState(48)?RELAY_ON:RELAY_OFF);
         send(msg48.set(loadState(48)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer49.update()) {
      int value49 = debouncer49.read();
    if(value49 == LOW){
         saveState(49, !loadState(49));
         digitalWrite(BUTTON49_PIN, loadState(49)?RELAY_ON:RELAY_OFF);
         send(msg49.set(loadState(49)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer50.update()) {
      int value50 = debouncer50.read();
    if(value50 == LOW){
         saveState(50, !loadState(50));
         digitalWrite(BUTTON50_PIN, loadState(50)?RELAY_ON:RELAY_OFF);
         send(msg50.set(loadState(50)));
         }
  }
//-----------------------------------------------------------------------

  if (debouncer51.update()) {
      int value51 = debouncer51.read();
    if(value51 == LOW){
         saveState(51, !loadState(51));
         digitalWrite(BUTTON51_PIN, loadState(51)?RELAY_ON:RELAY_OFF);
         send(msg51.set(loadState(51)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer52.update()) {
      int value52 = debouncer52.read();
    if(value52 == LOW){
         saveState(52, !loadState(52));
         digitalWrite(BUTTON52_PIN, loadState(52)?RELAY_ON:RELAY_OFF);
         send(msg52.set(loadState(52)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer53.update()) {
      int value53 = debouncer53.read();
    if(value53 == LOW){
         saveState(53, !loadState(53));
         digitalWrite(BUTTON53_PIN, loadState(53)?RELAY_ON:RELAY_OFF);
         send(msg53.set(loadState(53)));
         }
  }
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------

if (debouncer54.update()) {
      int value54 = debouncer54.read();
    if(value54 == LOW){
         saveState(54, !loadState(54));
         digitalWrite(BUTTON54_PIN, loadState(54)?RELAY_ON:RELAY_OFF);
         send(msg54.set(loadState(54)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer55.update()){
      int value55 = debouncer55.read();
    if(value55 == LOW){
         saveState(55, !loadState(55));
         digitalWrite(BUTTON55_PIN, loadState(55)?RELAY_ON:RELAY_OFF);
         send(msg55.set(loadState(55)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer56.update()) {
      int value56 = debouncer56.read();
    if(value56 == LOW){
         saveState(56, !loadState(56));
         digitalWrite(BUTTON56_PIN, loadState(56)?RELAY_ON:RELAY_OFF);
         send(msg56.set(loadState(56)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer57.update()) {
      int value57 = debouncer57.read();
    if(value57 == LOW){
         saveState(57, !loadState(57));
         digitalWrite(BUTTON57_PIN, loadState(57)?RELAY_ON:RELAY_OFF);
         send(msg57.set(loadState(57)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer58.update()) {
      int value58 = debouncer58.read();
    if(value58 == LOW){
         saveState(58, !loadState(58));
         digitalWrite(BUTTON58_PIN, loadState(58)?RELAY_ON:RELAY_OFF);
         send(msg58.set(loadState(58)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer59.update()) {
      int value59 = debouncer59.read();
    if(value59 == LOW){
         saveState(59, !loadState(59));
         digitalWrite(BUTTON59_PIN, loadState(59)?RELAY_ON:RELAY_OFF);
         send(msg59.set(loadState(59)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer60.update()) {
      int value60 = debouncer60.read();
    if(value60 == LOW){
         saveState(60, !loadState(60));
         digitalWrite(BUTTON60_PIN, loadState(60)?RELAY_ON:RELAY_OFF);
         send(msg60.set(loadState(60)));
         }
  }
//-----------------------------------------------------------------------

  if (debouncer61.update()) {
      int value61 = debouncer51.read();
    if(value61 == LOW){
         saveState(61, !loadState(61));
         digitalWrite(BUTTON61_PIN, loadState(61)?RELAY_ON:RELAY_OFF);
         send(msg61.set(loadState(51)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer62.update()) {
      int value62 = debouncer62.read();
    if(value62 == LOW){
         saveState(62, !loadState(62));
         digitalWrite(BUTTON62_PIN, loadState(62)?RELAY_ON:RELAY_OFF);
         send(msg62.set(loadState(62)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer63.update()) {
      int value63 = debouncer63.read();
    if(value63 == LOW){
         saveState(63, !loadState(63));
         digitalWrite(BUTTON63_PIN, loadState(63)?RELAY_ON:RELAY_OFF);
         send(msg63.set(loadState(63)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer64.update()) {
      int value64 = debouncer64.read();
    if(value64 == LOW){
         saveState(64, !loadState(64));
         digitalWrite(BUTTON64_PIN, loadState(64)?RELAY_ON:RELAY_OFF);
         send(msg64.set(loadState(64)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer65.update()){
      int value65 = debouncer65.read();
    if(value65 == LOW){
         saveState(65, !loadState(65));
         digitalWrite(BUTTON65_PIN, loadState(65)?RELAY_ON:RELAY_OFF);
         send(msg65.set(loadState(65)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer66.update()) {
      int value66 = debouncer66.read();
    if(value66 == LOW){
         saveState(66, !loadState(66));
         digitalWrite(BUTTON66_PIN, loadState(66)?RELAY_ON:RELAY_OFF);
         send(msg66.set(loadState(66)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer67.update()) {
      int value67 = debouncer67.read();
    if(value67 == LOW){
         saveState(67, !loadState(67));
         digitalWrite(BUTTON67_PIN, loadState(67)?RELAY_ON:RELAY_OFF);
         send(msg67.set(loadState(67)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer68.update()) {
      int value68 = debouncer68.read();
    if(value68 == LOW){
         saveState(68, !loadState(68));
         digitalWrite(BUTTON68_PIN, loadState(68)?RELAY_ON:RELAY_OFF);
         send(msg68.set(loadState(68)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer69.update()) {
      int value69 = debouncer69.read();
    if(value69 == LOW){
         saveState(69, !loadState(69));
         digitalWrite(BUTTON69_PIN, loadState(69)?RELAY_ON:RELAY_OFF);
         send(msg69.set(loadState(69)));
         }
  }
//-----------------------------------------------------------------------


}


void receive(const MyMessage &message) {
  // We only expect one type of message from controller. But we better check anyway.
  if (message.type==V_LIGHT) {
     // Change relay state
     digitalWrite(message.sensor-1+BUTTON4_PIN, message.getBool()?RELAY_ON:RELAY_OFF);
     // Store state in eeprom
     saveState(message.sensor, message.getBool());
     // Write some debug info
     Serial.print("Incoming change for sensor:");
     Serial.print(message.sensor);
     Serial.print(", New status: ");
     Serial.println(message.getBool());
   } 
}
