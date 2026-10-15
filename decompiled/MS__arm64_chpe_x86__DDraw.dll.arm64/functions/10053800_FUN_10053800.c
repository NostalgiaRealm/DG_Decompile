/*
 * FUN_10053800 at 10053800
 * undefined FUN_10053800(void)
 * Address ranges: 10053800-1005383b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053800(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  uVar1 = FUN_10046400(*(undefined4 *)(param_1 + 4),param_2,uVar1);
  return uVar1;
}

