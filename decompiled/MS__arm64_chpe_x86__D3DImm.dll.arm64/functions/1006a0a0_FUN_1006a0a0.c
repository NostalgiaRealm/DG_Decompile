/*
 * FUN_1006a0a0 at 1006a0a0
 * undefined FUN_1006a0a0(void)
 * Address ranges: 1006a0a0-1006a0db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006a0a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10054bf0(*(undefined4 *)(param_1 + 4),param_2,uVar1);
  return uVar1;
}

