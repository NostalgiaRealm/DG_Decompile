/*
 * FUN_1005a5c1 at 1005a5c1
 * undefined __stdcall FUN_1005a5c1(int param_1)
 * Address ranges: 1005a5c1-1005a5e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a5c1(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x20c) == 0) {
    uVar1 = FUN_100c2e34(param_1,4,'\x01');
    *(uint *)(param_1 + 0x20c) = uVar1;
  }
  return;
}

