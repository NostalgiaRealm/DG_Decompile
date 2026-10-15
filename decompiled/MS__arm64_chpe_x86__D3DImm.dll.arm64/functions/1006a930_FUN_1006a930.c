/*
 * FUN_1006a930 at 1006a930
 * undefined FUN_1006a930(void)
 * Address ranges: 1006a930-1006a977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1006a930(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  uVar1 = FUN_1005c360(*(undefined4 *)(param_1 + 4),param_2,uVar1,param_4,param_5,param_6);
  return uVar1;
}

