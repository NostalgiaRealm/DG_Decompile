/*
 * FUN_18020d9f8 at 18020d9f8
 * undefined FUN_18020d9f8(void)
 * Address ranges: 18020d9f8-18020dc03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18020d9f8(longlong param_1,ulonglong param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong local_40 [2];
  
  cVar6 = '\x01';
  local_40[0] = param_2;
  thunk_FUN_1802236f8(param_1 + 0x28);
  plVar7 = (longlong *)FUN_18020ebb0(param_1 + 0x10,local_40);
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  if (plVar7 == (longlong *)0x0) goto LAB_18020dba8;
  if (param_4 != '\0') {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar8 = (*extraout_x11)();
    if (uVar8 < (ulonglong)plVar7[2]) {
      if (plVar7[1] != -1) {
        cVar6 = FUN_180207560(plVar7[1] + 8,0);
        if (cVar6 == '\0') goto LAB_18020dbc8;
      }
      lVar10 = *plVar7;
      uVar9 = (*(code *)puVar5)(0x180224000);
      (*extraout_x11_00)(uVar9,plVar7[2],*(undefined8 *)(lVar10 + 0x20));
      thunk_FUN_1802238ec(*(undefined8 *)(*plVar7 + 0x20),0xffffffff);
    }
    else {
LAB_18020dbc8:
      if (cVar6 == '\0') {
        lVar10 = plVar7[1];
        if (*(longlong *)(lVar10 + 0xb10) != 0) {
          *(ulonglong *)(lVar10 + ((ulonglong)*(uint *)(lVar10 + 0xb58) + 0x91) * 0x10) = param_2;
          *(longlong *)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0xb58) * 0x10 + 0x918) = param_3;
          *(int *)(lVar10 + 0xb58) = *(int *)(lVar10 + 0xb58) + 1;
        }
        goto LAB_18020dba8;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    uVar12 = 0;
    uVar11 = uVar3;
    do {
      uVar4 = uVar11 + uVar12 >> 1;
      uVar8 = (ulonglong)uVar4;
      uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x28);
      if (uVar13 <= param_2) {
        if (param_2 <= uVar13) break;
        uVar12 = uVar4 + 1;
        uVar8 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar11;
      }
      uVar11 = uVar4;
    } while (uVar11 != uVar12);
    if (((uint)uVar8 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x28) == param_2)) {
      uVar12 = (uint)uVar8 + 1;
      if (uVar12 < uVar3) {
        do {
          uVar8 = (ulonglong)uVar12;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar12 - 1) * 0x28);
          uVar12 = uVar12 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x28);
          uVar9 = *puVar2;
          uVar15 = puVar2[3];
          uVar14 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar9;
          puVar1[3] = uVar15;
          puVar1[2] = uVar14;
          puVar1[4] = puVar2[4];
        } while (uVar12 < *(uint *)(param_1 + 0x20));
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
  if (param_3 != 0) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_01)(param_2);
  }
LAB_18020dba8:
  thunk_FUN_18022370c(param_1 + 0x28);
  return cVar6;
}

