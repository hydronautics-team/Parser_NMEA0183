
                              GPS NMEA monitor for Windows.

                                    NMEA.EXE Ver3.98

                                   Jul. 2023 (C)4river
                               http://4river.a.la9.jp/gps/

1. Summary.

 1)Main features.
   * A NMEA sentence is decoded and it displays intelligibly for real time.
   * Sentence of specification and the sentence which is not supported can be displayed with the text.
   * The sentence which has checksum error and the like can be displayed with the text.
   * Graphical representation Sky-plot and SNR.
   * It displays the mean value of latitude and longitude and altitude.
   * 2drms can be calculated and displayed.
   * Optional command can be forwarded to GPS.
     Calculating checksum automatically, it adds (as a calculator of checksum it can utilize).
     It can record the command which it forwards every type of GPS up to 100, can reuse.
     Also transmission of the binary code is possible.
     Checksum is added to SiRF, UBX and MTK binary command automatically.
   * The NMEA data which it receives can be retained in the text file.
   * It can play back can display the NMEA log file.
     Playback fast forward and step playback being possible, playback of reverse direction is possible.
     The playback point can be configurated optionally with the drag of the track bar.
     The playback data can be output to the serial port and TCP port.
   * The UTC time of GPS and time difference of the personal computer can be displayed in real time.
   * Change of UTC time of RMC sentence is monitored, the report is displayed in when it fluctuated.
     It can monitor Missing the sentence.  and leap second correcting after the cold starting.
   * The elapsed time which fix after sending out the GPS command of Cold start etc., can be displayed.
   * GSA sentence can display up to 16 satellites.
   * GSV sentence can display up to 24 satellites.
   * The NMEA sentence can be received as RS-232C, Location API and TCP client.
   * It can output the received NMEA sentence to RS-232C and TCP port.
   * Capable of receiving RTCM3 streams (RTK positioning is possible with compatible GPS).
   * A clock of a PC can be corrected cyclically by a GPS.
   * Because a multiple start is possible, two or more GPS can be monitored at the same time.
   * Simple display of unsupported sentence is possible with "Sentence viewer" form.
   * Indicatory language can designate change as Japanese and English.

 2) Content of ZIP file.
    NMEA.exe       : Executable file.
    NMEA_Eng.ini   : English version configuration file model.
    NMEA_Jp.ini    : Japanese version configuration file model.
    ReadMeEng.txt  : English version manual.
    ReadMeJp.txt   : Japanese version manual.

 3) Install.
    In installation just copies executable file "NMEA.exe" and "NMEA_Eng.ini" in the suitable folder.
    When it executes first time, "NMEA_Eng.ini" is copied onto "NMEA.ini" ( Refer to Note4)  ).
    Because registry is not used, it can Un-install with only the deletion of "NMEA.exe", "NMEA_Eng.ini" and "NMEA.ini".

    Note1) When the previous version is being used, please merge the GPS command of "NMEA_Eng.ini" into "NMEA.ini" if needed.

    Note2) Administrator is necessary for a correction of the time after Windows Vista.
           When "Run this program as an administrator" check is inserted with the executable file or the property of shortcut,
           it reaches the point where being promoted dialogue to Administrator is indicated in when starting.

    Note3) When installed under "C:\Program files" the "NMEA.exe" in "Windows Vista" or later.
           "NMEA.ini" is copied onto  user's "VirtualStore" folder.
             Ex) In the case of "C:\Program files\NMEA\NMEA.exe"
                 C:\Users\[User name]\AppData\Local\VirtualStore\Program Files\NMEA\NMEA.ini

    Note4) If GPS is a USB connection requires the installation of device drivers.

 4) Operating condition.
     Operational OS:      Windows 11, Windows 10, Windows 8.1, Windows 7, Windows Vista, Windows XP.
     RS-232C baud rate:   300 to 460,800bps.
     RS-232C port number: 1 to 99.
     Handling sentence:   GGA, RMC, GSA, GSV, GLL, VTG, ZDA, GNS, GST,
                          DTM, HDG, HDM, HDT, SMD, QZQSA, QZGSV.
     Note) The display of "DGPS age" and "DGPS-ID" of a GNS sentence is omitted
           (It is possible to refer by the hint display).


2. Option setting (Option).

   The option setting form opens with "Option" -> "Option setting".

   * GPS receiver.
     It selects the GPS receiver and it sets parameter.

     GPS name.
       The GPS receiver which you use is selected.
       In case of the GPS receiver which is not to the list, inputting GPS receiver name and other parameters,
       when it clicks "OK" button, it can add.
       Alias specification is possible, if it inputs with the form of <Alias>= <Real name> and the "OK" button is clicked.
         Example) VGPS-900=V-900
                  Selection of "VGPS-900" uses the data of "V-900".

       Type name of registered.
         Not Selected : The for not yet register type (no GPS command)
         BT-Q1000     : Qstarz International BT-Q1000
         BT-Q1000X    : Qstarz International BT-Q1000X
         BU-353       : GlobalSat BU-353 (SiRFstarIII)
         Gms-b6       : GlobalTop Gms-b6
         Gms-g6a      : GlobalTop Gms-g6a
         Gms-g6       : GlobalTop Gms-g6 = Gms-g6a
         Gms-g9       : GlobalTop Gms-g9 = Gms-g6a
         GNS 2000     : Global Navigation Systems GNS 2000
         i-Blue747A+  : TranSystem i-Blue747A+
         LEA-6T       : u-blox LEA-6T
         LEA-M8F      : u-blox LEA-M8F
         LEA-M8T      : u-blox LEA-M8T
         M-1000       : HOLUX Technology M-1000
         M-241        : HOLUX Technology M-241
         M-241 Plus   : HOLUX Technology M-241 Plus
         NEO-M8N      : u-blox NEO-M8N = LEA-M8F
         NEO-M8T      : u-blox NEO-M8T = LEA-M8T
         SiRF(general): SiRF corporation make GPS general purpose
                        (Only selection of output sentence and cold & warm start)
         V-900        : Columbus V-900
         VGPS-900     : VISIONTAC VGPS-900 = V-900
         ZED-F9P      : u-blox ZED-F9P
         Broadcom API : Location API

     Start sentence.
       The Start sentence is used for delimiter detection when calculating the average value.

     Time synchronization (Sync Adj).
       The number of compensation seconds for adjusting a time synchronous delay is specified (0 to ±5.0 second).
       Inputs the lag time of time output of the GPS receiver at the second unit (The input below a decimal point is also possible).
         Note1) When the output timing of a GPS receiver does not synchronize with UTC time and it does not output under a second to UTC,
                the correction for less than ±0.5 seconds is impossible.
                Furthermore, since timing changes by the change in the number of output sentences,
                or the number of the characters in a sentence, a precise synchronization is not expectable.
         Note2) When using the Location API, since the GPS and Location API are asynchronous,
               it is not possible to make the correction error less than ±0.5 second
               (When update is 1 second interval).
       "Re." CheckBox
           When checked, Time synchronization time(UTC) and correction amount will be reported.
           It is displayed in the "Error sentence" part of "GPS Command/Report" form.

     "DEL" button.
       Information of the GPS receiver which presently is selected everything is deleted from the setting file (NMEA.ini).

     Exception.
       When select the "Not supported & not Private only" of "GPS Command/Report", the sentence which excludes indication is appointed.
       It can utilize in order to make the indication of status and the like when initializing easy to see.
       When multiple sentences are appointed divide with ",", there is no space with describe.
         Ex.) $GPBOD,$GPRMB,$GPRTE,$PGRME,$PGRMM,$PGRMZ

     GNSS mode.
       The NMEA mode of the GPS receiver is specified.
         Auto:     It judges automatically.
         GPS onry: It fixes to the GPS mode.
         +GLONASS: It fixes to the GPS+(GLONASS or Galileo or BDS) mode.

     SNR graph.
       The indicatory range and threshold level in the SNR bar graph it appoints.
       This is used only in order to make the graph of SNR easy to see.
       Threshold is indicated with the dotted line and uses in the standard of reception possible level
       (does not indicate the value of 0).

   * Option.
     Other option items are set.

     Sky-plot by linear:   When check is removed, the cosine graduation is used for angle of elevation.
     Ignore Check-Sum:     When it checks, checksum error is ignored.
     d m.m:                The Latitude and Longitude of GPS output is indicated with format of original "Degree, Minute".
                           Resolution of latitude longitude output (the number of output below the decimal point of minute) you can verify.
     d m s.s:              The Latitude and Longitude of GPS output is converted to "dd mm ss.sss" format and displayed.
     d.dd:                 The Latitude and Longitude of GPS output is converted to "dd.dddddd" format and displayed.
     Automatic re-origin:  Starting point renewal is executed automatically when a mean position leaves the origin more than 20% of ranges.
     Hint display:         When check is removed, it stops doing hint indication.
                           When hint indication is troublesome, please remove check.
     UTC fluc.(RMC):       Warning value of UTC interval fluctuation between RMC sentence (sec.).
     Same time alarm:      When the same time continues by the RMC sentence, it reports.

   * Input port.
     Condition setting of a serial communication、Lcation API and TCP host.
     When "LocAPIn" is selected as a port number, it becomes in the Location API mode (n=0,1,2, ...) and when "TCP" is selected,
     it becomes a TCP client mode.

     Serial communications mode.
       Port:    Number of the serial port which connects the GPS receiver is set.
       Baud:    Transmission speed of the serial port (baud rate) it sets.
    Re-connect: When it checks, automatic re-connection of a serial port.
                A serial port is among open, and when a non-signal state continues,
                re-opening of a serial port is performed.
                A connection cycle follows a setup of "ReOpen" of "GPS Command/Report" Min: 5Sec).
                It is useful to recovery of the broken link of Bluetooth.
       Scan:    The serial port where GPS is connected is searched.
                After appointing transmission speed, it clicks "Scan" button.
                When the "Abort" button is clicked, search is discontinued.
                When the "Retry" button is clicked, search is reexecuted.
                When GPS is not found, please try enlarging waiting "Wait" (1.5 to 5 recommended).
                When the "Auto connecting" is checked, it will automatically connect to the first found port.
                 Note1) The maximum baud rate can be specified by "MaxBaud" in the [ComPort] section of the configuration file (default is 115200 bps).
                 Note2) It can detect virtual serial port such as BlueTooth adapter regardless of transmission rate.
   "Op" button: Opens the advanced options setting form.
                Click the "Default" button to restore the default settings.
                Xon/Xoff characters are entered in decimal code (In case of hexadecimal notation, '0x' is prefixed).
                When connecting to GPS it is not necessary to change the default setting.

    TCP communication mode.
      TCP Host: IP address is specified.
                  Ex1) 192.168.1.100
                  Ex2) localhost
      TCP Port: The port number is input by the decimal number (In case of hexadecimal notation, '0x' is prefixed).
                  Note) "BoundIP" and "BoundPort" is possible to set by the [TCP] section of the configuration file "NMEA.ini".

    Location API mode.
      GSA,GSV Full: All satellite data other than GPS is also displayed and output.
                    When unchecked, GSA and GSV sentence will display and output only GPGSA and GPGSV.
                    Note) When "GSA,GSV Full" is OFF.
                          In this case, NMEA sentence will be generated from the numerical data of Location API,
                          even if NMEA sentence is output from Location API.
                          The display and output sentences are GPRMC, GPGGA, GPGSA, GPGSV only, not GNGSA, GLGSV.

                    Note 1) GPS command can not be sent.
                    Note 2) GPS and Location API are asynchronous, so "Time lag of GPS to PC" display is not accurate.
                    Note 3) When Location API does not return NMEA sentence, It generate NMEA sentence from latitude, longitude, altitude.
                            1) It output only GGA,RMC,GSA and GSV sentence.
                            2) The GSA Mode display is "3D fix" if the number of satellites is 4 or more and VDOP is 10 or less.
                            3) The display content of GSA, GSV may be different from the original NMEA.
                            4) If the number of visible satellites is small, separation between GPS and other satellites may be wrong.
                    Note 4) If the Privacy setting Location is off, it will not appear in the pull-down list.

   * Output port
      Serial: When checked, it outputs the received NMEA sentence to the serial port.
              The same port as the Input-port is invalid.
        Port:   Set the serial port number.
        Baud:   Sets the communication speed (baud rate) of the serial port.
        UBX:    If checked, only UBX data is output to serial port.
                It is used when NEO-D9C or NEO-D9S is connected.
        Cmd:    If checked, the command string from the serial terminal will be sent to GPS.
        "Op" button: Opens the advanced options setting form.
                     Xon/Xoff characters are entered in decimal code (In case of hexadecimal notation, '0x' is prefixed).
                     Click the "Default" button to restore the default settings.
        Note) If the transmission buffer is insufficient, discard the data and display the following message
              in the "Error Sentence" section of the "GPS Command/Report" form.
                "* [Output port] Serial port transmission baud rate is insufficient!!"
              In this case increase the transmission Baud-rate.

      TCP:   When checked, it outputs the received NMEA sentence to the TCP port (TCP host).
        Port:  Sets the TCP port number (In case of hexadecimal notation, '0x' is prefixed).
        UBX:   If checked, only UBX data is output to TCP port.
               It is used when NEO-D9C or NEO-D9S is connected.
        Cmd:   If checked, the command string from the TCP terminal will be sent to GPS.

   * Local time.
     The data in order to convert UTC to the local time is set.

     Time diff:  The time difference of UTC and the local time is set (in Japan 09:00:00).
     Short name: Abbreviation of the time zone is set.
     Auto:       When it checks, the setting of OS is acquired automatically.
                 An abbreviated name pickup and creates only a capital letter from the
                 time zone name of OS (Only when a time zone name is returned with an English character).
                 It specially converts it into "JST" for "Tokyo Standard Time" or "東京 (標準時)" the Time zone name.

   * Printing and copy.
     Popup menu - it indicates with the right click of the mouse, can copy to printing and the clipboard of form image.


