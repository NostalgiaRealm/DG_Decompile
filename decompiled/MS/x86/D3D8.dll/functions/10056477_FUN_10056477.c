/*
 * FUN_10056477 at 10056477
 * undefined __stdcall FUN_10056477(undefined4 param_1, int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined1 * param_6)
 * Address ranges: 10056477-100565a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056477(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  uVar1 = 1;
  if (param_2 != 2) {
    uVar1 = 3;
  }
  *param_5 = uVar1;
  *param_6 = 0xf;
  switch(param_2) {
  case 0:
    *param_3 = "POSITION";
    break;
  case 1:
    *param_3 = "TEXCOORD";
    *param_4 = 9;
    break;
  case 2:
    *param_3 = "TEXCOORD";
    *param_4 = 10;
    break;
  case 3:
    *param_3 = "TEXCOORD";
    *param_4 = 8;
    break;
  case 4:
    *param_3 = "TEXCOORD";
    *param_4 = 0xd;
    *param_6 = 1;
    break;
  case 5:
    *param_3 = "COLOR";
    break;
  case 6:
    *param_3 = "COLOR";
    goto LAB_100564f9;
  case 7:
    *param_3 = "TEXCOORD";
    break;
  case 8:
    *param_3 = "TEXCOORD";
LAB_100564f9:
    *param_4 = 1;
    break;
  case 9:
    *param_3 = "TEXCOORD";
    *param_4 = 2;
    break;
  case 10:
    *param_3 = "TEXCOORD";
    *param_4 = 3;
    break;
  case 0xb:
    *param_3 = "TEXCOORD";
    *param_4 = 4;
    break;
  case 0xc:
    *param_3 = "TEXCOORD";
    *param_4 = 5;
    break;
  case 0xd:
    *param_3 = "TEXCOORD";
    *param_4 = 6;
    break;
  case 0xe:
    *param_3 = "TEXCOORD";
    *param_4 = 7;
    break;
  case 0xf:
    *param_3 = "TEXCOORD";
    *param_4 = 0xb;
    break;
  case 0x11:
    *param_3 = "NFACT";
    *param_6 = 7;
  }
  return;
}

