#include <FlexiTimer2.h>
#include <IcsHardSerialClass.h>
#include <math.h>

// Serial Communication settings 
const byte EN_PIN1 = 2;          // Pin for Serial 1
const byte EN_PIN2 = 3;          // Pin for Serial 2
const long BAUDRATE = 115200 ;
const int TIMEOUT = 1000;

// Servo Controller instance
IcsHardSerialClass krs1(&Serial1, EN_PIN1, BAUDRATE, TIMEOUT);
IcsHardSerialClass krs2(&Serial2, EN_PIN2, BAUDRATE, TIMEOUT);


// Flag for gait control
int f;

// Loop counters
int i;
int k;

int FL0, FL1, FL2; // Front Left leg servo
int ML0, ML1, ML2; // Middle Left leg servo
int BL0, BL1, BL2; // Back Left leg servo

int FR0, FR1, FR2; // Front Right leg servo
int MR0, MR1, MR2; // Middle Right leg servo
int BR0, BR1, BR2; // Back Right leg servo

int pos;
int th;

// Gait mode flags
int w ;   // Wave Gait
int tri ; // Tripod Gait
int tet ; // Tetrapod Gait

int IK;

// Target coordinates for invere kinematics
double x, y, z; 

double theta22;

const int delayTime = 20;
int currentwalk = 1;

//-----------Link1--------Link2----------Link3 
const double FLl1 = 50.0, FLl2 = 82.0,   FLl3 = 157.02;

const double MLl1 = 50.0, MLl2 = 85.28,  MLl3 = 164;

const double BLl1 = 50.0, BLl2 = 109.88, BLl3 = 218.12;

const double FRl1 = 50.0, FRl2 = 82.0,   FRl3 = 157.02;

const double MRl1 = 50.0, MRl2 = 85.28,  MRl3 = 164;

const double BRl1 = 50.0, BRl2 = 109.88, BRl3 = 218.12;


const double pi = 3.14592653;




// Wave Gait Parameters
const double x1_amount = 95;              // Swing phase x movement
const double x1_stp = x1_amount / 50;     // Step size
const double x2_amount = 95;              // Stance phase x movement
const double x2_stp = x2_amount / 152;    // Step size

// Tetrapod Gait Parameters
const double x3_amount = 95;              // Swing phase x movement
const double x3_stp = x3_amount / 101;    // Step size
const double x4_amount = 95;              // Stance phase x movement
const double x4_stp = x4_amount / 203;    // Step size

// Tripod Gait Parameters
const double x5_amount = 95;              // Left side x movement
const double x5_stp = x5_amount / 50;     // Step size
const double x6_amount = 95;              // Right side x movement
const double x6_stp = x6_amount / 50;     // Step size


// Starting x positions for each leg
const double Fx_strt = 225.786;             // Front leg x start
const double Fx_end =  Fx_strt - x5_amount; // Front leg x end
const double Mx_strt = 47.5291;             // Middle leg x start
const double Mx_end = Mx_strt - x5_amount;  // Middle leg x end
const double Bx_strt = -198.0291;           // Back leg x start
const double Bx_end = Bx_strt - x5_amount;  // Back leg x end

// Target y positions
const double Fy_trgt = -112.4425;           // Front leg y target
const double My_trgt = -180.4425;           // Middle leg y target
const double By_trgt = -127.4425;           // Back leg y target

// Target z positions 
const double Fz_trgt = -63.6834;            // Front leg z target
const double Mz_trgt = -63.6834;            // Middle leg z target
const double Bz_trgt = -63.6834;            // Back leg z target

const double up = 100;                      // Maximum z-axis lift for swing phase
const double z_stp  = up / 25;              // z-axis step size for wave gait
const double z2_stp = up / 51;              // z-axis step size for tetrapod gait
const double z3_stp = up / 76;              // z-axis step size for tripod gait

// Timer start
unsigned long startTime; 

