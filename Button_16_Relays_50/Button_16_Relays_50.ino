

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


#define RELAY_1  4  
#define RELAY_2  5
#define RELAY_3  6
#define RELAY_4  7
#define RELAY_5  8
#define RELAY_6  9
#define RELAY_7  10
#define RELAY_8  11
#define RELAY_9  12
#define RELAY_10  13

#define RELAY_11  14  
#define RELAY_12  15
#define RELAY_13  16
#define RELAY_14  17
#define RELAY_15  18
#define RELAY_16  19
#define RELAY_17  20
#define RELAY_18  21
#define RELAY_19  22
#define RELAY_20  23

#define RELAY_21  24  
#define RELAY_22  25
#define RELAY_23  26
#define RELAY_24  27
#define RELAY_25  28
#define RELAY_26  29
#define RELAY_27  30
#define RELAY_28  31
#define RELAY_29  32
#define RELAY_30  33

#define RELAY_31  34  
#define RELAY_32  35
#define RELAY_33  36
#define RELAY_34  37
#define RELAY_35  38
#define RELAY_36  39
#define RELAY_37  40
#define RELAY_38  41
#define RELAY_39  42
#define RELAY_40  43

#define RELAY_41  44  
#define RELAY_42  45
#define RELAY_43  46
#define RELAY_44  47
#define RELAY_45  48
#define RELAY_46  49
#define RELAY_47  50
#define RELAY_48  51
#define RELAY_49  52
#define RELAY_50  53
#define NUMBER_OF_RELAYS 50 // Total number of attached relays
#define RELAY_ON 0  // GPIO value to write to turn on attached relay
#define RELAY_OFF 1 // GPIO value to write to turn off attached relay

#define BUTTON0_PIN A0
#define BUTTON1_PIN A1
#define BUTTON2_PIN A2
#define BUTTON3_PIN A3
#define BUTTON4_PIN A4
#define BUTTON5_PIN A5
#define BUTTON6_PIN A6
#define BUTTON7_PIN A7
#define BUTTON8_PIN A8
#define BUTTON9_PIN A9
#define BUTTON10_PIN A10
#define BUTTON11_PIN A11
#define BUTTON12_PIN A12
#define BUTTON13_PIN A13
#define BUTTON14_PIN A14
#define BUTTON15_PIN A15

void before() { 
  for (int sensor=1, pin=RELAY_1; sensor<=NUMBER_OF_RELAYS;sensor++, pin++) {
    // Then set relay pins in output mode
    pinMode(pin, OUTPUT);   
    // Set relay to last known state (using eeprom storage) 
    digitalWrite(pin, loadState(sensor)?RELAY_ON:RELAY_OFF);
  }
}
Bounce debouncer = Bounce();
Bounce debouncer2 = Bounce();
Bounce debouncer3 = Bounce();
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



void setup() { 
  // Setup locally attached sensors
  delay(10000);
   // Setup the button.
  pinMode(BUTTON0_PIN, INPUT_PULLUP);
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  pinMode(BUTTON2_PIN, INPUT_PULLUP);
  pinMode(BUTTON3_PIN, INPUT_PULLUP);
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
  
  // After setting up the button, setup debouncer.
  debouncer.attach(BUTTON0_PIN);
  debouncer.interval(5);
  
  debouncer2.attach(BUTTON1_PIN);
  debouncer2.interval(5);

  debouncer3.attach(BUTTON2_PIN);
  debouncer3.interval(5);

  debouncer4.attach(BUTTON3_PIN);
  debouncer4.interval(5);

  debouncer5.attach(BUTTON4_PIN);
  debouncer5.interval(5);

  debouncer6.attach(BUTTON5_PIN);
  debouncer6.interval(5);

  debouncer7.attach(BUTTON6_PIN);
  debouncer7.interval(5);

  debouncer8.attach(BUTTON7_PIN);
  debouncer8.interval(5);

  debouncer9.attach(BUTTON8_PIN);
  debouncer9.interval(5);

  debouncer10.attach(BUTTON9_PIN);
  debouncer10.interval(5);

  debouncer11.attach(BUTTON10_PIN);
  debouncer11.interval(5);

  debouncer12.attach(BUTTON11_PIN);
  debouncer12.interval(5);

  debouncer13.attach(BUTTON12_PIN);
  debouncer13.interval(5);

  debouncer14.attach(BUTTON13_PIN);
  debouncer14.interval(5);

  debouncer15.attach(BUTTON14_PIN);
  debouncer15.interval(5);

  debouncer16.attach(BUTTON15_PIN);
  debouncer16.interval(5);

  //presentation();
}
void presentation()  
{   
  // Send the sketch version information to the gateway and Controller
  sendSketchInfo("Relay", "1.0");

  for (int sensor=1, pin=RELAY_1; sensor<=NUMBER_OF_RELAYS;sensor++, pin++) {
    // Register all sensors to gw (they will be created as child devices)
    present(sensor, S_LIGHT);
  }
}

