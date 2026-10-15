/*
 * FUN_14000463c at 14000463c
 * undefined __fastcall FUN_14000463c(longlong param_1)
 * Address ranges: 14000463c-140004a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000463c(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined8 local_838;
  undefined4 local_830;
  byte local_828 [1024];
  byte local_428 [1024];
  undefined7 uVar5;
  
  iVar2 = FUN_14000e460(param_1,0x3f6);
  if (iVar2 == -1) {
    FUN_14002511c(local_828,0,0x100);
    FUN_14000e1c0(param_1,0x3f6,(LPARAM)local_828,0x100);
    local_res18[0] = 0xffffffff;
    iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10);
    if ((((iVar2 == 1) ||
         (iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10), iVar2 == 1))
        || (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)
        ) || (local_828[0] == 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xfb) = local_res18[0];
    }
  }
  local_res18[0] = 0xffffffff;
  FUN_14000e1c0(param_1,0x416,(LPARAM)local_828,0x100);
  iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10);
  if (((iVar2 == 1) ||
      (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)) ||
     ((iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10), iVar2 == 1 ||
      (local_828[0] == 0)))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xff) = local_res18[0];
  }
  local_res18[0] = 0xffffffff;
  FUN_14000e1c0(param_1,0x417,(LPARAM)local_828,0x100);
  iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10);
  if (((iVar2 == 1) ||
      (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)) ||
     ((iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10), iVar2 == 1 ||
      (local_828[0] == 0)))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x103) = local_res18[0];
  }
  local_res18[0] = 0xffffffff;
  FUN_14000e1c0(param_1,0x418,(LPARAM)local_828,0x100);
  iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10);
  if ((((iVar2 == 1) ||
       (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)) ||
      (iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10), iVar2 == 1)) ||
     (local_828[0] == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x107) = local_res18[0];
  }
  lVar4 = param_1;
  FUN_14000e1c0(param_1,0x415,(LPARAM)local_428,0x400);
  pbVar7 = local_428;
  uVar11 = 0;
  uVar9 = 0;
  do {
    uVar10 = uVar9;
    if (*pbVar7 == 0) break;
    local_828[0] = 0;
    uVar6 = 0;
    do {
      bVar1 = *pbVar7;
      uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
      lVar4 = CONCAT71(uVar5,bVar1);
      pbVar8 = pbVar7;
      if (bVar1 == 0x2c) break;
      pbVar7 = pbVar7 + 1;
      local_828[uVar6] = bVar1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      lVar4 = CONCAT71(uVar5,*pbVar7);
      pbVar8 = pbVar7;
    } while (*pbVar7 != 0);
    local_828[uVar6] = 0;
    pbVar7 = pbVar8 + 1;
    if ((char)lVar4 != ',') {
      pbVar7 = pbVar8;
    }
    uVar3 = FUN_140002a10(lVar4,local_828,&local_838);
    if ((char)uVar3 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar10 = (ulonglong)((int)uVar9 + 1);
      *(undefined8 *)(lVar4 + 0x10b + uVar9 * 0xc) = local_838;
      *(undefined4 *)(lVar4 + 0x113 + uVar9 * 0xc) = local_830;
    }
    uVar11 = uVar11 + 1;
    uVar9 = uVar10;
  } while (uVar11 < 0x10);
  for (; (uint)uVar10 < 0x10; uVar10 = (ulonglong)((uint)uVar10 + 1)) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    *(undefined8 *)(lVar4 + 0x10b + uVar10 * 0xc) = 0;
    *(undefined4 *)(lVar4 + 0x113 + uVar10 * 0xc) = 0;
  }
  iVar2 = FUN_14000e460(param_1,0x41c);
  if (iVar2 == -1) {
    FUN_14002511c(local_828,0,0x100);
    FUN_14000e1c0(param_1,0x41c,(LPARAM)local_828,0x100);
    local_res18[0] = 0;
    iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10);
    if (iVar2 == 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x1d3) = local_res18[0];
    }
  }
  return;
}

