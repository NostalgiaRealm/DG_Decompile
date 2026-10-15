/*
 * FUN_18008d908 at 18008d908
 * undefined FUN_18008d908(void)
 * Address ranges: 18008d908-18008db5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18008d908(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  plVar7 = (longlong *)0x0;
  if (param_7 != 0) {
    plVar7 = (longlong *)(param_7 + -0x100);
  }
  plVar1 = (longlong *)0x0;
  if (param_6 != 0) {
    plVar1 = (longlong *)(param_6 + -0x100);
  }
  plVar2 = (longlong *)(param_6 + -0x100);
  if (*(int *)(param_6 + 8) == 0) {
    plVar2 = plVar1;
  }
  cVar5 = (**(code **)(*plVar7 + 0xa8))(plVar7);
  if ((cVar5 != '\0') && (cVar5 = (**(code **)(*plVar2 + 0xa8))(plVar2), cVar5 != '\0')) {
    fVar10 = (float)(**(code **)(*plVar7 + 0x58))(plVar7);
    fVar11 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
    if (fVar10 <= fVar11) {
      fVar10 = (float)(**(code **)(*plVar7 + 0x60))(plVar7);
      fVar11 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
      if (fVar10 <= fVar11) goto LAB_18008d9fc;
    }
    FUN_180098440(plVar2);
  }
LAB_18008d9fc:
  lVar17 = param_8[1];
  lVar16 = *param_8;
  lVar14 = param_8[3];
  lVar12 = param_8[2];
  lVar9 = *(longlong *)(param_1 + 0x1cf18);
  lVar15 = param_8[5];
  lVar13 = param_8[4];
  FUN_180101630(lVar9 + 0x12c0);
  cVar5 = *(char *)(lVar9 + 0x14c4);
  bVar3 = true;
  if (cVar5 == '\0') {
LAB_18008dad8:
    if (cVar5 != '\0') goto LAB_18008db0c;
  }
  else {
    puVar6 = (undefined8 *)FUN_180101500(lVar9 + 0x12c0,0x58);
    pcVar4 = __imp_KERNEL32_dll_Sleep;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar9 + 0x14c0);
      puVar6[1] = 0x58;
      puVar6[2] = param_1;
      *(undefined4 *)(puVar6 + 3) = param_2;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = param_3;
      *(undefined4 *)(puVar6 + 4) = param_4;
      *(undefined4 *)((longlong)puVar6 + 0x24) = param_5;
      puVar6[5] = param_6;
      puVar6[6] = param_7;
      puVar6[8] = lVar17;
      puVar6[7] = lVar16;
      puVar6[10] = lVar14;
      puVar6[9] = lVar12;
      puVar6[0xc] = lVar15;
      puVar6[0xb] = lVar13;
      puVar8 = (undefined8 *)((longlong)puVar6 + 0x6fU & 0xfffffffffffffff8);
      *puVar8 = 0;
      *puVar6 = FUN_18008db60;
      *(undefined8 **)(lVar9 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28 + 0x1350) = puVar8;
      pcVar4 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar9 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar9 + 0x12c0) = 0;
        (*pcVar4)(*(undefined8 *)(lVar9 + 0x1340));
        bVar3 = false;
      }
      goto LAB_18008dad8;
    }
    *(undefined4 *)(lVar9 + 0x12c0) = 0;
    (*pcVar4)(100);
    FUN_180101630(lVar9 + 0x12c0);
  }
  plVar7 = *(longlong **)(lVar9 + 0x14a0);
  *plVar7 = param_1;
  *(undefined4 *)(plVar7 + 1) = param_2;
  *(undefined4 *)((longlong)plVar7 + 0xc) = param_3;
  *(undefined4 *)(plVar7 + 2) = param_4;
  *(undefined4 *)((longlong)plVar7 + 0x14) = param_5;
  plVar7[3] = param_6;
  plVar7[4] = param_7;
  plVar7[6] = lVar17;
  plVar7[5] = lVar16;
  plVar7[8] = lVar14;
  plVar7[7] = lVar12;
  plVar7[10] = lVar15;
  plVar7[9] = lVar13;
  FUN_18008db60();
LAB_18008db0c:
  if (bVar3) {
    *(undefined4 *)(lVar9 + 0x12c0) = 0;
  }
  return 1;
}

