/*
 * FUN_180086520 at 180086520
 * undefined FUN_180086520(void)
 * Address ranges: 180086520-1800869d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180086520(longlong param_1,byte param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  uint local_d4;
  uint local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong lStack_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined1 auStack_80 [8];
  uint local_78;
  uint local_74;
  
  iVar8 = *(int *)(param_1 + 0x44);
  uVar15 = (uint)param_2;
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    lVar9 = FUN_180083638(param_1,uVar15);
    cVar6 = *(char *)(param_1 + 0x16a);
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    uVar11 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        if (*(int *)(param_1 + 0x30) != 0) {
          uVar11 = 0;
          uVar5 = 1 << (ulonglong)(uVar14 & 0x1f);
          do {
            if (*(longlong *)(param_1 + 0x90) != 0) {
              iVar7 = (*__imp_USER32_dll_IsRectEmpty)
                                (*(longlong *)(param_1 + 0x90) +
                                 (ulonglong)(*(int *)(param_1 + 0x3c) * uVar14) * 0x28 + 0x18);
              uVar1 = 0;
              if (iVar7 == 0) {
                uVar1 = uVar5;
              }
              uVar12 = uVar1 | uVar12;
            }
            cVar6 = FUN_180086dd8(param_1,uVar11,uVar14,1);
            uVar11 = uVar11 + 1;
            uVar1 = 0;
            if (cVar6 != '\0') {
              uVar1 = uVar5;
            }
            uVar12 = uVar12 | uVar1;
          } while (uVar11 < *(uint *)(param_1 + 0x30));
        }
        uVar11 = *(uint *)(param_1 + 0x34);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar11);
    }
    if (iVar8 - 3U < 3) {
      if ((*(longlong *)(param_1 + 0x130) == 0) &&
         ((*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 +
                   0x6cc) != 0xa000 || (*(int *)(param_1 + 0x178) == 1)))) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x2c);
        uVar14 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04);
        if (*(uint *)(&DAT_180231470 + uVar10 * 4) < uVar14) {
          if (uVar14 == 0x10) {
            uVar10 = 0x22;
          }
          else if (uVar14 == 0x18) {
            uVar10 = 0x23;
          }
          else if (uVar14 == 0x20) {
            uVar10 = 0x26;
          }
        }
        func_0x0001801bad48(&local_e8,uVar10);
        plVar13 = *(longlong **)(param_1 + 0x78);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x50))(plVar13,auStack_80);
          uStack_c4 = 5;
          if (uVar11 != 1) {
            uStack_c4 = 9;
          }
          local_c8 = (int)local_e4;
          lStack_b8 = 0;
          local_c0 = 0xffffffff00000000;
          if (uVar11 == 1) {
            lStack_b8 = (ulonglong)local_74 << 0x20;
          }
          *(longlong **)(param_1 + 0x130) = plVar13;
          local_a0 = 0;
          uStack_98 = 0x500000000;
          local_ac = 4;
          piVar2 = &local_b0;
          local_90 = 0;
          if (uStack_dc._4_4_ == 0) {
            piVar2 = (int *)0x0;
          }
          local_8c = 0;
          piVar3 = &local_c8;
          local_b0 = uStack_dc._4_4_;
          if ((int)local_e4 == 0) {
            piVar3 = (int *)0x0;
          }
          local_a4 = 0;
          plVar13 = (longlong *)**(undefined8 **)(param_1 + 0x128);
          *(undefined8 *)(param_1 + 0x140) = 0;
          cVar6 = FUN_180082ad8(param_1 + 0x118,local_78,local_74);
          if (cVar6 != '\0') {
            if ((piVar3 != (int *)0x0) &&
               (iVar8 = (**(code **)(*plVar13 + 0x38))
                                  (plVar13,*(undefined8 *)(param_1 + 0x130),piVar3,param_1 + 0x140),
               iVar8 < 0)) {
              cVar6 = '\0';
            }
            if (cVar6 != '\0') {
              if (piVar2 != (int *)0x0) {
                lVar9 = *(longlong *)(param_1 + 0x138);
                uVar14 = 0;
                uVar11 = (uint)param_2;
                if (local_74 != 0) {
                  do {
                    local_d0 = uVar11;
                    if (local_78 != 0) {
                      lVar4 = 0x130;
                      if (lVar9 != 0) {
                        lVar4 = 0x138;
                      }
                      uVar15 = 0;
                      do {
                        if (lVar9 == 0) {
                          piVar2[5] = 1;
                          uVar11 = uVar15;
                          uVar12 = uVar14;
                        }
                        else {
                          uVar11 = uVar14;
                          uVar12 = 1;
                        }
                        piVar2[3] = uVar11;
                        piVar2[4] = uVar12;
                        iVar8 = (**(code **)(*plVar13 + 0x50))
                                          (plVar13,*(undefined8 *)(param_1 + lVar4),piVar2,
                                           *(longlong *)(param_1 + 0x148) +
                                           (ulonglong)(uVar15 + uVar14 * local_78) * 0x28 + 8);
                        if (iVar8 < 0) {
                          cVar6 = '\0';
                          break;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < local_78);
                    }
                    uVar14 = uVar14 + 1;
                    uVar11 = local_d0;
                  } while (uVar14 < local_74);
                  uVar15 = local_d0;
                  if (cVar6 == '\0') goto LAB_180086908;
                }
              }
              (**(code **)(**(longlong **)(param_1 + 0x130) + 8))();
              goto LAB_18008698c;
            }
          }
LAB_180086908:
          uVar14 = 0;
          if (local_74 != 0) {
            do {
              if (local_78 != 0) {
                uVar11 = 0;
                do {
                  uVar10 = (ulonglong)(uVar11 + uVar14 * local_78);
                  plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x148) + uVar10 * 0x28);
                  if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x10))();
                    *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar10 * 0x28) = 0;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < local_78);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < local_74);
          }
          if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
            *(undefined8 *)(param_1 + 0x140) = 0;
          }
          *(undefined8 *)(param_1 + 0x130) = 0;
        }
      }
LAB_18008698c:
      if (*(char *)(param_1 + 0x16a) == '\0') {
        return *(longlong *)(param_1 + 0x140);
      }
      goto LAB_1800869b0;
    }
    if (*(longlong *)(param_1 + 0x140) == 0) {
      iVar8 = func_0x0001801bad48(&local_e8,*(undefined4 *)(param_1 + 0x2c));
      if (*(char *)(param_1 + 0x248) == '\0') {
        local_e8 = (int)local_e4;
      }
      else {
        lVar9 = 0x40;
        if (iVar8 == 0x15) {
          lVar9 = 0x50;
        }
        local_e8 = *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar9);
      }
      if (uVar11 == 1) {
        local_e4 = 5;
      }
      else {
        local_e4 = 9;
      }
      uStack_dc = 0xffffffff;
      local_d4 = (uint)(uVar11 == 1);
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x58) + 0x38))
                ((longlong *)**(undefined8 **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),
                 &local_e8,param_1 + 0x140);
    }
    lVar9 = *(longlong *)(param_1 + 0x140);
    if (((param_2 & 1) != 0) && (lVar9 != 0)) {
      FUN_180083430(param_1 + 0x118,*(undefined8 *)(param_1 + 0x78));
      lVar9 = *(longlong *)(param_1 + 0x150);
    }
    if (uVar12 != 0) {
      FUN_180084968(param_1,param_1 + 0x60,param_1 + 0x118,uVar12,*(undefined4 *)(param_1 + 0x3c));
    }
    cVar6 = *(char *)(param_1 + 0x16a);
  }
  if (cVar6 == '\0') {
    return lVar9;
  }
LAB_1800869b0:
  lVar9 = FUN_180087838(param_1,uVar15);
  return lVar9;
}

