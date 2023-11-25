//draft + part oft lect


void acsel (byte stp, tsv) {
  for (byte i = 0; i < tsv; i = i + stp) {
  analogWrite (EN1, i);
  analogWrite (EN2, i);
}
}


// функция вызывается перед стартом внутри каждого case

acsel (stp = 10, tsv = 25);



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
