/*
 * FUN_10059760 at 10059760
 * undefined FUN_10059760(void)
 * Address ranges: 10059760-10059777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10059760(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

