/*
 * FUN_140001538 at 140001538
 * bool __fastcall FUN_140001538(longlong param_1, uint * param_2)
 * Address ranges: 140001538-1400017a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140001538(longlong param_1,uint *param_2)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte bVar10;
  undefined1 local_res8 [16];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_1c8 [4];
  byte local_1b8 [128];
  byte local_138 [128];
  byte local_b8 [128];
  
  FUN_14002511c(local_1b8,0,0x80);
  FUN_14000e1c0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(LPARAM)local_1b8,0x80);
  CharLowerA((LPSTR)local_1b8);
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_1c8[0] = 0;
  FUN_14002511c(local_b8,0,0x80);
  FUN_14002511c(local_138,0,0x80);
  bVar1 = true;
  pbVar9 = local_1b8;
  pbVar2 = local_b8;
  while (local_1b8[0] != 0) {
    bVar10 = *pbVar9;
    if ((bVar10 == 0x2c) && (bVar1)) {
      bVar1 = false;
      pbVar6 = local_138;
      bVar10 = 0;
    }
    else {
      pbVar6 = pbVar2 + 1;
    }
    pbVar9 = pbVar9 + 1;
    *pbVar2 = bVar10;
    pbVar2 = pbVar6;
    local_1b8[0] = *pbVar9;
  }
  bVar1 = false;
  uVar7 = FUN_140013fb8(local_b8,(int *)local_res20,(int *)local_res18);
  if ((char)uVar7 == '\0') {
    local_res8[0] = 0;
    iVar3 = FUN_1400242b4(local_1b8,(byte *)" %u x %u %c",local_res20,local_res18);
    iVar4 = FUN_1400242b4(local_1b8,(byte *)" %u x %u , %u hz %c",local_res20,local_res18);
    iVar5 = FUN_1400242b4(local_1b8,(byte *)" %u x %u , %u %c",local_res20,local_res18);
    if (((iVar3 != 2) && (iVar4 != 3)) && (iVar5 != 3)) {
      bVar1 = true;
    }
  }
  else {
    lVar8 = FUN_140024d20((char *)local_138);
    if (lVar8 != 0) {
      local_res8[0] = 0;
      iVar3 = FUN_1400242b4(local_138,(byte *)" %u hz %c",local_1c8,local_res8);
      iVar4 = FUN_1400242b4(local_138,(byte *)" %u %c",local_1c8,local_res8);
      if ((iVar3 != 1) && (iVar4 != 1)) {
        bVar1 = true;
      }
    }
  }
  if (((0xfffffff7 < local_res20[0]) &&
      (((local_res20[0] == local_res18[0] && (local_res20[0] != 0xfffffff9)) ||
       (local_res18[0] < 0x100)))) && (*(char *)(param_1 + 0x30) == '\0')) {
    bVar1 = true;
  }
  if (!bVar1) {
    *param_2 = local_res20[0];
    param_2[4] = local_1c8[0];
    param_2[2] = local_1c8[0];
    param_2[1] = local_res18[0];
    param_2[3] = 1;
  }
  return !bVar1;
}