3.  Printing and copy (Main Form)

   "File" -> "Print" the Form picture the hard copy is done in the printer.
    It is copied to also the clipboard. The paper of A4 size is necessary.

   "File" -> "Copy" image of Form is copied in the clipboard.


4. Record of data/playback.

   * Playback indication of GPS data.
     It replays the data file which was saved in the record and it displays data.

     When file name is appointed with "File" -> "Start Replay",
     it becomes log playback mode and the track bar and the operation button are appear.
     It ends log playback mode in "File" -> "Stop Replay".

     When ">" the button is clicked, playback is started.
     When starting the playback output interval of the original data it plays back unrelated always at 1 second interval,
     but refresh rate at each time the ">" button is clicked becomes quick.
     Point of playback is indicated with the track bar,
     When the track bar the drug is done with the mouse, the playback point can be modified.

     When "+" button is clicked, just 1 data replay in forward direction, when "-" the button is clicked,
     just 1 data plays back in opposite direction (step playback).
     When "||" button is clicked, playback is pause.

     The drug & drop doing the log file in main form, it starts log playback.
     However, during of log recording and while playing back are ignored.

   * Record of GPS reception data.
     Raw data from GPS is recorded in the text file.

     Appointing file name with "File" -> "Start Recording" it starts record.
     When extension name is abbreviated, ".nmea" is added.
     Record is stopped by "File" -> "Stop Recording" and a file is closed.

     Note) When extension name of default is modified,
           Setting file "NMEA.ini" the part of "NmeaExt=.nmea" of the [Option] section is modified.


5. GPS Command/Report.

   The GPS command/report indicatory window opens in the "Tool" -> "GPS Command/Report".
   The drug doing the window corner, it can expand and reduce the size of the window.

   * GPS command transmission (GPS command).
     Optional command is send to the GPS receiver.
     Because it has automatic operation addition of checksum and display function, checksum calculation is unnecessary.

     Inputting GPS command, when it clicks "Send", it transmits the command character string to the GPS receiver,
     that command is registered to the drop down list.
     It can record every GPS receiver to 100 commands.

     When "Delete" button is clicked, the GPS command which it is selective is deleted from record in "NMEA.ini".

     To include control character to GPS command, the escape sign "\" continuing,
     hexadecimal character string 1 or 2 columns it appoints (0-9, A-F, a-f).
     "\" as for itself "\\" , "|" as for itself "\|", ";" as for itself "\;" The way you describe.
     When the space is included "\ " or "\20" you describe.

       Ex.) Input character string and output (hexadecimal notation) correspondence.
            a\12b -> 61 12 62   x\ay -> 78 0A 79   x\yz -> 78 79 7A
            a\012 -> 61 01 32   a\\b -> 61 5C 62   a\|b -> 61 7C 62
            \* Test \* -> * Test *

     If the beginning of command A0 A2 then regard as SiRF binary command, when checksum is abbreviated,
     checksum and End-sequence(B0 B3) are added automatically.
     If the beginning of command B5 62 then regard as UBX binary command, when checksum is abbreviated,
     checksum are added automatically.
     If the beginning of command 04 24 then regard as MTK binary command, when checksum is abbreviated,
     checksum are added automatically.

     Anything after the semicolon(;) is regarded as a comment and ignored.
       Exception:
        1) Baud rate after the GPS command forwarding can be specified to the comment part
           ( \B9600\ The way numerical value is surrounded with "\B" and "\" ).
        2) If \PMTK335\ is written in the comment part, the RTC time of MediaTek chipset is set to the current time.
           Note 1) The GPS time advances several seconds until the leap second correction is completed (up to 12 minutes after the fix).
           Note 2) Re-setting may be required due to battery depletion.

     When sending the command from the terminal to the GPS, "[ " is appended to the top and displayed.
       Ex.)  [ $PMTK101*32__

     Concerning forwarding and CheckSum addition control of multiple commands later description
     "11. About the setting file" it is reference.

   * Option.
     Fix time: It displays the elapsed time which fixs after sending out a GPS command.
               When "RTCM source" is turned on, the elapsed time until RTK fix is displayed.
                 Note) RTK fix time varies with the period and timing of RTCM3 message 1005 (or 1006).
     Chk-Sum:  When checksum is not included in command, checksum is added.
               If the end of a NMEA command character sequence is "*", CheckSum is not added,
               but "*" is deleted and sent out.
     Cr:       The Carriage-return code is added to GPS command (usually checks).
     Lf:       The Line-feed code is added to GPS command (usually checks).

   * Indication of non support sentence and selective sentence.
     Only the sentence which is not supported, only the sentence which is selected,
     selecting all sentences, it can indicate.

     Indicatory contents are selected with combo box of the left top.
       Display off:            The display update is stopped.
       Not supported only:     Only the sentence which is not supported with the NMEA monitor is indicated.
       Not supported &
       not private only :      Except for the "Exception" sentence specified as the option,
                               it displays from the above-mentioned display.
                               (Indication of status when initializing etc., can be made easy to see).
       Display all sentences:  All reception data are indicated.
       Only the corresponding sentence is displayed except the above.

       Become a "Display off" with one click of the "off" button, the button will change to "ret.".
       If you click on the "ret." To return to the previous item.

     Since the receiving sentence will be indicated by hexadecimal if the "Hex" check box is checked,
     the check of the binary code of an alternative representation can be performed in a text mode (Displayed data does not change).
     When "Time" check box is checked, adding UTC time to the forefront of reception sentence, it indicates.
     When "Cmd" check box is checked, the command transmission string is displayed.

      The first of line one character: "N" shows does not support, "?" shows an unknown sentence, and "<" shows the transmission string.

     When indication exceeds 30KBytes, it keeps being deleted from old line.

     A mouse cursor is put on a boundary with an error sentence display part,
     and if cursor form drags in the position which changed to the up-and-down arrow,
     the height of a display domain can be adjusted.

       Note) The time of the head of a line is generated and added from GPS data.
             When SiRF binary is received, "SiRF-Bin" it indicates in place of time.
             When UBX binary is received, "UBX-Bin" it indicates in place of time.
             When MTK binary is received, "MTK-Bin" it indicates in place of time.
             When RTCM3 binary is received, "RTCM3-Bin" it indicates in place of time.

   * Error sentence.
     Only the sentence which has error is indicated.
     In addition the reception data is indicated in during playback log transmitting.

     When "S" is attached to the head of a line, the sentence of a checksum error is expressed.

     Since the receiving sentence will be indicated by hexadecimal if the "Hex" check box is checked,
     the check of the binary code of an alternative representation can be performed in a text mode (Displayed data does not change).
     When "Time" check box is checked, adding UTC time to the forefront of reception sentence, it indicates.

     UTC time and this time of RMC sentence immediately before are compared.
     If above the value which difference of the last time specifies with option as description below alert warning is displayed
     (is above differential time 60 second, it does not output).
     A warning output is not performed if specification of "UTC fluc.(RMC)" of an option is zero.
       * UTC step changed :   1.00 to   2.00Sec.  UTC(RMC)=12:34:56.789

     When indication exceeds 30Kbytes, it keeps being deleted from old line.

       Note) The time of the head of a line is generated and added from GPS data.

   * RS-232C.
     A status display and control of RS-232C are performed.

     DTR, RTS: When it checks, the signal line which corresponds is made active.
               Immediately after of the RS-232C opening is always active.

     DSR, CTS,
     CD, RING: When being active, it indicates with red (in every 1 second renewal).

     F.Er:     Framing error.
     P.Er:     Parity error.
     O.Er:     Buffer overrun Error.
     NoSIG:    Com. port input more signalless 2 to 3 seconds.

     Function of push button.
       Open:   Open the receiving port.
       Close:  Close the receiving port.
       ReOpen: Close the receive port and reopen it after the specified time.

   * Printing and copy.
     Popup menu - it indicates with the right click of the mouse, can copy to printing and the clipboard of Form image.
     Also printing and the copy of the corresponding text can do with the right click on combo box and the memo component.


6. Indication of Track and averaging value(Average display).

   The mean value of Latitude Longitude, Altitude and Track can be indicated in "Tool" -> "Average display".
    To exclude the initial drift, the first three times immediately after the fix will be delayed to start.
    The number of delays can be changed in "AveDelayCount" in the configuration file [Option] section.

   * Indication of average value.
     If the "HDOP" radio button is checked, the data below the specified HDOP will be averaged
     (if the specified value is blank, the data will be averaged without the HDOP limit).
     IIf you check the "Aggregate only RTK or PPS fix" radio buttons, only RTK fix or PPS fix data will be averaged.
     Click the "Start" button to start averaging, and click the "Stop" button to stop averaging.
     When the GSA sentence is outputted, only the data at the time of 3-dimensional positioning is used for an average altitude.
     "The number of times of an average of latitude longitude" and "the  number of times of an average of altitude" are
     respectively displayed on the column of "Count".
     2drms display the theoretical value of the radius of the circle which is horizontal position accuracy and
     is supposed that 95% of all positioning points are included
     (It is proper, but if determination it does not do in position fixing, there is no meaning).
     Because it calculates elapsed time from the data of GPS, even in at the time of log playback it can indicate correctly.
     When "Reset" button is clicked, value is initialized.

     Note) Please observe the measurement of 2drms for about 12-24 hours in open sky.
           If the static navigation mode cannot be turned off, 2drms cannot be measured.
           Measurable quantity fluctuates with influence of measurement region and condition of the satellite etc.

   * Indication of Track.
     With "Track" the locus which designates the position when starting averaging as standard is displayed with the dot.
     When "Average" tab is clicked, change of mean value is indicated with Track.
     It cannot indicate with polar nearby high latitude area correctly.
     To be offered by the one for drift verification of GPS output mainly, as for the indicatory range the ±0.1 to ±200 m.
     Click the "Origin" button to set the current average value to the starting point and continue averaging
     (Points are saved by logarithmic compression to save storage space, so the resolution is non-linear.
     Therefore, each time you execute "Update Origin", the trajectory is deformed in proportion to the moving distance.)
     When "Rreset" button is clicked, also Track is cleared.

     When the mouse the right is clicked, popup menu - is indicated.
       Clear Track:       Clearing present Track, only new Track indicates.
       Track by 1 pixel:  It indicates Track with 1 pixel.
       Track by 4 pixels: It indicates Track with 4 pixels.
       Print Form :       Image of Form is printed in the printer.
                          It is copied to also the clipboard.
       Copy Form:         Image of Form is copied in the clipboard.
       Copy Text:         Text of Form is copied in the clipboard.

     The resolution of the graph display is about 0.26cm in the range of 10cm.

   * Display the difference between the average value and the true coordinates.
     Check the checkbox "Difference between true coordinates and average".
     Enter your exact latitude/longitude and altitude in the "True coordinates" group box.
     The latitude and longitude can be entered in the format of "dd.ddddd", "dd mm.mm mm", "dd mm ss.ssss".
     Click the "Start" button to display the difference from the observed average value in real time.
     "Angle" shows the direction from true coordinates to average coordinates (North=0°, East=90°, South=180°, West=270°).

     Clicking on the "Ave/cur" string in the upper right corner changes it to "ave/Cur" and
     displays the difference between the current value and the true coordinates (toggle).
        Ave/cur : Displays the difference between the average value and the true coordinates.
        ave/Cur : Displays the difference between the current value and the true coordinates.

     Clicking "∧" hides the "True Coordinates" group box, and clicking "∨" redisplays it.

       Note 1) For detailed analysis, please use the "Statistics Utility", which is a post-processing tool.
               http://4river.a.la9.jp/gps/index.htm#005
       Note 2) Vertical error includes geoid height error of the GPS receiver.
               To get an accurate geoid height offline, use the "Geoid Correction Utility".
               http://4river.a.la9.jp/gps/index.htm#007

   Restriction item.
     Limitation when GNGNS sentence is not output.
     1) When GGA sentence is not output, it cannot averaging MSL altitude,
        (In order to substitute a RMC sentence).
        In this case HDOP of GSA sentence is used, but when either GSA sentence is not output,
        ignoring the appointment of HDOP, it averaging.
     2) When neither of GGA and RMC is output, it cannot indicate mean value and Track.


7. Time correction of personal computer (Clock synchronization).

   When the GPS receiver Fix and RMC or ZDA sentence is output,
   The calendar timer of the personal computer is adjust with "Tool" -> "Clock synchronization" making use of the GPS time data.
   When the correction quantity exceeds 30 minutes, verification dialogue is indicated.
   It is necessary to execute it by manager's account.

    Note 1) The time lag of the UTC output of a GPS receiver is set as "Sync Adj" of the "GPS receiver" of an option,
            and the time of PC can be revise.
    Note 2) When the cold start or long time it is not used, depending upon the GPS receiver,
            immediately after the GPS fix, there are times when it cannot revise leap second just.
            In this case after 13 minute after the Fix or more elapsing, please perform.
    Note 3) When RMC is not output, for deciding the determination state, GGA or GLL sentence is necessary other than ZDA.
    Note 4) In Windows Vista and later, you must have administrator privileges to modify the time.
            When "Run this program as an administrator" check is inserted with the executable file or the property of shortcut,
            it reaches the point where being promoted dialogue to Administrator is indicated in when starting.
    Note 5) Time correction can be performed periodically by "/T" Command line option.
              Ex) NMEA.exe 10/T   Time is adjusted at intervals of ten minutes.
    Note 6) When using the Location API, since the GPS and Location API are asynchronous,
            it is not possible to make the correction error less than ±0.5 second.
    Note 7) When using the Location API via "u-blox GNSS Sensor Device Driver".
            Since the Location API uses the PC time as the GPS time stamp,
            it can not be used for time correction (Please use serial port connection).

    Caution) For GPS that does not hold the leap second correction value.
             In this case the time after Fix is 1-18 seconds faster (as of Jan. 2022).
             Please to execute after the elapse 12 minutes or more after GPS Fix (need for ephemeris reception).
             Usually the error as the old manufacturing date GPS will increase.
             Be careful because the leap second correction value by the cold-start and power-off might be reset.
             This phenomenon can be seen in a change in the "Time lag of GPS to PC" or "UTC moved back" report.

    Reference) How to obtain the "Sync Adj" value when using the Location API.
             Start the NTP client application and set it to the cyclic correction mode with a cycle of about 5 minutes.
             Wait till 12 minutes elapse after GPS is FIXed.
             Open the "Time lag of GPS to PC" form in "Tool"->"Time lag of GPS to PC" and check "Statistics" Check box.
             Wait until the difference between "Max(S)" and "Min(S)" becomes about 1 second (it may be necessary for over 40 minutes).
             The "Sync Adj"  value is obtained with -(Max+Min)/2.
             Example) When  Max=-0.2 Min=-1.2
                      "Sync Adj" = -((-0.2)+(-1.2))/2 = -(-1.4/2) = 0.7


