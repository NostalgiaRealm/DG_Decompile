/*
 * FUN_18003ecdc at 18003ecdc
 * longlong __fastcall FUN_18003ecdc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18003ecdc-18003ee9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18003ecdc(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar14 = *(uint *)(param_1[3] + 0x10);
  if (uVar14 != 0) {
    lVar9 = *(longlong *)(param_1[3] + 8);
    uVar8 = 0;
    uVar13 = uVar14;
    do {
      uVar7 = uVar13 + uVar8 >> 1;
      uVar15 = *(ulonglong *)(lVar9 + (ulonglong)uVar7 * 0x20);
      uVar6 = uVar7;
      if (uVar15 <= param_2) {
        if (param_2 <= uVar15) break;
        uVar8 = uVar7 + 1;
        uVar6 = uVar13;
        uVar7 = uVar8;
      }
      uVar13 = uVar6;
    } while (uVar13 != uVar8);
    if (((uVar7 != uVar14) && (*(ulonglong *)((ulonglong)uVar7 * 0x20 + lVar9) == param_2)) &&
       (lVar9 = ((ulonglong)uVar7 * 0x20 | 0x10) + lVar9, lVar9 != 0)) {
      return lVar9;
    }
  }
  (**(code **)*param_1)(param_1,&local_48,param_2);
  plVar4 = (longlong *)param_1[3];
  uVar8 = 0;
  uVar14 = *(uint *)(plVar4 + 2);
  if (uVar14 != 0) {
    uVar13 = 0;
    do {
      uVar8 = uVar14 + uVar13 >> 1;
      uVar15 = *(ulonglong *)(plVar4[1] + (ulonglong)uVar8 * 0x20);
      uVar6 = uVar8;
      if (uVar15 <= param_2) {
        if (param_2 <= uVar15) break;
        uVar13 = uVar8 + 1;
        uVar8 = uVar13;
        uVar6 = uVar14;
      }
      uVar14 = uVar6;
    } while (uVar14 != uVar13);
  }
  uVar15 = (ulonglong)uVar8 * 0x20;
  if ((uVar8 == *(uint *)(plVar4 + 2)) || (*(ulonglong *)(uVar15 + plVar4[1]) != param_2)) {
    iVar3 = *(int *)((longlong)plVar4 + 0x14);
    if (iVar3 == (int)plVar4[2]) {
      uVar16 = (ulonglong)(uint)(iVar3 * 2);
      if (iVar3 == 0) {
        uVar16 = 0x10;
      }
      lVar9 = thunk_FUN_1800fbccc(uVar16 << 5);
      if (lVar9 != 0) {
        uVar14 = 0;
        if ((int)plVar4[2] != 0) {
          do {
            lVar10 = plVar4[1];
            uVar11 = (ulonglong)uVar14;
            uVar14 = uVar14 + 1;
            lVar12 = uVar11 * 0x20;
            puVar1 = (undefined8 *)(lVar10 + lVar12);
            uVar5 = puVar1[1];
            *(undefined8 *)(lVar9 + lVar12) = *puVar1;
            ((undefined8 *)(lVar9 + lVar12))[1] = uVar5;
            puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar12);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar12);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
          } while (uVar14 < *(uint *)(plVar4 + 2));
        }
        FUN_1800fbcf0((LPVOID)*plVar4);
        *plVar4 = lVar9;
        plVar4[1] = lVar9;
        *(int *)((longlong)plVar4 + 0x14) = (int)uVar16;
      }
    }
    uVar14 = *(uint *)(plVar4 + 2);
    if (*(uint *)((longlong)plVar4 + 0x14) != uVar14) {
      while (uVar8 < uVar14) {
        lVar9 = plVar4[1];
        lVar10 = (ulonglong)(uVar14 - 1) * 0x20;
        puVar1 = (undefined8 *)(lVar9 + lVar10);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + (ulonglong)uVar14 * 0x20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + 0x10 + (ulonglong)uVar14 * 0x20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        uVar14 = uVar14 - 1;
      }
      *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
      uVar15 = (ulonglong)uVar8 * 0x20;
      *(ulonglong *)(uVar15 + 8 + plVar4[1]) = param_2;
      puVar1 = (undefined8 *)(uVar15 + 0x10 + plVar4[1]);
      *puVar1 = local_48;
      puVar1[1] = uStack_40;
      *(ulonglong *)(uVar15 + plVar4[1]) = param_2;
    }
  }
  else {
    puVar1 = (undefined8 *)(uVar15 + 0x10 + plVar4[1]);
    *puVar1 = local_48;
    puVar1[1] = uStack_40;
  }
  return (uVar15 | 0x10) + plVar4[1];
}

