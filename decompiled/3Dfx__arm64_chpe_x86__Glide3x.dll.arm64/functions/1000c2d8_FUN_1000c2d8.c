/*
 * FUN_1000c2d8 at 1000c2d8
 * undefined FUN_1000c2d8(void)
 * Address ranges: 1000c2d8-1000c4db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c2d8(int param_1,int param_2,uint param_3,ulonglong param_4,int param_5,
                 ulonglong param_6,ulonglong param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,uint param_11,undefined4 param_12,int param_13)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  int extraout_w1;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  code *extraout_w11;
  uint uVar17;
  ulonglong uVar18;
  ulonglong extraout_x15;
  
  uVar18 = param_4 & 0xffffffff;
  uVar14 = param_6 & 0xffffffff;
  uVar15 = param_7 & 0xffffffff;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    uVar16 = (ulonglong)param_11;
    bVar8 = param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797);
    bVar11 = -1 < (int)param_11;
    uVar17 = (uint)param_4;
    bVar9 = false;
    bVar10 = true;
    if ((((bVar8 && (int)param_11 <= param_13) && bVar11) && param_5 < 9) && uVar17 == 8 ||
        ((((bVar8 && (int)param_11 <= param_13) && bVar11) && param_5 < 9) && (int)(uVar17 - 8) < 0)
        != ((((bVar8 && (int)param_11 <= param_13) && bVar11) && param_5 < 9) && SBORROW4(uVar17,8))
       ) {
      bVar10 = 0xe < (uint)param_7;
      bVar9 = (uint)param_7 == 0xf;
    }
    if (((!bVar10 || bVar9) && ((int)param_6 + 3U < 7)) &&
       ((param_8 == 3 || ((uVar17 & 1) == (uint)(param_8 != 1))))) {
      param_3 = param_3 & 0xfffffff8;
      while ((int)uVar18 < param_5) {
        uVar15 = uVar15 & 0xffffffff;
        uVar14 = uVar14 & 0xffffffff;
        iVar12 = FUN_10008338(param_8,param_5,param_5);
        param_3 = iVar12 + param_3;
        uVar18 = extraout_x15;
        param_5 = extraout_w1 + -1;
      }
      iVar12 = *(int *)(param_1 + 0xc) + param_2 * 0x4e8;
      uVar17 = *(uint *)(iVar12 + 800);
      if (param_3 < uVar17) {
        uVar3 = *(uint *)(&DAT_100997a8 + (int)uVar18 * 4);
        uVar4 = uVar3 >> (ulonglong)(*(byte *)((int)uVar14 + 0x100997a3) & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        uVar2 = uVar4;
        if ((int)uVar14 < 0) {
          uVar2 = uVar3;
          uVar3 = uVar4;
        }
        iVar6 = (uint)*(byte *)((int)uVar15 + 0x100997d8) * ((uVar2 | uVar3 << 0x10) >> 0x10);
        iVar5 = iVar6 + (param_13 - (int)uVar16) * iVar6;
        if (uVar17 < iVar5 + param_3) {
          iVar5 = uVar17 - param_3;
        }
        iVar12 = *(int *)(iVar12 + 0x31c) + iVar6 * (int)uVar16 + param_3;
        iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x318) + iVar12;
        FUN_1007e4a0(iVar6,param_9,iVar5);
        uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar13,iVar6,iVar12,iVar5);
      }
    }
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