8. Indication of differential time of the GPS UTC and PC-time and sentence reception time.

   Form is opened in "Tool" -> "Time lag of GPS to PC",
   differential time of the UTC time of GPS and personal computer time (GPS time - PC time),
   reception time of sentence is indicated in each sentence in real time.
   Please use after synchronizing the clock of a personal computer with a time server etc.,
   (It is desirable that it can synchronize in the accuracy for less than 0.1 second).
   "Sakura Watch network time client" by Mr. UNO Shintaro is recommended if it uses it in a Japanese mode.
      http://www.fureai.or.jp/time/sakuraw.html
      http://www.vector.co.jp/soft/dl/win95/personal/se050672.html

   Since it has the influence of the number of serial data bytes,
   internal processing delay, etc., Under a second is regarding it as a rough standard.
   Since timing changes also in the existence of a GSA, GSV sentence, when the sending-out
   sequence of a NMEA sentence can be specified like i.Trek Bluetooth GPS,
   it will be good to specify GSA and GSV to be an end.

   When the "Statistics" check box is checked, the maximum value,
   minimum value and the mean value of the time difference are displayed.
   The display is discontinued when the check is removed and statistics are clear.

   Popup menu - it indicates with the right click of the mouse, can copy to printing and the clipboard of Form image.

     Note 1) When there is a differential time above ±12 hours, differential time cannot be indicated correctly.
     Note 2) If "Statistics" check box is off and Form is closed when unnecessary,
             Unnecessary calculation processing is not performed.
     Note 3) Usually, resolution of the calendar timer with the Windows machine is approximately 15.6mS,
             but there are times when occurs the processing delay of several dozen mS or more with such as task waiting.
     Note 4) Depending on the device driver there may be a delay.


   Insert the reception timing error of RMC sentence in NMEA log if you check the "Logging" check box.
   You can set the lower limit of the reception timing error output in "IgnoreRange" of
   [TimeErrLogging] section of the configuration file "NMEA.ini" in seconds.
   If "IgnoreRange" is zero output with no limit.

     Output format:  $GPTXT,01,01,07,RMC delay,<RMC time(UTC)>,<time error(sec.)>,<IgnoreRange(sec.)>*<Sum>
     Output example: $GPTXT,01,01,07,RMC delay,2016/06/10 09:05:01.400,-0.125,0*6D

     Note 1) It is necessary to calibrate the time of the PC using NTP servers regularly.
             If you do not calibrate the PC clock to cyclic, it will record the drift of your PC clock.
     Note 2) Received time (UTC) is determined by the <RMC time(UTC)> - <time error(sec.)> .


9. Indication of reception data.

   * Data display of each sentence.

     Whenever it receives data, a data display is updated, and the title background of corresponding sentence blinks.
     Error status is indicated in the right side of sentence title.
       E: Checksum error.
       N: There is no checksum.
       L: Number of items is excessive.
       S: Insufficient number of items (Except the GSA sentence).

     GSA and GSV sentences of GPS are displayed in the left pane.
     GSA and GSV sentences of GLONASS, Galileo, BeiDou are displayed in the right pane.
     Maximum number of sentences that can be displayed.
       GSA sentence other than GPS:  5 types.
       GSV sentence of GPS:          5 types.
       GSV sentence other than GPS: 11 types

     DTM, HDG, HDM, HDT, SMD, GST sentence becomes change indication (simultaneous indication is not possible).
     When the letter of "D,G,M,T,S,R" above the left is clicked with the mouse, indicatory contents are changed.
       D: GPDTM, G: HCHDG,  M: HCHDM, T: HCHDT, S: IISMD, R: GPGST
     Clicking the letter "V" in the upper left corner with the mouse opens the unsupported sentence display window.

     Display of selection of coexistence sentence.
       When multiple GSA or GSV sentences coexist,
       you can select the display sentence by clicking the character displayed in the upper left of the display frame.
         Selection character of GSA2.
           L: GLGSA, N: GNGSA, A: GAGSA, B: BDGSA, Q: GQGSA,QZGSA, q: QZQSA, I: NavIC(IRNSS)
           Displays the "System ID" numerically at the top of the selection character.
         Selection character of GSV1, GSV2.
           P: GPGSV, L: GLGSV, N: GNGSV, A: GAGSV, B: BDGSV, Q: GQGSV,QZGSV
           Displays the "Signal ID" numerically at the top of the selection character.

     Correspondence of sentence sign and characters on screen line.

       GGA.
         GPS Quality Indication = 0: No fix (Invalid)  1: SPS fix
                                  2: DGPS fix          3: PPS fix
                                  4: RTK fix           5: Float RTK fix
                                  6: Estimated         7: MANUAL input
                                  8: Simulator

       GLL, RMC.
         Status = A: Valid       V: Void

       VTG.
         True Course     = numerical value is blank, sign "T" is not indicated.
         Magnetic Course = numerical value is blank, sign "M" is not indicated.

       GSA.
         2D/3D mode = A: AUTO        M: MANUAL
         Mode       = 1: No fix      2: 2D fix    3: 3D fix

      The mode of VTG, GLL, RMC, GNS.
         A: Autonomous   (Auto.)     D: Differential (Diff.)   E: Estimated (Est.)
         M: MANUAL input (Manual.)   S: Simulator    (Sim.)    N: No fix    (No fix)
         P: Precise      (Precise)   F: Floart RTK   (FRTK)    R: RTK       (RTK)

      Each sentence commonness.
        When numerical value such as altitude and speed is blank, unit symbol "M, K, N" and so on it does not indicate.

    Note) Depending on a GPS receiver, the altitude from WGS-84 ellipse to a receiver is output to the
          MSL altitude of a GGA sentence (Especially in the case of the receiver which does not display geoid quantity, it is careful.).
          In this case geoid height subtraction those which are done become altitude from indicated value.

          Moreover, although an MSL altitude is outputted in TOKYO datum,
          keep in mind that there is also a GPS receiver which outputs the altitude from WGS-84 ellipse to a receiver in WGS-84 datum.

          Concerning the geoid height of Japan the Web page of national geographical institute "Shape of the earth is measured",
         Please refer to
            http://vldb.gsi.go.jp/sokuchi/shape.html
          Ref.) The geoid of Tokyo stations height has become approximately 36.6m.

   * Position indication of satellite (Sky plot).

     GSV sentence is necessary in the indication of Sky plot.
     A GSA sentence is required to indicate the satellite in use by classification by color.

     Display position.
       As for azimuth 0 degree as for "N", and 90 degrees as for "E", and 180 degrees "S", and 270 degrees correspond to "W".
       It converts angle of elevation to the distance of radial, the center 90 degrees,
       circle outside corresponds to 0 degrees.
       Circle inside is angle of elevation 60 degree and 30 degrees.

     Indicatory mark.
       Satellite number indicatory mode.
         A satellite number is displayed. The used satellite in GSA is expressed as the background of  Red(fixed)/Yellow(non fixed).
       SNR indicatory mode.
         It indicates SNR, Red(fixed)/Yellow(non fixed) indicates the use satellite with GSA with the background.
         SNR with indicates the satellite of blank "+".
       Note) GLONASS is displayed in a blue letter.

     Indication of direction.
       In outside circle travelling direction is indicated with the dot of blue.

   * The indication of SNR.

     SNR each of satellite is indicated in the bar graph.
     The bar of a satellite in use is painted out black(depending on GSA sentence).
     Display order follows a GSV sentence.
     Numerical value expresses a satellite number (SV#).


10. Receiving RTCM3 stream.
    Note1) RTCM2 messages are not supported.
    Note2) The settings of "Ntrip", "TCP" and "Serial" cannot be changed when the toggle switch is "On".
    Note3) The "RTCM source" form cannot be opened with the "Location API" connection.

    Open the setting form by "Tools"-> "RTMC source".
    The form size can be scaled by dragging the outer frame.

    Specify the connection destination in the "Source" combo box.

    Clicking on the toggle switch turns it "On" and receives the RTCM3 stream and sends it to the GPS receiver.
    The positioning status and fix time (when "Fix time" of "GPS Command/Report" form is checked) are displayed in the upper center of the form.
    When an RTCM3 stream is received, the distance to the base station is displayed in the upper left,
    and the number of bytes transferred is displayed in the upper right.
      Note 1) If the GPS port is not open, it will wait for reception.
      Note 2) If "RTK fix time" in the "GPS Command/Report" form is checked, the elapsed time until RTK positioning is displayed.
      Note 3) RTK fix time varies with the period and timing of RTCM3 message 1005 (or 1006).

    The checkboxes in the "Send to GPS" group box allow you to select the data to be sent to GPS.
    Usually, only "RTCM3" is checked.

    If "GGA" is checked in the "Send to Base sta." group box, the GGA sentences from GPS will be sent to RTCM base station.
    If "RMC" is checked in the "Send to Base sta." group box, the RMC sentences from GPS will be sent to RTCM base station.
    The default transmission cycle is 5 seconds and can be changed with "SendNMEAinterval" in the [RTCM] section
    of the configuration file (1 to 120 seconds in seconds).
    Each time a NMEA sentence is sent, italic font and normal font are displayed alternately.
      Used when the base station is a Virtual Reference Station (GGA use is standard).
      Example) RTK2go.com base stations where Mountpoint starts with "NEAR-" ("Country" is blank).

    You can save and recall 20 types of RTCM form setting values (can be changed from 1 to 50 types in the setting file).
    Specify the save number in the combo box at the top right of the form.
    Select from the pull-down list of the combo box or key in the numerical value and press "Enter" to automatically load the saved data.
      "L" button: Loads saved settings.
      "S" button: Save the current settings to the settings file.
      "D" button: Deletes data from the configuration file.
        Note) At the end of the application, the current settings are automatically saved with the combo box number.

    Setting data copy procedure (example of copying from 2 to 3).
      1. Select "2" from the pull-down list of the combo box (you can also key in "2" and "Enter").
      2. Key in "3" (do not press "Enter").
      3. Click the "S" button.

    Souce: Select the connection destination of the RTCM server.
      Ntrip:  Receives Ntrip server data via Ntrip Caster.
              Click the "Update" button to update the "Mountpoint" pull-down list.
              You can select the country shown below in "Country" combo box (if ".full", all countries are displayed).
                1) "Mountpoint" pull-down list.
                2) "STR" page of "Ntrip information".
                See: Wikipedia : ISO 3166-1 country code
                     https://en.wikipedia.org/wiki/ISO_3166-1

              "Info." Button
                 Click to open the "Ntrip information" form to display server information and set the "Mountpoint" pull-down list.
                   STR: Displays data stream information.
                   CAS: Displays caster information.
                   NET: Displays network information of data stream.
                 Click the desired ListView header to sort in ascending order (click again to repeat descending/ascending order).
                 You can select the country to be displayed by the combo box.
                 Clicking the "Copy(C)" button to copy the displayed contents to the clipboard with Comma separation.
                 Clicking the "Copy(T)" button to copy the displayed contents to the clipboard with Tab separation.
                 The form size can be changed by dragging the outer frame.

              Note) If the "Ntrip Caster Host" is RTK2go.com, a valid email address must be entered in the "UserID" field.

      TCP:    Receive server data from TCP host.

      Serial: Receive server data from RS-232C port.

    Replacing or adding RTCM3 messages.
      When the "Base station" tab is selected.
        You can replace or add a message 1005 base station position in RTCM3.
        Delete the received message number 1005 or 1006 before adding message 1005.
          Replase:       If checked, replace the base station position of RTCM3 with the manually set value.
                         The transmission cycle can be changed with "LocalPosInterval" in the [RTCM] section of the setting file
                         (1 to 60 seconds in seconds: default 5 seconds).
          X/Y/Z:         If checked, Input/Display the position display in rectangular coordinates
                         (Latitude/Longitude/Ellipsoid-height by default).
          Latitude/X:    Latitude or X coordinate.
          Longitude/Y:   Longitude or Y coordinate.
          Ellip. height: Ellipsoid height or Z coordinate.
          GPS,GLONASS,Galileo: Specify the flag included in the 1005 message to be added.
            Note 1) Latitude and longitude can be entered in the format of "dd.ddddd", "dd mm.mmmm", "dd mm ss.ssss".
                    However, if you click the "X/Y/Z" check box, it will return to "dd.ddddd" format.
            Note 2) When the location information is modified, press the "Enter" key or On/Off the "Replace" check box to reflect it.
            Note 3) The location information of the base station is included in message numbers 1005 or 1006 (message number to add is 1005).

      When the "Antenna serial" tab is selected.
        You can replace or add the message 1008 antenna descriptor and serial number in RTCM3.
          Replase:    If checked, replace or add message 1008.
                      The transmission cycle follows the "LocalPosInterval" in the [RTCM] section of the configuration file.
          Station ID: Reference station id (Values: 0 to 4095).
          Descriptor: Antenna descriptors (Character string: 0 to 31 characters).
          Setup ID:   Antenna setup id (Values: 0 to 255).
          Serial No.: Antenna serial numbers (Character string: 0 to 31 characters).
            Note) If the default settings do not work, try setting "ADVNULLANTENNA" in "Descriptor".

    RTCM3:    When checked, displays the received RTCM3 message number.
    UBX:      If checked, displays u-blox binary messages contained in the RTCM stream.
                Display format: "uCCII"  CC=Class(Hex), II=ID(Hex)  Ex) u0215
    NMEA:     If checked, displays the NMEA sentences contained in the RTCM stream.
    Checkboxes for incoming messages are displayed in italics.

    Msg name: When checked, the summary of the RTCM3 and the mnemonic of the UBX message are additionally displayed.

    Deleted messages: Displayed as  -1005, -1006.
    Added message:    Displays like +1005.
    Lower left label character
      Clear:     Click to clear the text.
      Copy:      Click to copy the text to the clipboard.
      Save RTCM: Click to save the received RTCM stream to a file (click again to stop).

    Selective reception of RTCM3 streams.
      You can limit the RTCM3 message to be forwarded to GPS by checking the "RTCM3 restrictions" checkbox at the bottom of the form.
      The blocked message number is reported with a "-" in front of it (Example: -1008,).
      Click the "R" button on the left to open the "RTCM3 select" form and check and change the RTCM3 message that allows forwarding.
      List the RTCM3 message numbers that should be allowed to be forwarded, separated by commas. 
      Add or remove RTCM3 message numbers and click the "Update" button to update the settings.
      Adding "-," at the beginning allows you to specify messages to prohibit transfer.
        Example of prohibiting RTCM3 messages in GLONASS: -,1009,1010,1011,1012,1013,1020,1084,1085,1087,1230
      Click the "Cancel" button to cancel the change.
      Click the "Preset1" or "Preset2" button to load the default settings.
        The default content can be changed in "RTCM3_Pre1" and "RTCM3_Pre2" in the [Option] section of the configuration file.
        By default, "Preset1" is for ZED-F9P and "Preset2" is for NEO-M8P.
      The settings are saved in the [AcceptRTCM3] section of the configuration file (NMEA.ini) for each GPS name.

      Checking the "H" checkbox will hide the blocked RTCM3 messages and only show the messages that have been transferred to the GPS.
      The state of the check box "H" is not saved and restored in the configuration file.

    If no RTCM3 stream signal continues, reconnect automatically.
    The reconnection waiting time can be specified in "ReconTime" in the [RTCM] section of the configuration file ( 5 seconds or more: default 15 seconds ).

    Operation example for u-blox ZED-F9P
      When the RTCM3 stream is received, the "DGPS age" of GGA sentence will be less than a few seconds,
      "Pos Fix" changes to  SPS fix -> (DGPS fix) -> (FloatRTK fix) -> RTK fix.
      You can reset the state by sending a Hot start command before switching the RTCM3 base station.

    Reference) Steps for performing an RTK using a base station that sends u-blox data.
      1. Use rtkconv and rtkpost from rtklib in advance to determine the exact location of the base station.
         Use the file saved by "Save RTCM".
         rtklib URL
           http://gpspp.sakura.ne.jp/indexe.html
           http://www.rtklib.com/
      2. Set the position of the base station in "Base sation" (check "Replace").
      3. Read the stream converted from u-blox to RTCM3 using "strsvr" of "rtklib" (easy if you use TCP).
         Note) u0210:RXM-RAW or u0215:RXM-RAWX is required.


