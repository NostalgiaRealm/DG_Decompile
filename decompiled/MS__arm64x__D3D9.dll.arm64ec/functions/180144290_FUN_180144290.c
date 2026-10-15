/*
 * FUN_180144290 at 180144290
 * undefined FUN_180144290(void)
 * Address ranges: 180144290-180144a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180144290(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
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
  code *pcVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  code *pcVar14;
  code *local_160;
  longlong local_158;
  char *local_150;
  code *local_148;
  uint *local_140;
  longlong local_138;
  char *local_130;
  undefined8 *local_128;
  undefined1 local_120 [8];
  undefined8 uStack_118;
  longlong local_110;
  undefined1 local_100 [8];
  undefined8 uStack_f8;
  longlong local_f0;
  undefined1 local_e0 [8];
  undefined8 uStack_d8;
  longlong local_d0;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  longlong lStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  longlong lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  
  *param_4 = 0;
  pcVar14 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar10 = 1;
  if (*(int *)(param_1 + 0x28) == 1) {
    if ((param_2 & 1) == 0) {
      lVar7 = (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10;
      if ((param_3 & 1) == 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar7);
        if (*(int *)(lVar7 + 0x38) == 0) {
          if (*(longlong *)(lVar7 + 0x18) != 0) {
            (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            uVar2 = (*extraout_x11_01)();
            if (uVar2 < *(ulonglong *)(lVar7 + 0x20)) goto LAB_180144490;
          }
        }
        else {
LAB_180144490:
          lVar7 = *(longlong *)
                   (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
          lVar13 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
          FUN_180221ec0(lVar13 + 0x1bc0);
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b500);
          local_158 = lVar7;
          if (*(char *)(lVar7 + 0x3c) == '\0') {
            thunk_FUN_1802236f8(lVar11 + 0x28);
            lVar3 = FUN_18020ebb0(lVar11 + 0x10,&local_158);
            if (lVar3 != 0) {
              FUN_18020d650(lVar3,lVar3,1);
            }
            thunk_FUN_18022370c(lVar11 + 0x28);
            iVar1 = *(int *)(*(longlong *)(lVar13 + 0x1e08) + 0xb50);
            *(bool *)(lVar7 + 0x3c) = iVar1 != -1;
            if (*(longlong *)(param_1 + 0x18) != 0 && iVar1 != -1) {
              uVar4 = (*pcVar14)(0x180224000);
              (*extraout_x11_03)(uVar4,param_1);
            }
          }
          else {
            thunk_FUN_1802236f8(lVar11 + 0x28);
            lVar3 = FUN_18020ebb0(lVar11 + 0x10,&local_158);
            if (lVar3 != 0) {
              (*pcVar14)(0x180224000);
              uVar2 = (*extraout_x11_02)();
              if ((uVar2 < *(ulonglong *)(lVar3 + 0x10)) && (*(longlong *)(lVar3 + 8) != -1)) {
                FUN_180207560(*(longlong *)(lVar3 + 8) + 8,0);
              }
            }
            thunk_FUN_18022370c(lVar11 + 0x28);
            uVar12 = *(ulonglong *)(lVar7 + 0x28);
            uVar2 = FUN_180208450(*(undefined8 *)(lVar13 + 0x1e08));
            if (uVar2 < uVar12) {
              do {
                DataMemoryBarrier(2,2);
                Yield();
                uVar12 = *(ulonglong *)(lVar7 + 0x28);
                uVar2 = FUN_180208450(*(undefined8 *)(lVar13 + 0x1e08));
              } while (uVar2 < uVar12);
            }
          }
        }
        lVar7 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
        (*pcVar14)(0x180224000);
        (*extraout_x11_04)(lVar7 + 0x40,local_e0,1,0,0);
        if (local_d0 == 0) {
          lVar7 = FUN_180143b18(param_1,auStack_60,1);
          uStack_d8 = *(undefined8 *)(lVar7 + 8);
          local_d0 = *(longlong *)(lVar7 + 0x10);
        }
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar7);
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11_00)(lVar7 + 0x40,local_100,1,0,0);
        uStack_d8 = uStack_f8;
        local_d0 = local_f0;
        if (local_f0 == 0) {
          lVar7 = FUN_180143b18(param_1,auStack_78,1);
          uStack_d8 = *(undefined8 *)(lVar7 + 8);
          local_d0 = *(longlong *)(lVar7 + 0x10);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x40) == 0) {
        return 1;
      }
      plVar6 = (longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      if (*(int *)(*plVar6 + 0x38) != 0) {
        if (*(int *)(*(longlong *)
                      (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x10)
                    + 0x38) == 0) {
          *(uint *)(plVar6 + 1) = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x48);
          *(undefined4 *)(param_1 + 0x48) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x10 + 8);
        }
        else {
          if (0xc00000 <
              (uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x24))
             ) {
            FUN_180221ec0(*(longlong *)(param_1 + 0x10) +
                          (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0 + 0x1bc0);
            goto LAB_180144358;
          }
          FUN_180143618();
        }
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
      }
LAB_180144358:
      lVar7 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      if (*(int *)(lVar7 + 0x38) != 0) {
        return 1;
      }
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(lVar7 + 0x40,local_120,2,0,0);
      uStack_d8 = uStack_118;
      local_d0 = local_110;
      if (local_110 == 0) {
        lVar7 = FUN_180143b18(param_1,auStack_90,2);
        uStack_d8 = *(undefined8 *)(lVar7 + 8);
        local_d0 = *(longlong *)(lVar7 + 0x10);
      }
    }
    *param_4 = uStack_d8;
    goto LAB_1801449fc;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10)
  ;
  if (*(int *)(lVar7 + 0x38) == 0) {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar2 = (*extraout_x11_05)();
      if (uVar2 < *(ulonglong *)(lVar7 + 0x20)) goto LAB_180144690;
    }
  }
  else {
LAB_180144690:
    if (*(uint *)(param_1 + 0x24) < 0x20001) {
      if (*(int *)(param_1 + 0x40) != 0) {
        local_160 = pcVar14;
        uVar2 = 0;
        local_158 = CONCAT44(local_158._4_4_,1);
        lVar7 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
        local_140 = (uint *)(lVar7 + 0x1dbc);
        local_138 = lVar7 + 0x1c50;
        local_130 = (char *)(lVar7 + 0x1dc5);
        local_150 = (char *)(lVar7 + 0x1dc4);
        local_148 = FUN_180143b10;
        local_128 = param_4;
        do {
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar2 * 0x10);
          FUN_180221850(lVar7 + 0x1bc0);
          if (*local_150 == '\0') {
LAB_1801447b4:
            plVar6 = *(longlong **)(lVar7 + 0x1da0);
            *plVar6 = lVar7 + 0x2140;
            plVar6[1] = lVar11;
            FUN_180143b10();
LAB_1801447c0:
            FUN_180221bb0(lVar7 + 0x1bc0);
          }
          else {
            puVar5 = (undefined8 *)FUN_1802218b0(lVar7 + 0x1bc0,0x10);
            if (puVar5 == (undefined8 *)0x0) {
              FUN_180221bb0(lVar7 + 0x1bc0);
              thunk_FUN_1802237c0(100);
              FUN_180221850(lVar7 + 0x1bc0);
              goto LAB_1801447b4;
            }
            FUN_1801042e0(lVar7 + 0x1dc0);
            puVar5[1] = 0x10;
            puVar5[2] = lVar7 + 0x2140;
            puVar8 = (undefined8 *)((longlong)puVar5 + 0x27U & 0xfffffffffffffff8);
            puVar5[3] = lVar11;
            DataMemoryBarrier(2,3);
            *puVar8 = 0;
            *puVar5 = local_148;
            *(undefined8 **)(local_138 + (ulonglong)*local_140 * 0x28) = puVar8;
            if (*local_130 == '\0') goto LAB_1801447c0;
            FUN_180221bb0(lVar7 + 0x1bc0);
            thunk_FUN_180223874(*(undefined8 *)(lVar7 + 0x1c40));
          }
          uVar10 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0x40));
        param_4 = local_128;
        pcVar14 = local_160;
        uVar10 = (uint)local_158;
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar2 = FUN_180143618(param_1);
      if ((uVar2 & 1) != 0) {
        lVar7 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
        (*pcVar14)(0x180224000);
        (*extraout_x11_06)(lVar7 + 0x40,auStack_c0,2,0,0);
        *param_4 = local_b8;
        uVar10 = (uint)(lStack_b0 == 0);
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
      }
    }
    else {
      pcVar9 = *(code **)(*(longlong *)(param_1 + 0x38) +
                         (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      lVar11 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
      FUN_180221ec0(lVar11 + 0x1bc0);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b500);
      local_160 = pcVar9;
      if (pcVar9[0x3c] == (code)0x0) {
        thunk_FUN_1802236f8(lVar7 + 0x28);
        lVar13 = FUN_18020ebb0(lVar7 + 0x10,&local_160);
        if (lVar13 != 0) {
          FUN_18020d650(lVar13,lVar13,1);
        }
        thunk_FUN_18022370c(lVar7 + 0x28);
        iVar1 = *(int *)(*(longlong *)(lVar11 + 0x1e08) + 0xb50);
        pcVar9[0x3c] = (code)(iVar1 != -1);
        if (*(longlong *)(param_1 + 0x18) != 0 && iVar1 != -1) {
          uVar4 = (*pcVar14)(0x180224000);
          (*extraout_x11_08)(uVar4,param_1);
        }
      }
      else {
        thunk_FUN_1802236f8(lVar7 + 0x28);
        local_160 = (code *)FUN_18020ebb0(lVar7 + 0x10,&local_160);
        if (local_160 != (code *)0x0) {
          (*pcVar14)(0x180224000);
          uVar2 = (*extraout_x11_07)();
          if ((uVar2 < *(ulonglong *)(local_160 + 0x10)) && (*(longlong *)(local_160 + 8) != -1)) {
            FUN_180207560(*(longlong *)(local_160 + 8) + 8,0);
          }
        }
        thunk_FUN_18022370c(lVar7 + 0x28);
        while (uVar12 = *(ulonglong *)(pcVar9 + 0x28),
              uVar2 = FUN_180208450(*(undefined8 *)(lVar11 + 0x1e08)), uVar2 < uVar12) {
          DataMemoryBarrier(2,2);
          Yield();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    return uVar10;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10)
  ;
  (*pcVar14)(0x180224000);
  (*extraout_x11_09)(lVar7 + 0x40,auStack_a8,1,0,0);
  *param_4 = local_a0;
  local_d0 = lStack_98;
LAB_1801449fc:
  return (uint)(local_d0 == 0);
}

