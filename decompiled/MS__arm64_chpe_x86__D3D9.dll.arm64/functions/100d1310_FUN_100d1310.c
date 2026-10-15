/*
 * FUN_100d1310 at 100d1310
 * undefined FUN_100d1310(void)
 * Address ranges: 100d1310-100d1397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d1310(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = FUN_10006a30(param_1 + -0x70,param_2,&local_20);
    *param_3 = 0x18;
    param_3[1] = local_20;
    param_3[2] = uStack_1c;
    param_3[3] = local_18;
    param_3[4] = uStack_14;
    param_3[5] = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return uVar1;
}