11. Display of unsupported sentence (Sentence viewer).

   Perform a simple display of sentences not supported by the main form.
   The item name of the sentence to be displayed can be modified by the user.

   Open the display form with "Tool" -> "Not Supported  sentence display".
   Or you can open it by clicking "V" in the "DGMTSRV" display at the lower right of the main form.

   In the upper left combo box, select the sentence to display.
   The received unsupported sentence is added to the dropdown list.
   Since the initial value of the item name is #1, #2, #3..., please change it to an easy-to-understand item name and register.

   If check the "Registered" check box, the registered sentence will be added to the list
   (You can modify sentences that have not been received).

   Step of registering and updating the item name of the sentence being received.
     1) Click on the desired "Item" column and select it.
     2) Enter the appropriate item name.
     3) When all items are corrected, click the "Save" button to register.
          Note) Multiple items can be displayed on one line if item names are separated by ","
     4) If necessary, click the desired "F." field and select it to enter the format.
          L : Display latitude and longitude in the same format as the main form. Ex.) 139?46'01.500"
          T : Display the time in the same format as the main form.               Ex.) 09:13:42
          D : Display the date in the same format as the main form.               Ex.) 01/02/18
        Example) When displaying 4 items on one line.
                   Item : Latitude,N/S,Longitude,E/W
                   F.   : L,,L
        Note) The blank before and after the first "," in the "Item" column will be reflected in all "Data" column.

   Step of registering a new sentence not on the list.
     1) Click the "New" button.
     2) Enter the sentence name in the combo box at the top left.
     3) Enter the item name in order from the top of the "Item" column.
        Click on the desired "Item" column and select it.
          Note) Multiple items can be displayed on one line if item names are separated by ","
     4) If necessary, click the desired "F." field and select it to enter the format (L,T,D).
     5) Click the "Save" button to register.

   Modify item name and format.
     1) Click on the desired "Item" or "F." field to select it and correct it.
     2) Click "Save" button to save.

   Delete registered sentence.
     Click the "Delete" button to delete the selected sentence information.
     Upon receiving the deleted sentence, the item names are displayed like #1, #2, #3 ....

   Direct editing of registration sentence.
     Registration information is saved in the [Ext_Sen] section of the configuration file "NMEA.ini".
     It can be modified and added with a text editor.
       Format: <sentence name>=<item name 1>|<item name 2>|<item name 3> ...
       Example: $PGRME=HPE,M|VPE,M|Overall,M
       To display multiple items on one line, separate the item names with "," and describe them.
       When specifying the format, describe the format(L,T,D) by prefixing the period "." at the end of the item name.
       The item separator is "|".

     The delimiter can also be changed in the [Option] section of the configuration file.
       Ext_DelIn : The delimiter character described in the "Item" field (default is ",",  "|" and "." is not allowed).
       Ext_DelOut: Delimiter to be displayed in "Data" column (default is ",").

     Example) $LCGLL=Latitude.L,N/S|Longitude.L,E/W|UTC of position.T|Receiver status|Mode Indicator

   If the "Hold" check box is checked, data display will not be cleared even if no signal is continued.

   The size of the form can be changed by dragging the outer frame.
   The width of "Item" column can be changed by dragging the boundary between "Item" and "Data".
   The width of "F." column can be changed by dragging the boundary between "Data" and "F.".

   You can display a popup menu with the mouse right click, print the form image and copy it to the clipboard,
   and print text data and copy it to the clipboard (Text item separator is tab character, format portion not output).

   Note) Sentences supported by the main form can not be displayed.


12. Change of a display language.

    With "Language" -> "Japanese" Japanese indication, with "Language" -> "English" it becomes English indication mode.
    Display font can be specified by "Language" -> "Font".
    The fontsize that doesn't exist in the pull-down list can input the key directly.
    Keep in mind not settled within the display limit depending on the kind or size of a font.

    As for font name of default "Tahoma", as for size it has become "8".
    It can appoint also the attribute of Color and the Bold type etc.,
    but the fact that it save in the setting file is only font name, character set and font size.

    Note) Please use the font of a proportional font and a small size when the display of the latitude longitude exceeds it to the display frame.


