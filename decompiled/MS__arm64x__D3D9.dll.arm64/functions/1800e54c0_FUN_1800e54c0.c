/*
 * FUN_1800e54c0 at 1800e54c0
 * undefined FUN_1800e54c0(void)
 * Address ranges: 1800e54c0-1800e5fa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e54c0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong *local_190;
  undefined8 local_188;
  int local_180;
  int iStack_17c;
  longlong *local_178;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 local_160;
  uint uStack_15c;
  int local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulonglong local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [88];
  undefined8 local_58;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xc4);
  iVar11 = *(int *)(param_2 + 4);
  iVar12 = *(int *)((longlong)param_2 + 0x24);
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  if (iVar12 == 0) {
    iVar12 = 1;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,iVar12);
  iVar12 = *(int *)((longlong)param_2 + 0x1c) * iVar12;
  iVar3 = *(int *)(param_2 + 3) * iVar11;
  if (((*(int *)(param_2 + 3) == 0 && *(int *)((longlong)param_2 + 0x1c) == 0) &&
      (*(int *)(param_2 + 5) == 0)) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  iVar2 = *(int *)(param_2 + 6);
  if ((iVar2 - 3U & 0xfffffffa) == 0 && iVar2 != 7) {
    iVar21 = 1;
  }
  else if (iVar2 - 5U < 3) {
    iVar21 = 2;
  }
  else {
    iVar21 = *(int *)((longlong)param_2 + 0x34);
  }
  uVar10 = *(uint *)(param_1 + 0xca);
  iVar2 = *(int *)(&DAT_1802388e8 + (longlong)iVar2 * 4);
  uVar15 = 0;
  if (uVar10 != 0) {
    do {
      plVar17 = *(longlong **)(param_1[0xc9] + uVar15 * 8);
      if ((*plVar17 == param_2[2]) && ((int)plVar17[2] == *(int *)(param_2 + 1)))
      goto LAB_1800e5930;
      uVar1 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar1;
    } while (uVar1 < uVar10);
  }
  if ((uint)uVar15 == uVar10) {
    puVar19 = (undefined8 *)0x0;
    if (!bVar6) {
      uVar18 = param_2[2];
      iVar8 = (*__imp_USER32_dll_GetWindowThreadProcessId)(uVar18,0);
      iVar9 = (*__imp_KERNEL32_dll_GetCurrentThreadId)();
      if ((iVar9 == iVar8) &&
         (uVar10 = (*__imp_USER32_dll_GetWindowLongW)(uVar18,0xffffffec), (uVar10 >> 3 & 1) != 0)) {
        (*__imp_USER32_dll_SetWindowPos)(uVar18,0xfffffffffffffffe,0,0,0,0,0x41b);
      }
      puVar19 = (undefined8 *)(**(code **)*param_1)(param_1);
      if (puVar19 != (undefined8 *)0x0) {
        iVar8 = *(int *)((longlong)param_1 + 0x654);
        if ((int)param_1[0xca] == iVar8) {
          uVar10 = iVar8 << 1;
          if (iVar8 == 0) {
            uVar10 = 0x10;
          }
          lVar16 = CONCAT44(0,uVar10) << 3;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,uVar10);
          if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
            lVar16 = -1;
          }
          lVar16 = thunk_FUN_180102f80(lVar16);
          if (lVar16 == 0) goto LAB_1800e591c;
          thunk_FUN_180001218(lVar16,param_1[0xc9],
                              (ulonglong)*(uint *)((longlong)param_1 + 0x654) << 3);
          thunk_FUN_180102fc0(param_1[0xc9]);
          param_1[0xc9] = lVar16;
          *(uint *)((longlong)param_1 + 0x654) = uVar10;
        }
        *(undefined8 **)(param_1[0xc9] + (ulonglong)*(uint *)(param_1 + 0xca) * 8) = puVar19;
        *(int *)(param_1 + 0xca) = (int)param_1[0xca] + 1;
        *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(param_2 + 1);
        iStack_168 = *(int *)(param_2 + 5);
        iStack_164 = *(int *)((longlong)param_2 + 0x2c);
        local_160 = *(undefined4 *)(&DAT_180232e48 + (longlong)*(int *)(param_2 + 7) * 4);
        uStack_15c = (uint)(*(char *)((longlong)param_2 + 0x45) != '\0');
        local_170 = iVar3;
        iStack_16c = iVar12;
        local_158 = iVar2;
        cVar7 = (**(code **)(*param_1 + 0x10))
                          (param_1,puVar19,&local_170,*(undefined4 *)((longlong)param_2 + 0x3c),
                           param_2[2]);
        if (cVar7 != '\0') {
          *(int *)(puVar19 + 3) = iVar3;
          *(int *)((longlong)puVar19 + 0x1c) = iVar12;
          *(int *)(puVar19 + 4) = iVar11;
          *(int *)((longlong)puVar19 + 0x24) = (int)local_188;
          iVar11 = *(int *)(param_2 + 7);
          *(int *)((longlong)puVar19 + 0x34) = iVar11;
          uVar14 = *(undefined4 *)((longlong)param_2 + 0x3c);
          *(undefined4 *)((longlong)puVar19 + 0x14) = 0;
          *(undefined4 *)(puVar19 + 7) = uVar14;
          *(undefined4 *)((longlong)puVar19 + 0x3c) = 0;
          *(undefined1 *)((longlong)puVar19 + 0xd6b) = 1;
          if (iVar11 == 2) {
            local_190 = (longlong *)0x0;
            iVar11 = (*(code *)**(undefined8 **)puVar19[1])
                               ((undefined8 *)puVar19[1],&DAT_1802295a8,&local_190);
            if (-1 < iVar11) {
              (**(code **)(*local_190 + 0x130))(local_190,0xc);
              (**(code **)(*local_190 + 0x10))();
            }
          }
          cVar7 = (**(code **)(*param_1 + 0x18))(param_1,puVar19,*(undefined4 *)(param_2 + 9));
          if (cVar7 != '\0') {
            (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],param_2[2],1)
            ;
            *puVar19 = param_2[2];
            puVar19[0x1ae] = *param_2;
            iVar11 = *(int *)(param_2 + 6);
            if ((iVar11 == 7) && (*(char *)((longlong)param_1 + 0x67c) == '\0')) {
              iVar11 = 3;
            }
            *(int *)((longlong)puVar19 + 0x2c) = iVar11;
            *(int *)(puVar19 + 6) = iVar21;
            if ((*(char *)((longlong)param_2 + 0x44) == '\0') &&
               (*(char *)((longlong)param_1 + 0x312) != '\0')) {
              uVar13 = 0;
            }
            else {
              uVar13 = 1;
            }
            *(undefined1 *)(puVar19 + 0x1ad) = uVar13;
            iVar11 = 0;
            if (*(int *)((longlong)param_2 + 0x4c) != -1) {
              iVar11 = *(int *)((longlong)param_2 + 0x4c);
            }
            *(int *)(puVar19 + 0x1aa) = iVar11;
            iVar11 = *(int *)(param_2 + 10);
            if (iVar11 == -1) {
              iVar11 = 1;
            }
            *(int *)((longlong)puVar19 + 0xd54) = iVar11;
            if (*(int *)(param_2 + 8) == 1) {
              *(undefined4 *)((longlong)puVar19 + 0x3c) = 1;
              FUN_1800e50b0(param_1,puVar19,0,0);
            }
            uVar10 = *(uint *)((longlong)param_2 + 0x4c);
            uVar1 = *(uint *)(param_2 + 10);
            if (uVar10 != 0xffffffff || uVar1 != 0xffffffff) {
              puVar19[0x1ab] = 0;
              puVar19[0x1ac] = 0;
              if (uVar10 != 0) {
                (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(&local_178);
                lVar16 = 0;
                if ((ulonglong)uVar10 != 0) {
                  lVar16 = (longlong)((ulonglong)uVar1 * (longlong)local_178) /
                           (longlong)(ulonglong)uVar10;
                }
                puVar19[0x1ab] = lVar16;
              }
            }
            (**(code **)(*param_1 + 0x68))(param_1,puVar19);
            *(undefined1 *)((longlong)puVar19 + 0xd6b) = 0;
            goto LAB_1800e58c4;
          }
          *(undefined1 *)((longlong)puVar19 + 0xd6b) = 0;
        }
        if ((int)param_1[0xca] != 0) {
          *(int *)(param_1 + 0xca) = (int)param_1[0xca] + -1;
        }
      }
LAB_1800e591c:
      FUN_180102fc0(puVar19,0xd78);
      puVar19 = (undefined8 *)0x0;
    }
LAB_1800e58c4:
    puVar20 = puVar19;
    if (puVar19 == (undefined8 *)0x0) goto LAB_1800e58d8;
  }
  else {
LAB_1800e5930:
    puVar19 = *(undefined8 **)(param_1[0xc9] + uVar15 * 8);
    puVar20 = (undefined8 *)0x0;
    if (*(char *)((longlong)puVar19 + 0xd6b) != '\0') goto LAB_1800e58d8;
    *(undefined1 *)((longlong)puVar19 + 0xd6b) = 1;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    local_c0 = 0;
    plVar17 = (longlong *)puVar19[1];
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x60))(plVar17,&local_100);
    }
    puVar19[0x1ae] = *param_2;
    iVar8 = *(int *)((longlong)param_2 + 0x4c);
    if ((*(int *)(puVar19 + 0x1aa) != iVar8 && iVar8 != -1) ||
       (*(int *)((longlong)puVar19 + 0xd54) != *(int *)(param_2 + 10) &&
        *(int *)(param_2 + 10) != -1)) {
      *(int *)(puVar19 + 0x1aa) = iVar8;
      *(undefined4 *)((longlong)puVar19 + 0xd54) = *(undefined4 *)(param_2 + 10);
      uVar10 = *(uint *)((longlong)param_2 + 0x4c);
      local_150 = (ulonglong)uVar10;
      local_190 = (longlong *)(ulonglong)*(uint *)(param_2 + 10);
      if (uVar10 != 0xffffffff || *(uint *)(param_2 + 10) != 0xffffffff) {
        puVar19[0x1ab] = 0;
        puVar19[0x1ac] = 0;
        if (uVar10 != 0) {
          (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(&local_178);
          if (local_150 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800e5a00);
            (*pcVar5)();
          }
          lVar16 = 0;
          if (local_150 != 0) {
            lVar16 = ((longlong)local_190 * (longlong)local_178) / (longlong)local_150;
          }
          puVar19[0x1ab] = lVar16;
        }
      }
    }
    if (bVar6) goto LAB_1800e58c4;
    bVar6 = *(char *)((longlong)param_2 + 0x45) != '\0';
    uVar10 = (uint)bVar6;
    if ((((((*(int *)(puVar19 + 3) == iVar3) && (*(int *)((longlong)puVar19 + 0x1c) == iVar12)) &&
          (*(int *)(puVar19 + 4) == iVar11)) &&
         ((*(int *)((longlong)puVar19 + 0x24) == (int)local_188 &&
          ((int)uStack_f8 == *(int *)(param_2 + 5))))) &&
        ((uStack_f8._4_4_ == *(int *)((longlong)param_2 + 0x2c) &&
         (((int)local_e8 == iVar2 && (*(int *)(puVar19 + 6) == iVar21)))))) &&
       ((*(int *)((longlong)puVar19 + 0x34) == *(int *)(param_2 + 7) &&
        ((uStack_f0._4_4_ == uVar10 && (puVar19[1] != 0)))))) {
      (**(code **)(*param_1 + 0x28))(param_1,puVar19,*(undefined4 *)(param_2 + 9));
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1,puVar19);
      *(int *)(puVar19 + 3) = iVar3;
      *(int *)((longlong)puVar19 + 0x1c) = iVar12;
      plVar17 = (longlong *)puVar19[1];
      iVar8 = 0;
      local_190 = (longlong *)((ulonglong)local_190 & 0xffffffff00000000);
      local_178 = (longlong *)0x0;
      *(int *)(puVar19 + 4) = iVar11;
      *(int *)((longlong)puVar19 + 0x24) = (int)local_188;
      *(undefined4 *)((longlong)puVar19 + 0x34) = *(undefined4 *)(param_2 + 7);
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar17 + 0x58))(plVar17,&local_190,&local_178);
        plVar17 = (longlong *)puVar19[1];
        iVar8 = (int)local_190;
      }
      iStack_168 = *(int *)(param_2 + 5);
      iStack_164 = *(int *)((longlong)param_2 + 0x2c);
      local_160 = *(undefined4 *)(&DAT_180232e48 + (longlong)*(int *)(param_2 + 7) * 4);
      local_170 = iVar3;
      iStack_16c = iVar12;
      local_158 = iVar2;
      if ((*(int *)((longlong)puVar19 + 0x3c) != 0) && (iVar21 - 1U < 2)) {
        local_158 = 0;
        local_170 = (int)local_100;
        iStack_16c = local_100._4_4_;
      }
      uStack_15c = uVar10;
      if (((int)uStack_f8 == iStack_168) && (uStack_f8._4_4_ == iStack_164)) {
        if (iVar8 == 0) {
          (*__imp_USER32_dll_GetWindowRect)(*puVar19,&local_150);
          (*__imp_USER32_dll_GetClientRect)(*puVar19,&local_188);
          (*__imp_USER32_dll_SetWindowPos)
                    (*puVar19,0,0,0,
                     (((int)uStack_148 - (int)local_150) - local_180) + (int)local_188 + local_170,
                     ((uStack_148._4_4_ - local_150._4_4_) - iStack_17c) + local_188._4_4_ +
                     iStack_16c,0x216);
        }
        else {
          local_140 = (ulonglong)CONCAT14(bVar6,local_160);
          local_150 = CONCAT44(iStack_16c,local_170);
          local_188 = (longlong *)0x0;
          uStack_148 = param_2[5];
          local_138 = local_158;
          iVar11 = (**(code **)(*plVar17 + 0x78))(plVar17,&local_188);
          if (-1 < iVar11) {
            iVar11 = (**(code **)(*local_188 + 0x38))(local_188,auStack_b0);
            if (-1 < iVar11) {
              uStack_128 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              local_130 = 0x28;
              local_110 = 0;
              iVar11 = (*__imp_USER32_dll_GetMonitorInfoW)(local_58,&local_130);
              if (iVar11 != 0) {
                local_150 = CONCAT44((int)uStack_120 - (int)uStack_128,
                                     uStack_128._4_4_ - local_130._4_4_);
              }
            }
            (**(code **)(*local_188 + 0x10))();
          }
          (**(code **)(*(longlong *)puVar19[1] + 0x70))((longlong *)puVar19[1],&local_150);
        }
        uVar14 = 0x802;
        if (*(char *)((longlong)puVar19 + 0xd6c) == '\0') {
          uVar14 = 2;
        }
        (**(code **)(*(longlong *)puVar19[1] + 0x68))
                  ((longlong *)puVar19[1],2,local_170,iStack_16c,local_160,uVar14);
      }
      else {
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x50))(plVar17,0,0);
          (**(code **)(*(longlong *)puVar19[1] + 0x10))();
        }
        uVar18 = param_2[2];
        iVar11 = (*__imp_USER32_dll_GetWindowThreadProcessId)(uVar18,0);
        iVar12 = (*__imp_KERNEL32_dll_GetCurrentThreadId)();
        if ((iVar12 == iVar11) &&
           (uVar10 = (*__imp_USER32_dll_GetWindowLongW)(uVar18,0xffffffec), (uVar10 >> 3 & 1) != 0))
        {
          (*__imp_USER32_dll_SetWindowPos)(uVar18,0xfffffffffffffffe,0,0,0,0,0x41b);
        }
        cVar7 = (**(code **)(*param_1 + 0x10))
                          (param_1,puVar19,&local_170,*(undefined4 *)((longlong)param_2 + 0x3c),
                           param_2[2]);
        if (cVar7 != '\0') {
          if (*(int *)((longlong)puVar19 + 0x34) == 2) {
            local_188 = (longlong *)0x0;
            iVar11 = (*(code *)**(undefined8 **)puVar19[1])
                               ((undefined8 *)puVar19[1],&DAT_1802295a8,&local_188);
            if (-1 < iVar11) {
              (**(code **)(*local_188 + 0x130))(local_188,0xc);
              (**(code **)(*local_188 + 0x10))();
            }
          }
          (**(code **)(*(longlong *)puVar19[1] + 0x50))
                    ((longlong *)puVar19[1],(ulonglong)local_190 & 0xffffffff,local_178);
        }
        if (local_178 != (longlong *)0x0) {
          (**(code **)(*local_178 + 0x10))();
        }
      }
      if (puVar19[1] == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,puVar19);
        (**(code **)(*param_1 + 0x40))(param_1,puVar19);
        uVar10 = *(uint *)(param_1 + 0xca);
        if (uVar10 != 0) {
          uVar15 = 0;
          do {
            if (*(undefined8 **)(param_1[0xc9] + uVar15 * 8) == puVar19) {
              if ((int)uVar15 != -1) {
                while (uVar1 = (int)uVar15 + 1, uVar1 < uVar10) {
                  *(undefined8 *)(param_1[0xc9] + uVar15 * 8) =
                       *(undefined8 *)(param_1[0xc9] + (ulonglong)uVar1 * 8);
                  uVar15 = (ulonglong)uVar1;
                  uVar10 = *(uint *)(param_1 + 0xca);
                }
                *(int *)(param_1 + 0xca) = (int)param_1[0xca] + -1;
              }
              break;
            }
            uVar1 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar1;
          } while (uVar1 < uVar10);
        }
        FUN_180102fc0(puVar19,0xd78);
        *(undefined1 *)((longlong)puVar19 + 0xd6b) = 0;
        puVar20 = (undefined8 *)0x0;
        goto LAB_1800e58d8;
      }
      (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],param_2[2],1);
      (**(code **)(*param_1 + 0x18))(param_1,puVar19,*(undefined4 *)(param_2 + 9));
      *(int *)(puVar19 + 6) = iVar21;
      if ((*(char *)((longlong)param_2 + 0x44) == '\0') &&
         (*(char *)((longlong)param_1 + 0x312) != '\0')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      *(undefined1 *)(puVar19 + 0x1ad) = uVar13;
      (**(code **)(*param_1 + 0x70))(param_1,puVar19);
    }
    puVar20 = puVar19;
    if (puVar19 == (undefined8 *)0x0) goto LAB_1800e58d8;
    iVar11 = *(int *)(param_2 + 6);
    if ((iVar11 == 7) && (*(char *)((longlong)param_1 + 0x67c) == '\0')) {
      iVar11 = 3;
    }
    *(int *)((longlong)puVar19 + 0x2c) = iVar11;
    if (((*(uint *)((longlong)puVar19 + 0x3c) < 2) && (uVar10 = *(uint *)(param_2 + 8), uVar10 < 2))
       && (uVar10 != *(uint *)((longlong)puVar19 + 0x3c))) {
      *(uint *)((longlong)puVar19 + 0x3c) = uVar10;
      FUN_1800e50b0(param_1,puVar19,0,0);
    }
  }
  *(undefined1 *)((longlong)puVar19 + 0xd6b) = 0;
  *(int *)((longlong)puVar19 + 0x14) = *(int *)((longlong)puVar19 + 0x14) + 1;
  puVar20 = puVar19;
LAB_1800e58d8:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xc4);
  return puVar20;
}

