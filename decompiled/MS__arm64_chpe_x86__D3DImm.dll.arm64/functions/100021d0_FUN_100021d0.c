/*
 * FUN_100021d0 at 100021d0
 * undefined FUN_100021d0(void)
 * Address ranges: 100021d0-1000259f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100021d0(int param_1)

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
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_60 = (uint)*(byte *)(param_1 + 0x934);
  uVar7 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  lVar9 = LZCOUNT((uVar7 >> 4 | (uVar7 & 0xf0f0f0f) << 4) << 0x18);
  uVar7 = (uint)lVar9;
  if ((1 - (uVar7 >> 5) & 0xff) == 0) {
LAB_10002580:
    *(undefined4 *)(param_1 + 0x934) = 0;
    return;
  }
  pbVar2 = (byte *)((int)&local_60 + ((int)uVar7 >> 3));
  local_5c = param_1 + 0x4f8;
  local_4c = param_1 + 0x508;
  local_48 = param_1 + 0x824;
  local_44 = param_1 + 0x828;
  local_58 = param_1 + 0x4fc;
  *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  local_54 = param_1 + 0x81c;
  local_50 = param_1 + 0x504;
  do {
    iVar8 = (int)lVar9;
    iVar10 = *(int *)(local_5c + iVar8 * 100);
    if (*(char *)(iVar10 * 3 + 0x1009d1d0) == '\0') {
      iVar6 = param_1 + iVar8 * 100;
LAB_100022b4:
      if (((&DAT_1009d1d1)[iVar10 * 3] != '\0') && (*(int *)(iVar6 + 0x500) == 2))
      goto LAB_100022d4;
      bVar3 = false;
    }
    else {
      iVar6 = param_1 + iVar8 * 100;
      if (*(int *)(iVar6 + 0x4fc) != 2) goto LAB_100022b4;
LAB_100022d4:
      bVar3 = true;
    }
    iVar6 = *(int *)(local_58 + iVar8 * 100);
    if ((bVar3) && (*(char *)(iVar8 + param_1 + 0x8f4) == '\0')) {
      iVar10 = 2;
      iVar6 = 1;
    }
    piVar1 = (int *)(param_1 + (iVar8 + 0x4a) * 0x1c);
    if (iVar10 != *piVar1) {
      uVar5 = (*pcVar4)();
      (*extraout_w11)(uVar5,lVar9,1,iVar10);
      *piVar1 = iVar10;
    }
    if (iVar6 != *(int *)(local_54 + iVar8 * 0x1c)) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5,lVar9,2,iVar6);
      *(int *)(param_1 + iVar8 * 0x1c + 0x81c) = iVar6;
    }
    iVar10 = *(int *)(local_50 + iVar8 * 100);
    if (((*(char *)(iVar10 * 3 + 0x1009d1d0) == '\0') ||
        (*(int *)(param_1 + iVar8 * 100 + 0x508) != 2)) &&
       (((&DAT_1009d1d1)[iVar10 * 3] == '\0' || (*(int *)(param_1 + iVar8 * 100 + 0x50c) != 2)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar6 = *(int *)(local_4c + iVar8 * 100);
    if ((bVar3) && (*(char *)(iVar8 + param_1 + 0x8f4) == '\0')) {
      iVar10 = 2;
      iVar6 = 1;
    }
    if (iVar10 != *(int *)(local_48 + iVar8 * 0x1c)) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_01)(uVar5,lVar9,4,iVar10);
      *(int *)(param_1 + iVar8 * 0x1c + 0x824) = iVar10;
    }
    if (iVar6 != *(int *)(local_44 + iVar8 * 0x1c)) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_02)(uVar5,lVar9,5,iVar6);
      *(int *)(param_1 + iVar8 * 0x1c + 0x828) = iVar6;
    }
    uVar7 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar9;
    if ((1 - (uVar7 >> 5) & 0xff) == 0) goto LAB_10002580;
    pbVar2 = (byte *)((int)&local_60 + ((int)uVar7 >> 3));
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  } while( true );
}

