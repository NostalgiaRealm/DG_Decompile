/*
 * FUN_1800b12fc at 1800b12fc
 * ulonglong __fastcall FUN_1800b12fc(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800b12fc-1800b1797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b12fc(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  bool bVar7;
  BOOL BVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint local_res8 [2];
  ulonglong local_40;
  uint local_38;
  
  if (((*(byte *)(param_1 + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar7 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar7 = true;
    BVar8 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar8 == 0) {
      FUN_1800044dc(0);
    }
  }
  FUN_1800fa780(local_res8);
  uVar9 = FUN_180005500(param_1,param_2);
  if ((int)uVar9 < 0) goto LAB_1800b1751;
  uVar14 = 0;
  local_40 = *(ulonglong *)(param_3 + 0xad00);
  uVar11 = 0;
  if (local_40 != 0) {
    for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
    }
  }
  local_38 = 0;
  if (local_40 == 0) {
    do {
      uVar14 = uVar14 + 0x40;
      local_38 = uVar14;
      if (0xdf < uVar14) goto LAB_1800b1443;
      local_40 = *(ulonglong *)(param_3 + 0xad00 + (ulonglong)(uVar14 >> 6) * 8);
      uVar11 = 0;
      if (local_40 != 0) {
        for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
    } while (local_40 == 0);
  }
  while( true ) {
    pbVar5 = (byte *)((longlong)&local_40 + ((longlong)(uVar11 & 0xffffffff) >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar11 & 7));
    iVar10 = (int)uVar11 + local_38;
    if (iVar10 == -1) break;
    lVar12 = (ulonglong)(uint)(iVar10 / 0xe) * 0xe;
    uVar11 = 0;
    if (local_40 != 0) {
      for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    *(undefined4 *)(param_3 + 0x4ad0 + (lVar12 + (ulonglong)(uint)(iVar10 % 0xe)) * 4) =
         *(undefined4 *)(param_1 + 0x6ad0 + ((ulonglong)(uint)(iVar10 % 0xe) + lVar12) * 4);
    if (local_40 == 0) {
      do {
        local_38 = local_38 + 0x40;
        if (0xdf < local_38) goto LAB_1800b1443;
        local_40 = ((ulonglong *)(param_3 + 0xad00))[local_38 >> 6];
        uVar11 = 0;
        if (local_40 != 0) {
          for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      } while (local_40 == 0);
    }
  }
LAB_1800b1443:
  local_40 = *(ulonglong *)(param_3 + 0xad30);
  local_38 = 0;
  while( true ) {
    uVar11 = 0;
    if (local_40 != 0) {
      for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_40 != 0) goto LAB_1800b14b9;
    local_38 = local_38 + 0x40;
    if (0xf < local_38) break;
    local_40 = *(ulonglong *)(param_3 + 0xad30 + (ulonglong)(local_38 >> 6) * 8);
  }
  goto LAB_1800b14cd;
LAB_1800b14b9:
  while( true ) {
    pbVar5 = (byte *)((longlong)&local_40 + ((longlong)(uVar11 & 0xffffffff) >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar11 & 7));
    iVar10 = local_38 + (int)uVar11;
    if (iVar10 == -1) break;
    *(undefined4 *)(param_3 + 0x4f68 + (longlong)iVar10 * 4) =
         *(undefined4 *)(param_1 + 0xc4a0 + (longlong)iVar10 * 4);
    uVar11 = 0;
    if (local_40 != 0) {
      for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_40 == 0) {
      do {
        local_38 = local_38 + 0x40;
        if (0xf < local_38) goto LAB_1800b14cd;
        local_40 = ((ulonglong *)(param_3 + 0xad30))[local_38 >> 6];
        uVar11 = 0;
        if (local_40 != 0) {
          for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      } while (local_40 == 0);
    }
  }
LAB_1800b14cd:
  if (*(char *)(param_3 + 0xacfe) != '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x6f70);
    *(undefined8 *)(param_3 + 0x4fec) = *(undefined8 *)(param_1 + 0x6f68);
    *(undefined8 *)(param_3 + 0x4ff4) = uVar6;
  }
  if (*(char *)(param_3 + 0xacfd) != '\0') {
    *(undefined4 *)(param_3 + 0x4fe8) = *(undefined4 *)(param_1 + 0xc4e0);
  }
  if (*(char *)(param_3 + 0xacfc) != '\0') {
    if (*(longlong *)(param_1 + 0xc498) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0xc498) + 0xc);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar4 = *(undefined8 **)(param_3 + 0x4fb8);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 + -1 + *(int *)(puVar4 + 1) == 0) {
        FUN_1800c2d6c(puVar4);
      }
    }
    *(undefined8 *)(param_3 + 0x4fb8) = *(undefined8 *)(param_1 + 0xc498);
  }
  if (*(char *)(param_3 + 0xacf9) != '\0') {
    if (*(longlong *)(param_1 + 0xc490) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0xc490) + 0xc);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar4 = *(undefined8 **)(param_3 + 0x4fb0);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 + -1 + *(int *)(puVar4 + 1) == 0) {
        FUN_1800c30a8(puVar4);
      }
    }
    *(undefined8 *)(param_3 + 0x4fb0) = *(undefined8 *)(param_1 + 0xc490);
  }
  iVar10 = 0;
  sVar2 = *(short *)(param_3 + 0x527c);
  while (sVar2 != -1) {
    uVar14 = iVar10 * 2;
    iVar10 = iVar10 + 1;
    uVar3 = *(ushort *)(param_3 + 0x527c + (ulonglong)uVar14 * 2);
    puVar13 = (undefined4 *)(param_1 + 0x6990 + (ulonglong)uVar3 * 4);
    puVar16 = (undefined4 *)(param_3 + 0x4ffc + (ulonglong)uVar3 * 4);
    for (uVar11 = (ulonglong)
                  ((uint)*(ushort *)(param_3 + 0x527c + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar3);
        uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    sVar2 = *(short *)(param_3 + 0x527c + (ulonglong)(uVar14 + 2) * 2);
  }
  iVar10 = 0;
  sVar2 = *(short *)(param_3 + 0x52a0);
  while (sVar2 != -1) {
    uVar14 = iVar10 * 2;
    iVar10 = iVar10 + 1;
    uVar3 = *(ushort *)(param_3 + 0x52a0 + (ulonglong)uVar14 * 2);
    uVar15 = (ulonglong)((uint)uVar3 * 4);
    puVar13 = (undefined4 *)(param_1 + 0x69d0 + uVar15 * 4);
    puVar16 = (undefined4 *)(param_3 + (uVar15 + 0x140f) * 4);
    for (uVar11 = (ulonglong)
                  (((uint)*(ushort *)(param_3 + 0x52a0 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar3)
                  * 4); uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    sVar2 = *(short *)(param_3 + 0x52a0 + (ulonglong)(uVar14 + 2) * 2);
  }
  if (*(char *)(param_3 + 0xacf8) != '\0') {
    if (*(longlong *)(param_1 + 0xc488) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0xc488) + 0xc);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar4 = *(undefined8 **)(param_3 + 0x4fa8);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 + -1 + *(int *)(puVar4 + 1) == 0) {
        FUN_1800c04c0(puVar4);
      }
    }
    *(undefined8 *)(param_3 + 0x4fa8) = *(undefined8 *)(param_1 + 0xc488);
  }
  iVar10 = 0;
  sVar2 = *(short *)(param_3 + 0x52c4);
  while (sVar2 != -1) {
    uVar14 = iVar10 * 2;
    iVar10 = iVar10 + 1;
    uVar3 = *(ushort *)(param_3 + 0x52c4 + (ulonglong)uVar14 * 2);
    puVar13 = (undefined4 *)(param_1 + 0x6a10 + (ulonglong)uVar3 * 4);
    puVar16 = (undefined4 *)(param_3 + 0x513c + (ulonglong)uVar3 * 4);
    for (uVar11 = (ulonglong)
                  ((uint)*(ushort *)(param_3 + 0x52c4 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar3);
        uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    sVar2 = *(short *)(param_3 + 0x52c4 + (ulonglong)(uVar14 + 2) * 2);
  }
  iVar10 = 0;
  sVar2 = *(short *)(param_3 + 0x52e8);
  while (sVar2 != -1) {
    uVar14 = iVar10 * 2;
    iVar10 = iVar10 + 1;
    uVar3 = *(ushort *)(param_3 + 0x52e8 + (ulonglong)uVar14 * 2);
    uVar15 = (ulonglong)((uint)uVar3 * 4);
    puVar13 = (undefined4 *)(param_1 + 0x6a50 + uVar15 * 4);
    puVar16 = (undefined4 *)(param_3 + (uVar15 + 0x145f) * 4);
    for (uVar11 = (ulonglong)
                  (((uint)*(ushort *)(param_3 + 0x52e8 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar3)
                  * 4); uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    sVar2 = *(short *)(param_3 + 0x52e8 + (ulonglong)(uVar14 + 2) * 2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))
            (*(longlong **)(param_1 + 0x28),param_3,*(undefined8 *)(param_3 + 8));
LAB_1800b1751:
  FUN_1800fa7bc();
  if (bVar7) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar9 & 0xffffffff;
}

