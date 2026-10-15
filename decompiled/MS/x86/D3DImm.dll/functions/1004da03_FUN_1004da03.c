/*
 * FUN_1004da03 at 1004da03
 * undefined4 __stdcall FUN_1004da03(int param_1, int * param_2)
 * Address ranges: 1004da03-1004da2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004da03(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (int *)0x0) {
    FUN_1003ce53(*(void **)(*(int *)(param_1 + 4) + 0xa58),param_2);
    uVar1 = 0;
  }
  return uVar1;
}

