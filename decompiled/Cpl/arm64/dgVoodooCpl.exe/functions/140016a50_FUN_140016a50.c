/*
 * FUN_140016a50 at 140016a50
 * bool __cdecl FUN_140016a50(longlong param_1)
 * Address ranges: 140016a50-140016ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140016a50(longlong param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  LPVOID pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  LPVOID pvVar16;
  longlong lVar17;
  longlong lVar18;
  int local_80 [2];
  LPVOID local_78;
  undefined8 uStack_70;
  LPVOID local_68;
  undefined8 uStack_60;
  
  local_80[0] = FUN_140016f80(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60));
  bVar8 = local_80[0] != -1;
  if (local_80[0] == -1) {
    return false;
  }
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x80);
  uVar14 = 0;
  lVar11 = *(longlong *)(param_1 + 0x90);
  if (*(int *)(lVar11 + uVar12 * 0x18 + 0x10) != 0) {
    do {
      uVar9 = FUN_140024ce0((byte *)(*(longlong *)(param_1 + 0x70) +
                                    (ulonglong)
                                    *(uint *)(uVar14 * 0x28 +
                                             *(longlong *)(lVar11 + uVar12 * 0x18 + 8))),
                            (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_80[0]));
      if (uVar9 == 0) {
        *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
        break;
      }
      uVar12 = (ulonglong)*(uint *)(param_1 + 0x80);
      uVar9 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar9;
      lVar11 = *(longlong *)(param_1 + 0x90);
    } while (uVar9 < *(uint *)(lVar11 + uVar12 * 0x18 + 0x10));
  }
  lVar11 = *(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18;
  if ((int)uVar14 != *(int *)(lVar11 + 0x10)) goto LAB_140016c7c;
  iVar4 = *(int *)(lVar11 + 0x14);
  pvVar13 = (LPVOID)0x0;
  local_78 = (LPVOID)0x0;
  uStack_70 = 0;
  pvVar16 = (LPVOID)0x0;
  local_68 = (LPVOID)0x0;
  uStack_60 = 0;
  if (*(int *)(lVar11 + 0x10) == iVar4) {
    uVar9 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar9 = 0x10;
    }
    uVar15 = CONCAT44(0,uVar9);
    uVar12 = uVar15 * 0x28;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    if (SUB168(auVar6 * ZEXT816(0x28),8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    SVar2 = uVar12 + 8;
    if (0xfffffffffffffff7 < uVar12) {
      SVar2 = 0xffffffffffffffff;
    }
    puVar10 = (ulonglong *)thunk_FUN_1400247f0(SVar2);
    if (puVar10 != (ulonglong *)0x0) {
      puVar3 = puVar10 + 1;
      *puVar10 = uVar15;
      puVar10 = puVar3;
      if (uVar9 != 0) {
        do {
          puVar10[1] = 0;
          puVar10[2] = 0;
          uVar15 = uVar15 - 1;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10 = puVar10 + 5;
        } while (uVar15 != 0);
      }
      if (puVar3 != (ulonglong *)0x0) {
        uVar5 = *(uint *)(lVar11 + 0x14);
        uVar12 = 0;
        lVar18 = *(longlong *)(lVar11 + 8);
        if (uVar5 != 0) {
          do {
            FUN_140017788((undefined4 *)(puVar3 + uVar12 * 5),(undefined4 *)(lVar18 + uVar12 * 0x28)
                         );
            uVar1 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar1;
          } while (uVar1 < uVar5);
        }
        lVar18 = *(longlong *)(lVar11 + 8);
        if (lVar18 != 0) {
          lVar17 = *(longlong *)(lVar18 + -8);
          lVar7 = lVar18 + lVar17 * 0x28;
          for (; lVar17 != 0; lVar17 = lVar17 + -1) {
            thunk_FUN_140024830(*(LPVOID *)(lVar7 + -0x10));
            thunk_FUN_140024830(*(LPVOID *)(lVar7 + -0x20));
            lVar7 = lVar7 + -0x28;
          }
          thunk_FUN_140024830((LPVOID)(lVar18 + -8));
        }
        *(ulonglong **)(lVar11 + 8) = puVar3;
        *(uint *)(lVar11 + 0x14) = uVar9;
        goto LAB_140016c40;
      }
    }
    bVar8 = false;
  }
  else {
LAB_140016c40:
    uVar9 = *(uint *)(lVar11 + 0x10);
    *(uint *)(lVar11 + 0x10) = uVar9 + 1;
    FUN_140017788((undefined4 *)(*(longlong *)(lVar11 + 8) + (ulonglong)uVar9 * 0x28),local_80);
    bVar8 = true;
    pvVar13 = local_78;
    pvVar16 = local_68;
  }
  thunk_FUN_140024830(pvVar16);
  thunk_FUN_140024830(pvVar13);
LAB_140016c7c:
  *(int *)(param_1 + 0x84) = (int)uVar14;
  return bVar8;
}

