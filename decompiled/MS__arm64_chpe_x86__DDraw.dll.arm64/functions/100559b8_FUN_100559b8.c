/*
 * FUN_100559b8 at 100559b8
 * undefined FUN_100559b8(void)
 * Address ranges: 100559b8-10055a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100559b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 local_70;
  char *pcStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *local_60;
  undefined1 *puStack_5c;
  undefined1 local_40 [16];
  
  local_60 = local_40;
  local_40[0] = 0;
  pcStack_6c = s__d_x__d__c_100b3ef0;
  local_70 = param_1;
  local_68 = param_2;
  uStack_64 = param_3;
  iVar2 = FUN_10091e70(&local_70,0x14);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    *param_5 = 1;
    puStack_5c = local_40;
    pcStack_6c = s__d_x__d____d__c_100b3f00;
    local_70 = param_1;
    local_68 = param_2;
    uStack_64 = param_3;
    local_60 = (undefined1 *)param_4;
    iVar2 = FUN_10091e70(&local_70,0x18);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}

