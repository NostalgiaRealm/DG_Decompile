/*
 * FUN_1005a5e9 at 1005a5e9
 * undefined __stdcall FUN_1005a5e9(int * param_1, int * param_2)
 * Address ranges: 1005a5e9-1005a632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a5e9(int *param_1,int *param_2)

{
  uint uVar1;
  
  if (param_1[0x86] == 0) {
    uVar1 = FUN_100c2e34((int)param_1,4,'\x01');
    param_1[0x86] = uVar1;
    FUN_100c3be1(param_1,param_2,0x2036);
  }
  return;
}

