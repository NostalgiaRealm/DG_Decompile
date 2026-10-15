/*
 * FUN_100612b3 at 100612b3
 * undefined __stdcall FUN_100612b3(int param_1)
 * Address ranges: 100612b3-100612db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100612b3(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2fc) == 0) {
    uVar1 = FUN_100c2e34(param_1,4,'\x01');
    *(uint *)(param_1 + 0x2fc) = uVar1;
  }
  return;
}

