void Tetrapod() {
  tet = 1;
  tri = 0;
  w = 0;
  if      (currentwalk <= 51)  { FirstBackBL();     FirstBackMR();     FL(); ML(); FR(); BR(); } 
  else if (currentwalk <= 102) { SecondBackBL();    SecondBackMR();    FL(); ML(); FR(); BR(); } 
  else if (currentwalk <= 153) { FirstForwardML();  FirstForwardFR();  FL(); BL(); MR(); BR(); }
  else if (currentwalk <= 204) { SecondForwardML(); SecondForwardFR(); FL(); BL(); MR(); BR(); } 
  else if (currentwalk <= 255) { FirstBackFL();     FirstForwardBR();  ML(); BL(); FR(); MR(); }
  else                         { SecondBackFL();    SecondForwardBR(); ML(); BL(); FR(); MR(); }  // until 306
}
