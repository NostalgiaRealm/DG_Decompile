/*
 * FUN_100538a0 at 100538a0
 * undefined FUN_100538a0(void)
 * Address ranges: 100538a0-100538db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100538a0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10043a60(*(undefined4 *)(param_1 + 4),uVar1,param_3);
  return uVar1;
}

