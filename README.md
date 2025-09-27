# esp32_led Platformio linux arch

В разных дистрибутивах Linux для управления доступом к последовательным портам используются разные группы:

В Debian, Ubuntu, Linux Mint и их производных это группа dialout.
В Arch Linux и других основанных на Arch системах это группа uucp.

sudo usermod -a -G dialout $USER
sudo usermod -a -G uucp $USER

# Установите udev-правила для PlatformIO
curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core/develop/platformio/assets/system/99-platformio-udev.rules | sudo tee /etc/udev/rules.d/99-platformio-udev.rules

# Перезагрузите udev службу
sudo udevadm control --reload-rules
sudo udevadm trigger
