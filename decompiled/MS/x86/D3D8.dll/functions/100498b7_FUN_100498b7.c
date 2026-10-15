/*
 * FUN_100498b7 at 100498b7
 * undefined __stdcall FUN_100498b7(int * param_1, int * param_2, uint param_3)
 * Address ranges: 100498b7-10049a6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100498b7(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80000000) != 0) {
    FUN_100a05ed((int)param_1,4,'\x01');
    FUN_100a05ed((int)param_1,4,'\0');
    uVar1 = 0;
    do {
      FUN_100a138c(param_1,param_2,0x11);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    FUN_100a138c(param_1,param_2,0x31);
    FUN_100a138c(param_1,param_2,0x31);
    FUN_100a138c(param_1,param_2,1);
    FUN_100a138c(param_1,param_2,1);
    FUN_100a138c(param_1,param_2,0x3c);
    FUN_100a138c(param_1,param_2,0x3c);
    FUN_100a138c(param_1,param_2,0x3c);
    FUN_100a138c(param_1,param_2,0x4000d);
  }
  return;
}

