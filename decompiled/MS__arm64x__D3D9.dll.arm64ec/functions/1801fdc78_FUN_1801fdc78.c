/*
 * FUN_1801fdc78 at 1801fdc78
 * undefined FUN_1801fdc78(void)
 * Address ranges: 1801fdc78-1801fdfbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fdc78(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  plVar1 = (longlong *)(param_2 + 0xd88);
  if (*plVar1 == 0) goto LAB_1801fde1c;
  uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar9,&local_a8);
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801fdce0);
    (*pcVar6)();
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = *(uint *)(param_2 + 0x18) / uVar11;
  }
  if (local_a8 == uVar4) {
    uVar11 = *(uint *)(param_2 + 0x24);
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801fdd00);
      (*pcVar6)();
    }
    uVar4 = 0;
    if (uVar11 != 0) {
      uVar4 = *(uint *)(param_2 + 0x1c) / uVar11;
    }
    if (local_a4 != uVar4) goto LAB_1801fdd20;
    bVar7 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_1801fdd20:
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar12 = 0;
      do {
        lVar13 = *(longlong *)(param_2 + 0xd98 + uVar12 * 8);
        if (lVar13 != 0) {
          uVar11 = *(uint *)(param_2 + 0x10);
          thunk_FUN_1802236f8(param_1 + 0x620);
          lVar2 = param_1 + (ulonglong)uVar11 * 0x18c0 + 0xbc0;
          lVar10 = 0;
          do {
            if (lVar13 == *(longlong *)(lVar2 + lVar10 * 8)) {
              *(undefined8 *)(lVar2 + lVar10 * 8) = 0;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != 4);
          (*(code *)puVar5)(0x180224000);
          (*extraout_x11_00)(lVar13);
          thunk_FUN_18022370c(param_1 + 0x620);
          *(undefined8 *)(param_2 + 0xd98 + uVar12 * 8) = 0;
        }
        if (*(longlong *)(param_2 + 0xda8 + uVar12 * 8) != 0) {
          (*(code *)puVar5)(0x180224000);
          (*extraout_x11_01)();
          *(undefined8 *)(param_2 + 0xda8 + uVar12 * 8) = 0;
        }
        if (plVar1[uVar12] != 0) {
          (*(code *)puVar5)(0x180224000);
          (*extraout_x11_02)();
          plVar1[uVar12] = 0;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_2 + 0x28));
    }
    bVar7 = true;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (!bVar7) {
    return;
  }
LAB_1801fde1c:
  puVar3 = (uint *)(param_2 + 0x28);
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801fde3c);
    (*pcVar6)();
  }
  local_a8 = 0;
  if (uVar11 != 0) {
    local_a8 = *(uint *)(param_2 + 0x18) / uVar11;
  }
  uVar11 = *(uint *)(param_2 + 0x24);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801fde54);
    (*pcVar6)();
  }
  local_a4 = 0;
  if (uVar11 != 0) {
    local_a4 = *(uint *)(param_2 + 0x1c) / uVar11;
  }
  local_84 = 0;
  local_a0 = 0x100000001;
  uVar11 = *puVar3;
  local_54 = 0;
  local_68 = 0;
  local_98 = *(undefined4 *)(&DAT_180238808 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_94 = 1;
  local_8c = 0x2800000000;
  local_78 = *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_5c = 4;
  local_74 = 4;
  local_6c = 0xffffffff;
  local_60 = local_78;
  while( true ) {
    if (param_3 <= uVar11) {
      return;
    }
    lVar13 = param_2 + (ulonglong)uVar11 * 8;
    uVar9 = (*(code *)puVar5)(0x180224000);
    iVar8 = (*extraout_x11_03)(uVar9,&local_a8,0,lVar13 + 0xd88);
    if (iVar8 < 0) {
      return;
    }
    uVar9 = (*(code *)puVar5)(0x180224000);
    iVar8 = (*extraout_x11_04)(uVar9,plVar1[uVar11],&local_60,lVar13 + 0xd98);
    if (iVar8 < 0) break;
    uVar9 = (*(code *)puVar5)(0x180224000);
    iVar8 = (*extraout_x11_05)(uVar9,plVar1[uVar11],&local_78,lVar13 + 0xda8);
    if (iVar8 < 0) {
      (*(code *)puVar5)(0x180224000);
      (*extraout_x11_06)();
      break;
    }
    uVar11 = uVar11 + 1;
    *puVar3 = *puVar3 + 1;
  }
  (*(code *)puVar5)(0x180224000);
  (*extraout_x11_07)();
  return;
}

