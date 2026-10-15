/*
 * FUN_1005e39a at 1005e39a
 * undefined __stdcall FUN_1005e39a(int param_1, int param_2)
 * Address ranges: 1005e39a-1005e3c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e39a(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x208 + param_2 * 4) == 0) {
    uVar1 = FUN_100c2e34(param_1,4,'\x01');
    *(uint *)(param_1 + 0x208 + param_2 * 4) = uVar1;
  }
  return;
}

