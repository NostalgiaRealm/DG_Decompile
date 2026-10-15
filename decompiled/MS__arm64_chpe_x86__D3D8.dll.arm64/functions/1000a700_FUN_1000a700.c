/*
 * FUN_1000a700 at 1000a700
 * undefined FUN_1000a700(void)
 * Address ranges: 1000a700-1000a737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000a700(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_2 + 0x30) >> 1 & 1) == 0) || (*(int *)(param_2 + 0x34) != 0)) {
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

