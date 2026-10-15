/*
 * FUN_1801a40a8 at 1801a40a8
 * undefined FUN_1801a40a8(void)
 * Address ranges: 1801a40a8-1801a435f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801a40a8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar7 = 0;
  if (param_7 != 0) {
    lVar7 = param_7 + -0x100;
  }
  lVar10 = 0;
  if (param_6 != 0) {
    lVar10 = param_6 + -0x100;
  }
  lVar11 = param_6 + -0x100;
  if (*(int *)(param_6 + 8) == 0) {
    lVar11 = lVar10;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  cVar3 = (*extraout_x11)(lVar7);
  if (cVar3 != '\0') {
    (*(code *)puVar2)(0x180224000);
    cVar3 = (*extraout_x11_00)(lVar11);
    if (cVar3 != '\0') {
      (*(code *)puVar2)(0x180224000);
      fVar8 = (float)(*extraout_x11_01)(lVar7);
      (*(code *)puVar2)(0x180224000);
      fVar9 = (float)(*extraout_x11_02)(lVar11);
      if (fVar8 <= fVar9) {
        (*(code *)puVar2)(0x180224000);
        fVar8 = (float)(*extraout_x11_03)(lVar7);
        (*(code *)puVar2)(0x180224000);
        fVar9 = (float)(*extraout_x11_04)(lVar11);
        if (fVar8 <= fVar9) goto LAB_1801a41e4;
      }
      FUN_1801af730(lVar11);
    }
  }
LAB_1801a41e4:
  lVar7 = *(longlong *)(param_1 + 0x1cf18);
  lVar11 = param_8[1];
  lVar10 = *param_8;
  lVar14 = param_8[3];
  lVar12 = param_8[2];
  lVar15 = param_8[5];
  lVar13 = param_8[4];
  FUN_180221850(lVar7 + 0x12c0);
  cVar3 = *(char *)(lVar7 + 0x14c4);
  bVar1 = true;
  if (cVar3 == '\0') {
LAB_1801a42d8:
    if (cVar3 != '\0') goto LAB_1801a4314;
  }
  else {
    puVar4 = (undefined8 *)FUN_1802218b0(lVar7 + 0x12c0,0x58);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar7 + 0x14c0);
      puVar4[1] = 0x58;
      puVar4[2] = param_1;
      *(undefined4 *)(puVar4 + 3) = param_2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = param_3;
      *(undefined4 *)(puVar4 + 4) = param_4;
      *(undefined4 *)((longlong)puVar4 + 0x24) = param_5;
      puVar4[5] = param_6;
      puVar4[6] = param_7;
      puVar4[8] = lVar11;
      puVar4[7] = lVar10;
      puVar4[10] = lVar14;
      puVar4[9] = lVar12;
      puVar4[0xc] = lVar15;
      puVar4[0xb] = lVar13;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x6fU & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar6 = 0;
      *puVar4 = FUN_1801a4368;
      *(undefined8 **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) = puVar6;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar7 + 0x12c0);
        bVar1 = false;
        thunk_FUN_180223874(*(undefined8 *)(lVar7 + 0x1340));
      }
      goto LAB_1801a42d8;
    }
    FUN_180221bb0(lVar7 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar7 + 0x12c0);
  }
  plVar5 = *(longlong **)(lVar7 + 0x14a0);
  *plVar5 = param_1;
  *(undefined4 *)(plVar5 + 1) = param_2;
  *(undefined4 *)((longlong)plVar5 + 0xc) = param_3;
  *(undefined4 *)(plVar5 + 2) = param_4;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_5;
  plVar5[3] = param_6;
  plVar5[4] = param_7;
  plVar5[6] = lVar11;
  plVar5[5] = lVar10;
  plVar5[8] = lVar14;
  plVar5[7] = lVar12;
  plVar5[10] = lVar15;
  plVar5[9] = lVar13;
  FUN_1801a4368();
LAB_1801a4314:
  if (bVar1) {
    FUN_180221bb0(lVar7 + 0x12c0);
  }
  return 1;
}

