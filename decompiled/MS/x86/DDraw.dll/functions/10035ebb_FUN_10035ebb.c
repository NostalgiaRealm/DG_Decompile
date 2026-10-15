/*
 * FUN_10035ebb at 10035ebb
 * undefined4 __stdcall FUN_10035ebb(int param_1, int * param_2, int param_3)
 * Address ranges: 10035ebb-10035eee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10035ebb(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0x6c) {
      uVar1 = FUN_10035628((undefined4 *)(param_1 + 4),param_2,param_3);
    }
    else {
      uVar1 = FUN_1002b0f9(*(void **)(param_1 + 4),(int)param_2,param_3);
    }
  }
  return uVar1;
}

