/*
 * FUN_180056e50 at 180056e50
 * undefined __fastcall FUN_180056e50(longlong param_1)
 * Address ranges: 180056e50-180057062
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056e50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar11 = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar10 = (ulonglong *)0x0;
        puVar9 = (undefined8 *)&DAT_00000024;
        puVar12 = (undefined8 *)&DAT_00000008;
        puVar16 = (undefined8 *)&DAT_00000010;
        puVar14 = (undefined8 *)&DAT_00000018;
        puVar15 = (uint *)&DAT_00000020;
        goto LAB_180056eda;
      }
      do {
        lVar8 = (ulonglong)uVar11 * 0x38;
        lVar2 = *(longlong *)(param_1 + 0x30);
        puVar10 = (ulonglong *)(lVar2 + 8 + lVar8);
        puVar12 = (undefined8 *)(lVar2 + 0x10 + lVar8);
        puVar16 = (undefined8 *)(lVar2 + 0x18 + lVar8);
        puVar14 = (undefined8 *)(lVar2 + 0x20 + lVar8);
        puVar15 = (uint *)(lVar2 + 0x28 + lVar8);
        puVar9 = (undefined8 *)(lVar2 + 0x2c + lVar8);
LAB_180056eda:
        local_80 = *puVar12;
        local_5c = *puVar9;
        uVar3 = *puVar10;
        uVar4 = *puVar16;
        uVar5 = *puVar14;
        uVar1 = *puVar15;
        local_54 = *(undefined4 *)(puVar9 + 1);
        local_50 = 0xffffffff;
        local_78 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78);
        local_4c = 0;
        local_88 = uVar3;
        local_70 = uVar4;
        local_68 = uVar5;
        local_60 = uVar1;
        FUN_1800570f4(param_1,&local_88);
        if (*(int *)(uVar3 + 0x10) == 9) {
          FUN_1800e4238(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),uVar4,0,uVar1);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1508);
          FUN_1800e2604(lVar2);
          plVar6 = *(longlong **)(lVar2 + 0x688);
          (**(code **)(*plVar6 + 0x1b0))(plVar6,uVar4,0,uVar1,1,uVar5,(ulonglong)uVar1 << 3);
          *puVar16 = 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x38));
    }
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    uVar11 = *(uint *)(param_1 + 0x50);
    while (uVar11 != 0xffffffff) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar13 = (ulonglong)uVar11 * 0x40;
      lVar8 = *(longlong *)(lVar2 + lVar13);
      if (lVar8 == 0) break;
      if ((*(char *)(lVar2 + 0x3c + lVar13) != '\0') && (*(char *)(lVar2 + 0x3d + lVar13) == '\0'))
      {
        lVar7 = *(longlong *)(lVar2 + 8 + lVar13);
        do {
          LOCK();
          bVar17 = *(int *)(lVar8 + 0x54) == 0;
          if (bVar17) {
            *(int *)(lVar8 + 0x54) = 1;
          }
          UNLOCK();
        } while (!bVar17);
        if (lVar7 == *(longlong *)(lVar8 + 0x30)) {
          LOCK();
          if (*(int *)(lVar8 + 0x50) == 2) {
            *(int *)(lVar8 + 0x50) = 3;
          }
          UNLOCK();
        }
        *(undefined4 *)(lVar8 + 0x54) = 0;
      }
      uVar11 = *(uint *)(lVar2 + 0x38 + lVar13);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    SetEvent(*(HANDLE *)(param_1 + 0xb0));
  }
  return;
}

