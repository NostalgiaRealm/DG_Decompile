/*
 * FUN_1006d90e at 1006d90e
 * uint __stdcall FUN_1006d90e(int * param_1, int param_2, uint param_3)
 * Address ranges: 1006d90e-1006d9d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1006d90e(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_2 + 0x18);
    param_3 = FUN_100c2e34((int)piVar1,3,'\x01');
    FUN_100c3be1(piVar1,param_1,0x11);
    FUN_100c3be1(piVar1,param_1,0x11);
    FUN_100c3be1(piVar1,param_1,0x11);
    if ((*(uint *)(*(int *)(param_2 + 0x1a0) + 0x44) >> 0x17 & 1) != 0) {
      FUN_1006c448(param_1,param_2);
    }
  }
  return param_3;
}

