/*
 * FUN_100690d0 at 100690d0
 * undefined FUN_100690d0(void)
 * Address ranges: 100690d0-1006956f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100690d0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  int iVar21;
  uint local_12c;
  code *local_128;
  int local_124;
  int local_120;
  int iStack_11c;
  int aiStack_118 [54];
  
  local_124 = 0;
  local_12c = *(uint *)(param_2 + 0x10);
  iVar18 = 0;
  uVar14 = (local_12c & 0xaaaaaaaa) >> 1 | (local_12c & 0x55555555) << 1;
  uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
  uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  lVar16 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
  uVar14 = (uint)lVar16;
  pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar21 = param_1 + 0xf000;
  iVar17 = param_1 + 0xc000;
  if ((1 - (uVar14 >> 5) & 0xff) != 0) {
    local_128 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    pbVar7 = (byte *)((int)&local_12c + ((int)uVar14 >> 3));
    *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
    local_120 = param_1 + 0xf000;
    iStack_11c = param_1 + 0xc000;
    while( true ) {
      uVar14 = (uint)lVar16;
      iVar17 = 0;
      iVar21 = *(int *)(param_1 + 0xfc38 + uVar14 * 4);
      iVar19 = (int)uVar14 >> 3;
      if (iVar21 != 0) {
        iVar17 = *(int *)(*(int *)(iVar21 + 0x28) + *(int *)(iVar21 + 0x38) * 8);
        piVar1 = (int *)(iVar17 + 0x30);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        iVar21 = *(int *)(param_1 + uVar14 * 4 + 0xfc38);
        if (*(int *)(iVar21 + 0x1c) == 1) {
          pbVar7 = (byte *)(iVar19 + iVar21 + 0x20);
          bVar20 = *pbVar7;
          *pbVar7 = bVar20 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
          uVar10 = (*local_128)();
          uVar11 = (*extraout_w11)(uVar10,lVar16);
          *(uint *)(param_1 + 0xfcfc) =
               *(uint *)(param_1 + 0xfcfc) |
               (uVar11 & 0xff | (uint)((bVar20 >> (ulonglong)(uVar14 & 7) & 1) != 0)) <<
               (ulonglong)(uVar14 & 0x1f);
        }
      }
      pbVar7 = (byte *)(iVar19 + param_1 + 0xfcfc);
      bVar20 = *pbVar7;
      *pbVar7 = bVar20 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
      if ((bVar20 >> (ulonglong)(uVar14 & 7) & 1) != 0) {
        aiStack_118[iVar18 * 3] = iVar17;
        iVar21 = param_1 + uVar14 * 4;
        aiStack_118[iVar18 * 3 + 1] = *(int *)(iVar21 + 0xfc7c);
        aiStack_118[iVar18 * 3 + 2] = *(int *)(iVar21 + 0xfcbc);
        *(byte *)((int)&local_124 + iVar19) =
             *(byte *)((int)&local_124 + iVar19) | (byte)(1 << (ulonglong)(uVar14 & 7));
        iVar18 = iVar18 + 1;
      }
      uVar14 = (local_12c & 0xaaaaaaaa) >> 1 | (local_12c & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      lVar16 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
      uVar14 = (uint)lVar16;
      pcVar13 = local_128;
      iVar21 = local_120;
      iVar17 = iStack_11c;
      if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
      pbVar7 = (byte *)((int)&local_12c + ((int)uVar14 >> 3));
      *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
    }
  }
  iVar8 = local_124;
  bVar20 = 0;
  iVar19 = iVar18;
  if (param_3 != '\0') {
    bVar20 = *(byte *)(iVar21 + 0xd10);
    iVar15 = 0;
    iVar3 = *(int *)(iVar17 + 0x3c78);
    if (iVar3 != 0) {
      iVar15 = *(int *)(*(int *)(iVar3 + 0x28) + *(int *)(iVar3 + 0x38) * 8);
      piVar1 = (int *)(iVar15 + 0x30);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (*(int *)(*(int *)(iVar17 + 0x3c78) + 0x1c) == 1) {
        pbVar7 = (byte *)(*(int *)(iVar17 + 0x3c78) + 0x20);
        bVar4 = *pbVar7;
        *pbVar7 = bVar4 & 0xfe;
        uVar10 = (*pcVar13)();
        bVar9 = (*extraout_w11_00)(uVar10,0);
        bVar20 = bVar9 | (bVar4 & 1) != 0 | bVar20;
      }
    }
    if (bVar20 != 0) {
      iVar19 = iVar18 + 1;
      *(undefined1 *)(iVar21 + 0xd10) = 0;
      aiStack_118[iVar18 * 3] = iVar15;
      aiStack_118[iVar18 * 3 + 1] = *(int *)(iVar17 + 0x3d00);
    }
  }
  if ((iVar8 == 0) && (bVar20 == 0)) {
    return;
  }
  iVar18 = *(int *)(iVar17 + 0x36b8);
  puVar2 = (undefined4 *)(iVar18 + 0x11c0);
  FUN_101308d0(puVar2);
  if (*(char *)(iVar18 + 0x12ec) != '\0') {
    iVar19 = iVar19 * 0xc;
    puVar12 = (undefined4 *)FUN_10130778(puVar2,iVar19 + 0x10);
    if (puVar12 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar18 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = iVar19 + 0x10;
      puVar12[3] = param_1;
      puVar12[4] = iVar8;
      *(byte *)(puVar12 + 5) = bVar20;
      uVar14 = (int)puVar12 + 0x1bU & 0xfffffffc;
      puVar12[2] = uVar14;
      FUN_101325a0(uVar14,aiStack_118,iVar19);
      *(undefined4 *)(uVar14 + iVar19) = 0;
      *puVar12 = FUN_10069580;
      puVar2[*(int *)(iVar18 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar14 + iVar19);
      if (*(char *)(iVar18 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar18 + 0x1220));
        return;
      }
      goto LAB_1006954c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar18 + 0x12d0);
  *piVar1 = (int)aiStack_118;
  piVar1[1] = param_1;
  piVar1[2] = iVar8;
  *(byte *)(piVar1 + 3) = bVar20;
  FUN_10069580(piVar1);
LAB_1006954c:
  *puVar2 = 0;
  return;
}

