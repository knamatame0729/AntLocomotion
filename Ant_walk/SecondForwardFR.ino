
void SecondForwardFR() {

  //case26 through case51  78 to 153
  //case282 to 306 for wave
  //case154 to case204 for tetrapod


  f = 0;
 
  if (w == 1) {
    IK = 12;
    double Fx_trgt = Fx_end + ((currentwalk - 256) * x1_stp);  //wave
     x = Fx_trgt;
     z = (Fz_trgt + up) - (currentwalk - 281) * z_stp;   //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 12;
    double Fx_trgt = Fx_end + ((currentwalk - 103) * x3_stp);  //tetrapod
     x = Fx_trgt;
     z = (Fz_trgt + up) - (currentwalk - 153) * z2_stp;  //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 12;
    double Fx_trgt = Fx_end + ((currentwalk - 1) * x6_stp);
     x = Fx_trgt;
     z = (Fz_trgt + up) - (currentwalk - 77) * z3_stp;
    IKinematic();
  }
}
