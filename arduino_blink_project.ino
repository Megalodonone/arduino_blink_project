void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Объявляем пин как выход
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Зажигаем светодиод
  delay(500); // Ждём 0.5 секунд
  digitalWrite(LED_BUILTIN, LOW); // Гасим светодиод
  delay(500); // Ждём 0.5 секунд
}
