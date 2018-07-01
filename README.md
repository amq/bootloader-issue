Test 1:

Build a bootloader with Mbed OS 5.8.3
```
cd bootloader
mbed update
mbed compile
```

Flash a blinky app with Mbed OS 5.9.2
```
cd ../application
mbed update
mbed compile
JLinkExe -commanderscript flash.jlink
```

Expected result: an LED is blinking.
Result: LED lights up and does not blink.

Test 2:

Build a bootloader with Mbed OS 5.9.2
```
cd ../bootloader
mv mbed-os.lib mbed-os.old
mv mbed-os.new mbed-os.lib
mbed update
mbed compile
```

Flash a blinky app with Mbed OS 5.9.2
```
cd ../application
mbed compile
JLinkExe -commanderscript flash.jlink
```

Expected result: an LED is blinking.
Result: an LED is blinking.
