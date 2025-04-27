
void SecondBackMR() {
  //case78 through case102 231 to 306 tirpod
  //case231 to 255 for wave
  //case52 through case102 tetrapod
  f = 0;

  if (w == 1) {
    IK = 6;
    double Mx_trgt = Mx_end + ((currentwalk - 205) * x1_stp);  // Wave Gait
     x = Mx_trgt;
     z = (Mz_trgt + up) - (currentwalk - 230) * z_stp;   //Wave Gait
    IKinematic();
  } else if (tet == 1) {
    IK = 6;
    double Mx_trgt = Mx_end + ((currentwalk - 1) * x3_stp);   // Tetrapod gait
     x = Mx_trgt;
     z = (Mz_trgt + up) - (currentwalk - 51) * z2_stp;  //Tetrapod Gait
    IKinematic();
  } else if (tri == 1) {
    IK = 6;
    double Mx_trgt = Mx_end + ((currentwalk - 154) * x6_stp);  // Tripod Gait
     x = Mx_trgt;
     z = (Mz_trgt + up) - (currentwalk - 230) * z3_stp;   //Tripod Gait
    IKinematic();
  }
}
