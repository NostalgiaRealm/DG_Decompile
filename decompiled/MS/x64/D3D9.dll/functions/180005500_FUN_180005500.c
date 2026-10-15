/*
 * FUN_180005500 at 180005500
 * ulonglong __fastcall FUN_180005500(longlong param_1, uint param_2)
 * Address ranges: 180005500-1800057db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180005500(longlong param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong local_50;
  uint local_48;
  
  uVar7 = FUN_18001c8ec(param_1,param_2);
  if ((int)uVar7 < 0) {
    return uVar7 & 0xffffffff;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
  local_48 = 0;
  local_50 = *(ulonglong *)(lVar3 + 0xacd8);
  while( true ) {
    uVar8 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_1800055f8;
    local_50 = *(ulonglong *)(lVar3 + 0xacd8 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar8 & 0xffffffff) >> 3));
  *pbVar5 = *pbVar5 & ~('\x01' << (uVar8 & 7));
  iVar6 = (int)uVar8 + local_48;
  while (uVar11 = local_48, iVar6 != -1) {
    lVar9 = (longlong)iVar6;
    plVar4 = *(longlong **)(param_1 + 0x1338 + lVar9 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = *(longlong **)(lVar3 + 0x5310 + lVar9 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    uVar8 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    *(undefined8 *)(lVar3 + 0x5310 + lVar9 * 8) = *(undefined8 *)(param_1 + 0x1338 + lVar9 * 8);
    if (local_50 == 0) {
      do {
        uVar11 = uVar11 + 0x40;
        local_48 = uVar11;
        if (0xf < uVar11) goto LAB_1800055f8;
        local_50 = ((ulonglong *)(lVar3 + 0xacd8))[uVar11 >> 6];
        uVar8 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar8 & 0xffffffff) >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar8 & 7));
    iVar6 = local_48 + (int)uVar8;
  }
LAB_1800055f8:
  local_50 = *(ulonglong *)(lVar3 + 0xacf0);
  local_48 = 0;
  while( true ) {
    uVar8 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    if (local_50 != 0) goto LAB_1800056ba;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) break;
    local_50 = *(ulonglong *)(lVar3 + 0xacf0 + (ulonglong)(local_48 >> 6) * 8);
  }
LAB_1800056d3:
  if (*(char *)(lVar3 + 0xacfa) != '\0') {
    if (*(longlong **)(&DAT_000066c0 + param_1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 8))();
    }
    if (*(longlong **)(lVar3 + 0xab58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0xab58) + 0x10))();
    }
    *(undefined8 *)(lVar3 + 0xab58) = *(undefined8 *)(&DAT_000066c0 + param_1);
  }
  iVar6 = 0;
  sVar1 = *(short *)(lVar3 + 0xa190);
  while (sVar1 != -1) {
    uVar11 = iVar6 * 2;
    iVar6 = iVar6 + 1;
    uVar2 = *(ushort *)(lVar3 + 0xa190 + (ulonglong)uVar11 * 2);
    uVar12 = (ulonglong)((uint)uVar2 * 4);
    puVar10 = (undefined4 *)(param_1 + 0x13e0 + uVar12 * 4);
    puVar13 = (undefined4 *)(lVar3 + (uVar12 + 0x1864) * 4);
    for (uVar8 = (ulonglong)
                 (((uint)*(ushort *)(lVar3 + 0xa190 + (ulonglong)(uVar11 + 1) * 2) - (uint)uVar2) *
                 4); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    sVar1 = *(short *)(lVar3 + 0xa190 + (ulonglong)(uVar11 + 2) * 2);
  }
  iVar6 = 0;
  sVar1 = *(short *)(lVar3 + 0xa994);
  while (sVar1 != -1) {
    uVar11 = iVar6 * 2;
    iVar6 = iVar6 + 1;
    uVar2 = *(ushort *)(lVar3 + 0xa994 + (ulonglong)uVar11 * 2);
    uVar12 = (ulonglong)((uint)uVar2 * 4);
    puVar10 = (undefined4 *)(param_1 + 0x53e0 + uVar12 * 4);
    puVar13 = (undefined4 *)(lVar3 + (uVar12 + 0x14e4) * 4);
    for (uVar8 = (ulonglong)
                 (((uint)*(ushort *)(lVar3 + 0xa994 + (ulonglong)(uVar11 + 1) * 2) - (uint)uVar2) *
                 4); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    sVar1 = *(short *)(lVar3 + 0xa994 + (ulonglong)(uVar11 + 2) * 2);
  }
  return uVar7 & 0xffffffff;
LAB_1800056ba:
  while( true ) {
    pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar8 & 0xffffffff) >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar8 & 7));
    uVar11 = local_48;
    iVar6 = local_48 + (int)uVar8;
    if (iVar6 == -1) break;
    lVar9 = (longlong)iVar6;
    if (*(longlong **)(&DAT_000066c8 + lVar9 * 8 + param_1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(&DAT_000066c8 + lVar9 * 8 + param_1) + 0x10))();
    }
    plVar4 = *(longlong **)(lVar3 + 0xab60 + lVar9 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    uVar8 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    *(undefined8 *)(lVar3 + 0xab60 + lVar9 * 8) =
         *(undefined8 *)(&DAT_000066c8 + lVar9 * 8 + param_1);
    *(undefined4 *)(lVar3 + 0xac20 + lVar9 * 4) = *(undefined4 *)(param_1 + 0x6748 + lVar9 * 4);
    *(undefined4 *)(lVar3 + 44000 + lVar9 * 4) = *(undefined4 *)(param_1 + 0x6788 + lVar9 * 4);
    if (local_50 == 0) {
      do {
        uVar11 = uVar11 + 0x40;
        local_48 = uVar11;
        if (0xf < uVar11) goto LAB_1800056d3;
        local_50 = ((ulonglong *)(lVar3 + 0xacf0))[uVar11 >> 6];
        uVar8 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
      } while (local_50 == 0);
    }
  }
  goto LAB_1800056d3;
}

