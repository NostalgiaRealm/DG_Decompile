/*
 * FUN_10049a6b at 10049a6b
 * undefined __stdcall FUN_10049a6b(int * param_1, int * param_2, undefined4 param_3, uint param_4)
 * Address ranges: 10049a6b-10049bd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049a6b(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 >> 0x1b & 7;
  if (uVar1 == 0) {
switchD_10049b04_caseD_0:
    FUN_100a138c(param_1,param_2,0x4000d);
    return;
  }
  if (uVar1 != 7) {
    FUN_100a05ed((int)param_1,4,'\0');
    FUN_100a138c(param_1,param_2,0x32);
    FUN_100a138c(param_1,param_2,0x1c);
  }
  switch(uVar1) {
  case 0:
    goto switchD_10049b04_caseD_0;
  case 1:
    goto LAB_10049b1b;
  case 2:
    uVar1 = 0x27;
    break;
  case 3:
    goto LAB_10049b84;
  case 4:
LAB_10049b1b:
    uVar1 = 0x50;
    break;
  case 5:
    uVar1 = 0x20;
    break;
  case 6:
LAB_10049b84:
    uVar1 = 0x4f;
    break;
  case 7:
    goto switchD_10049b04_caseD_7;
  }
  FUN_100a138c(param_1,param_2,uVar1);
  FUN_100a138c(param_1,param_2,0x4000d);
switchD_10049b04_caseD_7:
  return;
}

