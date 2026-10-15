/*
 * FUN_1000a200 at 1000a200
 * undefined FUN_1000a200(void)
 * Address ranges: 1000a200-1000a29f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000a200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_d0;
  char *pcStack_cc;
  undefined1 *local_c8;
  undefined1 *local_c4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [136];
  
  local_c4 = auStack_b0;
  local_c8 = auStack_a8;
  pcStack_cc = s__s__c_10095978;
  local_d0 = param_1;
  iVar1 = FUN_1007c740(&local_d0,0x10);
  if (((iVar1 != 1) || (iVar1 = FUN_1007a5c0(auStack_a8,param_2), iVar1 != 0)) &&
     (local_d0 = param_1, pcStack_cc = (char *)param_3, local_c8 = (undefined1 *)param_4,
     iVar1 = FUN_1007c740(&local_d0,0xc), iVar1 != 1)) {
    return 0;
  }
  return 1;
}

