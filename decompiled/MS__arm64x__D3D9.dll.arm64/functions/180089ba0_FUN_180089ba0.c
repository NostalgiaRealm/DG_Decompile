/*
 * FUN_180089ba0 at 180089ba0
 * undefined FUN_180089ba0(void)
 * Address ranges: 180089ba0-180089edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180089ba0(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  code *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  local_d8 = param_2;
  local_c8 = param_1;
  FUN_1800015a0(param_1 + 0x1d16c);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar1 = (undefined4 *)&DAT_00000020;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_2 + -0xe0);
  }
  local_68 = 0;
  local_a0 = *puVar1;
  local_64 = 0;
  puVar13 = (undefined8 *)&DAT_00000130;
  if (param_2 != 0) {
    puVar13 = (undefined8 *)(param_2 + 0x30);
  }
  local_98 = *puVar13;
  uStack_90 = 0;
  local_60 = 0xffffffff00000000;
  local_58 = 0xffffffff;
  local_c0 = param_1 + 0x1c000;
  local_a8 = param_1;
  puVar13 = (undefined8 *)FUN_1800e54c0(*(undefined8 *)(param_1 + 0x1cf10),&local_a8);
  uVar9 = *(undefined1 *)((longlong)param_4 + 0x24);
  uVar2 = *(undefined4 *)(param_4 + 2);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar3 = *(undefined4 *)(param_4 + 1);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar21 = *param_4;
  uVar8 = *(undefined4 *)(param_4 + 4);
  uVar4 = *(undefined4 *)(param_4 + 3);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_b0 = param_1 + 0x1c000;
  lVar19 = *(longlong *)(param_1 + 0x1cf18);
  local_b8 = lVar19 + 0x1000;
  FUN_180101630(lVar19 + 0x12c0);
  if (*(char *)(lVar19 + 0x14c4) == '\0') {
LAB_180089d54:
    plVar14 = *(longlong **)(lVar19 + 0x14a0);
    *plVar14 = local_c8;
    plVar14[1] = local_d8;
    *(int *)(plVar14 + 2) = param_3;
    *(undefined8 *)((longlong)plVar14 + 0x14) = uVar21;
    *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar3;
    *(undefined4 *)(plVar14 + 4) = uVar6;
    *(undefined4 *)((longlong)plVar14 + 0x24) = uVar2;
    *(undefined4 *)(plVar14 + 5) = uVar5;
    *(undefined4 *)((longlong)plVar14 + 0x2c) = uVar4;
    *(undefined4 *)(plVar14 + 6) = uVar7;
    *(undefined4 *)((longlong)plVar14 + 0x34) = uVar8;
    *(undefined1 *)(plVar14 + 7) = uVar9;
    FUN_180089ee8();
  }
  else {
    local_d0 = (undefined8 *)FUN_180101500(lVar19 + 0x12c0,0x40);
    pcVar11 = __imp_KERNEL32_dll_Sleep;
    if (local_d0 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar19 + 0x12c0) = 0;
      (*pcVar11)(100);
      FUN_180101630(lVar19 + 0x12c0);
      goto LAB_180089d54;
    }
    FUN_1800015a0(lVar19 + 0x14c0);
    local_d0[1] = 0x40;
    local_d0[2] = local_c8;
    local_d0[3] = local_d8;
    *(int *)(local_d0 + 4) = param_3;
    *(undefined8 *)((longlong)local_d0 + 0x24) = uVar21;
    *(undefined4 *)((longlong)local_d0 + 0x2c) = uVar3;
    *(undefined4 *)(local_d0 + 6) = uVar6;
    *(undefined4 *)((longlong)local_d0 + 0x34) = uVar2;
    *(undefined4 *)(local_d0 + 7) = uVar5;
    *(undefined4 *)((longlong)local_d0 + 0x3c) = uVar4;
    *(undefined4 *)(local_d0 + 8) = uVar7;
    *(undefined4 *)((longlong)local_d0 + 0x44) = uVar8;
    *(undefined1 *)(local_d0 + 9) = uVar9;
    puVar17 = (undefined8 *)((longlong)local_d0 + 0x53U & 0xfffffffffffffff8);
    *puVar17 = 0;
    *local_d0 = FUN_180089ee8;
    *(undefined8 **)(lVar19 + (ulonglong)*(uint *)(lVar19 + 0x14bc) * 0x28 + 0x1350) = puVar17;
    pcVar11 = __imp_KERNEL32_dll_SetEvent;
    if (*(char *)(local_b8 + 0x4c5) != '\0') {
      *(undefined4 *)(lVar19 + 0x12c0) = 0;
      (*pcVar11)(*(undefined8 *)(lVar19 + 0x1340));
      goto LAB_180089d94;
    }
  }
  *(undefined4 *)(lVar19 + 0x12c0) = 0;
LAB_180089d94:
  if (param_3 != 0) {
    FUN_180101df0(*(longlong *)(local_b0 + 0xf18) + 0x12c0);
  }
  if (puVar13 != (undefined8 *)0x0) {
    if (0 < (longlong)puVar13[0x1ab]) {
      lVar20 = *(longlong *)(local_c0 + 0xf10);
      (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&local_e0);
      lVar19 = puVar13[0x1ac];
      if ((0 < lVar19) && (lVar15 = puVar13[0x1ab], local_e0 - lVar19 < lVar15)) {
        do {
          lVar16 = *(longlong *)(lVar20 + 0x6a0);
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(0xf004,0x180089e1c);
            (*pcVar11)();
          }
          uVar10 = 0;
          if (lVar16 != 0) {
            uVar10 = (((lVar19 + lVar15) - local_e0) * 10) / lVar16;
          }
          if ((0x10 < (uint)uVar10) && (*(code **)(lVar20 + 0x300) != (code *)0x0)) {
            if (*(char *)(lVar20 + 0x314) == '\0') {
              iVar12 = (**(code **)(lVar20 + 0x300))(1);
              if (iVar12 == 0) {
                *(undefined1 *)(lVar20 + 0x314) = 1;
              }
              else {
                *(undefined8 *)(lVar20 + 0x300) = 0;
                *(undefined8 *)(lVar20 + 0x308) = 0;
              }
            }
            iVar18 = (int)((uVar10 & 0xffffffff) / 10);
            iVar12 = iVar18 + -1;
            if (5 < (uint)uVar10 + (int)((uVar10 & 0xffffffff) / 10) * -10) {
              iVar12 = iVar18;
            }
            (*__imp_KERNEL32_dll_Sleep)(iVar12);
          }
          DataMemoryBarrier(2,2);
          Yield();
          (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&local_e0);
          lVar15 = puVar13[0x1ab];
          lVar19 = puVar13[0x1ac];
        } while (local_e0 - lVar19 < lVar15);
      }
      puVar13[0x1ac] = local_e0;
    }
    FUN_1800e6028(*(undefined8 *)(local_c0 + 0xf10),*puVar13,0);
  }
  return 1;
}

