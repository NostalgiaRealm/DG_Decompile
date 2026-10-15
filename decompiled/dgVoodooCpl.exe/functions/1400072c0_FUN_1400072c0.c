/*
 * FUN_1400072c0 at 1400072c0
 * undefined __fastcall FUN_1400072c0(ulonglong param_1)
 * Address ranges: 1400072c0-1400076bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400072c0(ulonglong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  uint local_158 [8];
  byte local_138 [256];
  
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  uVar5 = FUN_140001c44(param_1 + 0x148,local_158);
  if ((char)uVar5 != '\0') {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x8a) = local_158[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x8e) = local_158[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x92) = local_158[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x96) = local_158[3];
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  iVar3 = FUN_14000e460(param_1,0x3f2);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f2,(LPARAM)local_138,0x100);
    local_res10[0] = 0;
    local_res18[0] = 0;
    iVar3 = FUN_1400242b4(local_138,(byte *)" x : %d, y : %d %c",local_res10,local_res18);
    if (iVar3 == 2) {
      *(uint *)(*plVar1 + 0xa2) = local_res10[0];
      *(undefined4 *)(*plVar1 + 0xa6) = local_res18[0];
    }
    else {
      iVar3 = FUN_1400242b4(local_138,(byte *)" %d %c",local_res10,local_res8);
      if (iVar3 == 1) {
        *(uint *)(*plVar1 + 0xa6) = local_res10[0];
        *(uint *)(*plVar1 + 0xa2) = local_res10[0];
      }
    }
  }
  plVar7 = (longlong *)(param_1 + 0x80);
  iVar3 = FUN_14000e460(param_1,0x3f3);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f3,(LPARAM)local_138,0x100);
    local_res10[0] = 0;
    iVar3 = FUN_1400242b4(local_138,(byte *)" %d %c",local_res10,local_res8);
    if (iVar3 == 1) {
      *(uint *)(*plVar1 + 0x9e) = local_res10[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3f7);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f7,(LPARAM)local_138,0x100);
    local_res10[0] = 0;
    iVar3 = FUN_1400242b4(local_138,(byte *)" %d %c",local_res10,local_res8);
    if (iVar3 == 1) {
      *(uint *)(*(longlong *)(param_1 + 0x80) + 0xaa) = local_res10[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3f5);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    uVar6 = param_1;
    FUN_14000e1c0(param_1,0x3f5,(LPARAM)local_138,0x100);
    local_res8[0] = 0;
    local_res10[0] = 0;
    local_res18[0] = 0;
    local_res20[0] = 0;
    cVar2 = FUN_140005970(uVar6,local_138,(int *)local_res8,local_res10,local_res18,local_res20);
    if (cVar2 != '\0') {
      *(uint *)(*plVar7 + 0xb6) = local_res8[0];
      *(uint *)(*plVar7 + 0xba) = local_res10[0];
      *(undefined4 *)(*plVar7 + 0xae) = local_res18[0];
      *(undefined4 *)(*plVar7 + 0xb2) = local_res20[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3f8);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f8,(LPARAM)local_138,0x100);
    local_res8[0] = 0;
    local_res10[0] = 0;
    uVar5 = FUN_14001418c(local_138,local_res8,local_res10);
    if ((char)uVar5 != '\0') {
      *(uint *)(*plVar7 + 0xda) = local_res8[0];
      *(uint *)(*plVar7 + 0xde) = local_res10[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3fb);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3fb,(LPARAM)local_138,0x100);
    uVar4 = FUN_140009c70(param_1,local_138);
    *(undefined4 *)(*plVar7 + 0xd6) = uVar4;
  }
  return;
}

