/*
 * FUN_18000c0d8 at 18000c0d8
 * undefined FUN_18000c0d8(void)
 * Address ranges: 18000c0d8-18000ca0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18000c0d8(longlong param_1,uint *param_2,int *param_3,uint param_4,byte param_5,uint param_6
                 )

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_b0 [2];
  longlong local_a8;
  uint local_a0 [2];
  int *local_98;
  undefined4 local_90;
  int iStack_8c;
  ulonglong local_88;
  int *local_80;
  undefined8 uStack_78;
  int local_70 [4];
  undefined1 auStack_60 [16];
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  lVar15 = *(longlong *)(param_1 + 8);
  uVar19 = param_6 & 0xff;
  if ((*(uint *)(lVar15 + 0x100) >> 10 & 1) == 0) {
    return -0x7789f794;
  }
  if ((*(uint *)(lVar15 + 0x100) >> 0xb & 1) != 0 || (param_4 & 0xffff07ef) != 0) {
    return -0x7789f794;
  }
  if (*(uint *)(lVar15 + 0x88) != 0xffffffff) {
    (**(code **)(**(longlong **)(lVar15 + 0x68) + 0x80))
              (*(longlong **)(lVar15 + 0x68),*(undefined8 *)(lVar15 + 0x70),
               *(undefined8 *)
                (*(longlong *)(lVar15 + 0x78) + (ulonglong)*(uint *)(lVar15 + 0x88) * 8));
    *(undefined4 *)(lVar15 + 0x88) = 0xffffffff;
  }
  (*__imp_USER32_dll_SetRect)
            (local_70,0,0,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if ((param_3 == (int *)0x0) ||
     ((iVar7 = (*__imp_USER32_dll_IsRectEmpty)(param_3), local_80 = param_3, iVar7 != 0 &&
      ((param_5 & 1) == 0)))) {
    local_80 = local_70;
  }
  uStack_78 = *(undefined8 *)(local_80 + 2);
  local_80 = *(int **)local_80;
  iVar7 = (*__imp_USER32_dll_EqualRect)(local_70,&local_80);
  (*__imp_USER32_dll_IntersectRect)(local_70,local_70,&local_80);
  iVar8 = (*__imp_USER32_dll_EqualRect)(local_70,&local_80);
  if (iVar8 == 0) {
    return -0x7789f794;
  }
  if (((param_6 & 1) == 0) || (*(char *)(lVar15 + 0x60) != '\0')) {
    lVar13 = *(longlong *)(lVar15 + 0xf8);
    if (lVar13 == -1) {
      lVar13 = 0;
      if ((*(uint *)(lVar15 + 0x18) & 3) == 0) {
        lVar13 = (*__imp_KERNEL32_dll_CreateFileMappingA)
                           (0xffffffffffffffff,0,0x8000004,0,
                            (uint)*(ushort *)(lVar15 + 0x14) * *(int *)(lVar15 + 0x1c) +
                            (*(uint *)(lVar15 + 0x18) * 0x40 + 0xfff & 0xfffff000) * 2,0);
        *(longlong *)(lVar15 + 0xf8) = lVar13;
      }
      else {
        *(undefined8 *)(lVar15 + 0xf8) = 0;
      }
    }
    if (((*(uint *)(lVar15 + 0x48) >> 4 & 1) != 0) &&
       (uVar11 = FUN_1800232f8(lVar15,lVar13,*(int *)(lVar15 + 0x18) * 0x40 + 0xfffU & 0xfffff000),
       (uVar11 & 1) == 0)) {
      return -0x7789f7d9;
    }
  }
  local_a8 = 0;
  local_b0[0] = 0;
  iVar8 = 0;
  *(int *)(lVar15 + 0xf0) = *(int *)(lVar15 + 0xf0) + 1;
  if (*(int *)(param_1 + 0x54) == 3) {
    local_a8 = *(longlong *)(param_1 + 0x40);
LAB_18000c7b8:
    local_b0[0] = *(uint *)(lVar15 + 0x18);
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x28);
    if ((*(char *)(lVar13 + 0x6819) != '\0') && (*(int *)(param_1 + 0x54) == 0)) {
      FUN_180023780(lVar15);
      local_a8 = *(longlong *)(lVar15 + 0x28);
      goto LAB_18000c7b8;
    }
    if ((((param_1 == *(longlong *)(lVar13 + 0x30)) || (param_1 == *(longlong *)(lVar13 + 0x38))) ||
        (param_1 == *(longlong *)(lVar13 + 0x40))) ||
       ((param_1 == *(longlong *)(lVar13 + 0x48) || (param_1 == *(longlong *)(lVar13 + 0x50))))) {
LAB_18000c36c:
      (**(code **)(**(longlong **)(lVar13 + 0x28) + 0x28))();
      plVar12 = *(longlong **)(param_1 + 0x30);
LAB_18000c380:
      if (plVar12 != (longlong *)0x0) goto LAB_18000c384;
LAB_18000c3ac:
      plVar12 = *(longlong **)(param_1 + 8);
      iVar9 = 0;
      if ((*(uint *)(plVar12 + 9) >> 5 & 1) == 0) {
        cVar5 = (**(code **)(*(longlong *)plVar12[0xe] + 0x28))
                          ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                           (int)plVar12[0x13]);
        if (cVar5 != '\0') {
          local_98 = (int *)0x0;
          local_90 = func_0x00018012faf0(plVar12);
          iStack_8c = *(ushort *)((longlong)plVar12 + 0x16) - 1;
          cVar5 = (**(code **)(*(longlong *)plVar12[0xe] + 0x70))
                            ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                             (int)plVar12[0x13],plVar12[0x1c],(int)plVar12[0x1d],&local_98);
          *(char *)((longlong)plVar12 + 0xee) = cVar5;
          iVar9 = 0;
          if (cVar5 == '\0') {
            iVar9 = 2;
          }
          (**(code **)(*(longlong *)plVar12[0xe] + 0x30))
                    ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                     (int)plVar12[0x13],0);
        }
        local_a8 = 0;
        local_b0[0] = 0;
      }
      else {
        if (plVar12[6] == 0) {
          if (plVar12[5] == 0) {
            iVar9 = (**(code **)(*(longlong *)plVar12[0xe] + 0x58))
                              ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                               (int)plVar12[0x13],(param_4 >> 8 & 0x20 | param_4 & 0x1f) >> 4,
                               iVar7 == 1 || param_5 != 0,&local_a8,local_b0);
            goto LAB_18000c7a0;
          }
          FUN_180023780(plVar12);
          cVar5 = (**(code **)(*(longlong *)plVar12[0xe] + 0x28))
                            ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                             (int)plVar12[0x13]);
          if (cVar5 != '\0') {
            cVar5 = '\0';
            if (*(short *)((longlong)plVar12 + 0x14) == 1) {
              if ((char)plVar12[0xc] == '\0') {
                local_98 = (int *)0x0;
                local_90 = func_0x00018012faf0();
                iStack_8c = *(ushort *)((longlong)plVar12 + 0x16) - 1;
                cVar5 = (**(code **)(*plVar12 + 0x30))(plVar12,&local_98);
              }
              else {
                local_88 = 0;
                local_a0[0] = 0;
                cVar6 = (**(code **)(*plVar12 + 0x50))(plVar12,&local_88,local_a0);
                if (cVar6 != '\0') {
                  (**(code **)(*plVar12 + 0x20))
                            (plVar12,local_88,plVar12[5],(short)plVar12[2],
                             *(undefined2 *)((longlong)plVar12 + 0x12),local_a0[0],(int)plVar12[3]);
                  (**(code **)(*plVar12 + 0x58))(plVar12);
                  cVar5 = '\x01';
                }
              }
            }
            else if ((char)plVar12[0xc] == '\0') {
              cVar5 = (**(code **)(*plVar12 + 0x40))(plVar12);
            }
            iVar9 = 0;
            if (cVar5 == '\0') {
              iVar9 = 2;
            }
            (**(code **)(*(longlong *)plVar12[0xe] + 0x30))
                      ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                       (int)plVar12[0x13],0);
            *(int *)((longlong)plVar12 + 0x44) = *(int *)((longlong)plVar12 + 0x44) + 1;
            *(undefined1 *)((longlong)plVar12 + 0xee) = 0;
          }
        }
        else {
          cVar5 = (**(code **)(*(longlong *)plVar12[0xe] + 0x28))
                            ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                             (int)plVar12[0x13]);
          if (cVar5 != '\0') {
            (**(code **)(*(longlong *)plVar12[0xe] + 0x30))
                      ((longlong *)plVar12[0xe],*(undefined4 *)((longlong)plVar12 + 0x94),
                       (int)plVar12[0x13],0);
            if (plVar12[6] != 0) {
              uVar18 = *(uint *)(plVar12 + 8);
              puVar16 = (undefined4 *)plVar12[7];
              uVar17 = uVar18 >> 3;
              if (uVar17 != 0) {
                func_0x000180222c50(puVar16,0,(ulonglong)uVar17 * 8);
                puVar16 = puVar16 + (ulonglong)uVar17 * 2;
              }
              if ((uVar18 >> 2 & 1) != 0) {
                *puVar16 = 0;
              }
              uVar18 = *(uint *)(plVar12 + 8) & 3;
              if (uVar18 != 0) {
                func_0x000180222c50(plVar12[7] + (ulonglong)(*(uint *)(plVar12 + 8) >> 2) * 4,0,
                                    uVar18);
              }
            }
            *(undefined1 *)((longlong)plVar12 + 0xee) = 0;
          }
          local_a8 = plVar12[5];
          local_b0[0] = *(uint *)(plVar12 + 3);
          if ((param_6 & 1) != 0) {
            uVar10 = 0x80808080;
            uVar18 = 0;
            uVar17 = 0;
            uVar11 = 0;
            uVar1 = (uint)*(ushort *)((longlong)plVar12 + 0x14) * *(int *)((longlong)plVar12 + 0x1c)
                    + 0xfff >> 0xc;
            if (uVar1 != 0) {
              local_a0[0] = param_6 & 0xff;
              bVar3 = false;
              local_88 = local_88 & 0xffffffff00000000;
              local_98 = param_3;
              do {
                if ((*(byte *)(plVar12[7] + uVar11) & uVar10) != 0) {
                  if (uVar18 != uVar17) {
                    if (!bVar3) {
                      FUN_180023780(plVar12);
                      bVar3 = true;
                    }
                    FUN_180023a20(plVar12,auStack_60,uVar18,uVar17);
                    (**(code **)(*plVar12 + 0x30))(plVar12,auStack_60);
                    uVar18 = uVar17;
                  }
                  uVar18 = uVar18 + 1;
                }
                param_3 = local_98;
                uVar19 = local_a0[0];
                uVar17 = uVar17 + 1;
                *(byte *)(plVar12[7] + uVar11) = *(byte *)(plVar12[7] + uVar11) | (byte)uVar10;
                *(byte *)(plVar12[6] + uVar11) = *(byte *)(plVar12[6] + uVar11) | (byte)uVar10;
                uVar11 = (ulonglong)((uVar10 & 1) + (int)uVar11);
                uVar10 = uVar10 >> 1 | uVar10 << 0x1f;
              } while (uVar17 < uVar1);
              iVar9 = (int)local_88;
              if (uVar18 != uVar17) {
                if (!bVar3) {
                  FUN_180023780(plVar12);
                }
                FUN_180023a20(plVar12,auStack_60,uVar18,uVar17);
                (**(code **)(*plVar12 + 0x30))(plVar12,auStack_60);
              }
            }
            *(uint *)(plVar12 + 9) = *(uint *)(plVar12 + 9) | 1;
          }
        }
        local_a8 = plVar12[5];
        local_b0[0] = *(uint *)(plVar12 + 3);
      }
LAB_18000c7a0:
      iVar8 = 0;
      if (iVar9 != 0) {
        iVar8 = -0x7fffbffb;
      }
    }
    else {
      plVar12 = (longlong *)0x0;
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18000c380;
      uVar11 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar13 + 0x1338 + uVar11 * 8))
        goto LAB_18000c36c;
        uVar18 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar18;
      } while (uVar18 < 0x10);
      plVar12 = *(longlong **)(param_1 + 0x30);
LAB_18000c384:
      cVar5 = (**(code **)(*plVar12 + 0x38))
                        (plVar12,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
      if (cVar5 != '\0') goto LAB_18000c3ac;
      iVar8 = -0x7fffbffb;
    }
    if (iVar8 < 0) {
      return iVar8;
    }
  }
  if (param_3 == (int *)0x0) {
    iVar7 = 0;
    iVar9 = 0;
  }
  else {
    iVar7 = *param_3;
    iVar9 = param_3[1];
  }
  if (*(int *)(lVar15 + 0x20) == 0) {
    lVar13 = (ulonglong)(iVar9 * local_b0[0]) +
             (longlong)(int)((uint)*(byte *)(lVar15 + 0x26) * iVar7);
  }
  else {
    bVar14 = *(byte *)(lVar15 + 0x24);
    if (bVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000c7ec);
      (*pcVar4)();
    }
    iVar2 = 0;
    if (bVar14 != 0) {
      iVar2 = iVar7 / (int)(uint)bVar14;
    }
    bVar14 = *(byte *)(lVar15 + 0x25);
    if (bVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000c800);
      (*pcVar4)();
    }
    iVar7 = 0;
    if (bVar14 != 0) {
      iVar7 = iVar9 / (int)(uint)bVar14;
    }
    lVar13 = (ulonglong)(iVar7 * local_b0[0]) + (ulonglong)(uint)(iVar2 * *(int *)(lVar15 + 0x20));
  }
  *(longlong *)(param_2 + 2) = lVar13 + local_a8;
  *param_2 = local_b0[0];
  if (*(int *)(param_1 + 0x48) == 0x31495441) {
    uVar18 = local_b0[0] >> 1;
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0x32495441) goto LAB_18000c858;
    uVar18 = local_b0[0] >> 2;
  }
  *param_2 = uVar18;
LAB_18000c858:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_98 = local_80;
    local_90 = (undefined4)uStack_78;
    iStack_8c = uStack_78._4_4_;
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48);
    (*__imp_USER32_dll_UnionRect)
              (lVar13 + (ulonglong)*(uint *)(param_1 + 0x6c) * 0x10,
               lVar13 + (ulonglong)*(uint *)(param_1 + 0x6c) * 0x10,&local_98);
  }
  *(uint *)(*(longlong *)(param_1 + 8) + 0x100) =
       *(uint *)(*(longlong *)(param_1 + 8) + 0x100) | 0x800;
  if ((uVar19 & 1) == 0) {
    if ((*(longlong *)(lVar15 + 0xd0) == 0) && (*(longlong *)(lVar15 + 0xe0) != 0)) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    bVar14 = *(byte *)(lVar15 + 0xed) | bVar14;
    *(byte *)(lVar15 + 0xed) = bVar14;
    *(longlong *)(lVar15 + 0xd0) = local_a8;
    *(uint *)(lVar15 + 0xd8) = local_b0[0];
    if ((bVar14 != 0) && (local_a8 != 0)) {
      FUN_180023780(lVar15);
      puVar16 = *(undefined4 **)(lVar15 + 0x30);
      if (puVar16 != (undefined4 *)0x0) {
        uVar19 = *(uint *)(lVar15 + 0x40);
        uVar18 = uVar19 >> 3;
        if (uVar18 != 0) {
          func_0x000180222c50(puVar16,0xffffffffffffffff,(ulonglong)uVar18 * 8);
          puVar16 = puVar16 + (ulonglong)uVar18 * 2;
        }
        if ((uVar19 >> 2 & 1) != 0) {
          *puVar16 = 0xffffffff;
        }
        uVar19 = *(uint *)(lVar15 + 0x40) & 3;
        if (uVar19 != 0) {
          func_0x000180222c50(*(longlong *)(lVar15 + 0x30) +
                              (ulonglong)(*(uint *)(lVar15 + 0x40) >> 2) * 4,0xff,uVar19);
        }
        uVar19 = *(uint *)(lVar15 + 0x40);
        puVar16 = *(undefined4 **)(lVar15 + 0x38);
        uVar18 = uVar19 >> 3;
        if (uVar18 != 0) {
          func_0x000180222c50(puVar16,0xffffffffffffffff,(ulonglong)uVar18 * 8);
          puVar16 = puVar16 + (ulonglong)uVar18 * 2;
        }
        if ((uVar19 >> 2 & 1) != 0) {
          *puVar16 = 0xffffffff;
        }
        uVar19 = *(uint *)(lVar15 + 0x40) & 3;
        if (uVar19 != 0) {
          func_0x000180222c50(*(longlong *)(lVar15 + 0x38) +
                              (ulonglong)(*(uint *)(lVar15 + 0x40) >> 2) * 4,0xff,uVar19);
        }
        uVar19 = (uint)*(ushort *)(lVar15 + 0x14) * *(int *)(lVar15 + 0x1c) + 0xfff;
        uVar11 = (ulonglong)(uVar19 >> 0xf);
        bVar14 = (&DAT_18022a8d0)[(ulonglong)(uVar19 >> 0xc) & 7];
        *(byte *)(*(longlong *)(lVar15 + 0x30) + uVar11) =
             *(byte *)(*(longlong *)(lVar15 + 0x30) + uVar11) & bVar14;
        *(byte *)(*(longlong *)(lVar15 + 0x38) + uVar11) =
             *(byte *)(*(longlong *)(lVar15 + 0x38) + uVar11) & bVar14;
      }
      FUN_180024d10(lVar15);
    }
    *(undefined1 *)(lVar15 + 0xee) = 0;
  }
  return iVar8;
}

