/*
 * FUN_180117448 at 180117448
 * undefined FUN_180117448(void)
 * Address ranges: 180117448-180117e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180117448(longlong param_1,uint *param_2,int *param_3,uint param_4,byte param_5,uint param_6
                 )

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  byte bVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
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
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_d0 [2];
  longlong local_c8;
  int local_c0;
  uint local_bc;
  code *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  int iStack_a4;
  int *local_a0;
  uint *local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70 [4];
  longlong local_60;
  undefined1 auStack_58 [24];
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  lVar19 = *(longlong *)(param_1 + 8);
  local_bc = param_6 & 0xff;
  if ((*(uint *)(lVar19 + 0x100) >> 10 & 1) == 0) {
    return -0x7789f794;
  }
  if ((*(uint *)(lVar19 + 0x100) >> 0xb & 1) != 0 || (param_4 & 0xffff07ef) != 0) {
    return -0x7789f794;
  }
  uVar13 = (ulonglong)*(uint *)(lVar19 + 0x88);
  local_a0 = param_3;
  local_80 = param_2;
  if (*(uint *)(lVar19 + 0x88) != 0xffffffff) {
    lVar14 = *(longlong *)(lVar19 + 0x78);
    uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar11,*(undefined8 *)(lVar19 + 0x70),
                    *(undefined8 *)(lVar14 + (uVar13 & 0xffffffff) * 8));
    *(undefined4 *)(lVar19 + 0x88) = 0xffffffff;
  }
  thunk_FUN_180223c20(local_70,0,0,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if ((local_a0 == (int *)0x0) ||
     ((iVar8 = thunk_FUN_180223d24(), piVar15 = local_a0, iVar8 != 0 && ((param_5 & 1) == 0)))) {
    piVar15 = local_70;
  }
  uStack_88 = *(undefined8 *)(piVar15 + 2);
  local_90 = *(uint **)piVar15;
  iVar8 = thunk_FUN_180223c48(local_70,&local_90);
  thunk_FUN_180223c34(local_70,local_70,&local_90);
  iVar9 = thunk_FUN_180223c48(local_70,&local_90);
  if (iVar9 == 0) {
    return -0x7789f794;
  }
  if ((local_bc == 0) || (*(char *)(lVar19 + 0x60) != '\0')) {
    lVar14 = *(longlong *)(lVar19 + 0xf8);
    if (lVar14 == -1) {
      lVar14 = 0;
      if ((*(uint *)(lVar19 + 0x18) & 3) == 0) {
        lVar14 = thunk_FUN_180223838(0xffffffffffffffff,0,0x8000004,0,
                                     (uint)*(ushort *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x1c) +
                                     (*(uint *)(lVar19 + 0x18) * 0x40 + 0xfff & 0xfffff000) * 2,0);
        *(longlong *)(lVar19 + 0xf8) = lVar14;
      }
      else {
        *(undefined8 *)(lVar19 + 0xf8) = 0;
      }
    }
    if (((*(uint *)(lVar19 + 0x48) >> 4 & 1) != 0) &&
       (uVar13 = FUN_18012fb28(lVar19,lVar14,*(int *)(lVar19 + 0x18) * 0x40 + 0xfffU & 0xfffff000),
       (uVar13 & 1) == 0)) {
      return -0x7789f7d9;
    }
  }
  local_c8 = 0;
  local_d0[0] = 0;
  iVar9 = 0;
  *(int *)(lVar19 + 0xf0) = *(int *)(lVar19 + 0xf0) + 1;
  if (*(int *)(param_1 + 0x54) == 3) {
    local_c8 = *(longlong *)(param_1 + 0x40);
LAB_180117be0:
    local_d0[0] = *(uint *)(lVar19 + 0x18);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x28);
    if ((*(char *)(lVar14 + 0x6819) != '\0') && (*(int *)(param_1 + 0x54) == 0)) {
      FUN_18012ff70(lVar19);
      local_c8 = *(longlong *)(lVar19 + 0x28);
      goto LAB_180117be0;
    }
    if ((((param_1 == *(longlong *)(lVar14 + 0x30)) || (param_1 == *(longlong *)(lVar14 + 0x38))) ||
        (param_1 == *(longlong *)(lVar14 + 0x40))) ||
       ((param_1 == *(longlong *)(lVar14 + 0x48) || (param_1 == *(longlong *)(lVar14 + 0x50))))) {
LAB_1801176c8:
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_00)();
      lVar12 = *(longlong *)(param_1 + 0x30);
LAB_1801176e8:
      if (lVar12 != 0) goto LAB_1801176ec;
LAB_180117720:
      lVar14 = *(longlong *)(param_1 + 8);
      iVar10 = 0;
      if ((*(uint *)(lVar14 + 0x48) >> 5 & 1) == 0) {
        uVar11 = (*(code *)puVar4)(0x180224000);
        cVar6 = (*extraout_x11_14)(uVar11,*(undefined4 *)(lVar14 + 0x94),
                                   *(undefined4 *)(lVar14 + 0x98));
        if (cVar6 != '\0') {
          local_b0 = 0;
          local_a8 = FUN_18012faf0(lVar14);
          iStack_a4 = *(ushort *)(lVar14 + 0x16) - 1;
          uVar11 = (*(code *)puVar4)(0x180224000);
          cVar6 = (*extraout_x11_15)(uVar11,*(undefined4 *)(lVar14 + 0x94),
                                     *(undefined4 *)(lVar14 + 0x98),*(undefined8 *)(lVar14 + 0xe0),
                                     *(undefined4 *)(lVar14 + 0xe8),&local_b0);
          *(char *)(lVar14 + 0xee) = cVar6;
          iVar10 = 0;
          if (cVar6 == '\0') {
            iVar10 = 2;
          }
          uVar11 = (*(code *)puVar4)(0x180224000);
          (*extraout_x11_16)(uVar11,*(undefined4 *)(lVar14 + 0x94),*(undefined4 *)(lVar14 + 0x98),0)
          ;
        }
        local_c8 = 0;
        local_d0[0] = 0;
      }
      else {
        if (*(longlong *)(lVar14 + 0x30) == 0) {
          if (*(longlong *)(lVar14 + 0x28) == 0) {
            uVar13 = (ulonglong)(param_4 >> 8 & 0x20 | param_4 & 0x1f);
            uVar11 = (*(code *)puVar4)(0x180224000);
            iVar10 = (*extraout_x11_09)(uVar11,*(undefined4 *)(lVar14 + 0x94),
                                        *(undefined4 *)(lVar14 + 0x98),uVar13 >> 4 & 0xfffffff,
                                        iVar8 == 1 || param_5 != 0,&local_c8,local_d0);
            goto LAB_180117bc8;
          }
          FUN_18012ff70(lVar14);
          uVar11 = (*(code *)puVar4)(0x180224000);
          cVar6 = (*extraout_x11_02)(uVar11,*(undefined4 *)(lVar14 + 0x94),
                                     *(undefined4 *)(lVar14 + 0x98));
          if (cVar6 != '\0') {
            cVar6 = '\0';
            if (*(short *)(lVar14 + 0x14) == 1) {
              if (*(char *)(lVar14 + 0x60) == '\0') {
                local_b0 = 0;
                local_a8 = FUN_18012faf0(lVar14);
                iStack_a4 = *(ushort *)(lVar14 + 0x16) - 1;
                (*(code *)puVar4)(0x180224000);
                cVar6 = (*extraout_x11_04)(lVar14,&local_b0);
              }
              else {
                local_b8 = (code *)0x0;
                local_c0 = 0;
                (*(code *)puVar4)(0x180224000);
                cVar7 = (*extraout_x11_05)(lVar14,&local_b8,&local_c0);
                if (cVar7 != '\0') {
                  (*(code *)puVar4)(0x180225000);
                  (*extraout_x11_06)(lVar14,local_b8,*(undefined8 *)(lVar14 + 0x28));
                  (*(code *)puVar4)(0x180224000);
                  (*extraout_x11_07)(lVar14);
                  cVar6 = '\x01';
                }
              }
            }
            else if (*(char *)(lVar14 + 0x60) == '\0') {
              (*(code *)puVar4)(0x180224000);
              cVar6 = (*extraout_x11_03)(lVar14);
            }
            iVar10 = 0;
            if (cVar6 == '\0') {
              iVar10 = 2;
            }
            uVar11 = (*(code *)puVar4)(0x180224000);
            (*extraout_x11_08)(uVar11,*(undefined4 *)(lVar14 + 0x94),*(undefined4 *)(lVar14 + 0x98),
                               0);
            *(int *)(lVar14 + 0x44) = *(int *)(lVar14 + 0x44) + 1;
            *(undefined1 *)(lVar14 + 0xee) = 0;
          }
        }
        else {
          uVar11 = (*(code *)puVar4)(0x180224000);
          cVar6 = (*extraout_x11_10)(uVar11,*(undefined4 *)(lVar14 + 0x94),
                                     *(undefined4 *)(lVar14 + 0x98));
          if (cVar6 != '\0') {
            uVar11 = (*(code *)puVar4)(0x180224000);
            (*extraout_x11_11)(uVar11,*(undefined4 *)(lVar14 + 0x94),*(undefined4 *)(lVar14 + 0x98),
                               0);
            if (*(longlong *)(lVar14 + 0x30) != 0) {
              uVar13 = (ulonglong)(*(uint *)(lVar14 + 0x40) >> 2);
              puVar17 = *(undefined4 **)(lVar14 + 0x38);
              if (3 < *(uint *)(lVar14 + 0x40)) {
                do {
                  uVar13 = uVar13 - 1;
                  *puVar17 = 0;
                  puVar17 = puVar17 + 1;
                } while (uVar13 != 0);
              }
              uVar22 = *(uint *)(lVar14 + 0x40);
              uVar13 = (ulonglong)uVar22 & 3;
              puVar18 = (undefined1 *)(*(longlong *)(lVar14 + 0x38) + (ulonglong)(uVar22 >> 2) * 4);
              if ((uVar22 & 3) != 0) {
                do {
                  uVar13 = uVar13 - 1;
                  *puVar18 = 0;
                  puVar18 = puVar18 + 1;
                } while (uVar13 != 0);
              }
            }
            *(undefined1 *)(lVar14 + 0xee) = 0;
          }
          local_c8 = *(longlong *)(lVar14 + 0x28);
          local_d0[0] = *(uint *)(lVar14 + 0x18);
          if (local_bc != 0) {
            uVar20 = 0x80808080;
            uVar22 = 0;
            uVar21 = 0;
            uVar1 = (uint)*(ushort *)(lVar14 + 0x14) * *(int *)(lVar14 + 0x1c) + 0xfff >> 0xc;
            if (uVar1 != 0) {
              local_b8 = (code *)puVar4;
              bVar3 = false;
              uVar13 = 0;
              local_c0 = 0;
              local_b0 = lVar19;
              local_60 = param_1;
              do {
                if ((*(byte *)(*(longlong *)(lVar14 + 0x38) + uVar13) & uVar20) != 0) {
                  if (uVar22 != uVar21) {
                    if (!bVar3) {
                      FUN_18012ff70(lVar14);
                      bVar3 = true;
                    }
                    FUN_180130288(lVar14,auStack_58,uVar22,uVar21);
                    (*local_b8)();
                    (*extraout_x11_12)(lVar14,auStack_58);
                    uVar22 = uVar21;
                  }
                  uVar22 = uVar22 + 1;
                }
                param_1 = local_60;
                lVar19 = local_b0;
                pcVar5 = local_b8;
                iVar10 = local_c0;
                uVar21 = uVar21 + 1;
                *(byte *)(*(longlong *)(lVar14 + 0x38) + uVar13) =
                     *(byte *)(*(longlong *)(lVar14 + 0x38) + uVar13) | (byte)uVar20;
                *(byte *)(*(longlong *)(lVar14 + 0x30) + uVar13) =
                     *(byte *)(*(longlong *)(lVar14 + 0x30) + uVar13) | (byte)uVar20;
                uVar13 = (ulonglong)((uVar20 & 1) + (int)uVar13);
                uVar20 = uVar20 >> 1 | uVar20 << 0x1f;
              } while (uVar21 < uVar1);
              if (uVar22 != uVar21) {
                if (!bVar3) {
                  FUN_18012ff70(lVar14);
                }
                FUN_180130288(lVar14,auStack_58,uVar22,uVar21);
                (*pcVar5)(0x180224000);
                (*extraout_x11_13)(lVar14,auStack_58);
              }
            }
            *(uint *)(lVar14 + 0x48) = *(uint *)(lVar14 + 0x48) | 1;
          }
        }
        local_c8 = *(longlong *)(lVar14 + 0x28);
        local_d0[0] = *(uint *)(lVar14 + 0x18);
      }
LAB_180117bc8:
      iVar9 = 0;
      if (iVar10 != 0) {
        iVar9 = -0x7fffbffb;
      }
    }
    else {
      lVar12 = 0;
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_1801176e8;
      uVar13 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar14 + 0x1338 + uVar13 * 8))
        goto LAB_1801176c8;
        uVar22 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar22;
      } while (uVar22 < 0x10);
LAB_1801176ec:
      uVar11 = (*(code *)puVar4)(0x180224000);
      cVar6 = (*extraout_x11_01)(uVar11,*(undefined4 *)(param_1 + 0x6c),
                                 *(undefined4 *)(param_1 + 0x68));
      if (cVar6 != '\0') goto LAB_180117720;
      iVar9 = -0x7fffbffb;
    }
    if (iVar9 < 0) {
      return iVar9;
    }
  }
  if (local_a0 == (int *)0x0) {
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    iVar8 = *local_a0;
    iVar10 = local_a0[1];
  }
  if (*(int *)(lVar19 + 0x20) == 0) {
    lVar14 = (ulonglong)(iVar10 * local_d0[0]) +
             (longlong)(int)((uint)*(byte *)(lVar19 + 0x26) * iVar8);
  }
  else {
    bVar16 = *(byte *)(lVar19 + 0x24);
    if (bVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180117c18);
      (*pcVar5)();
    }
    iVar2 = 0;
    if (bVar16 != 0) {
      iVar2 = iVar8 / (int)(uint)bVar16;
    }
    bVar16 = *(byte *)(lVar19 + 0x25);
    if (bVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180117c2c);
      (*pcVar5)();
    }
    iVar8 = 0;
    if (bVar16 != 0) {
      iVar8 = iVar10 / (int)(uint)bVar16;
    }
    lVar14 = (ulonglong)(iVar8 * local_d0[0]) + (ulonglong)(uint)(iVar2 * *(int *)(lVar19 + 0x20));
  }
  *(longlong *)(local_80 + 2) = lVar14 + local_c8;
  *local_80 = local_d0[0];
  if (*(int *)(param_1 + 0x48) == 0x31495441) {
    uVar22 = local_d0[0] >> 1;
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0x32495441) goto LAB_180117c88;
    uVar22 = local_d0[0] >> 2;
  }
  *local_80 = uVar22;
LAB_180117c88:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_80 = local_90;
    local_78 = (undefined4)uStack_88;
    uStack_74 = uStack_88._4_4_;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48);
    thunk_FUN_180223c70(lVar14 + (ulonglong)*(uint *)(param_1 + 0x6c) * 0x10,
                        lVar14 + (ulonglong)*(uint *)(param_1 + 0x6c) * 0x10,&local_80);
  }
  *(uint *)(*(longlong *)(param_1 + 8) + 0x100) =
       *(uint *)(*(longlong *)(param_1 + 8) + 0x100) | 0x800;
  if (local_bc == 0) {
    if ((*(longlong *)(lVar19 + 0xd0) == 0) && (*(longlong *)(lVar19 + 0xe0) != 0)) {
      bVar16 = 1;
    }
    else {
      bVar16 = 0;
    }
    bVar16 = *(byte *)(lVar19 + 0xed) | bVar16;
    *(byte *)(lVar19 + 0xed) = bVar16;
    *(longlong *)(lVar19 + 0xd0) = local_c8;
    *(uint *)(lVar19 + 0xd8) = local_d0[0];
    if ((bVar16 != 0) && (local_c8 != 0)) {
      FUN_18012ff70(lVar19);
      if (*(undefined4 **)(lVar19 + 0x30) != (undefined4 *)0x0) {
        uVar13 = (ulonglong)(*(uint *)(lVar19 + 0x40) >> 2);
        puVar17 = *(undefined4 **)(lVar19 + 0x30);
        if (3 < *(uint *)(lVar19 + 0x40)) {
          do {
            uVar13 = uVar13 - 1;
            *puVar17 = 0xffffffff;
            puVar17 = puVar17 + 1;
          } while (uVar13 != 0);
        }
        uVar22 = *(uint *)(lVar19 + 0x40);
        uVar13 = (ulonglong)uVar22 & 3;
        puVar18 = (undefined1 *)(*(longlong *)(lVar19 + 0x30) + (ulonglong)(uVar22 >> 2) * 4);
        if ((uVar22 & 3) != 0) {
          do {
            uVar13 = uVar13 - 1;
            *puVar18 = 0xff;
            puVar18 = puVar18 + 1;
          } while (uVar13 != 0);
        }
        uVar13 = (ulonglong)(*(uint *)(lVar19 + 0x40) >> 2);
        puVar17 = *(undefined4 **)(lVar19 + 0x38);
        if (3 < *(uint *)(lVar19 + 0x40)) {
          do {
            uVar13 = uVar13 - 1;
            *puVar17 = 0xffffffff;
            puVar17 = puVar17 + 1;
          } while (uVar13 != 0);
        }
        uVar22 = *(uint *)(lVar19 + 0x40);
        uVar13 = (ulonglong)uVar22 & 3;
        puVar18 = (undefined1 *)(*(longlong *)(lVar19 + 0x38) + (ulonglong)(uVar22 >> 2) * 4);
        if ((uVar22 & 3) != 0) {
          do {
            uVar13 = uVar13 - 1;
            *puVar18 = 0xff;
            puVar18 = puVar18 + 1;
          } while (uVar13 != 0);
        }
        uVar22 = (uint)*(ushort *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x1c) + 0xfff;
        uVar13 = (ulonglong)(uVar22 >> 0xf);
        bVar16 = (&DAT_18022a8d0)[(ulonglong)(uVar22 >> 0xc) & 7];
        *(byte *)(*(longlong *)(lVar19 + 0x30) + uVar13) =
             *(byte *)(*(longlong *)(lVar19 + 0x30) + uVar13) & bVar16;
        *(byte *)(*(longlong *)(lVar19 + 0x38) + uVar13) =
             *(byte *)(*(longlong *)(lVar19 + 0x38) + uVar13) & bVar16;
      }
      FUN_180131748(lVar19);
    }
    *(undefined1 *)(lVar19 + 0xee) = 0;
  }
  return iVar9;
}

