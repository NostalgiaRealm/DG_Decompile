/*
 * FUN_1003821b at 1003821b
 * undefined __stdcall FUN_1003821b(int * param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 1003821b-1003830e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003821b(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x10);
  if (param_4 == 0) {
    FUN_10057c8a(piVar1,param_1,0x36);
    FUN_10057c8a(piVar1,param_1,0x36);
    FUN_10057c8a(piVar1,param_1,0x36);
  }
  else {
    FUN_10057c8a(piVar1,param_1,0x11);
    FUN_10057c8a(piVar1,param_1,0x11);
    FUN_10057c8a(piVar1,param_1,0x11);
  }
  return;
}