13. About the setting file.

    Setting is retained in Text file "NMEA.ini".
    If the folder that contains the executable file(NMEA.exe) is write-protected,
    the configuration file will be copied and used in the following folder.
      C:\Users\[User name]\AppData\Local\VirtualStore\[NMEA folder]\NMEA.ini

        [User name] is the folder that appears when you type "echo %APPDATA%"<Enter> at the DOS prompt.
        [NMEA folder] is the folder there is a NMEA.exe.

      Note) When "C:\" includes "NMEA.exe",
            it becomes C:\Users\[User name]\AppData\Local\VirtualStore\NMEA.ini.

    * GpsData section.

      Name of a GPS receiver = Maximum value of a S/N ratio graph,
                               Minimum valueof a S/N ratio graph,
                               Threshold value of a S/N ratio graph,
                               Start sentence,
                               Judgment of a NMEA sentence (0:Auto, 1:GPS, 2:GPS+GLONASS),
                               Number of adjustment seconds of a time synchronization,
                               Exclusion sentence.

      The maximum and minimum values of the S / N ratio graph are used to make the graph easy to see.
      A threshold value is displayed by the dotted line on SNR graph (it does not display if 0).
      The Start sentence is used for delimiter detection when calculating the average value (default it makes GGA).
      When the number of adjustment of time synchronization seconds is blank, it does not revise.
      The comma "," with dividing, plural it can appoint exception sentence.
      You can specify multiple exclusion sentences separated by a comma ",".

      When would like to change the indicatory order of the drop down list, please correct with text editor etc.,.

      Example)
        [GpsData]
        Not Selected=65,0,0,,0,,
        LEA-M8T=65,0,20,GNRMC,0,,$GNTXT,$GNGRS,$GNGBS,$GPGBS,$GPGRS
        ZED-F9P=65,0,30,GNRMC,0,0.06,$GNTXT
        Broadcom API=65,0,0,GPRMC,0,0.71,

   * GpsCmd XXXX section.

     When GPS command sending is executed, is recorded automatically (GPS type name enters into XXXX part).
     It can record GPS command every GPS receiver up to 100.
     When would like to change the indicatory order of the drop down list, please correct with text editor etc.,.
     Although a key may be suitable if it does not overlap, it is rewritten by the form of "Cmd.." at the time of preservation of a file.

     Plural commands are sending, "|" with it divides (approximately 1 seconds pause between command).
     When pause time between command is not enough, "|" it adds (per 1 approximately 1 second increase).
     After of the semicolon is ignored regarding comment.

     Baud rate after the GPS command forwarding can be specified to the comment part
     ( \B9600\ The way numerical value is surrounded with "\B" and "\" ).

     If \PMTK335\ is written in the comment part, the RTC time of MediaTek chipset is set to the current time.
       Note 1) The GPS time advances several seconds until the leap second correction is completed (up to 12 minutes after the fix).
       Note 2) Re-setting may be required due to battery depletion.

     If end in the command character string "*" it does not add CheckSum and "*" deletes and sending
     (Option setting having become "Chk-Sum" it is ignored).
     In case of the binary command of SiRF and UBX CheckSum (2 bytes) it can add.
     When the string surrounded with "\\" and "\\" in a comment part is described,
     the string is indicated, and execution confirmation is performed.

    Example)
     [GpsCmd V-900]
     Cmd0=$PMTK605 ;Query release information
     Cmd1=$PMTK101 ;Hot start
     Cmd2=$PMTK102 ;Warm start
     Cmd3=$PMTK103 ;Cold start
     Cmd4=$PMTK104 ;Factory Reset
     Cmd5=$PMTK300,1000,0,0,0,0 ;NMEA 1000mS period (1Hz)
     Cmd6=$PMTK300,500,0,0,0,0  ;NMEA  500mS period (2Hz)
     Cmd7=$PMTK300,200,0,0,0,0  ;NMEA  200mS period (5Hz)
     Cmd8=$PMTK301,0 ;No DGPS source
     Cmd9=$PMTK301,1 ;DGPS source RTCM
     Cmd10=$PMTK301,2 ;DGPS source WAAS
     Cmd11=$PMTK313,0 ;SBAS disable
     Cmd12=$PMTK313,1 ;SBAS enable
     Cmd13=$PMTK314,-1 ;Default NMEA sentence
     Cmd14=$PMTK314,0,1,0,1,1,10,0,0,0,0,0,0,0,0,0,0,1,0,0;GGA,GSA,RMC 1Sec. GSV 10Sec.
     Cmd15=$PMTK314,0,1,0,1,1,5,0,0,0,0,0,0,0,0,0,0,1,0,0 ;GGA,GSA,RMC 1Sec. GSV 5Sec.
     Cmd16=$PMTK314,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0 ;GGA,GSA,GSV,RMC 1Sec.
     Cmd17=$PMTK314,0,1,0,1,3,3,0,0,0,0,0,0,0,0,0,0,1,0,0 ;GGA,RMC 1Sec. GSV,GSV 3Sec.
     Cmd18=$PMTK314,1,1,0,1,1,5,0,0,0,0,0,0,0,0,0,0,1,0,0 ;GGA,RMC,GSV,GLL 1Sec. GSV 5Sec.
     Cmd19=$PMTK314,0,1,1,1,1,5,0,0,0,0,0,0,0,0,0,0,1,0,0 ;GGA,RMC,GSV,VTG 1Sec. GSV 5Sec.
     Cmd20=$PMTK314,0,1,0,1,1,5,0,0,0,0,0,0,0,0,0,0,1,1,0 ;GGA,RMC,GSV,ZDA 1Sec. GSV 5Sec.
     Cmd21=$PMTK314,1,1,1,1,1,5,0,0,0,0,0,0,0,0,0,0,1,1,0 ;GGA,RMC,GSV,GLL,VTG,ZDA 1Sec. GSV 5Sec.
     Cmd22=$PMTK314,0,1,0,1,1,5,0,0,0,0,0,0,0,0,0,0,1,0,1 ;GGA,RMC,GSV,CHN 1Sec. GSV 5Sec.
     Cmd23=$PMTK320,0 ;Power saving mode Off
     Cmd24=$PMTK320,1 ;Power saving mode On
     Cmd25=$PMTK330,0 ;WGS-84  datum
     Cmd26=$PMTK330,1 ;Tokyo-M datum
     Cmd27=$PMTK330,2 ;Tokyo-A datum
     Cmd28=$PMTK400 ;Query Fix Ctl
     Cmd29=$PMTK401 ;Query Dgps Mode (0:No DGPS, 1:RTCM, 2:WAAS)
     Cmd30=$PMTK413 ;Query SBAS Enabled (0:Disable, 1:Enable)
     Cmd31=$PMTK414 ;Query current NMEA sentence output frequencies
     Cmd32=$PMTK420 ;Query power saving operation mode (0:Off, 1:On)
     Cmd33=$PMTK430 ;Query default datum (0:WGS84, 1:Tokyo-M 2:Tokyo-A)
     Cmd34=$PMTK490 ;Query current user setting from flash memory
     Cmd35=; \PMTK335\ Set RTC time to the current time (EOW rollover measures)
 
   *Option section.

    CaptureDelay : Appoints the waiting at the time of Form capture (default is 8).
                   When the sub menu remains in the picture, please enlarge value (the 50mS unit).

    DegChar :      Degree sign (default is "°").

    IgnoreSpace :  After space in the NMEA sentence is deleted, it analyzes it for "1".
                   It analyzes it as it is for "0".

    ReadExt :      The extension name of the NMEA log file for reading is specified.
                     Default value:  .nme.nmea.nma.log.txt

    StSentence:    The drop list of the start sentence is specified.
                     Default value:  $GPGGA$GNGGA$BDGGA$GBGGA$GAGGA$GPRMC$GNRMC$BDRMC$GBRMC$GARMC$GNGNS

    IgnoreNull:    The control character before and behind the NMEA sentence is deleted and analyzed for "1".
                   It analyzes it as it is for "0".

    SameTimeAlm:   When the same time continues by the RMC sentence, the warning display is done for "1".
                   It doesn't warn for "0".

    ReplaceChar:   The character which replaces and displays the character (0x00 to 0x1F) in a NMEA sentence
                   is specified (Default is "_").

    ReplaceChar2:  The character which replaces and displays the character (0x7F to 0xFF) in a NMEA sentence
                   is specified (Default is "~").

    ValidSentence: Display only received sentence to the list "display of the selected sentence" in the case of "1".
                   Display all support sentence in the case of "0".

    SyncTiming:    The timing of the periodic time adjustment at the second is specified (0 to 59, Default is 35).
                   Time correction is performed after receiving twice the NMEA sentences from the specified seconds.

    AcceptMinLen:  The minimum value of the sentence string length to be added to the drop-down list of the "Start sentence" combo box (Default is 3).
    AcceptMaxLen:  The maximum value of the sentence string length to be added to the drop-down list of the "Start sentence" combo box (Default is 8).
                     Note) The character "$" is not included in the string length.

    60sTo59s:      It will replace the 23:59:60 to 23:59:59 in the case of "1" (Default).
                   It will convert the 23:59:60 to 00:00:00 of the next date in the case of "0".

    AutoStartSen:  When "1", the Start sentence at log playback is automatically detected.
                   When it is "0", it follows the setting of the [GpsData] section.

    ClearDelay:    Specify the number of seconds(Integer) until the display data is cleared when the NMEA sentence is interrupted.
                   The default is 7 seconds.


    Ext_DelIn:     Unsupported Sentence's "Item" field delimiter (default is ",").
    Ext_DelOut:    Unsupported Sentence's delimiter character in the "Data" column (default is ",").

    MaxBaud:       Maximum baud rate for serial port scan.

    ShowID:        If "1", the "System ID" above the GSA selection character and the "Signal ID" above the GSV selection character are displayed.
                   It is not displayed when "0".

    RTCM_max:      Specify the number of RTCM settings that can be saved (1 to 50).
                   The setting data is not deleted even if the number of saved items is reduced
                   (you can enter the number in the combo box and read it).

    AveDelayCount: Number of times to delay the start of the average value display (default: 3).
                   You can exclude the initial drift immediately after fix. 

    RTCM3_Pre1:    Selective receive list 1 for RTCM3 messages.
    RTCM3_Pre2:    Selective receive list 2 for RTCM3 messages.

   *Ext_Sen section.
                   Item name registration information of unsupported sentence.

   *TimeErrLogging section.

    AddGPTXT:      In the case of "1" is inserted into the NMEA log the error of RMC reception timing in GPTXT sentence.
                   If "0" is not output.
    IgnoreRange:   To set the lower limit of the reception timing error to be output in seconds.
                   In the case of zero is output with no limit (Default).
                   Does not output if the error is less than 1.5 seconds for 1.5.
    Header:        Define the header part of the output sentence.
                     Default: "$GPTXT,01,01,07,RMC delay,"

   *V4.1Status section.
       Format）<Status name>=<Status character 1>:<Report string 1>,<Status character 2>:<Report string 2>, ...
               Up to nine items to be written.
         Note) Undefined item displays the received string itself.

       Default configuration
         Display string of Navigation Status
           NavStatus=S:Safe,C:Caution,U:Unsafe,V:Not valid

         Display string of System ID
           SystemID=1:GPS,2:GLONASS,3:Galileo,4:BeiDou,5:QZSS,6:NavIC

         Signal ID and display string (GPS, GLONASS, Galileo, BeiDou, QZSS, NavIC)
           SignalIDGP=0:All,1:L1CA,2:L1PY,3:L1 M,4:L2PY,5:L2CM,6:L2CL,7:L5-I,8:L5-Q
           SignalIDGL=0:All,1:G1CA,2:G1 P,3:G2CA,4:G2 P
           SignalIDGA=0:All,1:E5a,2:E5b,3:E5ab,4:E6-A,5:E6BC,6:L1-A,7:L1BC
           SignalIDQZ=0:All,1:L1CA,2:L1CD,3:L1CP,4:LIS,5:L2CM,6:L2CL,7:L5-I,8:L5-Q,9:L6D,A:L6E
           SignalIDIR=0:All,1:L5SPS,2:SSPS,3:L5RS,4:S-RS,5:L1SPS
           SignalIDBD=0:All,1:B1I,2:B1Q,3:B1C,4:B1A,5:B2-a,6:B2-b,7:B2ab,8:B3I,9:B3Q,A:B3A,B:B2I,C:B2Q <- NMEA 0183 Ver4.11
           SignalIDBD=0:All,1:B1I,2:B1Q,3:B2I,4:B2Q,5:B3I,6:B3Q                                        <- NMEA 0183 Ver4.10

   *RTCM1 to RTCM50 section
      ReconTime:        Waiting time for reconnection when the RTCM3 stream has no signal (5 seconds or more).
      SendNMEAinterval: Transmission cycle of NMEA sentences sent to RTCM server (1 to 120 seconds).
      LocalPosInterval: Transmission cycle of manually set base station location information sent to GPS (1 to 60 seconds).

   *AcceptRTCM3 section
      List of RTCM3 message that are allowed to be transferred per GPS.
      If selective reception of RTCM3 message is enabled, "R" is added at the end.

   * NTRIPCasterTableURL section
      URL list for NTRIP Caster Table.
      You can specify the URL corresponding to "Ntrip Caster Host" in the "RTCM source" form.
      The default is [Ntrip Caster Host]=http://[Ntrip Caster Host]:[Port]
      Example)
        [NTRIPCasterTableURL]
        RTK2go.com=http://RTK2go.com:2101

   Concerning other section please refer to the comment of the "NMEA.ini" file.


14. Command line option.

    A setting file is specified to be a command line, It can use another setting file in place of "NMEA.ini" of default.
    As for extension name of setting file it must be ".INI".
    In addition also it is possible to appoint the Log file.
    Extension name of the Log file makes 4 types of ".nmea", ".nme", ".Log", ".txt".

    When a drive name and a path are omitted, It shall be in the same folder as NMEA.EXE.
    When the setting file does not exist, it is make up anew.

      Example)
        NMEA Other.ini            "Other.ini" in same folder with executable file is used.
        NMEA D:\GPS.ini           "GPS.ini" of D: drive route is used.
        NMEA Other.ini Test.Log   Setting file "Other.ini" to read, and "Test.Log" is played back.
        NMEA Test.nme             Log file "Test.nme" is played back.

      When the GPS receiver 2 or more is connected to 1 PC simultaneously, it is convenient if you create the shortcut of NMEA.EXE
      (The created shortcut is right-clicked, a property is chosen and a setting file name is added to the end of a link place).

    Note) Setting file and Log file the drug & drop doing in the icon of NMEA.EXE, it is possible also to start.
          However, during of log recording and while playing back are ignored.
          Setting file and the Log file only each 1 file are effective (When plural is appointed, the first file is used).

    Automatic record start of NMEA data.

      When "/W" is added to the log file name of the command line, the record is started automatically by the file name.
      When the file name is omitted, beginning date (yyyy-mm-dd_hh-mm-ss) is made a file name.
      When the blank is included in the file name and path, it encloses with double quotes.
      If the log file has already existed, it adds it to the file.

      Ex) NMEA Test/W
            Data is recorded in "Test.nmea".
          NMEA /W
            It records by the file name "<time of the date when starting>.nmea".

      Note) When the folder name is omitted,
            it's written in the folder specified by "WriteDir" of the [Option] section of the configuration file.
            The value of "WriteDir" is updated in the use of SaveDialog.

    GPS command sending when starting: /B
      When starting, it sends it automatically when the command number in the configuration file is specified.
      Ex) NMEA Cmd1/B

    GPS command sending when ending: /E
      When ending, it sends it automatically when the command number in the configuration file is specified.
      Ex) NMEA Cmd10/E

    Automatic termination: /Q
      When the time specified by "<Days>/Q" passes, it ends automatically.
      Ex) NMEA 0.125/Q    It will end in three hours automatically.

    Minimization: /S
       After it start-up, the form is minimized.

    Periodic time correction： /T
       Time correction is executes by designated time interval(in minutes).
       The second of the correction timing can be specified with "SyncTiming" of the [Option] section of the configuration file (Default is 35).

         Ex) NMEA 10/T   Time is adjusted at intervals of ten minutes.

         Note1）A multiple start cannot be done with option /T.
         Note2) Time correction timing immediately after start-up is asynchronous.

    Combination example.
      NMEA test.ini Cmd1/B /Q
        Configuration file "test.ini" is used and Command "Cmd1" of GPS is sent and it ends immediately.
      NMEA 30/T /S
        The form is minimized and time synchronizes every 30 minutes.


15. Troubleshooting.

   * Can not perform TCP communication.
     There is a possibility that communication is blocked with anti-virus software.
     In the case of via a router, setting such as port mapping is necessary.

   * Location API can not be opened.
     Please set it to "ON" if "Location" of "Privacy" of "Setting" is "OFF".

   * The reception data is not indicated.
     1) Port number of Com. port mismatch.
        "Port" of a serial port is set as the port which connected the GPS receiver as an "Option" -> "Option setting", and "OK" is clicked.

        When the serial port non inputs, "NoSIG "is indicated in the error status of RS-232C with the "Tool" -> "GPS Command/Report".

     2) Transmission speed of Com. port mismatch.
        In combination with "Baud" of the Com. port to the speed of the GPS receiver with "Option" -> "Option setting", clicks "OK" (NMEA standard is 4800bps).
        When the connected port and baud rate are unclear, when "Scan" button is clicked,
        auto search the serial port and report the result.
          Note) When the initial value of the "Baud" is actually lower, there may not be able to detect the GPS.

     3) Output mode of the GPS receiver has become SiRF binary mode.
        When "Tool" -> "GPS Command/Report" -> "Not supported only", "SiRF-Bin" is indicated in the report forefront.
        The below-mentioned GPS command please transmit.
          \A0\A2\0\18\81\2\1\1\0\1\2\1\2\1\1\1\0\1\0\1\0\1\0\1\0\1\12\C0\1\65\B0\B3 ;\B4800\
          (transmission speed of the GPS receiver is reset in 4800bps).

   * Average of mean value is not started immediately.
     When a HDOP value is specified, it stands by until HDOP of receiving data becomes below this value.

   * We would like to set the port and transmission speed outside the range.
     It can set up, if hardware and the driver correspond and a port number and transmission speed will be inputted by manual.

   * GPS command and option setting are not retained.
     Setting file (with default NMEA.ini) has become write protect, setup cannot be saved.

   * Power saving function of the SiRF make GPS receiver is abnormal.
     It seems that the shortest time of power-on is prescribed by the power supply injection cycle
     (The power-saving function is not mounted depending on the model).

      1 to 2 second period: Above power-on 200mS.
      3 to 6 second period: Above power-on 300mS.
      7 to 8 second period: Above power-on 400mS.

   * The sub menu remains from the capture picture and printing of form.
     Setting file please try enlarging the value of "CaptureDelay" of the "Option" section of "NMEA.ini".
     As for default 8 (waiting of 50mS unit).

   * It cannot print form image.
     It prints, after carrying out the capture of the form image to a clip board.
     For this reason, when other applications are using the clip board, printing may go wrong depending on timing.

   * Japanese character garbled partly in Windows XP English edition.
     When Japanese character such as title bar of form, push button, radio button,
     check box etc., is garbled. below-mentioned configuration is done.

     "Japanese" to configurate "Languabe for non-Unicode programs" in "Advanced" page of
     "Regional and Language Options" of "Control Panel" of Windows to, after clicking "OK", it restarts.

   * Abbreviated name of a local time is not displayed correctly.
     In Windows other than the English version, please turn OFF the "Short name" of the
     "Local time" of an option setting "Auto", and input a "Short name" manually.

   * Time synchronizing fails.
     Comparing the difference of UTC and the PC time which are included in RMC immediately before and the difference of the latest RMC reception time,
     when it is within 0.1 seconds only, it runs time synchronization.
     Therefore when RMC 1 second cycle, GSA, GSV is 2 second cycle,
     when RMC is forwarded hugely after GSA, GSV because the timing of RMC changes in every time, there are times when it cannot do time synchronization.
     In this case, it is solvable by making GSA, GSA into 3 seconds or more, or making it the cycle of 1 second.

     With "Windows Vista" or later Administrator is necessary in correction of Time.
     When "Run this program as an administrator" check with the executable file or the property of shortcut,
     it reaches the point where being promoted dialogue to Administrator is indicated in when starting.

   * Command via Bluetooth is ignored.
     As for i-Blue747 and BT-Q1000, the command via Bluetooth is ignored.
     The command is ignored when feeding power with the USB cable even when "Resistor Hack" is applied.

   * The use satellite is not marked in the sky plot and the bar graph.
     Only one GPGSA sentence (for 12 satellites) is output in Garmin GLO, therefore can mark it only to 12.

   * Only RMC and the GGA sentence are displayed or other sentences thin out and it is displayed.
     It occurs in case of a low-speed PC.
     Please slow down the output cycle of NMEA or make the log file once and display it.

   * "..." is displayed in the sentence display by "GPS Command/Report" form.
     It occurs in case of a low-speed PC like the above.
     Please slow down the output cycle of NMEA or make the log file once and display it.

   * "* Receive buffer overflowed" is displayed in "Error sentence" by "GPS Command/Report" form.
     It is caused in the following condition.
       1) When other heavy processes are running.
       2) When a title bar was being clicked long.
       3) When the menu operation was reserved long.

   * Drag&Drop is disregarded.
     Drag&Drop is prohibited while executing it by the administrator.

   * Altitude error during RTK positioning is large.
     If the GPS geoid value is not accurate, you can correct the NMEA log with GeoidCorrect.exe.
     http://4river.a.la9.jp/gps/index.htm#007

   * Do not RTK fix.
     If the base station has not sent message 1005 (or 1006), it will not the RTK fix .
     In this case, set the base station coordinates in "Base station position" and check "Replace".

   * RTK fix position is incorrect.
     If the base station is sending the wrong coordinates, set the correct coordinates in the "Base station position" and check "Replace".

   * Time to RTK fix varies.
     If the base station message 1005 (or 1006) transmission cycle is 30 seconds, it will change to 30 seconds depending on the timing.
     In this case, set the coordinates of the "Base station position" base station and check "Replace" to transmit at 5 second intervals (default).
     The transmission cycle can be set from 1 to 60 seconds with "LocalPosInterval" in the [RTCMn] section of the setting file (n = 1 to 50).


