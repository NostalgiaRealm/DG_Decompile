/*
 * FUN_180021018 at 180021018
 * undefined FUN_180021018(void)
 * Address ranges: 180021018-180022357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_180021018(longlong *param_1,ulonglong param_2,undefined8 *param_3,longlong param_4,uint param_5,
             ulonglong param_6,int *param_7,undefined1 *param_8)

{
  bool bVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint local_100 [2];
  undefined8 local_f8;
  uint local_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined1 auStack_80 [48];
  
  local_f8 = param_2;
  local_e8 = param_6;
  local_e0 = param_8;
  cVar10 = (**(code **)(*param_1 + 0x38))();
  if (param_5 - 0x46 < 2) {
    if ((param_3[6] == 0) && (uVar19 = FUN_180022c68(0), (uVar19 & 1) != 0)) {
      uVar13 = 0;
      lVar20 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar19 = (**(code **)(*param_1 + 0x20))(param_1);
      if ((lVar20 != 0) &&
         (plVar21 = (longlong *)(&DAT_180253850)[(uVar19 & 0xffffffff) * 0x4b],
         plVar21 != (longlong *)0x0)) {
        plVar21 = (longlong *)(**(code **)(*plVar21 + 0x60))(plVar21,lVar20,0,0,4,2,2,0,0,0);
        if (plVar21 != (longlong *)0x0) {
          iVar28 = 0;
          cVar11 = (**(code **)(*plVar21 + 0x28))();
          if (cVar11 != '\0') {
            cVar11 = (**(code **)(*plVar21 + 0x30))(plVar21);
            iVar28 = 1;
            if (cVar11 != '\0') {
              iVar28 = 2;
            }
          }
          (**(code **)(*plVar21 + 0x20))(plVar21);
          if (iVar28 != 1) {
            if (iVar28 == 2) {
              uVar13 = 3;
            }
            goto LAB_180021184;
          }
        }
        uVar13 = 0x207;
        if (*(char *)((longlong)param_1 + 0x41) == '\0') {
          uVar13 = 0x204;
        }
      }
LAB_180021184:
      param_7[8] = param_7[8] | uVar13;
      FUN_180022d38();
    }
  }
  else if (param_5 == 0x216) {
    *(undefined1 *)((longlong)param_3 + 0x44) = 1;
  }
  if (*(char *)(DAT_18024de60 + 0x882) == '\0') {
    if (param_5 != 0x113 || local_e8 != 0xaaaa) {
      if (cVar10 == '\0') {
        if (param_5 == 0x14) {
          return 1;
        }
LAB_1800217c8:
        if ((param_5 == 0x104 && local_e8 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
          uVar19 = FUN_180022c68(1);
          if ((uVar19 & 1) == 0) {
            (*__imp_USER32_dll_PostMessageW)(param_4,0x400,0x44454745,1);
          }
          else {
            uVar14 = (**(code **)(*param_1 + 0x58))(param_1,param_4);
            FUN_180022478(param_1,uVar14);
            FUN_180022d38();
          }
          (**(code **)(*param_1 + 0x60))(param_1,param_4);
          return 0;
        }
        goto LAB_1800219d0;
      }
      if (((param_5 - 0xa1 < 6) ||
          ((param_5 - 0x216 < 0x1d &&
           ((0x18000001U >> (ulonglong)(param_5 - 0x216 & 0x1f) & 1) != 0)))) ||
         ((param_5 < 6 && ((0x28U >> (ulonglong)(param_5 & 0x1f) & 1) != 0)))) {
LAB_1800217a0:
        uVar24 = (*__imp_USER32_dll_DefWindowProcW)(param_4,param_5,local_e8,param_7);
        return uVar24;
      }
      if ((param_5 < 0x1d) && ((0x10000040U >> (ulonglong)(param_5 & 0x1f) & 1) != 0)) {
        uVar19 = FUN_180022c68(5);
        if ((uVar19 & 1) != 0) {
          cVar10 = (**(code **)(*param_1 + 8))(param_1);
          if ((cVar10 == '\0') || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
            uVar24 = 0;
          }
          else {
            uVar24 = 1;
          }
          uVar14 = FUN_180022668(param_1);
          FUN_180022760(param_1,uVar24,uVar14);
          goto LAB_1800219cc;
        }
        goto LAB_1800219d0;
      }
      if (param_5 - 0x46 < 2) goto LAB_1800217a0;
      if (param_5 == 0x14) {
        return 1;
      }
      if (param_5 != 0x214) goto LAB_1800217c8;
      uStack_d8 = *(undefined8 *)(param_7 + 2);
      local_e0 = *(undefined1 **)param_7;
      if (*(char *)(local_f8 + 0x821) == '\0') goto LAB_180021758;
      local_100[0] = 0;
      local_f0 = 0;
      (**(code **)(*(longlong *)param_3[2] + 0x10))((longlong *)param_3[2],local_100,&local_f0);
      if ((local_100[0] == 0) || (local_f0 == 0)) goto LAB_180021758;
      local_d0 = (int *)0x0;
      local_c8 = 0;
      uVar14 = (*__imp_USER32_dll_GetWindowLongPtrW)(param_4,0xfffffff0);
      uVar15 = (*__imp_USER32_dll_GetWindowLongPtrW)(param_4,0xffffffec);
      (*__imp_USER32_dll_AdjustWindowRectEx)(&local_d0,uVar14,0,uVar15);
      local_e0._4_4_ = local_e0._4_4_ - local_d0._4_4_;
      local_e0._0_4_ = (int)local_e0 - (int)local_d0;
      uStack_d8._4_4_ = uStack_d8._4_4_ - local_c8._4_4_;
      uStack_d8._0_4_ = (int)uStack_d8 - (int)local_c8;
      if (local_f0 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180021664);
        (*pcVar8)();
      }
      uVar13 = 0;
      if (local_f0 != 0) {
        uVar13 = ((uStack_d8._4_4_ - local_e0._4_4_) * local_100[0]) / local_f0;
      }
      if (local_100[0] == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180021678);
        (*pcVar8)();
      }
      uVar4 = 0;
      if (local_100[0] != 0) {
        uVar4 = (((int)uStack_d8 - (int)local_e0) * local_f0) / local_100[0];
      }
      uVar5 = (uVar13 - (int)uStack_d8) + (int)local_e0;
      uVar30 = (uVar4 - uStack_d8._4_4_) + local_e0._4_4_;
      if (local_e8 == 4) {
        uVar19 = 3;
LAB_1800216e4:
        uVar23 = 1;
LAB_1800216e8:
        if (uVar30 <= uVar5) {
          uVar19 = uVar23;
        }
      }
      else {
        if (local_e8 == 5) {
          uVar19 = 6;
          goto LAB_1800216e4;
        }
        if (local_e8 != 7) {
          uVar19 = local_e8;
          if (local_e8 != 8) goto LAB_1800216ec;
          uVar19 = 6;
          uVar23 = 2;
          goto LAB_1800216e8;
        }
        uVar19 = 2;
        if (uVar5 < uVar30) {
          uVar19 = 3;
        }
      }
LAB_1800216ec:
      if (uVar19 == 1) {
        local_e0 = (undefined1 *)CONCAT44(uStack_d8._4_4_ - uVar4,(int)local_e0);
      }
      else if (uVar19 == 2) {
        uStack_d8 = CONCAT44(uVar4 + local_e0._4_4_,(int)uStack_d8);
      }
      else if (uVar19 == 3) {
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,(int)uStack_d8 - uVar13);
      }
      else if (uVar19 == 6) {
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar13 + (int)local_e0);
      }
      (*__imp_USER32_dll_AdjustWindowRectEx)(&local_e0,uVar14,0,uVar15);
LAB_180021758:
      *(undefined8 *)(param_7 + 2) = uStack_d8;
      *(undefined1 **)param_7 = local_e0;
      *(int *)(param_3 + 3) = param_7[2] - *param_7;
      *(int *)((longlong)param_3 + 0x1c) = param_7[3] - param_7[1];
      return 1;
    }
    uVar19 = FUN_180022c68(0);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    uVar13 = (**(code **)(*param_1 + 8))(param_1);
    uVar14 = 0;
    local_e8 = CONCAT44(local_e8._4_4_,uVar13) & 0xffffffff000000ff;
    if ((uVar13 & 0xff) != 0) {
      uVar14 = FUN_180022668(param_1);
      *(byte *)(local_f8 + 0x820) = (byte)uVar14 ^ 1;
      lVar20 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar19 = (**(code **)(*param_1 + 0x20))(param_1);
      if (((lVar20 != 0) &&
          (plVar21 = (longlong *)(&DAT_180253850)[(uVar19 & 0xffffffff) * 0x4b],
          plVar21 != (longlong *)0x0)) &&
         (plVar21 = (longlong *)(**(code **)(*plVar21 + 0x60))(plVar21,lVar20,0,0,4,2,2,0,0,0),
         plVar21 != (longlong *)0x0)) {
        (**(code **)(*plVar21 + 0x38))();
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      if (*(longlong *)(DAT_18024de60 + 0x3b0) != 0) {
        (*__imp_USER32_dll_PostMessageW)(*(longlong *)(DAT_18024de60 + 0x3b0),0x408,0,0);
      }
      if (*(char *)(local_f8 + 0x820) != '\0') {
        (*__imp_USER32_dll_GetWindowLongPtrW)(param_4,0xfffffff0);
        uVar13 = *(uint *)(local_f8 + 0x8c2);
        bVar9 = (uVar13 & 1) == 0;
        lVar20 = 0x40000;
        if (bVar9) {
          lVar20 = 0x40300;
        }
        uVar19 = 0x10000000;
        if (bVar9) {
          uVar19 = 0x10cf0000;
        }
        lVar22 = (*__imp_USER32_dll_GetWindowLongPtrW)(param_4,0xffffffec);
        if (lVar22 != lVar20) {
          (*__imp_USER32_dll_SetWindowLongPtrW)(param_4,0xffffffec,lVar20);
        }
        uVar23 = (*__imp_USER32_dll_GetWindowLongPtrW)(param_4,0xfffffff0);
        bVar9 = (uVar23 & 0x10cf0000) != uVar19;
        if (bVar9) {
          (*__imp_USER32_dll_SetWindowLongPtrW)(param_4,0xfffffff0,uVar19);
        }
        (*__imp_USER32_dll_SetWindowPos)
                  (param_4,(ulonglong)(uVar13 >> 1) | 0xfffffffffffffffe,0,0,0,0,0x41b);
        if ((bVar9 || lVar22 != lVar20) ||
           ((*(int *)(param_3 + 3) == 0 && (*(int *)((longlong)param_3 + 0x1c) == 0)))) {
          local_100[0] = 0;
          local_f0 = 0;
          uVar24 = (**(code **)(*(longlong *)param_3[2] + 0x10))
                             ((longlong *)param_3[2],local_100,&local_f0);
          FUN_180100ff0(uVar24,param_4,param_3,local_100[0],local_f0,
                        *(undefined1 *)(local_f8 + 0x824));
        }
      }
    }
    if (((cVar10 == '\0') || ((int)local_e8 == 0)) || (*(char *)((longlong)param_3 + 0x45) == '\0'))
    {
      uVar24 = 0;
    }
    else {
      uVar24 = 1;
    }
    FUN_180022760(param_1,uVar24,uVar14);
    lVar20 = (**(code **)(*param_1 + 0x70))(param_1);
    if (lVar20 == 0) {
      cVar10 = (**(code **)(*param_1 + 0x78))(param_1);
      if ((cVar10 == '\0') && (uVar19 = FUN_180022b70(), (uVar19 & 1) != 0)) {
        lVar20 = (*__imp_USER32_dll_GetCursor)();
        lVar22 = FUN_180022c10();
        if (lVar20 != lVar22) {
          lVar3 = param_1[5];
          if (param_1[5] == -1) {
            lVar3 = lVar20;
          }
          (**(code **)(*param_1 + 0x80))(param_1,lVar3);
          pcVar8 = *(code **)(DAT_18024de50 + 0x78);
          if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
            pcVar8 = __imp_USER32_dll_SetCursor;
          }
          (*pcVar8)(lVar22);
        }
        uVar24 = 1;
      }
      else {
        uVar24 = 0;
      }
      (**(code **)(*param_1 + 0x88))(param_1,uVar24);
    }
LAB_180022130:
    FUN_180022d38();
  }
  else {
    if ((param_5 < 0x1d) && ((0x10000040U >> (ulonglong)(param_5 & 0x1f) & 1) != 0)) {
      if ((cVar10 != '\0') && (uVar19 = FUN_180022c68(5), (uVar19 & 1) != 0)) {
        if (local_e8 == 0) {
          if (param_5 == 0x1c) {
            uVar19 = (*__imp_USER32_dll_GetWindowThreadProcessId)(param_4);
            bVar9 = param_7 != (int *)(uVar19 & 0xffffffff);
            piVar31 = param_7;
          }
          else {
            uVar19 = (*__imp_USER32_dll_GetWindowThreadProcessId)(param_7,0);
            piVar31 = (int *)(uVar19 & 0xffffffff);
            lVar20 = (*__imp_USER32_dll_GetWindow)(param_7,4);
            if ((lVar20 == param_4) && ((*(uint *)(DAT_18024de60 + 0x8c6) & 1) == 0)) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
          }
          if (bVar9) {
            cVar10 = (**(code **)(*param_1 + 0x40))(param_1,(ulonglong)piVar31 & 0xffffffff);
            if (cVar10 == '\0') {
              (*__imp_USER32_dll_SendNotifyMessageW)(param_4,0x405,0x44454745,0x44454745);
            }
            else {
              DAT_18024de68 = (longlong *)0x0;
              (*__imp_USER32_dll_ShowWindow)(param_4,7);
              if (DAT_18024de68 != param_1) {
                (**(code **)(*param_1 + 0x50))(param_1,param_4);
                FUN_180022760(param_1,0,0);
                uVar19 = FUN_180022668(param_1);
                if ((uVar19 & 1) != 0) {
                  FUN_180022478(param_1,0);
                }
              }
            }
          }
        }
        else if ((*(char *)((longlong)param_3 + 0x5c) == '\0') &&
                (*(char *)((longlong)param_3 + 0x45) == '\0')) {
          *(undefined1 *)((longlong)param_3 + 0x5c) = 1;
          (**(code **)(*param_1 + 0x48))(param_1,param_4);
          uVar14 = FUN_180022668(param_1);
          FUN_180022760(param_1,1,uVar14);
          *(undefined1 *)((longlong)param_3 + 0x5c) = 0;
        }
LAB_1800219cc:
        FUN_180022d38();
      }
LAB_1800219d0:
      sVar2 = (short)param_7;
      if ((param_5 - 0x201 < 0xc) && ((0xedbU >> (ulonglong)(param_5 - 0x201 & 0x1f) & 1) != 0)) {
LAB_180021a00:
        if (*(char *)((longlong)param_3 + 0x5b) != '\0') {
          return 0;
        }
        uVar19 = FUN_180022c68(0);
        if ((uVar19 & 1) != 0) {
          *(undefined1 *)((longlong)param_3 + 0x5b) = 1;
          bVar9 = false;
          cVar10 = (**(code **)(*param_1 + 0xa0))(param_1,&local_b0);
          if (cVar10 != '\0') {
            iVar28 = (int)sVar2;
            uVar19 = ((longlong)param_7 << 0x20) >> 0x30;
            iVar18 = (int)(short)((ulonglong)param_7 >> 0x10);
            bVar9 = true;
            local_c0 = iVar28;
            iStack_bc = iVar18;
            if (*(char *)(param_3 + 0xb) == '\0') {
              bVar7 = false;
            }
            else {
              bVar1 = false;
              local_100[0] = (uint)*(byte *)(local_f8 + 0x8e6);
              local_d0 = &local_b0;
              if (local_100[0] == 0) {
                local_d0 = &local_90;
              }
              if (((*(char *)(local_f8 + 0x823) == '\0') || ((char)param_1[8] == '\0')) &&
                 (iVar16 = (*__imp_USER32_dll_PtInRect)(local_d0,CONCAT44(iVar18,iVar28)),
                 iVar16 == 0)) {
                if (*(char *)((longlong)param_3 + 0x59) == '\0') {
                  if ((int)sVar2 < *local_d0) {
                    bVar1 = true;
                    iVar28 = *local_d0;
                  }
                  else {
                    if (local_100[0] == 0) {
                      local_a8 = local_88;
                    }
                    if (local_a8 <= sVar2) {
                      iVar28 = local_a8 + -1;
                    }
                    bVar1 = local_a8 <= sVar2;
                  }
                  if (local_100[0] == 0) {
                    local_ac = local_8c;
                  }
                  if ((int)local_ac <= iVar18) {
                    if (local_100[0] == 0) {
                      local_a4 = local_84;
                    }
                    if (iVar18 < local_a4) goto LAB_180021e0c;
                    local_ac = local_a4 - 1;
                  }
                  uVar19 = (ulonglong)local_ac;
                  bVar1 = true;
                }
                else {
                  local_f8 = (*__imp_USER32_dll_GetDCEx)(0,0,3);
                  if (*local_d0 < (int)sVar2) {
                    iVar16 = local_a8;
                    if (local_100[0] == 0) {
                      iVar16 = local_88;
                    }
                    if (iVar16 + -1 <= (int)sVar2) {
                      local_b8 = local_a8;
                      iStack_b4 = iVar18;
                      (*__imp_USER32_dll_MapWindowPoints)(*param_3,0,&local_b8,1);
                      iVar16 = (*__imp_GDI32_dll_PtVisible)(local_f8,local_b8,iStack_b4);
                      iVar28 = local_a8;
                      if (local_100[0] == 0) {
                        iVar28 = local_88;
                      }
                      if (iVar16 == 0) goto LAB_180021b2c;
                      bVar9 = false;
                      iVar28 = (local_a8 - iVar28) + (int)sVar2 + 1;
                      goto LAB_180021b30;
                    }
                  }
                  else {
                    local_f0 = local_b0 - 1;
                    iStack_ec = iVar18;
                    (*__imp_USER32_dll_MapWindowPoints)(*param_3,0,&local_f0,1);
                    iVar16 = (*__imp_GDI32_dll_PtVisible)(local_f8,local_f0,iStack_ec);
                    iVar28 = *local_d0;
                    if (iVar16 != 0) {
                      bVar9 = false;
                      iVar28 = (local_b0 - iVar28) + (int)sVar2;
LAB_180021b2c:
                      iVar28 = iVar28 + -1;
                    }
LAB_180021b30:
                    bVar1 = true;
                  }
                  uVar13 = local_ac;
                  if (local_100[0] == 0) {
                    uVar13 = local_8c;
                  }
                  if ((int)uVar13 < iVar18) {
                    iVar16 = local_a4;
                    if (local_100[0] == 0) {
                      iVar16 = local_84;
                    }
                    if (iVar16 <= iVar18) {
                      local_d0 = (int *)CONCAT44(local_a4,iVar28);
                      (*__imp_USER32_dll_MapWindowPoints)(*param_3,0,&local_d0,1);
                      iVar17 = (*__imp_GDI32_dll_PtVisible)
                                         (local_f8,(ulonglong)local_d0 & 0xffffffff,local_d0._4_4_);
                      iVar16 = local_a4;
                      if (local_100[0] == 0) {
                        iVar16 = local_84;
                      }
                      if (iVar17 == 0) {
                        uVar13 = iVar16 - 1;
                      }
                      else {
                        uVar13 = (local_a4 - iVar16) + iVar18;
                      }
                      uVar19 = (ulonglong)uVar13;
                      if (iVar17 != 0) {
                        bVar9 = false;
                      }
                      goto LAB_180021d68;
                    }
                  }
                  else {
                    iStack_bc = local_ac - 1;
                    local_c0 = iVar28;
                    (*__imp_USER32_dll_MapWindowPoints)(*param_3,0,&local_c0,1);
                    iVar16 = (*__imp_GDI32_dll_PtVisible)(local_f8,local_c0,iStack_bc);
                    uVar13 = local_ac;
                    if (local_100[0] == 0) {
                      uVar13 = local_8c;
                    }
                    if (iVar16 == 0) {
                      uVar19 = (ulonglong)uVar13;
                    }
                    else {
                      uVar19 = (ulonglong)(((local_ac - uVar13) + iVar18) - 1);
                      bVar9 = false;
                    }
LAB_180021d68:
                    bVar1 = true;
                  }
                  (*__imp_USER32_dll_ReleaseDC)(0,local_f8);
                }
              }
LAB_180021e0c:
              bVar7 = bVar9;
              if (bVar1) {
                local_f8 = CONCAT44((int)uVar19,iVar28);
                (*__imp_USER32_dll_MapWindowPoints)(*param_3,0,&local_f8,1);
                (*__imp_USER32_dll_SetCursorPos)(local_f8 & 0xffffffff,local_f8._4_4_);
                iVar18 = (*__imp_USER32_dll_PeekMessageA)(auStack_80,*param_3,0x200,0x200,1);
                while (iVar18 != 0) {
                  iVar18 = (*__imp_USER32_dll_PeekMessageA)(auStack_80,*param_3,0x200,0x200,1);
                }
              }
            }
            bVar9 = !bVar9;
            *(bool *)((longlong)param_3 + 0x59) = bVar7;
            param_7 = (int *)((ulonglong)(ushort)iVar28 | (uVar19 & 0xffff) << 0x10);
          }
          *(undefined1 *)((longlong)param_3 + 0x5b) = 0;
          FUN_180022d38();
          if (bVar9) {
            return 0;
          }
        }
LAB_180021eb4:
        if (param_5 == 0x401 && local_e8 == 0x44454745) {
          uVar19 = FUN_180022c68(0);
          lVar20 = DAT_18024de60;
          if ((uVar19 & 1) == 0) {
            uVar24 = 0x401;
            goto LAB_180022140;
          }
          uVar19 = (**(code **)(*param_1 + 0x20))(param_1);
          lVar22 = (uVar19 & 0xffffffff) * 600;
          plVar21 = (longlong *)(&DAT_180253850)[(uVar19 & 0xffffffff) * 0x4b];
          if ((*(char *)(lVar20 + 0x882) == '\0') &&
             (bVar12 = FUN_180022668(param_1), *(byte *)(lVar20 + 0x5fc) != (bVar12 ^ 1))) {
            FUN_180022478(param_1,1);
          }
          if (*(int *)(lVar20 + 0x808) != *(int *)(lVar20 + 0x5e4)) {
            *(int *)(param_1 + 2) = *(int *)(lVar20 + 0x5e4);
          }
          (**(code **)(*plVar21 + 0x20))(plVar21,lVar20 + 0x5dc,param_7);
          lVar3 = DAT_18024de60;
          *(uint *)((longlong)param_1 + 0x14) = *(uint *)(DAT_18024de60 + 0x8c2) >> 2 & 1;
          *(uint *)(param_1 + 3) = *(uint *)(lVar3 + 0x8c6) & 1;
          iVar28 = *(int *)(lVar3 + 0x81c);
          if ((iVar28 == 6 || iVar28 < 3) || 8 < iVar28) {
            (*__imp_USER32_dll_SetRectEmpty)(&DAT_180253a14 + lVar22);
          }
          else {
            uVar4 = *(uint *)(&DAT_1802539fc + lVar22);
            uVar5 = *(uint *)(&DAT_180253a00 + lVar22);
            uVar30 = *(uint *)(lVar3 + 0x8b6);
            uVar13 = *(uint *)(lVar3 + 0x8ba);
            uVar27 = *(uint *)(lVar3 + 0x8b2);
            uVar26 = *(uint *)(lVar3 + 0x8ae);
            uVar29 = uVar13;
            if (uVar30 == 0xffffffff) {
              uVar6 = uVar13 >> 0x10;
              uVar30 = 0;
              uVar29 = 0;
              if ((uVar6 != 0) && (uVar13 = uVar13 & 0xffff, uVar13 != 0)) {
                uVar29 = 0;
                if (uVar6 != 0) {
                  uVar29 = (uVar13 * uVar4) / uVar6;
                }
                uVar30 = uVar4;
                if (uVar5 <= uVar29) {
                  if (uVar13 == 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180022018);
                    (*pcVar8)();
                  }
                  uVar30 = 0;
                  uVar29 = uVar5;
                  if (uVar13 != 0) {
                    uVar30 = (uVar6 * uVar5) / uVar13;
                  }
                }
              }
            }
            if (uVar26 == 0xffffffff && uVar27 == 0xffffffff) {
              uVar26 = uVar4 - uVar30 >> 1;
              uVar27 = uVar5 - uVar29 >> 1;
            }
            iVar28 = uVar26 + uVar30;
            if ((iVar28 <= (int)uVar26) || (iVar18 = uVar27 + uVar29, iVar18 <= (int)uVar27)) {
              iVar18 = 0;
              uVar27 = 0;
              iVar28 = 0;
              uVar26 = 0;
            }
            (*__imp_USER32_dll_SetRect)(&DAT_180253a14 + lVar22,uVar26,uVar27,iVar28,iVar18);
          }
          (**(code **)(*param_1 + 0x68))(param_1);
          *(undefined1 *)(lVar20 + 0x7e9) = 0;
          goto LAB_180022130;
        }
        goto LAB_1800220a8;
      }
      if (param_5 != 0x20) {
        if (param_5 == 0x200) {
          if (*(char *)((longlong)param_3 + 0x5d) != '\0') {
            return 0;
          }
          goto LAB_180021a00;
        }
        goto LAB_180021eb4;
      }
      if (*(char *)((longlong)param_3 + 0x5d) == '\0') {
        uVar19 = FUN_180022c68(0);
        if ((uVar19 & 1) == 0) {
          return 1;
        }
        *(undefined1 *)((longlong)param_3 + 0x5d) = 1;
        if ((((uint)param_7 & 0xffff) == 1) || (*(char *)((longlong)param_1 + 0x43) != '\0')) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        lVar20 = (**(code **)(*param_1 + 0x70))(param_1);
        lVar22 = FUN_180022c10();
        if ((lVar20 == 0) || (!bVar9)) {
          uVar24 = 1;
          if (((ulonglong)param_7 & 0xffff) != 0) {
            uVar24 = (*__imp_USER32_dll_CallWindowProcW)(param_3[4],param_4,0x20,local_e8,param_7);
          }
          if ((lVar20 == 0) || (!bVar9)) {
            cVar10 = (**(code **)(*param_1 + 0x78))(param_1);
            lVar20 = param_1[5];
            if (cVar10 == '\0') {
              if (lVar20 == -1) {
                lVar20 = (*__imp_USER32_dll_GetCursor)();
              }
              if (lVar20 == lVar22) {
                (**(code **)(*param_1 + 0x90))(param_1);
              }
              else {
                pcVar8 = *(code **)(DAT_18024de50 + 0x78);
                if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
                  pcVar8 = __imp_USER32_dll_SetCursor;
                }
                (*pcVar8)(lVar22);
                (**(code **)(*param_1 + 0x80))(param_1,lVar20);
              }
              uVar14 = FUN_180022b70();
            }
            else {
              uVar14 = 0;
              if (lVar20 != -1) {
                pcVar8 = *(code **)(DAT_18024de50 + 0x78);
                if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
                  pcVar8 = __imp_USER32_dll_SetCursor;
                }
                (*pcVar8)();
                param_1[5] = -1;
              }
            }
            (**(code **)(*param_1 + 0x88))(param_1,uVar14);
            goto LAB_180022338;
          }
        }
        else {
          uVar24 = 1;
        }
        lVar25 = (*__imp_USER32_dll_GetCursor)();
        cVar10 = (**(code **)(*param_1 + 0x78))(param_1);
        lVar3 = lVar22;
        if (cVar10 != '\0') {
          (**(code **)(*param_1 + 0x88))(param_1,0);
          lVar3 = lVar20;
        }
        if (lVar25 != lVar22) {
          pcVar8 = *(code **)(DAT_18024de50 + 0x78);
          if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
            pcVar8 = __imp_USER32_dll_SetCursor;
          }
          (*pcVar8)(lVar3);
        }
LAB_180022338:
        *(undefined1 *)((longlong)param_3 + 0x5d) = 0;
        FUN_180022d38();
        return uVar24;
      }
    }
    else {
      if (param_5 == 0x14) {
        return 1;
      }
      if (param_5 != 0x113) goto LAB_1800219d0;
      if (local_e8 == 0xaaaa) {
        uVar19 = FUN_180022c68(0);
        if ((uVar19 & 1) == 0) {
          return 0;
        }
        if (cVar10 != '\0') {
          cVar10 = (**(code **)(*param_1 + 8))(param_1);
          if ((cVar10 == '\0') || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
            iVar28 = 0;
          }
          else {
            iVar28 = 1;
          }
          uVar19 = FUN_180022668(param_1);
          if (((iVar28 != 0) && ((uVar19 & 1) == 0)) && (*(char *)(local_f8 + 0x824) != '\0')) {
            FUN_180100ff0(uVar19,param_4,param_3,0,0,1);
          }
          FUN_180022760(param_1,iVar28,uVar19 & 0xff);
          FUN_1800229a8(param_1);
        }
        goto LAB_180022130;
      }
LAB_1800220a8:
      uVar19 = local_e8 & 0xffffff00;
      if (param_5 == 0x404) {
        if (uVar19 == 0x44454700) {
          uVar19 = FUN_180022c68(0);
          if ((uVar19 & 1) == 0) {
            return 0;
          }
          (**(code **)(*param_1 + 0x98))(param_1);
          goto LAB_180022130;
        }
      }
      else if (param_5 == 0x405) {
        if (uVar19 == 0x44454700) {
          (*__imp_USER32_dll_SetForegroundWindow)(param_4);
          return 0;
        }
      }
      else if (param_5 == 0x400 && uVar19 == 0x44454700) {
        uVar19 = FUN_180022c68(1);
        if ((uVar19 & 1) == 0) {
          uVar24 = 0x400;
LAB_180022140:
          (*__imp_USER32_dll_PostMessageW)(param_4,uVar24,0x44454745,param_7);
          return 0;
        }
        FUN_180022478(param_1,param_7 != (int *)0x0);
        goto LAB_180022130;
      }
    }
    *local_e0 = 1;
  }
  return 0;
}

