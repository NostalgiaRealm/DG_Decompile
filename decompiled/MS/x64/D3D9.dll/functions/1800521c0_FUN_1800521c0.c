/*
 * FUN_1800521c0 at 1800521c0
 * undefined __fastcall FUN_1800521c0(longlong param_1, longlong param_2, char param_3)
 * Address ranges: 1800521c0-180052464
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800521c0(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar10;
  undefined8 *puVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *local_res10;
  uint local_res18 [4];
  longlong local_148;
  undefined4 auStack_140 [66];
  ulonglong uVar9;
  
  local_res18[0] = *(uint *)(param_2 + 0x10);
  uVar16 = 0;
  local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffff00000000);
  uVar15 = 0;
  if (local_res18[0] != 0) {
    for (; (local_res18[0] >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  iVar13 = 0;
  if (local_res18[0] != 0) {
    pbVar6 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar15 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar15 & 7));
    uVar17 = uVar16;
    while( true ) {
      uVar8 = uVar15 & 0xff;
      uVar9 = (ulonglong)uVar8;
      lVar4 = *(longlong *)(param_1 + 0xffe0 + uVar9 * 8);
      lVar10 = 0;
      if (lVar4 != 0) {
        lVar10 = *(longlong *)
                  (*(longlong *)(lVar4 + 0x40) + (ulonglong)*(uint *)(lVar4 + 0x54) * 0x10);
        LOCK();
        *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + 1;
        UNLOCK();
        lVar4 = *(longlong *)(param_1 + 0xffe0 + uVar9 * 8);
        if (*(int *)(lVar4 + 0x30) == 1) {
          pbVar6 = (byte *)(lVar4 + 0x34 + ((longlong)(int)uVar8 >> 3));
          bVar12 = *pbVar6;
          *pbVar6 = *pbVar6 & ~('\x01' << (uVar15 & 7));
          bVar7 = (**(code **)(*(longlong *)(lVar10 + 0x40) + 0x10))
                            ((longlong *)(lVar10 + 0x40),uVar9);
          *(uint *)(param_1 + 0x100e8) =
               *(uint *)(param_1 + 0x100e8) |
               (uint)(bVar7 | (bVar12 >> (uVar15 & 7) & 1) != 0) << ((byte)uVar15 & 0x1f);
        }
      }
      pbVar6 = (byte *)(param_1 + 0x100e8 + ((longlong)(int)uVar8 >> 3));
      bVar12 = *pbVar6;
      *pbVar6 = *pbVar6 & ~('\x01' << (uVar15 & 7));
      uVar16 = uVar17;
      if ((bVar12 >> (uVar15 & 7) & 1) != 0) {
        uVar16 = (ulonglong)((int)uVar17 + 1);
        auStack_140[uVar17 * 4] = *(undefined4 *)(param_1 + 0x10068 + uVar9 * 4);
        auStack_140[uVar17 * 4 + 1] = *(undefined4 *)(param_1 + 0x100a8 + uVar9 * 4);
        pbVar6 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar8 >> 3) + -8);
        *pbVar6 = *pbVar6 | '\x01' << (uVar15 & 7);
        (&local_148)[uVar17 * 2] = lVar10;
      }
      uVar15 = 0;
      if (local_res18[0] != 0) {
        for (; (local_res18[0] >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
        }
      }
      if (local_res18[0] == 0) break;
      pbVar6 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar15 >> 3));
      *pbVar6 = *pbVar6 & ~('\x01' << (uVar15 & 7));
      uVar17 = uVar16;
    }
    iVar13 = (int)local_res10;
  }
  iVar14 = (int)uVar16;
  bVar12 = 0;
  if (param_3 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10060);
    lVar10 = 0;
    bVar12 = *(byte *)(param_1 + 0x10104);
    if (lVar4 != 0) {
      lVar10 = *(longlong *)
                (*(longlong *)(lVar4 + 0x40) + (ulonglong)*(uint *)(lVar4 + 0x54) * 0x10);
      LOCK();
      *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + 1;
      UNLOCK();
      if (*(int *)(*(longlong *)(param_1 + 0x10060) + 0x30) == 1) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x10060) + 0x34);
        uVar15 = *puVar1;
        *puVar1 = *puVar1 & 0xfffffffe;
        bVar7 = (**(code **)(*(longlong *)(lVar10 + 0x40) + 0x10))((longlong *)(lVar10 + 0x40),0);
        bVar12 = bVar12 | bVar7 | (uVar15 & 1) != 0;
      }
    }
    if (bVar12 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x100ec);
      *(undefined1 *)(param_1 + 0x10104) = 0;
      iVar14 = iVar14 + 1;
      (&local_148)[uVar16 * 2] = lVar10;
      auStack_140[uVar16 * 4] = uVar3;
    }
  }
  if ((iVar13 == 0) && (bVar12 == 0)) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  piVar2 = (int *)(lVar4 + 0x12c0);
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    uVar15 = iVar14 * 0x10;
    local_res10 = (undefined8 *)FUN_1800fab80((longlong)piVar2,uVar15 + 0x18);
    if (local_res10 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar4 + 0x14c0) = *(int *)(lVar4 + 0x14c0) + 1;
      UNLOCK();
      local_res10[1] = (ulonglong)(uVar15 + 0x18);
      local_res10[3] = param_1;
      puVar11 = (undefined8 *)((longlong)local_res10 + 0x2fU & 0xfffffffffffffff8);
      *(int *)(local_res10 + 4) = iVar13;
      *(byte *)((longlong)local_res10 + 0x24) = bVar12;
      local_res10[2] = puVar11;
      FUN_1800fbec0(puVar11,&local_148,(ulonglong)uVar15);
      puVar11 = (undefined8 *)((ulonglong)uVar15 + (longlong)puVar11);
      *puVar11 = 0;
      *local_res10 = FUN_180052468;
      *(undefined8 **)(lVar4 + 0x1350 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28) = puVar11;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar2);
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180052442;
    }
    FUN_1800facb0(piVar2);
    Sleep(100);
    FUN_1800fab60(piVar2);
  }
  plVar5 = *(longlong **)(lVar4 + 0x14a0);
  *plVar5 = (longlong)&local_148;
  plVar5[1] = param_1;
  *(int *)(plVar5 + 2) = iVar13;
  *(byte *)((longlong)plVar5 + 0x14) = bVar12;
  FUN_180052468(plVar5);
LAB_180052442:
  FUN_1800facb0(piVar2);
  return;
}