16. PRN of SBAS and correspondence of GSV sentence satellite number.

  For SiRF Star and MTK (GSV SV# = PRN - 87)

          SV               PRN  GSV SV#   Long.
      MSAS
        MTSAT-1            129 -> 42      140°E
        MTSAT-2            137 -> 50      145°E

      WAAS
        AMR                133 -> 46       98°W
        PanAmSat Galaxy XV 135 -> 48      133°W
        TeleSat Anik F1R   138 -> 51      107.3°W
       (AOR-W              122 -> 35      142°W  Phased out)
       (POR                134 -> 47      178°E  Phased out)

      EGNOS
        Inmarsat 3F2 AOR-E 120 -> 33      15.5°E
        Artemis            124 -> 37      21.5°E
        Inmarsat 4F2 EMEA  126 -> 39      25°E
        Inmarsat 3F1 IOR   131 -> 44      64.5°E

      GAGAN
        GSAT-8             127 -> 40      55.1°E
        GSAT-10            128 -> 41      83°E


  In case of NEMERIX, PRN number of 3 digit is output to GSV sentence.


17. Correspondence of the satellite number of GLONASS, and a GSV sentence satellite number.

    u-blox,
    MTK MT3333 : 64 is added  (1 to 24 -> 65 to 88)
    Garmin GLO : unsystematic (1 to 24 -> 66 to 93)


18. Compilers and components used and reference materials.

    In compiler used
      Delphi 11.3 Community Edition (Embarcadero Technologies, Inc.).

    Free Component CommX Ver1.06 "Mr. X (KYY06770)" RS232C communication component COMMX106.LZH is used.
      I thank an offered author for a very useful component.

    I referred to "rtklib" source code to understand the format of RTCM3 stream.
      http://gpspp.sakura.ne.jp/indexe.html
      http://www.rtklib.com/

    Conversion of latitude and longitude and XYZ coordinates referred to the following site.
      https://www.ngs.noaa.gov/TOOLS/XYZ/xyz.ht

    RTCM 3 Message List - SNIP Support - SNIP NTRIP Caster
      https://www.use-snip.com/kb/knowledge-base/rtcm-3-message-list/

Release note.

 * This application is the free software.
 * It does not prohibit redistribution, but *.txt and NMEA.exe and *.ini including the set of distribution.
 * GPS model and a command may be added to the setting file *.ini in the case of re-distribution, change of other files is forbidden.
 * The author takes no responsibility to any losses and obstacles which were produced by use or distribution of this application.


Version history.

Ver3.98
   1. Enabled RTMC3 stream input from "Output port" (Serial and TCP).
   2. Added ability to specify RTCM3 streams to be prohibited in the "RTCM3 select" form (prefixed with "-,").
   3. Supported the display of GSV sentences of Columbus P-7 Pro.
   4. Added Columbus P-7 Pro commands to "NMEA_Eng.ini".
   5. Abnormal termination countermeasures for FEP ON/OFF have been abolished.

Ver3.97
   1. Added UTF-8 decoding when reading NTRIP caster information.
   2. Select and display the top sentence when the GSV sentence being selected and displayed is interrupted.

Ver3.96
   1. Prevented the abnormal termination by FEP ON/OFF on Windows 11 version 22H2 Japanese version.

Ver3.95
   1. Changed to update the true coordinates of the average value display immediately when the setting file is drag & dropped.
   2. The average update mark "X" is now always drawn 2 pixels wide.

Ver3.94
   1. Added a checkbox for outputting only UBX data in the "Output Port" group box option settings.
      This is useful when connecting u-blox NEO-D9C or NEO-D9S.
   2. Added UBX-RXM-PMP and UBX-RXM-QZSSL6 to the mnemonic display of ubx binaries in RTCM messages.
   3. Added commands to output data (NAV-PVT, NAV-TIMEGPS, RXM-SFRBX) for NEO-D9C in the [GpsCmd ZED-F9P] section of "NMEA_Eng.ini".
   4. The resolution of the track display has been increased by approximately 1.7 times.
   5. Fix time on the "GPS Command/Report" form now shows the time until RTK or PPS fix while "Aggregate only RTK or PPS fix" is checked on the "Average" form.

Ver3.93
   1. Added a confirmation dialog when deleting GPS commands, etc.
   2. Enabled to display only RTCM3 messages transferred to GPS as a report.
   3. PPS fix is treated in the same way as RTK fix in the average value display.
   4. The URL of "NTRIP Caster Table" can be changed in the configuration file
      (Added [NTRIPCasterTableURL] section to the configuration file).
   5. deleted old GPS from the configuration file (does not affect the "NMEA.ini" in use).

Ver3.92
   1. The RTMC3 message to be sent to GPS can be restricted (only specified RTCM3 message will be sent to GPS).
      The allowed RTMC3 message can be set for each GPS model.
   2. Added the ability to delay the start of the average value display to exclude the initial drift immediately after Fix (3 times by default).
      It can be changed with "AveDelayCount" in the [Option] section of the configuration file (0 means no delay).

Ver3.91
   1. Fixed a bug that the replacement data "Base station" and "Antenna serial" were sent when the "RTCM3" checkbox in the "Send to GPS" group box was OFF.
   2. Added draft SSR message to RTCM3 message summary.
   3. Aligned the checkboxes in the "Send to GPS" group box with the monitor section at the bottom.

Ver3.90
   1. Enabled to select the transmission of RTCM, NMAEA and UBX-bin to GPS.
   2. The checkbox corresponding to the message received from the base station is now displayed in italics.

Ver3.89
   1. Prevented flickering of S/N ratio bar graph display on Windows 11.
   2. Revised the tab order of the input port of the option setting form.
   3. Changed the compiler to Delphi 10.4 Community Edition.

Ver3.88
   1. Added the summary display of MT1041 and MT1131-7 messages of RTCM3.3.
   2. Reinforced the mnemonic display of ubx binaries.

Ver3.87
   1. Fixed a bug that the application cannot be terminated when the TCP client event "Socket Error # 10054" occurs.
   2. TCP server error messages are now displayed on the "Error sentence" display.

Ver3.86
   1. Integrated the checkboxes for the fix time display (RTK fix time is automatically displayed in RTCM mode).
   2. save the fix time display mode to the configuration file.

Ver3.85
   1. Allowed replacement or addition of RTCM message 1008 (Can support Trimble receivers).
   2. Fixed an enbug where the position of the main form at startup does not move to the right edge.

Ver3.84
   1. Conform to NMEA 0183 Ver4.11.
      The display of Signal ID of BDS has been corrected.
      The display of Signal ID of QZSS and NavIC(IRNSS) was added.
      NMEA sentences GQxxx and GIxxx are supported.
   2. Expanded the maximum number of GSA2 coexistence sentence selection to 6 types.
      Expanded the maximum number of GSV1 coexistence sentence selection to 9 types.
      Expanded the maximum number of GSV2 coexistence sentence selection to 12 types.
   3. A new command is automatically registered even when the "Send" button on the "GPS Command/Report" form is clicked.

Ver3.83
   1. When "Ave/Cur" is clicked, the display of "Difference between true coordinates and .." is cleared.

Ver3.82
   1. The difference between the true coordinate and the current value can be displayed on the average value display form.
   2. Changed the average counting timing to just after receiving a sentence.
   3. The background of the form icon is displayed in blue at RTK fix, and "R" is displayed at the lower right of the taskbar icon.
      Note) The background of the taskbar icon is displayed in blue at RTK fix on Windows Vista or earlier.

Ver3.81
   1. Fixed the bug that the main form display is broken when Ntrip server connection is not possible.
   2. Extended the time limit for getting Ntrip server information from 1 second to 5 seconds.

Ver3.80
   1. The display of the direction from the true coordinates to the average value was added to the average form.
   2. Added a text copy to the right-click menu of the average display form.
   3. Enabled to copy the text of average display form (change "Label" to "Text").
      Please use it in the "Stop" state.

Ver3.79
   1. Added the ability to show the difference between the true coordinate and the average value in the "Average" form.

Ver3.78
   1. Added the condition of average value display to enable averaging only RTK fix.
   2. The positioning status of GGA sentence is displayed at the top center of the "RTCM source" form.
      When "RTK fix time" of "GPS Command/Report" form is checked, the fix time is additionally displayed.

Ver3.77
   1. The time required for RTK positioning can be displayed (started by command send or RTCM on).
   2. Changed Fix time display to incremental display.
   3. Supported RTCM3 code monitor from GPS receiver.

Ver3.76
   1. Fixed a bug that the caption of Edit was not updated even if the "X/Y/Z" checkbox changed when the "Base station position" coordinates were blank.
   2. Fixed a bug where a warning dialog was displayed when turning on the RTCM when the coordinates of the "Base station position" were blank.

Ver3.75
   1. Added the connection information to the number in the pull-down list of the combo box at the top right of the "RTCM source" form.
   2. The setting data is now automatically loaded when selected in the combo box at the upper right of the "RTCM source" form.

Ver3.74
   1. The number of storable RTCM settings can be specified in the configuration file.
      Can be specified by "RTCM_max" in the [Option] section (Range is 1 to 50).
   2. Added connection information and distance to base station in the copy of RTCM monitor text.

Ver3.73
   1. The minimum range of the average value graph display has been extended to 0.1m (Display resolution is about 0.45cm).

Ver3.72
   1. The received RTCM stream can be saved to a file.
   2. Added the report of u-blox binary included in RTCM stream.
   3. RTCM3 summary and UBX message mnemonics can be displayed.

Ver3.71
   1. Transmission data of RTCM stream to GPS is limited to RTCM3 and NMEA only (block unknown or fragmented data).
   2. Enabled to report NMEA sentences included in RTCM stream.
      RTCM3 and NMEA message display can be turned ON/OFF.
   3. The unit is automatically switched to cm, m, km according to the distance from the RTCM base station.

Ver3.70
   1. The distance to the RTCM base station is now displayed.

Ver3.69
   1. RTCM form settings can be Saved/Loaded up to 10 types.

Ver3.68
   1. Fixed a bug that RTCM3 message numbers 4001 to 4095 were not reported.

Ver3.67
   1. RTCM3 base station position can be replaced with manual setting value.
   2. RTCM3 received message number is displayed as a report.
   3. The country to be displayed can also be selected in the Ntrip information form.

Ver3.66
   1. Enabled to send GGA sentence and RMC senten from GPS to RTCM server.
   2. The RTC time of MediaTek chipset can be set by command option (EOW rollover measures).
      Added \PMTK335\ option to "NMEA_Eng.ini" (BT-Q1000, BT-Q1000X, M-1000, M-241, V-900).

Ver3.65
   1. Ntrip server list can be selected by country.
   2. Fixed a bug of NMEA sentence deletion in RTCM message.

Ver3.64
   1. NMEA sentence included in RTCM can be deleted and sent to GPS.
   2. The information of Ntrip server can be copied to the clipboard.

Ver3.63
   1. Fixed bug in Ntrip and TCP reception processing.

Ver3.62
   1. Added "Mountpoint" to Ntrip connection status display at the bottom of the main form.
   2. Improved the trouble when reconnecting Ntrip.
   3. Added RTCM related hint display.

Ver3.61
   1. Improved the trouble of RTCM reception processing.
   2. The minimum range of average value display has been extended to 0.2m.
      The range setting value was saved in the setting file.

Ver3.60
   1. Added port number to URL when getting Ntrip server information.
   2. Ntrip server information display can be sorted by clicking ListView header.
      Speeded up ListView display and fixed bugs.
   3. The Ntrip server password is encrypted and saved.

Ver3.59
   1. Fixed a bug that hangups when RTCM server information cannot be obtained with the "Info." Button.

Ver3.58
   1. Added the function to receive RTCM stream and send it to GPS receiver.
      When using u-blox ZED-F9P, if the base station server sends out a 2-frequency RTCM stream, RTK positioning is likely.
   2. The "System ID" value is displayed above the GSA selection character, and the "SignalID" value is displayed above the GSV selection character.
      It can be suppressed by changing "ShowID=1" to "ShowID=0" in the [Option] section of the configuration file.
   3. The resolution of the average value graph was doubled.
   4. An outline of the Input/Output connection status is displayed at the bottom of the main form.

