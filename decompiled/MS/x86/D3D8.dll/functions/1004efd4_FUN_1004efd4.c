/*
 * FUN_1004efd4 at 1004efd4
 * undefined __stdcall FUN_1004efd4(int param_1, int param_2)
 * Address ranges: 1004efd4-1004f003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004efd4(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1f8 + param_2 * 4) == 0) {
    uVar1 = FUN_100a05ed(param_1,4,'\x01');
    *(uint *)(param_1 + 0x1f8 + param_2 * 4) = uVar1;
  }
  return;
}

