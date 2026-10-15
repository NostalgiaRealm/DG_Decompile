/*
 * FUN_100536a0 at 100536a0
 * undefined FUN_100536a0(void)
 * Address ranges: 100536a0-100536df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100536a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10045e10(*(undefined4 *)(param_1 + 4),param_2,uVar1,1);
  return uVar1;
}