Ver3.57
   1. Supports multi-band GSV sentence (ZED-F9P etc.).
   2. Increased the corresponding number of GSA and GSV sentences.
   3. Added ZED-F9P command to "NMEA_Eng.ini".
   4. Fixed bug that command from output port could not be sent to input TCP port.

Ver3.56
   1. Fixed a bug where time correction fails if the date changes as a result of time correction (at UTC time).

Ver3.55
   1. Fixed the bug that time correction fails when confirmation dialog is displayed because the amount of correction is over 30 minutes.

Ver3.54
   1. Fixed display bug of "QZQSA" sentence.

Ver3.53
   1. Added 921600 baud to the serial port speed.
   2. The serial port search procedure was improved.

Ver3.52
   1. The Open/Save dialog is displayed in the center of the main form.

Ver3.51
   1. Supported multiple displays.

Ver3.50
   1. Added a 64bit version.
   2. Fixed a bug that the LocAPI open error dialog does not appear.
   3. Changed the procedure for changing the width of the "F." column of Sentence viewer.
   4. Implemented countermeasures for display with a high DPI display.
      By rewriting the manifest with ChangeMani.exe, it becomes possible to display reduced images with a high DPI display.
      http://4river.a.la9.jp/gps/file/ChangeManij.htm

Ver3.49
   1. Improved serial port scan.
      In the case of no detection at the initial baud rate, rescan was performed from high speed to low speed.
      The maximum baud rate can be specified by "MaxBaud" in the [ComPort] section of the configuration file (default is 115200bps).
   2. Increased the number of DropDownCount in the baud rate pulldown menu.

Ver3.48
   1. The GPS command from the Serial and TCP client is accepted (ON/OFF is possible).
   2. Enabled StringGrid vertical scrolling of "Sentence viewer" form.
   3. Added Holux "M-241 Plus" command to "NMEA_Eng.ini".

Ver3.47
   1. Added time synchronization skip report (occurs when the NMEA cycle fluctuates by 100ms or more).
   2. Improved robustness when connecting/disconnecting USB cable during serial connection.

Ver3.46
   1. Reduced processor utilization when receiving from TCP port.
   2. Reduced processor utilization when minimized main form
      (Suppress the drawing of GSV sentence, sky plot, bar graph).
   3. Added report display function for time synchronization (It can be turned On/Off by "Re." checkbox).
   4. Changed the behavior of "GSA,GSV Full" when entering Location API.
   5. Fixed a bug that the thread does not terminate when trying to open unconnected port at 230,400 bps or more.
   6. Corrected broken link of popup menu by mouse right click.
   7. Fixed hard copy timing of form image.

Ver3.45
   1. Improved display of unsupported sentences.
      Display items and format are displayed separately (the format of setting file is unchanged).
   2. Fixed a bug that no-signal clear of unsupported sentence display does not work.
   3. The Japanese font default was changed to Tahoma, size 8.

Ver3.44
   1. It became possible to specify format of simple display of unsupported sentences.
      The display format of Latitude, Longitude, Date and Time can be the same as the main form.
   2. Changed Japanese font default to "Yu Gothic UI".
   3. The default of the degree sign is changed to "°"(U+00B0) (it can be changed in the setting file).

Ver3.43
   1. Added a function to display brief display of unsupported sentences (PMTKCHN Sentence also moved to simplified display).
      The display name of the item can be set by the user, and multiple items can be displayed on one line.

Ver3.42
    1. Added COM port detailed option setting function.
    2. If the transmission buffer of the serial port runs short, it skips and warns (output port).
    3. Fixed a bug in which output port is disconnected by baud rate change of input COM port by GPS command.

Ver3.41
   1. The integer part of the latitude and longitude of the NMEA output sentence was changed to the fixed number of digits
      (LocationAPI to NMEA).

Ver3.40
   1. TCP server function was added (Received data can be delivered to the network).
   2. Received data can be output simultaneously to COM port and TCP port.
   3. It is possible to set receive port and send port independently.
   4. Exclude busy ports from the serial port list (do not check Bluetooth as response decreases).
   5. The u-blox NEO-M8T GPS command was enhanced in the configuration file.

Ver3.30
   1. The icon image of 48 x 48 pixels or less has made the solar panel monotone.

Ver3.29
   1. The hint display BDGSA, BDGSV was changed to GBGSA, GBGSV.
   2. Modified the u-blox GPS commands in the configuration file.
   3. Performed virus false detection measures.
   4. The TCP port number can be expressed in hexadecimal notation.

Ver3.28
   1. The delay time from NMEA sentence interruption to display clearing can be specified in the configuration file.
      Default： ClearDelay=7
   2. Fixed marginless enbug at the time of form printing.

Ver3.27
   1. In case of a sentence specified as an Exclusion sentence, the 'Not supported sentence' message is not displayed.
   2. Virus erroneous detection measures are strengthened.

Ver3.26
   1. Performed virus false detection measures.

Ver3.25
   1. Fixed a bug that abnormally ends at startup depending on the contents of the setting file
      (For a port whose description in the [ComPort] section is "Port1=LocAPIn" and "LogToRS=1" and "Port0" does not exist).
   2. A multimedia timer was used for a reading timer of LocAPI (The interval was changed to 10mS).

Ver3.24
   1. Added progress display to taskbar icon (Windows 7 and later).
   2. The compiler was changed to Delphi 10.2 Starter.

Ver3.23
   1. Supported the NMEA sequence GNGSA-GNGSA-GNGSA and GLGSA-GLGSA-GLGSA.
   2. Automatically detects the Start sentence at log playback (You can disable it in the configuration file).
   3. Enhanced a command of u-blox LEA-M8F.

Ver3.22
   1. Even if the GPS time does not change when using the Locatio API, the display is updated every about 5 seconds.
   2. Improved the operation response from the start of using Locatio API until Fix.
   3. Changed the task bar display at GPS non-fix to exclamation mark overlay display (Windows 7 and later).

Ver3.21
   1. Corrected illegal display when "TCP" is selected for "Com. port" in option setting.

Ver3.20
   1. The display was updated by GPS time change when using the Location API (option setting "Period" was abolished).
   2. Allowed PC time correction when using the Location API
      (As GPS and Location API are asynchronous, correction error can not be less than ±0.5 seconds).
   3. The NMEA time display when using the Location API was set to 1 millisecond unit.

Ver3.19
   1. Even when the Elevation, Azimuth  and SNR of the GSV sentence contain decimal points, it is possible to display sky plot and bar graph.

Ver3.18
   1. Fixed the Z order of "Local time" group box in "Option setting".

Ver3.17
   1. Enabled to output NMEA sentence to RS-232C when connecting with Loation API.
      Windows built-in GPS can be used for NMEA input map application etc. (used in conjunction with virtual serial port).
   2. With the NMEA output from Location API to RS-232C, GSA and GSV enabled output of only GPGSA and GPGSV.
   3. Changed the GSV sentence to GPGSV and GLGSV with NMEA output from Location API to RS-232C.

Ver3.16
   1. Added GSA and GSV sentence to display when Location API is connected (Get detailed data from TCustomSensor.CustomData).
      Only Broadcom and u-blox are confirmed.

Ver3.15
   1. Improved the assignment of the serial number of Location API.

Ver3.14
   1. Multiple Location API were made selection possible (Identified by a serial number).
   2. The indication of SignalID was enhanced.
   3. The compiler was changed to Delphi 10.1 Berlin.

Ver3.13
   1. Buf fix: GLGSV sentence of status is displayed in the satellite number (NMEA V4.1 and "Message number" is 1 only).

Ver3.12
   1. NMEA 0183 V4.1 officially supports (RMC, GNS, GSA, GSV).
      Report string can be specified in the configuration file (Possible to up to six items).
   2. Add a switching command of the NMEA 0183 V4.1, 4.0, 2.3, 2.1 (u-blox LEA-M8F, LEA-M8T).
   3. The default of the English character font was changed to Tahoma.

Ver3.11
   1. Simple indication of NMEA v4.1 status was supported (RMC, GNS, GSA, GSV).
   2. Reduced the false detection of the MTK binary.

Ver3.10
   1. GPHDG, GPHDM, GPHDT sentence was supported.

Ver3.09
   1. Added the feature to include the reception timing error in the NMEA log.

Ver3.08
   1. Supported QZGSA sentence.
   2. It supported NMEA sequence GPGSA-GNGSA-GNGSA.
   3. It supported NMEA sequence GPGSA-GLGSA-GLGSA.
   4. Reinforced the choice menu of the coexistence sentence in five items from three items.

Ver3.07
   1. Fixed a bug that does not become a non-Fix icon in the case that opened the port of no signal after the Fix.
   2. Improved display update when changed a port number.

Ver3.06
   1. Displays the "FriendlyName" by serial port selection.
   2. It was added to enable/disable for the registry settings file of Location API.

Ver3.05
   1. When LocationAPI did not return NMEA sentence, it  acquired the time from LocationAPI.
        Note) Time is not updated during non-fix.

Ver3.04
   1. Strengthened Location API mode.
     1) If the Location API does not return a NMEA sentence, It generated NMEA sentence from latitude, longitude, altitude.
     2) When using Location API, time synchronization was prohibited.

Ver3.03
   1. Fixed a bug that do not error-display an incorrect NMEA sentence (Such as NMEA sentence beginning is missing).

Ver3.02
   1. The bug that the date display becomes illegal by the locale was corrected.
      It is generated, except when the date separator is "/".

Ver3.01
   1. The enbug that the TCP communication becomes unstable was corrected.
   2. GPS built into Windows PC was able to be monitored by using Location API.

Ver3.00
   1. The bug that the error is caused in time "23:59:60" was corrected.
      The method of processing "23:59:60" can be specified by the configuration file.
   2. The effective port list was updated in the operation of the drop down of the "Port" combo box.
   3. The character code of the configuration file was changed to Unicode(NMEA_Eng.ini and NMEA_Jp.ini).
        Note) The character code of existing "NMEA.ini" does not change.
   4. The compiler was changed to Delphi XE8.

Ver2.07
   1. $GPGNS, $GLGNS and the $GBGNS sentence in addition to $GNGNS were supported.
   2. $GNGST and the $GLGST sentence in addition to $GPGST were supported.

Ver2.06
   1. When "/T" command line option was used, the confirmation dialog was displayed when there was a time difference in GPS and PC for 30 minutes or more.
   2. It warns of the lack of the number of NMEA sentence items.
   3. The enbug related to the log replay was fixed.
   4. Manual retouch.

Ver2.05
   1. String length restriction of the sentence registered with a drop list of combo box was added.
      It is possible to specify it by "AcceptMinLen" and "AcceptMaxLen" of [Option] section of the configuration file "NMEA.ini".

Ver2.04
   1. The automatic connection function was added to the RS-232C port scan.
   2. The command line option which does time correction by designated time interval was added.
   3. Only the sentence that has been received to "Start sentence" drop down list is displayed.

Ver2.03
   1. The enbug to which the baud rate was not scanned in the port scan was corrected.
   2. The port that did not exist in the port scan was not scanned.

Ver2.02
   1. Made a list of NMEA sentences of the "display of the selected sentence" only the sentence that had been received ("GPS Command/Report" form).
      When "ValidSentence" of the [Option] section of configuration file "NMEA.ini" is changed into "0", it makes it to the conventional display.
   2. When replaying log, the bug in which receive data gets mixed was corrected.

Ver2.01
   1. Character (0x7F-0xFF) in the NMEA sentence was substituted for a specified character and displayed it.
   2. Low-speed PC measures were enhanced.

Ver2.00
   1. Command for u-blox LEA-M8T was added to "NMEA_Eng.ini".
   2. Latitude and Longitude was able to be displayed by the "dd.dddddd" format.
   3. The sentence displays other than "RMC" and "GGA" were thinned out for low-speed PC.
   4. The default font of "NMEA_Eng.ini" was changed to MS Gothic.

Var1.99
   1. The function which returns to the previous item was added to the "off" button of the "GPS Command/Report" form.
   2. The title of "GPS command/report" form most lower group box is changed by the communicate mode.
   3. Receive error of TCP was reduced.

Ver1.98
   1. The TCP client function was added.
   2. The sentence selection off button was added to the "GPS Command/Report" form.

Ver1.97
   1. The enbug to which the NMEA sentence of non-support was not displayed was corrected.
   2. The overhead of the binary sentence detection has been reduced.

Ver1.96
   1. The display bug when the text and the binary sentence existed together was fixed.

Ver1.95
   1. Ublox LEA-M8F and NEO-M8N were supported.
      Please start after deleting "NMEA.ini" or copy a necessary part from "NMEA_Eng.ini" onto "NMEA.ini".
   2. NMEA sentence $GBxxx was supported.
   3. The character number limitation of the binary sentence has been enhanced from 1024 bytes to 2048 bytes.

Ver1.94
   1. The display digit below the decimal point in the latitude longitude of DD°MM'SS.SSS" form was made changeable
      (It changes into 3 to 6 digits corresponding to the digit number for the NMEA sentence).
   2. The indication location of S,N,E,W of the latitude longitude was unified in an end.

Ver1.93
   1. "Indication of non support sentence and selective sentence" is enhanced.
      "Display off", "SiRF-Binary only", "UBX-Binary only", "MTK-Binary only" was added.
   2. 230400bps and 460800bps were added to the baud rate.

Ver1.92
   1. SaveDialog was changed into the old type in order to prevent a hang-up.

Ver1.91
   1. Packages of a Japanese version and an English version were integrated.

Ver1.90
   1. The enbug that became a minus display when the elapsed time of the "Average" form display exceeded
      3 hours 17 minutes 14 seconds was corrected.

Ver1.89
   1. The Galileo sentence was supported.
   2. When many kinds receives GSA or GSV sentence, You can choose a sentence to display (except the GPS).
   3. The GSV sentence was able to be displayed up to six sentences (Expanded to other than GPS).
   4. "Mode Indicator" of two or more characters was supported for the GNGNS sentence.