void setup () {
  // Initialize serial communication for servo controllers
  krs1.begin();
  krs2.begin();
  
   // Set servo stretch and speed (1-127)
   for (k = 1; k <= 9; k += 1) {
    krs1.setStrc(k,127);
    krs2.setStrc(k,127);
    krs1.setSpd(k,127);
    krs2.setSpd(k,127);
    }
   
  Serial.begin(115200);

  // Start timer
  FlexiTimer2::set(delayTime, switchwalk);
  FlexiTimer2::start();
}

void loop() {
  
  if (f == 1) {

    // Execute Wave (or Tetrapod or Tripod) gait when flag is set
    Wave();
    // Tetrapod();
    // Tripod();
  }
}

void switchwalk() {
  // Control gait sequence based on currentwalk counter
  switch (currentwalk) {
    case 1:   case 2:   case 3:   case 4:   case 5:   case 6:   case 7:   case 8:   case 9:  
    case 10:  case 11:  case 12:  case 13:  case 14:  case 15:  case 16:  case 17:  case 18: 
    case 19:  case 20:  case 21:  case 22:  case 23:  case 24:  case 25:  case 26:  case 27: 
    case 28:  case 29:  case 30:  case 31:  case 32:  case 33:  case 34:  case 35:  case 36: 
    case 37:  case 38:  case 39:  case 40:  case 41:  case 42:  case 43:  case 44:  case 45: 
    case 46:  case 47:  case 48:  case 49:  case 50:  case 51:  case 52:  case 53:  case 54: 
    case 55:  case 56:  case 57:  case 58:  case 59:  case 60:  case 61:  case 62:  case 63: 
    case 64:  case 65:  case 66:  case 67:  case 68:  case 69:  case 70:  case 71:  case 72: 
    case 73:  case 74:  case 75:  case 76:  case 77:  case 78:  case 79:  case 80:  case 81: 
    case 82:  case 83:  case 84:  case 85:  case 86:  case 87:  case 88:  case 89:  case 90: 
    case 91:  case 92:  case 93:  case 94:  case 95:  case 96:  case 97:  case 98:  case 99:  
    case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108:
    case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117:
    case 118: case 119: case 120: case 121: case 122: case 123: case 124: case 125: case 126:
    case 127: case 128: case 129: case 130: case 131: case 132: case 133: case 134: case 135:
    case 136: case 137: case 138: case 139: case 140: case 141: case 142: case 143: case 144:
    case 145: case 146: case 147: case 148: case 149: case 150: case 151: case 152: case 153:
    case 154: case 155: case 156: case 157: case 158: case 159: case 160: case 161: case 162:
    case 163: case 164: case 165: case 166: case 167: case 168: case 169: case 170: case 171:
    case 172: case 173: case 174: case 175: case 176: case 177: case 178: case 179: case 180:
    case 181: case 182: case 183: case 184: case 185: case 186: case 187: case 188: case 189:
    case 190: case 191: case 192: case 193: case 194: case 195: case 196: case 197: case 198:
    case 199: case 200: case 201: case 202: case 203: case 204: case 205: case 206: case 207:
    case 208: case 209: case 210: case 211: case 212: case 213: case 214: case 215: case 216:
    case 217: case 218: case 219: case 220: case 221: case 222: case 223: case 224: case 225:
    case 226: case 227: case 228: case 229: case 230: case 231: case 232: case 233: case 234:
    case 235: case 236: case 237: case 238: case 239: case 240: case 241: case 242: case 243:
    case 244: case 245: case 246: case 247: case 248: case 249: case 250: case 251: case 252:
    case 253: case 254: case 255: case 256: case 257: case 258: case 259: case 260: case 261:
    case 262: case 263: case 264: case 265: case 266: case 267: case 268: case 269: case 270:
    case 271: case 272: case 273: case 274: case 275: case 276: case 277: case 278: case 279:
    case 280: case 281: case 282: case 283: case 284: case 285: case 286: case 287: case 288:
    case 289: case 290: case 291: case 292: case 293: case 294: case 295: case 296: case 297:
    case 298: case 299: case 300: case 301: case 302: case 303: case 304: case 305: case 306:
        f = 1;
        break;
  }

  // Reset counter at the end
  if (currentwalk == 306) {

    currentwalk = 1;

  } else {

    currentwalk++;
    
  }
}
