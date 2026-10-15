/*
 * FUN_1800484f0 at 1800484f0
 * undefined FUN_1800484f0(void)
 * Address ranges: 1800484f0-18004874b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800484f0(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  uVar7 = (ulonglong)*param_2;
  uVar2 = *(uint *)(param_1 + 0xf7c8);
  if (uVar2 == 0) {
LAB_18004859c:
    uVar10 = 0;
    if (uVar2 != 0) goto LAB_1800485a8;
  }
  else {
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      uVar3 = uVar8 + uVar9 >> 1;
      uVar10 = (ulonglong)uVar3;
      uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar10 * 0x18);
      if (uVar13 <= uVar7) {
        if (uVar7 <= uVar13) break;
        uVar9 = uVar3 + 1;
        uVar10 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar9);
    if ((((uint)uVar10 == uVar2) ||
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar10 * 0x18), *puVar1 != uVar7))
       || (puVar1 = puVar1 + 2, puVar1 == (ulonglong *)0x0)) goto LAB_18004859c;
    uVar10 = *puVar1;
LAB_1800485a8:
    plVar6 = (longlong *)(param_1 + 0xf7c0);
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      uVar3 = uVar8 + uVar9 >> 1;
      uVar13 = (ulonglong)uVar3;
      uVar12 = *(ulonglong *)(*plVar6 + uVar13 * 0x18);
      if (uVar12 <= uVar7) {
        if (uVar7 <= uVar12) break;
        uVar9 = uVar3 + 1;
        uVar13 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar9);
    if (((uint)uVar13 != uVar2) && (*(ulonglong *)(*plVar6 + uVar13 * 0x18) == uVar7)) {
      uVar9 = (uint)uVar13 + 1;
      if (uVar9 < uVar2) {
        do {
          uVar7 = (ulonglong)uVar9;
          puVar5 = (undefined8 *)(*plVar6 + (ulonglong)(uVar9 - 1) * 0x18);
          uVar9 = uVar9 + 1;
          puVar11 = (undefined8 *)(*plVar6 + uVar7 * 0x18);
          uVar15 = *puVar11;
          puVar5[1] = puVar11[1];
          *puVar5 = uVar15;
          puVar5[2] = puVar11[2];
        } while (uVar9 < *(uint *)(param_1 + 0xf7c8));
      }
      *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x100f0) = 0;
  *(undefined8 *)(param_1 + 0x100f8) = 0;
  uVar2 = *param_2;
  lVar14 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar14 + 0x12c0);
  if (*(char *)(lVar14 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_180101500(lVar14 + 0x12c0,0x18);
    pcVar4 = __imp_KERNEL32_dll_Sleep;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar14 + 0x14c0);
      puVar5[1] = 0x18;
      puVar5[2] = param_1;
      puVar11 = (undefined8 *)((longlong)puVar5 + 0x2bU & 0xfffffffffffffff8);
      puVar5[3] = uVar10;
      *(uint *)(puVar5 + 4) = uVar2;
      *puVar11 = 0;
      *puVar5 = FUN_180048750;
      *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar11;
      pcVar4 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar14 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar14 + 0x12c0) = 0;
        (*pcVar4)(*(undefined8 *)(lVar14 + 0x1340));
        return;
      }
      goto LAB_180048730;
    }
    *(undefined4 *)(lVar14 + 0x12c0) = 0;
    (*pcVar4)(100);
    FUN_180101630(lVar14 + 0x12c0);
  }
  plVar6 = *(longlong **)(lVar14 + 0x14a0);
  *plVar6 = param_1;
  plVar6[1] = uVar10;
  *(uint *)(plVar6 + 2) = uVar2;
  FUN_180048750();
LAB_180048730:
  *(undefined4 *)(lVar14 + 0x12c0) = 0;
  return;
}

