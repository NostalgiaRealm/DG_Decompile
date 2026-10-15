/*
 * FUN_180052eac at 180052eac
 * longlong __fastcall FUN_180052eac(longlong param_1, uint param_2)
 * Address ranges: 180052eac-180053221
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180052eac(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  LPVOID pvVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined4 local_3c;
  
  uVar12 = *(uint *)(param_1 + 0x2c);
  if (uVar12 < param_2 * 2) {
    uVar12 = (3 - (uint)(uVar12 * 3 < param_2)) * param_2;
  }
  uVar18 = *(uint *)(param_1 + 0x28);
  uVar12 = (uVar18 - 1) + uVar12 & -uVar18;
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (*(uint *)(param_1 + 0x30) < *(int *)(param_1 + 0x34) + uVar12)) {
    return 0;
  }
  uVar21 = (ulonglong)uVar12 / (ulonglong)uVar18;
  uVar13 = (int)uVar21 + 0x3f;
  uVar20 = (uVar13 & 0xffffffc0) >> 3;
  uVar14 = uVar13 >> 6 & 0x3f;
  uVar18 = (uVar13 >> 6) + 0x3f;
  uVar19 = uVar18 >> 3 & 0x1ffffff8;
  puVar8 = (undefined1 *)thunk_FUN_18005d6fc((ulonglong)uVar20);
  puVar9 = (undefined1 *)thunk_FUN_18005d6fc((ulonglong)uVar19);
  if ((puVar8 == (undefined1 *)0x0) || (puVar9 == (undefined1 *)0x0)) goto LAB_1800531f8;
  FUN_18005f374(puVar8,0,(ulonglong)uVar20);
  FUN_18005f374(puVar9,0,(ulonglong)uVar19);
  *(ulonglong *)(puVar8 + (ulonglong)(uVar13 >> 6) * 8 + -8) =
       -(ulonglong)((uVar21 & 0x3f) != 0) & -1L << ((byte)uVar21 & 0x3f);
  *(ulonglong *)(puVar9 + (ulonglong)(uVar18 >> 6) * 8 + -8) =
       -(ulonglong)(uVar14 != 0) & -1L << (sbyte)uVar14;
  pvVar10 = (LPVOID)thunk_FUN_18005d6fc((ulonglong)uVar12);
  if (pvVar10 == (LPVOID)0x0) goto LAB_1800531f8;
  uVar18 = *(uint *)(param_1 + 0x48);
  uVar13 = 0;
  if (uVar18 == 0) {
LAB_18005305d:
    iVar4 = *(int *)(param_1 + 0x4c);
    if (iVar4 == *(int *)(param_1 + 0x48)) {
      uVar21 = (ulonglong)(uint)(iVar4 * 2);
      if (iVar4 == 0) {
        uVar21 = 0x10;
      }
      lVar11 = thunk_FUN_18005d6fc(uVar21 << 6);
      if (lVar11 != 0) {
        uVar18 = 0;
        if (*(int *)(param_1 + 0x48) != 0) {
          do {
            lVar15 = *(longlong *)(param_1 + 0x40);
            uVar16 = (ulonglong)uVar18;
            uVar18 = uVar18 + 1;
            lVar17 = uVar16 * 0x40;
            uVar6 = ((undefined8 *)(lVar15 + lVar17))[1];
            *(undefined8 *)(lVar11 + lVar17) = *(undefined8 *)(lVar15 + lVar17);
            ((undefined8 *)(lVar11 + lVar17))[1] = uVar6;
            puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar17);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar17);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar17);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(lVar11 + 0x30 + lVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
          } while (uVar18 < *(uint *)(param_1 + 0x48));
        }
        FUN_18005d720(*(LPVOID *)(param_1 + 0x38));
        *(longlong *)(param_1 + 0x38) = lVar11;
        *(longlong *)(param_1 + 0x40) = lVar11;
        *(int *)(param_1 + 0x4c) = (int)uVar21;
      }
    }
    uVar18 = *(uint *)(param_1 + 0x48);
    if (*(uint *)(param_1 + 0x4c) != uVar18) {
      while (uVar13 < uVar18) {
        lVar11 = *(longlong *)(param_1 + 0x40);
        lVar17 = (ulonglong)uVar18 * 0x40;
        lVar15 = (ulonglong)(uVar18 - 1) * 0x40;
        uVar6 = ((undefined8 *)(lVar11 + lVar15))[1];
        *(undefined8 *)(lVar11 + lVar17) = *(undefined8 *)(lVar11 + lVar15);
        ((undefined8 *)(lVar11 + lVar17))[1] = uVar6;
        puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar15);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar17);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar15);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar17);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar15);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lVar11 + 0x30 + lVar17);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        uVar18 = uVar18 - 1;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      plVar1 = (longlong *)(param_1 + 0x40);
      lVar15 = (ulonglong)uVar13 * 0x40;
      *(LPVOID *)(lVar15 + 8 + *plVar1) = pvVar10;
      lVar11 = *plVar1;
      *(LPVOID *)(lVar15 + 0x10 + lVar11) = pvVar10;
      *(ulonglong *)(lVar15 + 0x18 + lVar11) = (ulonglong)uVar12;
      *(undefined1 **)(lVar15 + 0x20 + lVar11) = puVar8;
      *(undefined1 **)(lVar15 + 0x28 + lVar11) = puVar9;
      *(uint *)(lVar15 + 0x30 + lVar11) = uVar20;
      *(uint *)(lVar15 + 0x34 + lVar11) = uVar19;
      *(undefined4 *)(lVar15 + 0x38 + lVar11) = 0;
      *(undefined4 *)(lVar15 + 0x3c + lVar11) = local_3c;
      *(LPVOID *)(lVar15 + *plVar1) = pvVar10;
    }
  }
  else {
    uVar14 = 0;
    do {
      uVar13 = uVar18 + uVar14 >> 1;
      pvVar5 = *(LPVOID *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13 * 0x40);
      uVar7 = uVar13;
      if (pvVar5 <= pvVar10) {
        if (pvVar10 <= pvVar5) break;
        uVar14 = uVar13 + 1;
        uVar13 = uVar14;
        uVar7 = uVar18;
      }
      uVar18 = uVar7;
    } while (uVar18 != uVar14);
    if (uVar13 == *(uint *)(param_1 + 0x48)) goto LAB_18005305d;
    lVar11 = *(longlong *)(param_1 + 0x40);
    lVar15 = (ulonglong)uVar13 * 0x40;
    if (*(LPVOID *)(lVar15 + lVar11) != pvVar10) goto LAB_18005305d;
    *(LPVOID *)(lVar15 + 0x10 + lVar11) = pvVar10;
    *(ulonglong *)(lVar15 + 0x18 + lVar11) = (ulonglong)uVar12;
    *(undefined1 **)(lVar15 + 0x20 + lVar11) = puVar8;
    *(undefined1 **)(lVar15 + 0x28 + lVar11) = puVar9;
    *(uint *)(lVar15 + 0x30 + lVar11) = uVar20;
    *(uint *)(lVar15 + 0x34 + lVar11) = uVar19;
    *(undefined4 *)(lVar15 + 0x38 + lVar11) = 0;
    *(undefined4 *)(lVar15 + 0x3c + lVar11) = local_3c;
  }
  uVar18 = *(uint *)(param_1 + 0x48);
  if (uVar18 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x40);
    uVar13 = 0;
    uVar14 = uVar18;
    do {
      uVar20 = uVar14 + uVar13 >> 1;
      pvVar5 = *(LPVOID *)(lVar11 + (ulonglong)uVar20 * 0x40);
      uVar19 = uVar20;
      if (pvVar5 <= pvVar10) {
        if (pvVar10 <= pvVar5) break;
        uVar13 = uVar20 + 1;
        uVar19 = uVar14;
        uVar20 = uVar13;
      }
      uVar14 = uVar19;
    } while (uVar14 != uVar13);
    if (((uVar20 != uVar18) && (*(LPVOID *)((ulonglong)uVar20 * 0x40 + lVar11) == pvVar10)) &&
       (lVar11 = ((ulonglong)uVar20 * 0x40 | 0x10) + lVar11, lVar11 != 0)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar12;
      return lVar11;
    }
  }
  FUN_18005d720(pvVar10);
LAB_1800531f8:
  FUN_18005d720(puVar8);
  FUN_18005d720(puVar9);
  return 0;
}

