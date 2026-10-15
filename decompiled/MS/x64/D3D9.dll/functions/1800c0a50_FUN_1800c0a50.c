/*
 * FUN_1800c0a50 at 1800c0a50
 * undefined __fastcall FUN_1800c0a50(undefined8 * param_1)
 * Address ranges: 1800c0a50-1800c0ca5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c0a50(undefined8 *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  bool bVar7;
  BOOL BVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong local_40;
  uint local_38;
  
  if (((*(byte *)(param_1[3] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  if ((*(char *)(param_1[5] + 0xacf9) != '\0') &&
     (puVar3 = *(undefined8 **)(param_1[5] + 0x4fb0), puVar3 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)puVar3 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 + -1 + *(int *)(puVar3 + 1) == 0) {
      FUN_1800c30a8(puVar3);
    }
  }
  if ((*(char *)(param_1[5] + 0xacf8) != '\0') &&
     (puVar3 = *(undefined8 **)(param_1[5] + 0x4fa8), puVar3 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)puVar3 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 + -1 + *(int *)(puVar3 + 1) == 0) {
      FUN_1800c04c0(puVar3);
    }
  }
  puVar3 = *(undefined8 **)(param_1[5] + 0x4fb8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar3 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 + -1 + *(int *)(puVar3 + 1) == 0) {
      FUN_1800c2d6c(puVar3);
    }
  }
  local_38 = 0;
  puVar2 = (ulonglong *)(param_1[5] + 0xad38);
  local_40 = *puVar2;
  while( true ) {
    uVar11 = 0;
    if (local_40 != 0) {
      for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_40 != 0) break;
    local_38 = local_38 + 0x40;
    if (4 < local_38) goto LAB_1800c0bdc;
    local_40 = *(ulonglong *)(param_1[5] + 0xad38 + (ulonglong)(local_38 >> 6) * 8);
  }
  pbVar6 = (byte *)((longlong)&local_40 + ((longlong)(uVar11 & 0xffffffff) >> 3));
  *pbVar6 = *pbVar6 & ~('\x01' << (uVar11 & 7));
  iVar9 = local_38 + (int)uVar11;
  while (uVar12 = local_38, iVar9 != -1) {
    plVar4 = *(longlong **)(param_1[5] + 0x4fc0 + (longlong)iVar9 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    uVar11 = 0;
    if (local_40 != 0) {
      for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_40 == 0) {
      do {
        uVar12 = uVar12 + 0x40;
        local_38 = uVar12;
        if (4 < uVar12) goto LAB_1800c0bdc;
        local_40 = puVar2[uVar12 >> 6];
        uVar11 = 0;
        if (local_40 != 0) {
          for (; (local_40 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      } while (local_40 == 0);
    }
    pbVar6 = (byte *)((longlong)&local_40 + ((longlong)(uVar11 & 0xffffffff) >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar11 & 7));
    iVar9 = local_38 + (int)uVar11;
  }
LAB_1800c0bdc:
  lVar5 = param_1[3];
  uVar12 = *(uint *)(param_1 + 4);
  uVar10 = *(uint *)(lVar5 + 27000);
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      iVar9 = (int)uVar11;
      if (*(undefined8 **)(*(longlong *)(lVar5 + 0x6970) + uVar11 * 8) == param_1) {
        if (iVar9 != -1) {
          uVar13 = iVar9 + 1;
          if (uVar13 < uVar10) {
            do {
              uVar11 = (ulonglong)uVar13;
              uVar10 = uVar13 - 1;
              uVar13 = uVar13 + 1;
              *(undefined8 *)(*(longlong *)(lVar5 + 0x6970) + (ulonglong)uVar10 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar5 + 0x6970) + uVar11 * 8);
            } while (uVar13 < *(uint *)(lVar5 + 27000));
          }
          *(int *)(lVar5 + 27000) = *(int *)(lVar5 + 27000) + -1;
        }
        break;
      }
      uVar11 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < uVar10);
  }
  if (((uVar12 != 0) && (uVar12 <= *(uint *)(lVar5 + 0x400))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x3f8) + (ulonglong)(uVar12 - 1) * 8) != 0)) {
    FUN_1800074ac(lVar5,uVar12 - 1);
  }
  *param_1 = &PTR_FUN_180104928;
  FUN_1800fbcf0(param_1);
  if (bVar7) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

