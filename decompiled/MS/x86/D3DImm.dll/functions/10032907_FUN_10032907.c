/*
 * FUN_10032907 at 10032907
 * undefined __stdcall FUN_10032907(int param_1)
 * Address ranges: 10032907-1003292e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032907(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    uVar1 = FUN_10056ee5(param_1,4,'\x01');
    *(uint *)(param_1 + 0x1fc) = uVar1;
  }
  return;
}

