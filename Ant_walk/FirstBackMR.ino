
void FirstBackMR() {
  // case52 through case77 for tripod  154 to 230
  //case205 to case230 for wave
  //case1 through case51 for tetrapod
  f = 0;

  if (w == 1) {
    IK = 5;
    double Mx_trgt = Mx_end + ((currentwalk - 205) * x1_stp);  // Wave Gait
     x = Mx_trgt;
     z = Mz_trgt + (currentwalk - 205) * z_stp;          // Wave
    IKinematic();
  } else if (tet == 1) {
    IK = 5;
    double Mx_trgt = Mx_end + ((currentwalk - 1) * x3_stp);  // Tetrapod gait
     x = Mx_trgt;
     z = Mz_trgt + (currentwalk - 1) * z2_stp;         // Tetrapod Gait
    IKinematic();
  } else if (tri == 1) {
    IK = 5;
    double Mx_trgt = Mx_end + ((currentwalk - 154) * x6_stp);  // Tripod Gait
     x = Mx_trgt;
     z = Mz_trgt + (currentwalk - 154) * z3_stp;          //Tripod
    IKinematic();
  }
}
