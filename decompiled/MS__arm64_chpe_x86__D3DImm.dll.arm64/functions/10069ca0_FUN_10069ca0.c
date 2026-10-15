/*
 * FUN_10069ca0 at 10069ca0
 * undefined FUN_10069ca0(void)
 * Address ranges: 10069ca0-10069cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069ca0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10054780(*(undefined4 *)(param_1 + 4),param_2,uVar1);
  return uVar1;
}

