/*
 * FUN_1005a819 at 1005a819
 * undefined __stdcall FUN_1005a819(int param_1)
 * Address ranges: 1005a819-1005a845
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a819(int param_1)

{
  uint uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x40) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100a05ed(param_1 + 0x18,4,'\x01');
  }
  *(uint *)(param_1 + 0x224) = uVar1;
  return;
}

