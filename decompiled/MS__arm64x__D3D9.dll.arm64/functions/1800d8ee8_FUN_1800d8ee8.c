/*
 * FUN_1800d8ee8 at 1800d8ee8
 * undefined FUN_1800d8ee8(void)
 * Address ranges: 1800d8ee8-1800d8f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800d8ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [136];
  
  iVar1 = FUN_180103688(param_1,s__s__c_18023a8b8,auStack_a8,auStack_b0);
  if (((iVar1 != 1) || (iVar1 = func_0x000180222cb8(auStack_a8,param_2), iVar1 != 0)) &&
     (iVar1 = FUN_180103688(param_1,param_3,param_4), iVar1 != 1)) {
    return 0;
  }
  return 1;
}