Ver1.88
   1. When the number of parameters of GGA, RMC, and GNS sentence was insufficient, it did not use it to averaging.

Ver1.87
   1. The bug that illegally displayed a local year of time when the BDS sentence was received was corrected.

Ver1.86
   1. The BDS(BeiDou Navigation Satellite System) sentence was supported.
      BDGGA, BDRMC, BDVTG, BDGSA, BDGSV, BDGLL, BDZDA.
   2. The command of GNS 2000 and Gms-b6 was added.

Ver1.85
   1. The display trouble when it was GPS for GPS+GLONASS and the GSA sequence was GPGSA+GNGSA was corrected.

Ver1.84
   1. The configuration file was not uselessly updated in the NMEA command sending.
   2. The GPGST sentence of LEA-6T was supported.

Ver1.83
   1. Space in the GPS command was not deleted (Only the precedence and trailing space were deleted).
   2. Asterisk "*" was able to be described in the NMEA command.

Ver1.82
   1. The bug of the checksum addition when the payload length was 0 in the UBX binary command was corrected.
   2. To the extension name of a log file ".ubx" was added.
   3. Command for u-blox LEA-6T was added to NMEA.ini.

Ver1.81
   1. Reading the log file was changed to the BlockRead procedure
      (The text where the end of line contained only Cr or Lf and Null was supported).
   2. Percent display of reading the text was added (Reading is aborted with the Esc key).
   3. The bug of the binary code display was corrected (SiRF, MTK, UBX).

Ver1.80
   1. The check box of the "Same time alarm" was added to option setting form.

Ver1.79
   1. The upper limit of the change warning (RMC) of a UTC interval was expanded (from 1 minute to 10 minutes).

Ver1.78
   1. When DPI on the display was changed, the layout was maintained (The adjustment of the fontsize is necessary).
   2. The bug in which a check box does not appear by the click of the "Fix time" text of "GPS Command/Report" form is corrected.

Ver1.77
   1. When the date of the RMC sentence was missed, time was not updated.
   2. Neither the "Mean value" nor the "Report" were cleared at an automatic reconnection of RS-232C.
      When RS-232C was reconnected automatically, the report was displayed.

Ver1.76
   1. In a "GPS Command/Report" form, the control character of NMEA is changed into an underscore(_), and was displayed.
      A substitution character can be specified by a configuration file.

Ver1.75
   1. The option to disregard the control character (Null=0x00 etc.) before and behind the NMEA sentence was added.
   2. The same time alarm display and time inversion alarm display to a RMC sentence were added.

Ver1.74
   1. It was made to ignore even if there was a character string after a checksum.
   2. When a GPS model was changed, the "GPS Command" text of "GPS Commnad/Report" form was cleared.
   3. When the satellite number of GPGSV was a single figure, the SNR bar graph corrected the bug which does not become black.

Ver1.73
   1. The bug that the average frequency doubles when the RMC preceding was specified was corrected.

Ver1.72
   1. The following bug under output to a serial port of log reproduction data was corrected.
       After clicking on a maximization icon, the number of columns of a GPGSV string grid does not return.
       After clicking on a minimization icon, a main menu does not return by the "File" -> "Stop Replay".

Ver1.71 Apr. 2013
   1. The repetition up to five sentences of the GPGSV sentence was supported (For Garmin GLO).

Ver1.70 Apr. 2013
   1. Bug correction of 3D mode judging of a QZQSA sentence.
   2. The HDOP limit value of "Average" form is saved.

Ver1.69 Apr. 2013
   1. The trouble of the average display when the longitude stepped over ±180 degrees was corrected.
   2. The drop list of start sentences was limited to GGA, RMC and GNS (it can change by a configuration file).

Ver1.68 Apr. 2013
   1. The monitor display of transmitting command strings was made possible.
   2. The command of "Gms-g6a" was corrected, and "Gms-g9" was registered alias.

Ver1.67 Feb. 2013
  1. DGPS age and DGPS ID of the GNGNS sentence were displayed by the hint display.

Ver1.66 Feb. 2013
  1. The bug to which the sky plot and the bar graph were not cleared was corrected.

Ver1.65 Feb. 2013
  1. GLONASS and QZSS was supported.
  2. The number option abolition of CSV satellites was carried out (it fixes to 16 satellites).
  3. The checksum addition function of a MTK binary command is added.
  4. The drop was enabled without the stop procedure in the NMEA replay.

Ver1.64 Jul. 2011
  1. The bug to which the progress bar of Windows 7 was not displayed was corrected.

Ver1.63 Jul. 2011
  1. The non-Fix status was displayed in the taskbar button of Windows 7.
     When non-Fix it displays by "Indeterminate" ( Progress a bar flickers ).

Ver1.62 Jul. 2011
  1. Kilo was corrected to the lower-case.

Ver1.61 Sep. 2010
   1. "/S" command line option was added (After it had start-up, the form is minimized).
   2. The log save folder of "/W" option was able to be specified with "WriteDir" of
      the [Option] section of "NMEA.ini" (It is updated in "File" -> "Start Recording" operation).

Ver1.60 Oct. 2009
   1. To the extension name of the log file ".nma" was added (The change was enabled by the
      configuration file).

Ver1.59 Oct. 2009
   1. The command line option that started an automatic record of the log was added.
   2. The command line option that sent an any GPS command when starting and ending was added.
   3. The command line option that ended automatically was added.

Ver1.58 Jan. 2009
   1. Option to disregard Space(0x20) in the NMEA sentence was added to the configuration
      file.
   2. Autocomplete of ComboBox was abolished.

Ver1.57 Dec. 2008
   1. The display of the $PMTKCHN sentence of the MTK chipset was supported.
   2. The output command of the $PMTLCHN sentence was added to the configuration file.

Ver1.56 Jun. 2008
   1. Prolonged the reversing display time for sentence label.
      It becomes easy to see the reception of the sentence even when a virtual port of
      USB connection etc. is used.
   2. Dialog box was displayed at each form center.
   3. Icon was changed.
   4. Add a command of Wintec WSG-1000.

Ver1.55 May. 2008
   1. Corresponded to the display of the $IISMD sentence of Wintec WSG-1000.
   2. The run time theme of the compiler was invalidated.
      The serial port installed even when Windows XP compatibility mode is not set with
      Windows Vista can be detected (A port not active is included).

Ver1.54 Feb. 2008
   1. The drag & drop to the main form of the configuration file was made effective.
   2. The number of characters of Memo components of the "GPS Command/report" form was
      limited by the number of characters (not number of lines).

Ver1.53 Feb. 2008
   1. Mean value indication of South latitude and the West longitude was corrected
      (the minus sign was indicated in excess).

Ver1.52 Jan. 2008
   1. Measures when the configuration file was in a read-only folder were added.

Ver1.51 Sep. 2007
   1. The defect when unplugged a USB cable during communication, was reduced.
   2. In addition correction of detail.

Ver1.50 May. 2007
   1. The waiting time of the serial port search can have been specified. (default three
      seconds/port)
   2. The "Retry" button of the serial port search was added.
   3. The thread processing when the port closing was corrected.

Ver1.49 Apr. 2007
   1. The compiler was changed into Delphi 2007 (Delphi for Win32).
   2. An end of line supported a sentence only for a Line-Feed (for logging modes of WBT-201).
   3. Made sure that execution confirmation can be designated by comment part of the
      GPS command (The character string surrounded with "\\" and "\\" was indicated).
   4. When being not fixed, a background of a taskbar icon is indicated by yellow.

Ver1.48 Feb. 2007
   1. The date processing of a ZDA sentence was corrected.
   2. The date separator of RMC and ZDA sentence was made to follow a locale.
   3. The standard locale was changed into the U.S. from Japan.

Ver1.47 Feb. 2007
   1. The date format of RMC and ZDA sentence corrected having not followed OS Locale.

Ver1.46 Jan. 2007
   1. When the UTC date of a RMC was incorrect, it was made to perform a warning display.
   2. The bar graph of a signal level was displayed by XOR.
   3. Locales other than Japanese and English also operate normally.

Ver1.45 Nov. 2006
   1. At the time of sentence discontinuance the fact that minimum of the time difference of
      PC becomes blank was prevented (Locking client size).
   2. Tried to adjust the size of each form automatically.
   3. When the reading of registry is not possible, it tried to scan serial port COM1 to 20.

Ver1.44 Nov. 2006
  1. At the time of the first run if OS Japanese mode it tried to set language mode to Japanese.
  2. HDG, HDM, HDT sentence was made indication possible.
  3. Handling to English monospaced font "Courier New", the display area has been expanded.
  4. The calculation method of 2drms was changed, and 2drms in the altitude was displayed.

Ver1.43 Aug. 2006
  1. It made the "Sky plot" and "SNR bar graph" to follow the font in the option setting.
  2. The bar graph of non fix was displayed in yellow.
  3. The search range of a serial port was extended by 99.
  4. In case of English mode the degree sign of latitude longitude " ｰ " it indicates.
  5. In Origin indication of mean value font setting was made effective.
  6. Default extension name of log file. It modified in ".nmea".

Ver1.42 Jun. 2006
  1. It was corrected that the use satellite (red display) in the sky map was displayed
     by mistake.
  2. The position where default was displayed was changed to the center of the display.

Ver1.41 Apr. 2006
  1. The alias function of a GPS receiver name was added and sharing of GPS data was
     enabled.
     Sharing of the same data was attained from the OEM model and the original model.
  2. The cycle of automatic re-connection of RS-232C was made to follow specification
     of "ReOpen" of "GPS Command/Report" (Min: 5Sec).
  3. The search range of a serial port was extended by 50.
  4. Only the available port was displayed on the drop down list of a serial port number.
  5. The maximum value, minimum value, and the mean value of UTC and the PC time difference
     can have been displayed.
  6. The form minimization function at the time of Log play back was added.
  7. The compiler was changed into Delphi 2006 (Delphi for Win32).

Ver1.40 Oct. 2005
  1. To the extension name of a log file ".nmea" was added.
  2. The part of i.trek M3 and BT-338 of NMEA.ini was corrected in SiRFstarIII V.3.1.1
     correspondence.
  3. Item name was modified(GSA: PRN->SV, GSV: PRN->SV#).
  4. The option which performs automatic re-opening of a serial port was added.
     A serial port is open, and when a non-signal state continues for 30 seconds,
     re-opening of a serial port is performed.
  5. The message of a SiRF and UBX binary mode was displayed also on main form.
  6. The compiler was changed into Delphi 2005(Delphi for Win32).

Ver1.39 Jul. 2005
  1. It corrects the bug under second of time indication.
     Illegality indication under second of Local-time and  Fix-time was corrected.
  2. If it was in English mode, the sign "NSEW" of latitude longitude and the sign "EW" of
     Magnetic Variation were displayed on the numerical end.
  3. Adding the command for Semsons i.Trek M3 to NMEA.ini(equality with GloablSat BT-338).
  4. In addition correction of detail.

Ver1.38 Jun. 2005
  1. When checksum has been attached to NMEA command, it tried not to add checksum doubly.
  2. It retained the display position of each Form, tried to reproduce to the next time.
     "GPS command/report" Form retains size.
  3. With respect to the right in Sky-plot speed(km/h) Indication was added.
  4. The performance which searches the GPS connected port was added.
  5. Adding the command for GloablSat BT-338 to NMEA.ini.

Ver1.37 Mar. 2005
 1. Checksum addition performance to the UBX binary GPS command of ANTARIS was added.
 2. It enabled it to specify the baud rate after command sending out as the comment of the
    GPS command.
 3. Error message inside principal to English was converted.
 4. Adding the command for GM-48-AT to NMEA.ini.
 5. 57,600bps was added to baud rate.
 6. When the number of digit under the second of UTC is other than 3 digit, conversion error
    was corrected.
 7. Abolishing Trim() in the command character string, it tried to be able to transmit the
    binary code of the first & end in the character string correctly.
 8. Adding the checksum addition performance to SiRF and UBX binary command.
 9. The manual was maintained.
10. In addition correction of detail.

Ver1.36 Feb. 2005.
 1. After sending GPS command, until it becomes fixed state, it added capture time display
    function.
 2. It expanded the maximum number of records of GPS command to 100 commands in every type,
    when command exceeds 100, it tried not to record new command.
 3. The fact that Enable initial value of the interval timer had become True was reset to
    False.
 4. When the UTC time of a NMEA sentence did not contain a "." by six or more characters,
    it was considered that the 7th character or subsequent ones was under a second.
 5. It enabled ON/OFF the time display of the NMEA sentence display line head of a
    "GPS Command/Report".
 6. It tried to follow indication of date locale of Windows.
 7. Change to English mode was made possible.
 8. Specification of a font was enabled.
 9. Opposite direction replay to log playback, and step playback performance were added.
10. Difference of UTC time of RMC sentence was watched, the performance which indicates the
    report in when there is a difference above designated second number was added from the
    last time.
11. It made time difference of the local time and to be able to get name from OS.
12. Reversing, it adjusted polarity of time difference of the local time to Windows.
13. When "Sync Adj" value of option is blank, it tried not to revise.
14. Height of main form was compressed a little.
15. The individual correspondence of GM-38 was abolished.
16. In addition correction of detail.

 .... The middle is abbreviated ....

Ver1.00 Jun. 2000
  First editions.

Index:
1. Summary.
2. Option setting (Option).
3.  Printing and copy (Main Form)
4. Record of data/playback.
5. GPS Command/Report.
6. Indication of Track and averaging value(Average display).
7. Time correction of personal computer (Clock synchronization).
8. Indication of differential time of the GPS UTC and PC-time and sentence reception time.
9. Indication of reception data.
10. Receiving RTCM stream.
11. Display of unsupported sentence (Sentence viewer).
12. Change of a display language.
13. About the setting file.
14. Command line option.
15. Troubleshooting.
16. PRN of SBAS and correspondence of GSV sentence satellite number.
17. Correspondence of the satellite number of GLONASS, and a GSV sentence satellite number.
18. Used compiler and component.
Release note.
