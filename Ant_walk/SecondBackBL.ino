
void SecondBackBL() {
  //case78 through case102   231 to 306

  // case26 through case51 for wave gait

  // case52 through case102 for tetrapod
  f = 0;
  if (w == 1) {
    IK = 9;
    double Bx_trgt = Bx_end + ((currentwalk - 1) * x1_stp);   //Wave gait
     x = Bx_trgt;
     z = (Bz_trgt + up) - (currentwalk - 25) * z_stp;  //Wave Gait
    IKinematic();
  } else if (tet == 1) {
    IK = 9;
    double Bx_trgt = Bx_end + ((currentwalk - 1) * x3_stp);   //Tetrapod gait
     x = Bx_trgt;
     z = (Bz_trgt + up) - (currentwalk - 51) * z2_stp;  //Tetrapod Gait
    IKinematic();
  } else if (tri == 1) {
    IK = 9;
    double Bx_trgt = Bx_end + ((currentwalk - 154) * x5_stp);  //Tripod gait
     x = Bx_trgt;
     z = (Bz_trgt + up) - (currentwalk - 230) * z3_stp;  //Tripod Gait
    IKinematic();
  }
}