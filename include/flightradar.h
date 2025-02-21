#pragma once

#define APP_TITLE "FlightRadar"
#define APP_VERSION "1.1"

#define WIFI_SSID "FlightRadar"
#define WIFI_PASSWORD nullptr
#define CONFIG_VERSION "1.1"

// Time servers
#define NTP_SERVER_1 "nl.pool.ntp.org"
#define NTP_SERVER_2 "europe.pool.ntp.org"
#define NTP_SERVER_3 "time.nist.gov"
#define NTP_SERVERS NTP_SERVER_1, NTP_SERVER_2, NTP_SERVER_3

// Amsterdam Airport Schiphol
#define DEFAULT_LOCATION "Amsterdam Schiphol"
#define DEFAULT_LATITUDE "52.308601"
#define DEFAULT_LONGITUDE "4.76389"
#define DEFAULT_TIMEZONE "1" // CEST

// Charles de Gaulle International Airport
//#define DEFAULT_LOCATION "Charles de Gaulle International"
//#define DEFAULT_LATITUDE "49.012798"
//#define DEFAULT_LONGITUDE "2.55000"
// #define DEFAULT_TIMEZONE "2" // CEST

// JFK Airport
//#define DEFAULT_LOCATION "John F Kennedy International"
//#define DEFAULT_LATITUDE "40.639801"
//#define DEFAULT_LONGITUDE "-73.7789"
// #define DEFAULT_TIMEZONE "5" // EDT

// LAX Airport:
//#define DEFAULT_LOCATION "Los Angeles International"
//#define DEFAULT_LATITUDE "33.942501"
//#define DEFAULT_LONGITUDE "-118.407997f"
// #define DEFAULT_TIMEZONE "9" // PDT

// Range: .1 degree is approx 10km (0.008998 degrees)
constexpr auto range_latitude = 0.15f;
constexpr auto range_longitude = 0.6f;

// Refresh database every 3 minutes
constexpr auto refresh_flights_milliseconds = 180000ul;
// Allow 4 cycles of each flight
constexpr auto display_cycles = 4;