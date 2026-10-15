/*
 * FUN_10025bb0 at 10025bb0
 * undefined FUN_10025bb0(void)
 * Address ranges: 10025bb0-10025fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025bb0(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_60 = (uint)*(byte *)(param_1 + 0xcc8);
  uVar6 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  lVar8 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
  uVar6 = (uint)lVar8;
  if ((1 - (uVar6 >> 5) & 0xff) == 0) {
LAB_10025fa4:
    *(undefined4 *)(param_1 + 0xcc8) = 0;
    return;
  }
  pbVar1 = (byte *)((int)&local_60 + ((int)uVar6 >> 3));
  local_5c = param_1 + 0x77c;
  local_4c = param_1 + 0x788;
  local_48 = param_1 + 0x78c;
  local_44 = param_1 + 0xba8;
  local_58 = param_1 + 0x780;
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  local_54 = param_1 + 0xb9c;
  local_50 = param_1 + 0xba0;
  do {
    iVar7 = (int)lVar8;
    iVar9 = *(int *)(local_5c + iVar7 * 0x84);
    iVar10 = iVar9 * 3;
    if (*(char *)(iVar10 + 0x10160f60) == '\0') {
      iVar5 = param_1 + iVar7 * 0x84;
LAB_10025c9c:
      if (((*(char *)(iVar10 + 0x10160f61) != '\0') && (*(int *)(iVar5 + 0x784) == 2)) ||
         ((*(char *)(iVar10 + 0x10160f62) != '\0' && (*(int *)(iVar5 + 0x7e0) == 2))))
      goto LAB_10025ccc;
      bVar2 = false;
    }
    else {
      iVar5 = param_1 + iVar7 * 0x84;
      if (*(int *)(iVar5 + 0x780) != 2) goto LAB_10025c9c;
LAB_10025ccc:
      bVar2 = true;
    }
    iVar10 = *(int *)(local_58 + iVar7 * 0x84);
    if ((bVar2) && (*(char *)(iVar7 + param_1 + 0xc78) == '\0')) {
      iVar9 = 2;
      iVar10 = 1;
    }
    if (iVar9 == *(int *)(local_54 + iVar7 * 0x1c)) {
      iVar5 = param_1 + iVar7 * 0x1c;
    }
    else {
      uVar4 = (*pcVar3)();
      (*extraout_w11)(uVar4,lVar8,1,iVar9);
      iVar5 = param_1 + iVar7 * 0x1c;
      *(int *)(iVar5 + 0xb9c) = iVar9;
    }
    if (iVar10 != *(int *)(local_50 + iVar7 * 0x1c)) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_00)(uVar4,lVar8,2,iVar10);
      *(int *)(iVar5 + 0xba0) = iVar10;
    }
    iVar9 = *(int *)(local_4c + iVar7 * 0x84);
    iVar10 = iVar9 * 3;
    if ((((*(char *)(iVar10 + 0x10160f60) == '\0') ||
         (*(int *)(param_1 + iVar7 * 0x84 + 0x78c) != 2)) &&
        ((*(char *)(iVar10 + 0x10160f61) == '\0' || (*(int *)(param_1 + iVar7 * 0x84 + 0x790) != 2))
        )) && ((*(char *)(iVar10 + 0x10160f62) == '\0' ||
               (*(int *)(param_1 + iVar7 * 0x84 + 0x7e4) != 2)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar10 = *(int *)(local_48 + iVar7 * 0x84);
    if ((bVar2) && (*(char *)(iVar7 + param_1 + 0xc78) == '\0')) {
      iVar9 = 2;
      iVar10 = 1;
    }
    if (iVar9 != *(int *)(local_44 + iVar7 * 0x1c)) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_01)(uVar4,lVar8,4,iVar9);
      *(int *)(param_1 + iVar7 * 0x1c + 0xba8) = iVar9;
    }
    if (iVar10 != *(int *)(param_1 + 0xbac + iVar7 * 0x1c)) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_02)(uVar4,lVar8,5,iVar10);
      *(int *)(param_1 + iVar7 * 0x1c + 0xbac) = iVar10;
    }
    uVar6 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    uVar6 = (uint)lVar8;
    if ((1 - (uVar6 >> 5) & 0xff) == 0) goto LAB_10025fa4;
    pbVar1 = (byte *)((int)&local_60 + ((int)uVar6 >> 3));
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  } while( true );
}

