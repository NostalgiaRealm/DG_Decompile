/*
 * FUN_1001e7d8 at 1001e7d8
 * undefined FUN_1001e7d8(void)
 * Address ranges: 1001e7d8-1001ea27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e7d8(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,uint param_6,
                 ulonglong param_7,int param_8,undefined4 param_9,undefined4 param_10,uint param_11,
                 undefined4 param_12,int param_13)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  code *extraout_w11;
  
  param_7 = param_7 & 0xffffffff;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    uVar14 = (ulonglong)param_11;
    if (((param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797) && (int)param_11 <= param_13) &&
         -1 < (int)param_11) && (uVar8 = FUN_1001f360(param_5), uVar8 < 9)) {
      uVar9 = FUN_1001f360(param_4);
      iVar13 = (int)uVar14;
      uVar12 = (uint)param_7;
      if (((uVar9 < 9 && uVar12 < 0x10) && param_6 < 7) &&
         ((param_8 == 3 || ((uVar9 & 1) == (uint)(param_8 != 1))))) {
        param_3 = param_3 & 0xfffffff8;
        for (; (int)uVar9 < (int)uVar8; uVar8 = uVar8 - 1) {
          param_7 = param_7 & 0xffffffff;
          iVar10 = FUN_1001f388(param_8,(&DAT_100957a8)[uVar8],(&DAT_100957a8)[uVar8],param_6);
          iVar13 = (int)uVar14;
          uVar12 = (uint)param_7;
          param_3 = iVar10 + param_3;
        }
        iVar10 = *(int *)(param_1 + 0xc) + param_2 * 0x4e8;
        uVar8 = *(uint *)(iVar10 + 0x2a4);
        if (param_3 < uVar8) {
          uVar3 = *(uint *)(&DAT_10096998 + param_4 * 4);
          uVar9 = uVar3 >> (ulonglong)(*(byte *)(param_6 + 0x1009698c) & 0x1f);
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          uVar2 = uVar3;
          if (param_6 - 4 < 3) {
            uVar2 = uVar9;
            uVar9 = uVar3;
          }
          iVar5 = (uint)*(byte *)(uVar12 + 0x10096940) * ((uVar9 | uVar2 << 0x10) >> 0x10);
          iVar4 = iVar5 + (param_13 - iVar13) * iVar5;
          if (uVar8 < iVar4 + param_3) {
            iVar4 = uVar8 - param_3;
          }
          iVar13 = *(int *)(iVar10 + 0x2a0) + iVar5 * iVar13 + param_3;
          iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 0x29c) + iVar13;
          FUN_1007ac00(iVar10,param_9,iVar4);
          uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar11,iVar10,iVar13,iVar4);
        }
      }
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

