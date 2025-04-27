void IKinematic() {
  w = 0;
  tri =0;
  tet = 0;

  y = Fy_trgt;

  double s = sqrt(square(x) + square(y));
  double d = sqrt(square(s - FLl1) + square(z));

  double theta22 = -acos((square(d) - square(FLl2) - square(FLl3)) / (2 * FLl2 * FLl3));

  double B = atan2(z, (s - FLl1));
  double A = acos((square(d) + square(FLl2) - square(FLl3)) / (2 * FLl2 * d));

  double theta1_rad = B + A;

  double theta1_rad1 = B - A;

  double theta0_0 = atan2(y, x);

  if (IK == 1) {
    double FL0 = 7500 - (40 + ((theta0_0)*180 / pi)) / 0.03375;
    double FL1 = 7500 - (((theta1_rad)*180 / pi) / 0.03375);
    double FL2 = 7500 + (((theta22)*180 / pi) / 0.03375);
    krs1.setPos(1, FL0);
    krs1.setPos(2, FL1);
    krs1.setPos(3, FL2);
  } 
  else if (IK == 2) {
    double FL2 = 7500 + (((theta22)*180 / pi) / 0.03375);
    double FL1 = 7500 - (((theta1_rad)*180 / pi) / 0.03375);
    double FL0 = 7500 - (40 + ((theta0_0)*180 / pi)) / 0.03375;
    krs1.setPos(1, FL0);
    krs1.setPos(2, FL1);
    krs1.setPos(3, FL2);
  } 
  else if (IK == 3)  {
    double FL2 = 7500 + (((theta22)*180 / pi) / 0.03375);
    double FL1 = 7500 - (((theta1_rad)*180 / pi) / 0.03375);
    double FL0 = 7500 - (40 + ((theta0_0)*180 / pi)) / 0.03375;
    krs1.setPos(1, FL0);
    krs1.setPos(2, FL1);
    krs1.setPos(3, FL2);
  } 
  else if (IK == 4)  {
  double MR2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double MR1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double MR0 = 7500 + (90 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(4, MR0);
  krs2.setPos(5, MR1);
  krs2.setPos(6, MR2);
  } 
  else if (IK == 5)  {
  double MR2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double MR1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double MR0 = 7500 + (90 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(4, MR0);
  krs2.setPos(5, MR1);
  krs2.setPos(6, MR2);
  Serial.println(MR1);
  } 
  else if (IK == 6)  {
  double MR2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double MR1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double MR0 = 7500 + (90 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(4, MR0);
  krs2.setPos(5, MR1);
  krs2.setPos(6, MR2);
  } 
  else if (IK == 7)  {
  double BL2 = 7500 - (((theta22)*180 / PI) / 0.03375);
  double BL1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double BL0 = 7500 - (130 + ((theta0_0)*180 / pi)) / 0.03375;
  krs1.setPos(7, BL0);
  krs1.setPos(8, BL1);
  krs1.setPos(9, BL2);
  } 
  else if (IK == 8)  {
  double BL2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double BL1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double BL0 = 7500 - (130 + ((theta0_0)*180 / pi)) / 0.03375;
  krs1.setPos(7, BL0);
  krs1.setPos(8, BL1);
  krs1.setPos(9, BL2);
  } 
  else if (IK == 9)  {
  double BL2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double BL1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double BL0 = 7500 - (130 + ((theta0_0)*180 / pi)) / 0.03375;
  krs1.setPos(7, BL0);
  krs1.setPos(8, BL1);
  krs1.setPos(9, BL2);
  } 
  else if (IK == 10) {
  double FR2 = 7500 + (((theta22)*180 / pi) / 0.03375);
  double FR1 = 7500 - (((theta1_rad)*180 / pi) / 0.03375);
  double FR0 = 7500 + (40 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(1, FR0);
  krs2.setPos(2, FR1);
  krs2.setPos(3, FR2);
  } 
  else if (IK == 11) {
  double FR2 = 7500 + (((theta22)*180 / pi) / 0.03375);
  double FR1 = 7500 - (((theta1_rad)*180 / pi) / 0.03375);
  double FR0 = 7500 + (40 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(1, FR0);
  krs2.setPos(2, FR1);
  krs2.setPos(3, FR2);
  } 
  else if (IK == 12) {
  double FR2 = 7500 + (((theta22)*180 / pi) / 0.03375);
  double FR1 = 7500 - (((theta1_rad)*180 / pi) / 0.03375);
  double FR0 = 7500 + (40 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(1, FR0);
  krs2.setPos(2, FR1);
  krs2.setPos(3, FR2);
  } 
  else if (IK == 13) {
    IK = 0;
  double ML2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double ML1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double ML0 = 7500 - (90 + ((theta0_0)*180 / pi)) / 0.03375;
  krs1.setPos(4, ML0);
  krs1.setPos(5, ML1);
  krs1.setPos(6, ML2);
  } 
  else if (IK == 14) {
  double ML2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double ML1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double ML0 = 7500 - (90 + ((theta0_0)*180 / pi)) / 0.03375;
  krs1.setPos(4, ML0);
  krs1.setPos(5, ML1);
  krs1.setPos(6, ML2);
  } 
  else if (IK == 15) {
  double ML2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double ML1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double ML0 = 7500 - (90 + ((theta0_0)*180 / pi)) / 0.03375;
  krs1.setPos(4, ML0);
  krs1.setPos(5, ML1);
  krs1.setPos(6, ML2);
  } 
  else if (IK == 16) {
  double BR2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double BR1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double BR0 = 7500 + (130 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(7, BR0);
  krs2.setPos(8, BR1);
  krs2.setPos(9, BR2);
  } 
  else if (IK == 17) {
  double BR2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double BR1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double BR0 = 7500 + (130 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(7, BR0);
  krs2.setPos(8, BR1);
  krs2.setPos(9, BR2);
  } else               {
  double BR2 = 7500 - (((theta22)*180 / pi) / 0.03375);
  double BR1 = 7500 + (((theta1_rad)*180 / pi) / 0.03375);
  double BR0 = 7500 + (130 + ((theta0_0)*180 / pi)) / 0.03375;
  krs2.setPos(7, BR0);
  krs2.setPos(8, BR1);
  krs2.setPos(9, BR2);
  }
}