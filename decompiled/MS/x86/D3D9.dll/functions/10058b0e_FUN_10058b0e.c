/*
 * FUN_10058b0e at 10058b0e
 * undefined __stdcall FUN_10058b0e(int * param_1, int * param_2, undefined4 param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10058b0e-10058d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058b0e(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  
  if ((param_5 >> 0x19 & 1) != 0) {
    uVar1 = param_5 >> 0x1a & 3;
    FUN_100c2e34((int)param_1,4,'\0');
    if (uVar1 == 0) {
      FUN_100c3be1(param_1,param_2,0x2036);
    }
    else {
      FUN_100c3be1(param_1,param_2,0x37);
      if ((uVar1 == 1) || (uVar1 == 2)) {
        FUN_100c3be1(param_1,param_2,0x38);
        if (uVar1 == 2) {
          FUN_100c3be1(param_1,param_2,0x38);
        }
        FUN_100c3be1(param_1,param_2,0x38);
        FUN_100c3be1(param_1,param_2,0x19);
        FUN_100c3be1(param_1,param_2,0x200e);
      }
      else if (uVar1 == 3) {
        FUN_100c3be1(param_1,param_2,0);
        FUN_100c3be1(param_1,param_2,0x200e);
      }
    }
    FUN_100c3be1(param_1,param_2,0);
    FUN_100c3be1(param_1,param_2,0x32);
  }
  return;
}

