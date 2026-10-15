/*
 * FUN_10020170 at 10020170
 * undefined FUN_10020170(void)
 * Address ranges: 10020170-1002055b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020170(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_60 = (uint)*(byte *)(param_1 + 0xa04);
  uVar7 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  lVar9 = LZCOUNT((uVar7 >> 4 | (uVar7 & 0xf0f0f0f) << 4) << 0x18);
  uVar7 = (uint)lVar9;
  if ((1 - (uVar7 >> 5) & 0xff) == 0) {
LAB_1002053c:
    *(undefined4 *)(param_1 + 0xa04) = 0;
    return;
  }
  pbVar2 = (byte *)((int)&local_60 + ((int)uVar7 >> 3));
  local_5c = param_1 + 0x548;
  local_4c = param_1 + 0x554;
  local_48 = param_1 + 0x558;
  local_44 = param_1 + 0x8f4;
  local_58 = param_1 + 0x54c;
  *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  local_54 = param_1 + 0x8e8;
  local_50 = param_1 + 0x8ec;
  do {
    iVar8 = (int)lVar9;
    iVar10 = *(int *)(local_5c + iVar8 * 0x74);
    iVar11 = iVar10 * 3;
    if (*(char *)(iVar11 + 0x1012b5e0) == '\0') {
      iVar6 = param_1 + iVar8 * 0x74;
LAB_10020258:
      if (((*(char *)(iVar11 + 0x1012b5e1) != '\0') && (*(int *)(iVar6 + 0x550) == 2)) ||
         ((*(char *)(iVar11 + 0x1012b5e2) != '\0' && (*(int *)(iVar6 + 0x5ac) == 2))))
      goto LAB_10020288;
      bVar3 = false;
    }
    else {
      iVar6 = param_1 + iVar8 * 0x74;
      if (*(int *)(iVar6 + 0x54c) != 2) goto LAB_10020258;
LAB_10020288:
      bVar3 = true;
    }
    iVar11 = *(int *)(local_58 + iVar8 * 0x74);
    if ((bVar3) && (*(char *)(iVar8 + param_1 + 0x9c4) == '\0')) {
      iVar10 = 2;
      iVar11 = 1;
    }
    if (iVar10 == *(int *)(local_54 + iVar8 * 0x1c)) {
      iVar6 = param_1 + iVar8 * 0x1c;
    }
    else {
      uVar5 = (*pcVar4)();
      (*extraout_w11)(uVar5,lVar9,1,iVar10);
      iVar6 = param_1 + iVar8 * 0x1c;
      *(int *)(iVar6 + 0x8e8) = iVar10;
    }
    if (iVar11 != *(int *)(local_50 + iVar8 * 0x1c)) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5,lVar9,2,iVar11);
      *(int *)(iVar6 + 0x8ec) = iVar11;
    }
    iVar10 = *(int *)(local_4c + iVar8 * 0x74);
    iVar11 = iVar10 * 3;
    if ((((*(char *)(iVar11 + 0x1012b5e0) == '\0') ||
         (*(int *)(param_1 + iVar8 * 0x74 + 0x558) != 2)) &&
        ((*(char *)(iVar11 + 0x1012b5e1) == '\0' || (*(int *)(param_1 + iVar8 * 0x74 + 0x55c) != 2))
        )) && ((*(char *)(iVar11 + 0x1012b5e2) == '\0' ||
               (*(int *)(param_1 + iVar8 * 0x74 + 0x5b0) != 2)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar11 = *(int *)(local_48 + iVar8 * 0x74);
    if ((bVar3) && (*(char *)(iVar8 + param_1 + 0x9c4) == '\0')) {
      iVar10 = 2;
      iVar11 = 1;
    }
    if (iVar10 != *(int *)(local_44 + iVar8 * 0x1c)) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_01)(uVar5,lVar9,4,iVar10);
      *(int *)(param_1 + iVar8 * 0x1c + 0x8f4) = iVar10;
    }
    piVar1 = (int *)(param_1 + (iVar8 + 0x52) * 0x1c);
    if (iVar11 != *piVar1) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_02)(uVar5,lVar9,5,iVar11);
      *piVar1 = iVar11;
    }
    uVar7 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar9;
    if ((1 - (uVar7 >> 5) & 0xff) == 0) goto LAB_1002053c;
    pbVar2 = (byte *)((int)&local_60 + ((int)uVar7 >> 3));
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  } while( true );
}

