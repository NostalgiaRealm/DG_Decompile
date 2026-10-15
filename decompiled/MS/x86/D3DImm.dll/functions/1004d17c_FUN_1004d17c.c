/*
 * FUN_1004d17c at 1004d17c
 * undefined __stdcall FUN_1004d17c(int param_1, int param_2)
 * Address ranges: 1004d17c-1004d19b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d17c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  FUN_1003faf3(*(void **)(param_1 + 4),uVar1,uVar1);
  return;
}

