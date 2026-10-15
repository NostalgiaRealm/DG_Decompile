/*
 * FUN_1801fa4b8 at 1801fa4b8
 * undefined FUN_1801fa4b8(void)
 * Address ranges: 1801fa4b8-1801fa543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801fa4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [136];
  
  iVar1 = FUN_180223228(param_1,s__s__c_1802376a8,auStack_a8,auStack_b0,&stack0xffffffffffffff40,0);
  if (((iVar1 != 1) || (iVar1 = FUN_180222cb8(auStack_a8,param_2), iVar1 != 0)) &&
     (iVar1 = FUN_180223228(param_1,param_3,param_4), iVar1 != 1)) {
    return 0;
  }
  return 1;
}

