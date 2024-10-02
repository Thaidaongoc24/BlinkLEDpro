# BlinkLEDpro

## Chức Năng
- Chức năng ON/OFF bằng single click cho LED 1 (built-in).
- Sử dụng double click để chuyển sang nháy LED 2. LED sẽ nhấp nháy mỗi 500 ms.
- Nhấn đúp nút khi ở chế độ nháy để trở về chế độ bật/tắt LED 1.

## Linh Kiện Cần Thiết
- ESP32-WROOM
- LED x2
- Điện trở 1kΩ
- Nút nhấn
- Dây nối

## Kết Nối
- Kết nối chân LED 1 với chân GPIO 13 của ESP32.
- Kết nối chân LED 2 với chân GPIO 12 qua điện trở 1kΩ và nối GND.
- Kết nối một chân của nút nhấn vào chân GPIO 14 và chân còn lại nối với GND.
