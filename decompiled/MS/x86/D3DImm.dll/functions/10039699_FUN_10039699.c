/*
 * FUN_10039699 at 10039699
 * uint __stdcall FUN_10039699(int * param_1, int param_2, uint param_3)
 * Address ranges: 10039699-10039763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10039699(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_2 + 0x10);
    param_3 = FUN_10056ee5((int)piVar1,3,'\x01');
    FUN_10057c8a(piVar1,param_1,0x11);
    FUN_10057c8a(piVar1,param_1,0x11);
    FUN_10057c8a(piVar1,param_1,0x11);
    if ((*(uint *)(*(int *)(param_2 + 0x180) + 0x44) >> 0x17 & 1) != 0) {
      FUN_1003830f(param_1,param_2);
    }
  }
  return param_3;
}

