/*
 * FUN_1801fd7b0 at 1801fd7b0
 * undefined FUN_1801fd7b0(void)
 * Address ranges: 1801fd7b0-1801fdbb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801fd7b0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  ulonglong uVar12;
  longlong lVar13;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  uVar10 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar9 = (*extraout_x11)(uVar10,0,&DAT_180238220,param_2 + 0xd78);
  if (iVar9 < 0) {
    return 0;
  }
  local_64 = 0;
  local_70 = *(undefined4 *)(&DAT_180238818 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_6c = 4;
  uVar10 = (*(code *)puVar6)(0x180224000);
  iVar9 = (*extraout_x11_00)(uVar10,*(undefined8 *)(param_2 + 0xd78),&local_70,param_2 + 0xd80);
  if (iVar9 < 0) {
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_10)();
    *(undefined8 *)(param_2 + 0xd78) = 0;
    return 0;
  }
  plVar1 = (longlong *)(param_2 + 0xd88);
  if (*plVar1 == 0) goto LAB_1801fd9e4;
  uVar10 = (*(code *)puVar6)(0x180224000);
  (*extraout_x11_01)(uVar10,&local_b8);
  uVar4 = *(uint *)(param_2 + 0x20);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801fd8a0);
    (*pcVar7)();
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = *(uint *)(param_2 + 0x18) / uVar4;
  }
  if (local_b8 == uVar5) {
    uVar4 = *(uint *)(param_2 + 0x24);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801fd8c0);
      (*pcVar7)();
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_2 + 0x1c) / uVar4;
    }
    if (local_b4 != uVar5) goto LAB_1801fd8e0;
    bVar8 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_1801fd8e0:
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar12 = 0;
      do {
        lVar13 = *(longlong *)(param_2 + 0xd98 + uVar12 * 8);
        if (lVar13 != 0) {
          uVar4 = *(uint *)(param_2 + 0x10);
          thunk_FUN_1802236f8(param_1 + 0x620);
          lVar2 = param_1 + (ulonglong)uVar4 * 0x18c0 + 0xbc0;
          lVar11 = 0;
          do {
            if (lVar13 == *(longlong *)(lVar2 + lVar11 * 8)) {
              *(undefined8 *)(lVar2 + lVar11 * 8) = 0;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 != 4);
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_02)(lVar13);
          thunk_FUN_18022370c(param_1 + 0x620);
          *(undefined8 *)(param_2 + 0xd98 + uVar12 * 8) = 0;
        }
        if (*(longlong *)(param_2 + 0xda8 + uVar12 * 8) != 0) {
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_03)();
          *(undefined8 *)(param_2 + 0xda8 + uVar12 * 8) = 0;
        }
        if (plVar1[uVar12] != 0) {
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_04)();
          plVar1[uVar12] = 0;
        }
        uVar4 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_2 + 0x28));
    }
    bVar8 = true;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (!bVar8) {
    return 1;
  }
LAB_1801fd9e4:
  puVar3 = (uint *)(param_2 + 0x28);
  uVar4 = *(uint *)(param_2 + 0x20);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801fda00);
    (*pcVar7)();
  }
  local_b8 = 0;
  if (uVar4 != 0) {
    local_b8 = *(uint *)(param_2 + 0x18) / uVar4;
  }
  uVar4 = *(uint *)(param_2 + 0x24);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801fda18);
    (*pcVar7)();
  }
  local_b4 = 0;
  if (uVar4 != 0) {
    local_b4 = *(uint *)(param_2 + 0x1c) / uVar4;
  }
  local_94 = 0;
  local_b0 = 0x100000001;
  uVar4 = *puVar3;
  local_54 = 4;
  local_4c = 0;
  local_a8 = *(undefined4 *)(&DAT_180238808 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_84 = 4;
  local_78 = 0;
  local_a4 = 1;
  local_9c = 0x2800000000;
  local_88 = *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_7c = 0xffffffff;
  local_58 = local_88;
  while( true ) {
    if (param_3 <= uVar4) {
      return 1;
    }
    lVar13 = param_2 + (ulonglong)uVar4 * 8;
    uVar10 = (*(code *)puVar6)(0x180224000);
    iVar9 = (*extraout_x11_05)(uVar10,&local_b8,0,lVar13 + 0xd88);
    if (iVar9 < 0) {
      return 1;
    }
    uVar10 = (*(code *)puVar6)(0x180224000);
    iVar9 = (*extraout_x11_06)(uVar10,plVar1[uVar4],&local_58,lVar13 + 0xd98);
    if (iVar9 < 0) break;
    uVar10 = (*(code *)puVar6)(0x180224000);
    iVar9 = (*extraout_x11_07)(uVar10,plVar1[uVar4],&local_88,lVar13 + 0xda8);
    if (iVar9 < 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_08)();
      break;
    }
    uVar4 = uVar4 + 1;
    *puVar3 = *puVar3 + 1;
  }
  (*(code *)puVar6)(0x180224000);
  (*extraout_x11_09)();
  return 1;
}

