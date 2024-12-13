{\rtf1\ansi\ansicpg1251\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;\csgray\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs26 \cf2 \cb3 #include <Wire.h>\
#include <RTClib.h>\
#include <LiquidCrystal_I2C.h> \
#include <DHT.h>\
#include <Adafruit_BMP085.h>\
\
LiquidCrystal_I2C LCD(0x27,16,2);\
DHT dht(2,DHT22);\
RTC_DS1307 rtc;\
Adafruit_BMP085 bmp;\
void setup() \{\
  LCD.init();\
  LCD.backlight();\
  rtc.begin();\
  dht.begin();\
  bmp.begin();\
\}\
\
void loop() \{\
  DateTime now = rtc.now();\
\
  LCD.setCursor(0,0);\
  int hr = now.hour();\
  int m = now.minute();\
  int s = now.second();\
  if (hr <= 9 )\{\
  LCD.print("0");\
  \}\
  LCD.print(hr);\
  LCD.print(":");\
  if (m <= 9 )\{\
  LCD.print("0");\
  \}\
  LCD.print(m);\
  LCD.print(":");\
  if (s <= 9 )\{\
  LCD.print("0");\
  \}\
  LCD.print(s);\
  \
  LCD.print(" ");\
\
  float t = dht.readTemperature();\
  LCD.print(t);\
  LCD.print("*C");\
\
  LCD.setCursor(0,1);\
  long p = bmp.readPressure();\
  LCD.print("P");\
  LCD.print(p);\
\
  LCD.print(" ");\
\
  float hum = dht.readHumidity();\
  LCD.print("H");\
  LCD.print(hum);\
\
  delay(1000);\
  LCD.clear();\
\}}