MyMessage msg(1, V_LIGHT);
MyMessage msg2(2, V_LIGHT);
MyMessage msg3(3, V_LIGHT);
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

void loop() { 

//-----------------------------------------------------------------------
  if (debouncer.update()) {
    int value = debouncer.read();
    if(value == LOW){
         saveState(1, !loadState(1));
         digitalWrite(RELAY_1, loadState(1)?RELAY_ON:RELAY_OFF);
         send(msg.set(loadState(1)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer2.update()) {
      int value2 = debouncer2.read();
    if(value2 == LOW){
         saveState(2, !loadState(2));
         digitalWrite(RELAY_2, loadState(2)?RELAY_ON:RELAY_OFF);
         send(msg2.set(loadState(2)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer3.update()) {
      int value3 = debouncer3.read();
    if(value3 == LOW){
         saveState(3, !loadState(3));
         digitalWrite(RELAY_3, loadState(3)?RELAY_ON:RELAY_OFF);
         send(msg3.set(loadState(3)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer4.update()) {
      int value4 = debouncer4.read();
    if(value4 == LOW){
         saveState(4, !loadState(4));
         digitalWrite(RELAY_4, loadState(4)?RELAY_ON:RELAY_OFF);
         send(msg4.set(loadState(4)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer5.update()){
      int value5 = debouncer5.read();
    if(value5 == LOW){
         saveState(5, !loadState(5));
         digitalWrite(RELAY_5, loadState(5)?RELAY_ON:RELAY_OFF);
         send(msg5.set(loadState(5)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer6.update()) {
      int value6 = debouncer6.read();
    if(value6 == LOW){
         saveState(6, !loadState(6));
         digitalWrite(RELAY_6, loadState(6)?RELAY_ON:RELAY_OFF);
         send(msg6.set(loadState(6)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer7.update()) {
      int value7 = debouncer7.read();
    if(value7 == LOW){
         saveState(7, !loadState(7));
         digitalWrite(RELAY_7, loadState(7)?RELAY_ON:RELAY_OFF);
         send(msg7.set(loadState(7)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer8.update()) {
      int value8 = debouncer8.read();
    if(value8 == LOW){
         saveState(8, !loadState(8));
         digitalWrite(RELAY_8, loadState(8)?RELAY_ON:RELAY_OFF);
         send(msg8.set(loadState(8)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer9.update()) {
      int value9 = debouncer9.read();
    if(value9 == LOW){
         saveState(9, !loadState(9));
         digitalWrite(RELAY_9, loadState(9)?RELAY_ON:RELAY_OFF);
         send(msg9.set(loadState(9)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer10.update()) {
      int value10 = debouncer10.read();
    if(value10 == LOW){
         saveState(10, !loadState(10));
         digitalWrite(RELAY_10, loadState(10)?RELAY_ON:RELAY_OFF);
         send(msg10.set(loadState(10)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer11.update()) {
    int value11 = debouncer11.read();
    if(value11 == LOW){
         saveState(11, !loadState(11));
         digitalWrite(RELAY_11, loadState(11)?RELAY_ON:RELAY_OFF);
         send(msg11.set(loadState(11)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer12.update()) {
      int value12 = debouncer12.read();
    if(value12 == LOW){
         saveState(12, !loadState(12));
         digitalWrite(RELAY_12, loadState(12)?RELAY_ON:RELAY_OFF);
         send(msg12.set(loadState(12)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer13.update()) {
      int value13 = debouncer13.read();
    if(value13 == LOW){
         saveState(13, !loadState(13));
         digitalWrite(RELAY_13, loadState(13)?RELAY_ON:RELAY_OFF);
         send(msg13.set(loadState(13)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer14.update()) {
      int value14 = debouncer14.read();
    if(value14 == LOW){
         saveState(14, !loadState(14));
         digitalWrite(RELAY_14, loadState(14)?RELAY_ON:RELAY_OFF);
         send(msg4.set(loadState(14)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer15.update()){
      int value15 = debouncer15.read();
    if(value15 == LOW){
         saveState(15, !loadState(15));
         digitalWrite(RELAY_15, loadState(15)?RELAY_ON:RELAY_OFF);
         send(msg15.set(loadState(15)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer16.update()) {
      int value16 = debouncer16.read();
    if(value16 == LOW){
         saveState(16, !loadState(16));
         digitalWrite(RELAY_16, loadState(16)?RELAY_ON:RELAY_OFF);
         send(msg16.set(loadState(16)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer17.update()) {
      int value17 = debouncer17.read();
    if(value17 == LOW){
         saveState(17, !loadState(17));
         digitalWrite(RELAY_17, loadState(17)?RELAY_ON:RELAY_OFF);
         send(msg17.set(loadState(17)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer18.update()) {
      int value18 = debouncer18.read();
    if(value18 == LOW){
         saveState(18, !loadState(18));
         digitalWrite(RELAY_18, loadState(18)?RELAY_ON:RELAY_OFF);
         send(msg18.set(loadState(18)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer19.update()) {
      int value19 = debouncer19.read();
    if(value19 == LOW){
         saveState(19, !loadState(19));
         digitalWrite(RELAY_19, loadState(19)?RELAY_ON:RELAY_OFF);
         send(msg19.set(loadState(19)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer20.update()) {
      int value20 = debouncer20.read();
    if(value20 == LOW){
         saveState(20, !loadState(20));
         digitalWrite(RELAY_20, loadState(20)?RELAY_ON:RELAY_OFF);
         send(msg20.set(loadState(20)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer21.update()) {
    int value21 = debouncer21.read();
    if(value21 == LOW){
         saveState(21, !loadState(21));
         digitalWrite(RELAY_21, loadState(21)?RELAY_ON:RELAY_OFF);
         send(msg21.set(loadState(21)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer22.update()) {
      int value22 = debouncer22.read();
    if(value22 == LOW){
         saveState(22, !loadState(22));
         digitalWrite(RELAY_22, loadState(22)?RELAY_ON:RELAY_OFF);
         send(msg22.set(loadState(22)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer23.update()) {
      int value23 = debouncer23.read();
    if(value23 == LOW){
         saveState(23, !loadState(23));
         digitalWrite(RELAY_23, loadState(23)?RELAY_ON:RELAY_OFF);
         send(msg23.set(loadState(23)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer24.update()) {
      int value24 = debouncer24.read();
    if(value24 == LOW){
         saveState(24, !loadState(24));
         digitalWrite(RELAY_24, loadState(24)?RELAY_ON:RELAY_OFF);
         send(msg24.set(loadState(24)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer25.update()){
      int value25 = debouncer25.read();
    if(value25 == LOW){
         saveState(25, !loadState(25));
         digitalWrite(RELAY_25, loadState(25)?RELAY_ON:RELAY_OFF);
         send(msg25.set(loadState(25)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer26.update()) {
      int value26 = debouncer26.read();
    if(value26 == LOW){
         saveState(26, !loadState(26));
         digitalWrite(RELAY_26, loadState(26)?RELAY_ON:RELAY_OFF);
         send(msg26.set(loadState(26)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer27.update()) {
      int value27 = debouncer27.read();
    if(value27 == LOW){
         saveState(27, !loadState(27));
         digitalWrite(RELAY_27, loadState(27)?RELAY_ON:RELAY_OFF);
         send(msg27.set(loadState(27)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer28.update()) {
      int value28 = debouncer28.read();
    if(value28 == LOW){
         saveState(28, !loadState(28));
         digitalWrite(RELAY_28, loadState(28)?RELAY_ON:RELAY_OFF);
         send(msg28.set(loadState(28)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer29.update()) {
      int value29 = debouncer29.read();
    if(value29 == LOW){
         saveState(29, !loadState(29));
         digitalWrite(RELAY_29, loadState(29)?RELAY_ON:RELAY_OFF);
         send(msg29.set(loadState(29)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer30.update()) {
      int value30 = debouncer30.read();
    if(value30 == LOW){
         saveState(30, !loadState(30));
         digitalWrite(RELAY_30, loadState(30)?RELAY_ON:RELAY_OFF);
         send(msg30.set(loadState(30)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer31.update()) {
    int value31 = debouncer31.read();
    if(value31 == LOW){
         saveState(31, !loadState(31));
         digitalWrite(RELAY_31, loadState(31)?RELAY_ON:RELAY_OFF);
         send(msg31.set(loadState(31)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer32.update()) {
      int value32 = debouncer32.read();
    if(value32 == LOW){
         saveState(32, !loadState(32));
         digitalWrite(RELAY_32, loadState(32)?RELAY_ON:RELAY_OFF);
         send(msg32.set(loadState(32)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer33.update()) {
      int value33 = debouncer33.read();
    if(value33 == LOW){
         saveState(33, !loadState(33));
         digitalWrite(RELAY_33, loadState(33)?RELAY_ON:RELAY_OFF);
         send(msg33.set(loadState(33)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer34.update()) {
      int value34 = debouncer34.read();
    if(value34 == LOW){
         saveState(34, !loadState(34));
         digitalWrite(RELAY_34, loadState(34)?RELAY_ON:RELAY_OFF);
         send(msg34.set(loadState(34)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer35.update()){
      int value35 = debouncer35.read();
    if(value35 == LOW){
         saveState(35, !loadState(35));
         digitalWrite(RELAY_35, loadState(35)?RELAY_ON:RELAY_OFF);
         send(msg35.set(loadState(35)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer36.update()) {
      int value36 = debouncer36.read();
    if(value36 == LOW){
         saveState(36, !loadState(36));
         digitalWrite(RELAY_36, loadState(36)?RELAY_ON:RELAY_OFF);
         send(msg36.set(loadState(36)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer37.update()) {
      int value37 = debouncer37.read();
    if(value37 == LOW){
         saveState(37, !loadState(37));
         digitalWrite(RELAY_37, loadState(37)?RELAY_ON:RELAY_OFF);
         send(msg37.set(loadState(37)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer38.update()) {
      int value38 = debouncer38.read();
    if(value38 == LOW){
         saveState(38, !loadState(38));
         digitalWrite(RELAY_38, loadState(38)?RELAY_ON:RELAY_OFF);
         send(msg38.set(loadState(38)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer39.update()) {
      int value39 = debouncer39.read();
    if(value39 == LOW){
         saveState(39, !loadState(39));
         digitalWrite(RELAY_39, loadState(39)?RELAY_ON:RELAY_OFF);
         send(msg39.set(loadState(39)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer40.update()) {
      int value40 = debouncer40.read();
    if(value40 == LOW){
         saveState(40, !loadState(40));
         digitalWrite(RELAY_40, loadState(40)?RELAY_ON:RELAY_OFF);
         send(msg40.set(loadState(40)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer41.update()) {
    int value41 = debouncer41.read();
    if(value41 == LOW){
         saveState(41, !loadState(41));
         digitalWrite(RELAY_41, loadState(41)?RELAY_ON:RELAY_OFF);
         send(msg41.set(loadState(41)));
         }
  }
//-----------------------------------------------------------------------
  if (debouncer42.update()) {
      int value42 = debouncer42.read();
    if(value42 == LOW){
         saveState(42, !loadState(42));
         digitalWrite(RELAY_42, loadState(42)?RELAY_ON:RELAY_OFF);
         send(msg42.set(loadState(42)));
         }
  }
//-----------------------------------------------------------------------
if (debouncer43.update()) {
      int value43 = debouncer43.read();
    if(value43 == LOW){
         saveState(43, !loadState(43));
         digitalWrite(RELAY_43, loadState(43)?RELAY_ON:RELAY_OFF);
         send(msg43.set(loadState(43)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer44.update()) {
      int value44 = debouncer44.read();
    if(value44 == LOW){
         saveState(44, !loadState(44));
         digitalWrite(RELAY_44, loadState(44)?RELAY_ON:RELAY_OFF);
         send(msg44.set(loadState(44)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer45.update()){
      int value45 = debouncer45.read();
    if(value45 == LOW){
         saveState(45, !loadState(45));
         digitalWrite(RELAY_45, loadState(45)?RELAY_ON:RELAY_OFF);
         send(msg45.set(loadState(45)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer46.update()) {
      int value46 = debouncer46.read();
    if(value46 == LOW){
         saveState(46, !loadState(46));
         digitalWrite(RELAY_46, loadState(46)?RELAY_ON:RELAY_OFF);
         send(msg46.set(loadState(46)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer47.update()) {
      int value47 = debouncer47.read();
    if(value47 == LOW){
         saveState(47, !loadState(47));
         digitalWrite(RELAY_47, loadState(47)?RELAY_ON:RELAY_OFF);
         send(msg47.set(loadState(47)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer48.update()) {
      int value48 = debouncer48.read();
    if(value48 == LOW){
         saveState(48, !loadState(48));
         digitalWrite(RELAY_48, loadState(48)?RELAY_ON:RELAY_OFF);
         send(msg48.set(loadState(48)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer49.update()) {
      int value49 = debouncer49.read();
    if(value49 == LOW){
         saveState(49, !loadState(49));
         digitalWrite(RELAY_49, loadState(49)?RELAY_ON:RELAY_OFF);
         send(msg49.set(loadState(49)));
         }
  }
//-----------------------------------------------------------------------

if (debouncer50.update()) {
      int value50 = debouncer50.read();
    if(value50 == LOW){
         saveState(50, !loadState(50));
         digitalWrite(RELAY_50, loadState(50)?RELAY_ON:RELAY_OFF);
         send(msg50.set(loadState(50)));
         }
  }
//-----------------------------------------------------------------------
  
}


void receive(const MyMessage &message) {
  // We only expect one type of message from controller. But we better check anyway.
  if (message.type==V_LIGHT) {
     // Change relay state
     digitalWrite(message.sensor-1+RELAY_1, message.getBool()?RELAY_ON:RELAY_OFF);
     // Store state in eeprom
     saveState(message.sensor, message.getBool());
     // Write some debug info
     Serial.print("Incoming change for sensor:");
     Serial.print(message.sensor);
     Serial.print(", New status: ");
     Serial.println(message.getBool());
   } 
}
