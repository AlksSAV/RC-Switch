// Определение пинов для ATtiny85
const int RX_PIN_1 = 0;  // PB0 (физический пин 5)
const int RX_PIN_2 = 1;  // PB1 (физический пин 6)
const int OUTPUT_PIN_1 = 2;  // PB2 (физический пин 7)
const int OUTPUT_PIN_2 = 3;  // PB3 (физический пин 2)
const int OUTPUT_PIN_3 = 4;  // PB4 (физический пин 3)

// Пороговые значения для сигналов
const int THRESHOLD_LOW = 1500;
const int THRESHOLD_HIGH = 1950;

void setup() {
  // Настройка пинов на вход и выход
  pinMode(RX_PIN_1, INPUT);
  pinMode(RX_PIN_2, INPUT);
  pinMode(OUTPUT_PIN_1, OUTPUT);
  pinMode(OUTPUT_PIN_2, OUTPUT);
  pinMode(OUTPUT_PIN_3, OUTPUT);
}

void loop() {
  // Чтение длительности импульсов
  int RX1 = pulseIn(RX_PIN_1, HIGH);
  int RX2 = pulseIn(RX_PIN_2, HIGH);

  // Управление первым выходом
  if (RX1 > THRESHOLD_LOW) {
    digitalWrite(OUTPUT_PIN_1, HIGH);
  } else {
    digitalWrite(OUTPUT_PIN_1, LOW);
  }

  // Управление вторым выходом
  if (RX2 > THRESHOLD_LOW) {
    digitalWrite(OUTPUT_PIN_2, HIGH);
  } else {
    digitalWrite(OUTPUT_PIN_2, LOW);
  }

  // Управление третьим выходом
  if (RX2 > THRESHOLD_HIGH) {
    digitalWrite(OUTPUT_PIN_3, HIGH);
  } else {
    digitalWrite(OUTPUT_PIN_3, LOW);
  }

  // Небольшая задержка для стабилизации
  delay(10);
}
