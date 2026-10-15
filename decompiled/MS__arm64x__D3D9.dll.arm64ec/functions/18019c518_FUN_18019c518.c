/*
 * FUN_18019c518 at 18019c518
 * undefined FUN_18019c518(void)
 * Address ranges: 18019c518-18019ca8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18019c518(longlong param_1,byte param_2)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  uint local_dc;
  longlong local_d8;
  int *local_d0;
  longlong local_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong lStack_b0;
  int local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 auStack_78 [8];
  uint local_70;
  uint local_6c;
  
  iVar6 = *(int *)(param_1 + 0x44);
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    lVar8 = FUN_1801991f8(param_1,param_2);
    cVar4 = *(char *)(param_1 + 0x16a);
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    uVar12 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        if (*(int *)(param_1 + 0x30) != 0) {
          uVar12 = 0;
          uVar11 = 1 << (ulonglong)(uVar14 & 0x1f);
          do {
            if (*(longlong *)(param_1 + 0x90) != 0) {
              iVar5 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x90) +
                                          (ulonglong)(*(int *)(param_1 + 0x3c) * uVar14) * 0x28 +
                                          0x18);
              uVar1 = 0;
              if (iVar5 == 0) {
                uVar1 = uVar11;
              }
              uVar13 = uVar1 | uVar13;
            }
            cVar4 = FUN_18019ce88(param_1,uVar12,uVar14,1);
            uVar12 = uVar12 + 1;
            uVar1 = 0;
            if (cVar4 != '\0') {
              uVar1 = uVar11;
            }
            uVar13 = uVar13 | uVar1;
          } while (uVar12 < *(uint *)(param_1 + 0x30));
        }
        uVar12 = *(uint *)(param_1 + 0x34);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar12);
    }
    if (iVar6 - 3U < 3) {
      if ((*(longlong *)(param_1 + 0x130) == 0) &&
         ((*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 +
                   0x6cc) != 0xa000 || (*(int *)(param_1 + 0x178) == 1)))) {
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x2c);
        uVar14 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04);
        if (*(uint *)(&DAT_18022e050 + uVar9 * 4) < uVar14) {
          if (uVar14 == 0x10) {
            uVar9 = 0x22;
          }
          else if (uVar14 == 0x18) {
            uVar9 = 0x23;
          }
          else if (uVar14 == 0x20) {
            uVar9 = 0x26;
          }
        }
        FUN_1801bad48(&local_f0,uVar9);
        puVar3 = __hybrid_os_arm64x_dispatch_icall;
        lVar8 = *(longlong *)(param_1 + 0x78);
        if (lVar8 != 0) {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11_00)(lVar8,auStack_78);
          uStack_bc = 5;
          if (uVar12 != 1) {
            uStack_bc = 9;
          }
          local_c0 = (int)local_ec;
          lStack_b0 = 0;
          local_b8 = 0xffffffff00000000;
          if (uVar12 == 1) {
            lStack_b0 = (ulonglong)local_6c << 0x20;
          }
          *(longlong *)(param_1 + 0x130) = lVar8;
          local_98 = 0;
          uStack_90 = 0x500000000;
          local_a4 = 4;
          local_d0 = &local_a8;
          local_88 = 0;
          if (uStack_e4._4_4_ == 0) {
            local_d0 = (int *)0x0;
          }
          local_84 = 0;
          piVar2 = &local_c0;
          if ((int)local_ec == 0) {
            piVar2 = (int *)0x0;
          }
          local_a8 = uStack_e4._4_4_;
          local_9c = 0;
          lVar8 = **(longlong **)(param_1 + 0x128);
          *(undefined8 *)(param_1 + 0x140) = 0;
          local_d8 = lVar8;
          cVar4 = FUN_180198260(param_1 + 0x118,local_70,local_6c);
          if (cVar4 != '\0') {
            if (piVar2 != (int *)0x0) {
              (*(code *)puVar3)(0x180224000);
              iVar6 = (*extraout_x11_01)(lVar8,*(undefined8 *)(param_1 + 0x130),piVar2,
                                         param_1 + 0x140);
              if (iVar6 < 0) {
                cVar4 = '\0';
              }
            }
            piVar2 = local_d0;
            lVar8 = local_d8;
            if (cVar4 != '\0') {
              if (local_d0 != (int *)0x0) {
                uVar14 = 0;
                lVar10 = *(longlong *)(param_1 + 0x138);
                if (local_6c != 0) {
                  do {
                    local_c8 = lVar10;
                    if (local_70 != 0) {
                      uVar12 = 0;
                      local_d8 = 0x130;
                      if (local_c8 != 0) {
                        local_d8 = 0x138;
                      }
                      do {
                        if (local_c8 == 0) {
                          piVar2[5] = 1;
                          uVar13 = uVar12;
                          uVar11 = uVar14;
                        }
                        else {
                          uVar13 = uVar14;
                          uVar11 = 1;
                        }
                        piVar2[3] = uVar13;
                        piVar2[4] = uVar11;
                        lVar10 = *(longlong *)(param_1 + 0x148) +
                                 (ulonglong)(uVar12 + uVar14 * local_70) * 0x28;
                        (*(code *)puVar3)(0x180224000);
                        iVar6 = (*extraout_x11_02)(lVar8,*(undefined8 *)(param_1 + local_d8),piVar2,
                                                   lVar10 + 8);
                        if (iVar6 < 0) {
                          cVar4 = '\0';
                          break;
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_70);
                    }
                    uVar14 = uVar14 + 1;
                    lVar10 = local_c8;
                  } while (uVar14 < local_6c);
                  if (cVar4 == '\0') goto LAB_18019c98c;
                }
              }
              (*(code *)puVar3)(0x180224000);
              (*extraout_x11_05)();
              goto LAB_18019ca48;
            }
          }
LAB_18019c98c:
          uVar14 = 0;
          if (local_6c != 0) {
            do {
              if (local_70 != 0) {
                uVar12 = 0;
                do {
                  uVar9 = (ulonglong)(uVar12 + uVar14 * local_70);
                  if (*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar9 * 0x28) != 0) {
                    (*(code *)puVar3)();
                    (*extraout_x11_03)();
                    *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar9 * 0x28) = 0;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < local_70);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < local_6c);
          }
          if (*(longlong *)(param_1 + 0x140) != 0) {
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_04)();
            *(undefined8 *)(param_1 + 0x140) = 0;
          }
          *(undefined8 *)(param_1 + 0x130) = 0;
        }
      }
LAB_18019ca48:
      if (*(char *)(param_1 + 0x16a) == '\0') {
        return *(longlong *)(param_1 + 0x140);
      }
      goto LAB_18019ca6c;
    }
    if (*(longlong *)(param_1 + 0x140) == 0) {
      iVar6 = FUN_1801bad48(&local_f0,*(undefined4 *)(param_1 + 0x2c));
      if (*(char *)(param_1 + 0x248) == '\0') {
        local_f0 = (int)local_ec;
      }
      else {
        lVar8 = 0x40;
        if (iVar6 == 0x15) {
          lVar8 = 0x50;
        }
        local_f0 = *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar8);
      }
      if (uVar12 == 1) {
        local_ec = 5;
      }
      else {
        local_ec = 9;
      }
      uStack_e4 = 0xffffffff;
      local_dc = (uint)(uVar12 == 1);
      uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar7,*(undefined8 *)(param_1 + 0x78),&local_f0,param_1 + 0x140);
    }
    lVar8 = *(longlong *)(param_1 + 0x140);
    if (((param_2 & 1) != 0) && (lVar8 != 0)) {
      FUN_180198d98(param_1 + 0x118,*(undefined8 *)(param_1 + 0x78));
      lVar8 = *(longlong *)(param_1 + 0x150);
    }
    if (uVar13 != 0) {
      FUN_18019a6b0(param_1,param_1 + 0x60,param_1 + 0x118,uVar13,*(undefined4 *)(param_1 + 0x3c));
    }
    cVar4 = *(char *)(param_1 + 0x16a);
  }
  if (cVar4 == '\0') {
    return lVar8;
  }
LAB_18019ca6c:
  lVar8 = FUN_18019d900(param_1,param_2);
  return lVar8;
}

