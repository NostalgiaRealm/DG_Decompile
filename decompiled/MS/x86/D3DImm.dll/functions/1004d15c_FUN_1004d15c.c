/*
 * FUN_1004d15c at 1004d15c
 * undefined __stdcall FUN_1004d15c(int param_1, uint * param_2)
 * Address ranges: 1004d15c-1004d17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d15c(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = param_2[1];
  }
  FUN_1003fa05(*(void **)(param_1 + 4),param_2,uVar1);
  return;
}

