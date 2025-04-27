
void SecondForwardBR() {
  //case26 through case51 78 to 153
  //case180 to case204
  //case256 to case306
  f = 0;

  if (w == 1) {
    IK = 18;
    double Bx_trgt = Bx_end + ((currentwalk - 153) * x1_stp);  //wave
    x = Bx_trgt;
    z = (Bz_trgt + up) - (currentwalk - 179) * z_stp;   //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 18;
    double Bx_trgt = Bx_end + ((currentwalk - 205) * x3_stp);  //tetrapod
     x = Bx_trgt;
     z = (Bz_trgt + up) - (currentwalk - 255) * z2_stp;  //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 18;
    double Bx_trgt = Bx_end + ((currentwalk - 1) * x6_stp);
     x = Bx_trgt;
     z = (Bz_trgt + up) - (currentwalk - 77) * z3_stp;  //tripod
    IKinematic();
  }
}