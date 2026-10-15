/*
 * FUN_10070183 at 10070183
 * undefined __stdcall FUN_10070183(int param_1)
 * Address ranges: 10070183-100701af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070183(int param_1)

{
  uint uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x40) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
  }
  *(uint *)(param_1 + 0x224) = uVar1;
  return;
}

