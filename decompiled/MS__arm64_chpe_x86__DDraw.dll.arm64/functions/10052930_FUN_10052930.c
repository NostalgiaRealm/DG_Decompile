/*
 * FUN_10052930 at 10052930
 * undefined FUN_10052930(void)
 * Address ranges: 10052930-10052973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052930(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_1003f5a8(*(undefined4 *)(param_1 + 4),&DAT_100b18a0,uVar1,param_3);
  return uVar1;
}

