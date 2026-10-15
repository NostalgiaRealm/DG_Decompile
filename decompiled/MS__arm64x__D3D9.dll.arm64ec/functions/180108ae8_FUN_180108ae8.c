/*
 * FUN_180108ae8 at 180108ae8
 * undefined FUN_180108ae8(void)
 * Address ranges: 180108ae8-180108e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180108ae8(longlong param_1,uint param_2,longlong param_3,longlong param_4,undefined8 param_5
                 )

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong extraout_x1;
  longlong extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint local_fc;
  int local_f8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  int iStack_9c;
  undefined1 local_4f;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_f8 = 0;
  local_fc = 0;
  uVar10 = 0;
  local_d0 = param_4;
  local_c8 = param_5;
  do {
    uVar9 = (uint)uVar10;
    if (param_2 <= uVar9) break;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    puVar2 = (undefined4 *)(uVar10 * 0x50 + param_3);
    local_f8 = FUN_180107cc8(*(undefined8 *)(param_1 + 0xe28),*puVar2,
                             *(undefined4 *)(param_1 + 0xe68),*(undefined8 *)(param_1 + 0xe70),
                             (uVar10 * 0x50 | 8) + param_3,auStack_c0);
    if (-1 < local_f8) {
      local_f8 = 0;
    }
    if (local_fc < (uint)(iStack_9c * local_a0)) {
      *(undefined8 *)(param_1 + 0xe48) = uStack_b0;
      *(undefined8 *)(param_1 + 0xe40) = local_b8;
      *(undefined8 *)(param_1 + 0xe50) = local_a8;
      *(int *)(param_1 + 0xe58) = local_a0;
      *(int *)(param_1 + 0xe5c) = iStack_9c;
      *(undefined1 *)(param_1 + 0xe60) = local_4f;
      local_fc = iStack_9c * local_a0;
    }
    if ((local_f8 < 0) || ((*(uint *)(param_1 + 0xe78) >> 9 & 1) == 0)) {
      if (-1 < local_f8) {
LAB_180108ca0:
        uVar10 = FUN_18010bd88(&local_e0,auStack_c0);
        if ((uVar10 & 1) == 0) {
          local_f8 = -0x7fffbffb;
          lVar6 = local_e0;
          goto LAB_180108e04;
        }
      }
    }
    else {
      local_f8 = -0x7789f794;
      if (puVar2[0xc] == 0) {
        uVar10 = 0;
        if (uVar9 != 0) {
          local_f8 = -0x7789f794;
          do {
            lVar7 = *(longlong *)(param_1 + 0xe70);
            lVar6 = *(longlong *)(param_3 + 0x28 + uVar10 * 0x50);
            lVar4 = thunk_FUN_180223bd0();
            if (lVar6 == lVar4 || lVar6 == 0) {
              lVar6 = lVar7;
            }
            lVar4 = *(longlong *)(puVar2 + 10);
            lVar8 = *(longlong *)(param_1 + 0xe70);
            lVar7 = thunk_FUN_180223bd0();
            if (lVar4 == lVar7 || lVar4 == 0) {
              lVar4 = lVar8;
            }
            if (lVar6 == lVar4) goto LAB_180108cc8;
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar1;
          } while (uVar1 < uVar9);
        }
        local_f8 = -0x7789f794;
        if ((((uint)uVar10 == uVar9) && (*(int *)(param_3 + 0x34) == puVar2[0xd])) &&
           ((puVar2[0xd] == 0 ||
            ((((*(int *)(param_3 + 0x38) == puVar2[0xe] && (*(int *)(param_3 + 0x10) == puVar2[4]))
              && (*(int *)(param_3 + 8) == puVar2[2])) && (*(int *)(param_3 + 0xc) == puVar2[3])))))
           ) {
          local_f8 = 0;
          goto LAB_180108ca0;
        }
      }
    }
LAB_180108cc8:
    uVar10 = (ulonglong)(uVar9 + 1);
  } while (-1 < local_f8);
  lVar4 = local_d0;
  lVar6 = local_e0;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar10 = 0;
  while (iVar11 = (int)uVar10, -1 < local_f8) {
    if ((int)param_2 <= iVar11) goto LAB_180108e04;
    if (*(int *)(param_1 + 0xe68) == 1) {
      uVar5 = FUN_180119708(lVar6 + uVar10 * 0x78);
      uVar5 = uVar5 & 0xffffffff;
    }
    else {
      uVar5 = 0;
    }
    local_f8 = -0x7789fe84;
    if (uVar5 <= (ulonglong)(&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b]) {
      lVar7 = param_3 + 0x48;
      (*(code *)puVar3)(uVar10 * 0xf,0x8876017c,(longlong)iVar11 * 0x50);
      local_f8 = (*extraout_x11)(param_1,lVar6 + extraout_x8 * 8,
                                 *(undefined8 *)(lVar7 + extraout_x1));
    }
    uVar10 = (ulonglong)(iVar11 + 1);
  }
  uVar9 = iVar11 - 1;
  if (0 < (int)uVar9) {
    do {
      (*(code *)puVar3)();
      (*extraout_x11_00)(param_1,*(undefined8 *)(lVar4 + -8 + (ulonglong)uVar9 * 8),0);
      *(undefined8 *)(lVar4 + -8 + (ulonglong)uVar9 * 8) = 0;
      uVar9 = uVar9 - 1;
    } while (0 < (int)uVar9);
  }
LAB_180108e04:
  FUN_1802229d8(lVar6);
  return local_f8;
}

