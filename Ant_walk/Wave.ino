void Wave() {

  w = 1;   // Wave gati mode
  tri = 0; // Disable Tripod mode
  tet = 0; // Disable Tetrapod mode
  
  // Control each leg based on currentwalk
  if      (currentwalk <= 25)  { FirstBackBL();     FR(); MR(); BR(); } 
  else if (currentwalk <= 51)  { SecondBackBL();    FR(); MR(); BR(); } 
  else if (currentwalk <= 77)  { FirstForwardML();  FR(); MR(); BR(); } 
  else if (currentwalk <= 102) { SecondForwardML(); FR(); MR(); BR(); } 
  else if (currentwalk <= 127) { FirstBackFL();     FR(); MR(); BR(); } 
  else if (currentwalk <= 153) { SecondBackFL();    FR(); MR(); BR(); } 
  else if (currentwalk <= 179) { FirstForwardBR();  FL(); ML(); BL(); } 
  else if (currentwalk <= 204) { SecondForwardBR(); FL(); ML(); BL(); } 
  else if (currentwalk <= 230) { FirstBackMR();     FL(); ML(); BL(); } 
  else if (currentwalk <= 255) { SecondBackMR();    FL(); ML(); BL(); } 
  else if (currentwalk <= 281) { FirstForwardFR();  FL(); ML(); BL(); } 
  else                         { SecondForwardFR(); FL(); ML(); BL(); }

}