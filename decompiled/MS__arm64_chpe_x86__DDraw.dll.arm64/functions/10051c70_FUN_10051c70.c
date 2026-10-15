/*
 * FUN_10051c70 at 10051c70
 * undefined FUN_10051c70(void)
 * Address ranges: 10051c70-10051cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10051c70(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_1003f5a8(*(undefined4 *)(param_1 + 4),&DAT_100b1860,uVar1,param_3);
  return uVar1;
}

