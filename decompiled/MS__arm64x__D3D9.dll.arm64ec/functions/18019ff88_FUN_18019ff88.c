/*
 * FUN_18019ff88 at 18019ff88
 * undefined FUN_18019ff88(void)
 * Address ranges: 18019ff88-1801a02e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019ff88(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

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
  undefined *puVar11;
  code *pcVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  code *extraout_x11;
  longlong lVar21;
  longlong lVar22;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  local_c8 = param_2;
  lStack_c0 = param_1;
  FUN_1801042e0(param_1 + 0x1d16c);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  puVar1 = (undefined4 *)&DAT_00000020;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_2 + -0xe0);
  }
  local_60 = 0;
  local_98 = *puVar1;
  local_5c = 0;
  puVar14 = (undefined8 *)&DAT_00000130;
  if (param_2 != 0) {
    puVar14 = (undefined8 *)(param_2 + 0x30);
  }
  local_90 = *puVar14;
  uStack_88 = 0;
  local_58 = 0xffffffff00000000;
  local_50 = 0xffffffff;
  local_b0 = param_1 + 0x1c000;
  local_a0 = param_1;
  puVar14 = (undefined8 *)FUN_180202770(*(undefined8 *)(param_1 + 0x1cf10),&local_a0);
  uVar9 = *(undefined1 *)((longlong)param_4 + 0x24);
  uVar8 = *(undefined4 *)(param_4 + 4);
  uVar2 = *(undefined4 *)(param_4 + 3);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar3 = *(undefined4 *)(param_4 + 2);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar4 = *(undefined4 *)(param_4 + 1);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0xc);
  local_b8 = *param_4;
  local_a8 = param_1 + 0x1c000;
  lVar21 = *(longlong *)(param_1 + 0x1cf18);
  FUN_180221850(lVar21 + 0x12c0);
  if (*(char *)(lVar21 + 0x14c4) == '\0') {
LAB_1801a0150:
    plVar16 = *(longlong **)(lVar21 + 0x14a0);
    *plVar16 = lStack_c0;
    plVar16[1] = local_c8;
    *(int *)(plVar16 + 2) = param_3;
    *(undefined8 *)((longlong)plVar16 + 0x14) = local_b8;
    *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar4;
    *(undefined4 *)(plVar16 + 4) = uVar7;
    *(undefined4 *)((longlong)plVar16 + 0x24) = uVar3;
    *(undefined4 *)(plVar16 + 5) = uVar6;
    *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar2;
    *(undefined4 *)(plVar16 + 6) = uVar5;
    *(undefined4 *)((longlong)plVar16 + 0x34) = uVar8;
    *(undefined1 *)(plVar16 + 7) = uVar9;
    FUN_1801a02f0();
  }
  else {
    puVar15 = (undefined8 *)FUN_1802218b0(lVar21 + 0x12c0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      FUN_180221bb0(lVar21 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar21 + 0x12c0);
      goto LAB_1801a0150;
    }
    FUN_1801042e0(lVar21 + 0x14c0);
    puVar15[1] = 0x40;
    puVar15[2] = param_1;
    puVar15[3] = param_2;
    *(int *)(puVar15 + 4) = param_3;
    *(undefined8 *)((longlong)puVar15 + 0x24) = local_b8;
    *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
    *(undefined4 *)(puVar15 + 6) = uVar7;
    *(undefined4 *)((longlong)puVar15 + 0x34) = uVar3;
    *(undefined4 *)(puVar15 + 7) = uVar6;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar2;
    *(undefined4 *)(puVar15 + 8) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0x44) = uVar8;
    *(undefined1 *)(puVar15 + 9) = uVar9;
    puVar19 = (undefined8 *)((longlong)puVar15 + 0x53U & 0xfffffffffffffff8);
    DataMemoryBarrier(2,3);
    *puVar19 = 0;
    *puVar15 = FUN_1801a02f0;
    *(undefined8 **)(lVar21 + (ulonglong)*(uint *)(lVar21 + 0x14bc) * 0x28 + 0x1350) = puVar19;
    if (*(char *)(lVar21 + 0x14c5) != '\0') {
      FUN_180221bb0(lVar21 + 0x12c0);
      thunk_FUN_180223874(*(undefined8 *)(lVar21 + 0x1340));
      goto LAB_1801a01a0;
    }
  }
  FUN_180221bb0(lVar21 + 0x12c0);
LAB_1801a01a0:
  if (param_3 != 0) {
    FUN_180221ec0(*(longlong *)(local_a8 + 0xf18) + 0x12c0);
  }
  if (puVar14 != (undefined8 *)0x0) {
    if (0 < (longlong)puVar14[0x1ab]) {
      lVar22 = *(longlong *)(local_b0 + 0xf10);
      thunk_FUN_18022375c(&local_d0);
      puVar11 = __hybrid_os_arm64x_dispatch_icall;
      lVar21 = puVar14[0x1ac];
      if ((0 < lVar21) && (lVar17 = puVar14[0x1ab], local_d0 - lVar21 < lVar17)) {
        do {
          lVar18 = *(longlong *)(lVar22 + 0x6a0);
          if (lVar18 == 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(0xf004,0x1801a0224);
            (*pcVar12)();
          }
          uVar10 = 0;
          if (lVar18 != 0) {
            uVar10 = (((lVar21 + lVar17) - local_d0) * 10) / lVar18;
          }
          if ((0x10 < (uint)uVar10) && (*(longlong *)(lVar22 + 0x300) != 0)) {
            if (*(char *)(lVar22 + 0x314) == '\0') {
              (*(code *)puVar11)();
              iVar13 = (*extraout_x11)(1);
              if (iVar13 == 0) {
                *(undefined1 *)(lVar22 + 0x314) = 1;
              }
              else {
                *(undefined8 *)(lVar22 + 0x300) = 0;
                *(undefined8 *)(lVar22 + 0x308) = 0;
              }
            }
            iVar20 = (int)((uVar10 & 0xffffffff) / 10);
            iVar13 = iVar20 + -1;
            if (5 < (uint)uVar10 + (int)((uVar10 & 0xffffffff) / 10) * -10) {
              iVar13 = iVar20;
            }
            thunk_FUN_1802237c0(iVar13);
          }
          DataMemoryBarrier(2,2);
          Yield();
          thunk_FUN_18022375c(&local_d0);
          lVar17 = puVar14[0x1ab];
          lVar21 = puVar14[0x1ac];
        } while (local_d0 - lVar21 < lVar17);
      }
      puVar14[0x1ac] = local_d0;
    }
    FUN_180203408(*(undefined8 *)(local_b0 + 0xf10),*puVar14,0);
  }
  return 1;
}

