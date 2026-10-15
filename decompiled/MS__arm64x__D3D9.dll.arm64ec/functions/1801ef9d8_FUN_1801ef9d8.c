/*
 * FUN_1801ef9d8 at 1801ef9d8
 * undefined FUN_1801ef9d8(void)
 * Address ranges: 1801ef9d8-1801efa8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801ef9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 local_40 [16];
  
  local_60 = local_40;
  local_40[0] = 0;
  iVar2 = FUN_180223228(param_1,s__d_x__d__c_180236e80,param_2,param_3,&local_60,8);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    *param_5 = 1;
    puStack_58 = local_40;
    local_60 = param_4;
    iVar2 = FUN_180223228(param_1,s__d_x__d____d__c_180236e98,param_2,param_3,&local_60,0x10);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}

