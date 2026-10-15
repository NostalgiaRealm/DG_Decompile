/*
 * FUN_1000a6a0 at 1000a6a0
 * undefined FUN_1000a6a0(void)
 * Address ranges: 1000a6a0-1000a6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000a6a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_2 + 0x30) & 1) == 0) ||
     ((*(int *)(param_2 + 0x34) != 0 &&
      ((*(int *)(param_2 + 0x34) != 2 || (*(int *)(param_1 + 0xb04) != 3)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (*(int *)(param_2 + 0x18) != param_1) {
    uVar1 = 0;
  }
  return uVar1;
}

