/*
 * FUN_180052570 at 180052570
 * undefined8 * __cdecl FUN_180052570(longlong * param_1, undefined8 * param_2)
 * Address ranges: 180052570-180053057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180052570(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  DWORD DVar12;
  DWORD DVar13;
  uint uVar14;
  int iVar15;
  BOOL BVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  SIZE_T SVar21;
  int iVar22;
  longlong *plVar23;
  HWND pHVar24;
  undefined8 *puVar25;
  int iVar26;
  longlong *local_190;
  tagRECT local_188;
  LARGE_INTEGER local_178;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 local_160;
  uint uStack_15c;
  int local_158;
  tagRECT local_150;
  ulonglong local_140;
  int local_138;
  tagMONITORINFO local_130;
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
  HMONITOR local_58;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  iVar15 = *(int *)(param_2 + 4);
  local_188.left = *(int *)((longlong)param_2 + 0x24);
  if (iVar15 == 0) {
    iVar15 = 1;
  }
  if (local_188.left == 0) {
    local_188.left = 1;
  }
  iVar4 = *(int *)((longlong)param_2 + 0x1c) * local_188.left;
  iVar5 = *(int *)(param_2 + 3) * iVar15;
  if (((*(int *)(param_2 + 3) == 0 && *(int *)((longlong)param_2 + 0x1c) == 0) &&
      (*(int *)(param_2 + 5) == 0)) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  iVar3 = *(int *)(param_2 + 6);
  if ((iVar3 - 3U & 0xfffffffa) == 0 && iVar3 != 7) {
    iVar26 = 1;
  }
  else if (iVar3 - 5U < 3) {
    iVar26 = 2;
  }
  else {
    iVar26 = *(int *)((longlong)param_2 + 0x34);
  }
  uVar14 = *(uint *)(param_1 + 0xca);
  iVar3 = *(int *)(&DAT_180065a40 + (longlong)iVar3 * 4);
  uVar20 = 0;
  if (uVar14 != 0) {
    do {
      plVar23 = *(longlong **)(param_1[0xc9] + uVar20 * 8);
      if ((*plVar23 == param_2[2]) && ((int)plVar23[2] == *(int *)(param_2 + 1)))
      goto LAB_1800529e0;
      uVar2 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar2;
    } while (uVar2 < uVar14);
  }
  if ((uint)uVar20 == uVar14) {
    puVar25 = (undefined8 *)0x0;
    if (!bVar10) {
      pHVar24 = (HWND)param_2[2];
      DVar12 = GetWindowThreadProcessId(pHVar24,(LPDWORD)0x0);
      DVar13 = GetCurrentThreadId();
      if ((DVar13 == DVar12) && (uVar14 = GetWindowLongW(pHVar24,-0x14), (uVar14 >> 3 & 1) != 0)) {
        SetWindowPos(pHVar24,(HWND)0xfffffffffffffffe,0,0,0,0,0x41b);
      }
      puVar25 = (undefined8 *)(**(code **)*param_1)(param_1);
      if (puVar25 != (undefined8 *)0x0) {
        iVar22 = *(int *)((longlong)param_1 + 0x654);
        if ((int)param_1[0xca] == iVar22) {
          uVar14 = iVar22 << 1;
          if (iVar22 == 0) {
            uVar14 = 0x10;
          }
          SVar21 = CONCAT44(0,uVar14) << 3;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = CONCAT44(0,uVar14);
          if (SUB168(auVar7 * ZEXT816(8),8) != 0) {
            SVar21 = 0xffffffffffffffff;
          }
          puVar17 = (undefined8 *)thunk_FUN_18005fb88(SVar21);
          if (puVar17 == (undefined8 *)0x0) goto LAB_1800529cc;
          thunk_FUN_180001218(puVar17,(undefined8 *)param_1[0xc9],
                              (ulonglong)*(uint *)((longlong)param_1 + 0x654) << 3);
          thunk_FUN_18005fbc8((LPVOID)param_1[0xc9]);
          param_1[0xc9] = (longlong)puVar17;
          *(uint *)((longlong)param_1 + 0x654) = uVar14;
        }
        *(undefined8 **)(param_1[0xc9] + (ulonglong)*(uint *)(param_1 + 0xca) * 8) = puVar25;
        *(int *)(param_1 + 0xca) = (int)param_1[0xca] + 1;
        *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(param_2 + 1);
        iStack_168 = *(int *)(param_2 + 5);
        iStack_164 = *(int *)((longlong)param_2 + 0x2c);
        local_160 = *(undefined4 *)(&DAT_1800621b8 + (longlong)*(int *)(param_2 + 7) * 4);
        uStack_15c = (uint)(*(char *)((longlong)param_2 + 0x45) != '\0');
        local_170 = iVar5;
        iStack_16c = iVar4;
        local_158 = iVar3;
        cVar11 = (**(code **)(*param_1 + 0x10))
                           (param_1,puVar25,&local_170,*(undefined4 *)((longlong)param_2 + 0x3c),
                            param_2[2]);
        if (cVar11 != '\0') {
          *(int *)(puVar25 + 3) = iVar5;
          *(int *)((longlong)puVar25 + 0x1c) = iVar4;
          *(int *)(puVar25 + 4) = iVar15;
          *(LONG *)((longlong)puVar25 + 0x24) = local_188.left;
          iVar15 = *(int *)(param_2 + 7);
          *(int *)((longlong)puVar25 + 0x34) = iVar15;
          uVar19 = *(undefined4 *)((longlong)param_2 + 0x3c);
          *(undefined4 *)((longlong)puVar25 + 0x14) = 0;
          *(undefined4 *)(puVar25 + 7) = uVar19;
          *(undefined4 *)((longlong)puVar25 + 0x3c) = 0;
          *(undefined1 *)((longlong)puVar25 + 0xd6b) = 1;
          if (iVar15 == 2) {
            local_190 = (longlong *)0x0;
            iVar15 = (*(code *)**(undefined8 **)puVar25[1])
                               ((undefined8 *)puVar25[1],&DAT_180061480,&local_190);
            if (-1 < iVar15) {
              (**(code **)(*local_190 + 0x130))(local_190,0xc);
              (**(code **)(*local_190 + 0x10))();
            }
          }
          cVar11 = (**(code **)(*param_1 + 0x18))(param_1,puVar25,*(undefined4 *)(param_2 + 9));
          if (cVar11 != '\0') {
            (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],param_2[2],1)
            ;
            *puVar25 = param_2[2];
            puVar25[0x1ae] = *param_2;
            iVar15 = *(int *)(param_2 + 6);
            if ((iVar15 == 7) && (*(char *)((longlong)param_1 + 0x67c) == '\0')) {
              iVar15 = 3;
            }
            *(int *)((longlong)puVar25 + 0x2c) = iVar15;
            *(int *)(puVar25 + 6) = iVar26;
            if ((*(char *)((longlong)param_2 + 0x44) == '\0') &&
               (*(char *)((longlong)param_1 + 0x312) != '\0')) {
              uVar18 = 0;
            }
            else {
              uVar18 = 1;
            }
            *(undefined1 *)(puVar25 + 0x1ad) = uVar18;
            iVar15 = 0;
            if (*(int *)((longlong)param_2 + 0x4c) != -1) {
              iVar15 = *(int *)((longlong)param_2 + 0x4c);
            }
            *(int *)(puVar25 + 0x1aa) = iVar15;
            iVar15 = *(int *)(param_2 + 10);
            if (iVar15 == -1) {
              iVar15 = 1;
            }
            *(int *)((longlong)puVar25 + 0xd54) = iVar15;
            if (*(int *)(param_2 + 8) == 1) {
              *(undefined4 *)((longlong)puVar25 + 0x3c) = 1;
              FUN_180051fe0(param_1,puVar25,(longlong *)0x0,'\0');
            }
            uVar14 = *(uint *)((longlong)param_2 + 0x4c);
            uVar2 = *(uint *)(param_2 + 10);
            if (uVar14 != 0xffffffff || uVar2 != 0xffffffff) {
              puVar25[0x1ab] = 0;
              puVar25[0x1ac] = 0;
              if (uVar14 != 0) {
                QueryPerformanceFrequency(&local_178);
                lVar6 = 0;
                if ((ulonglong)uVar14 != 0) {
                  lVar6 = (longlong)((ulonglong)uVar2 * local_178.QuadPart) /
                          (longlong)(ulonglong)uVar14;
                }
                puVar25[0x1ab] = lVar6;
              }
            }
            (**(code **)(*param_1 + 0x68))(param_1,puVar25);
            *(undefined1 *)((longlong)puVar25 + 0xd6b) = 0;
            goto LAB_180052974;
          }
          *(undefined1 *)((longlong)puVar25 + 0xd6b) = 0;
        }
        if ((int)param_1[0xca] != 0) {
          *(int *)(param_1 + 0xca) = (int)param_1[0xca] + -1;
        }
      }
LAB_1800529cc:
      FUN_18005fbc8(puVar25);
      puVar25 = (undefined8 *)0x0;
    }
LAB_180052974:
    puVar17 = puVar25;
    if (puVar25 == (undefined8 *)0x0) goto LAB_180052988;
  }
  else {
LAB_1800529e0:
    puVar25 = *(undefined8 **)(param_1[0xc9] + uVar20 * 8);
    puVar17 = (undefined8 *)0x0;
    if (*(char *)((longlong)puVar25 + 0xd6b) != '\0') goto LAB_180052988;
    *(undefined1 *)((longlong)puVar25 + 0xd6b) = 1;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    local_c0 = 0;
    plVar23 = (longlong *)puVar25[1];
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 0x60))(plVar23,&local_100);
    }
    puVar25[0x1ae] = *param_2;
    iVar22 = *(int *)((longlong)param_2 + 0x4c);
    if ((*(int *)(puVar25 + 0x1aa) != iVar22 && iVar22 != -1) ||
       (*(int *)((longlong)puVar25 + 0xd54) != *(int *)(param_2 + 10) &&
        *(int *)(param_2 + 10) != -1)) {
      *(int *)(puVar25 + 0x1aa) = iVar22;
      *(undefined4 *)((longlong)puVar25 + 0xd54) = *(undefined4 *)(param_2 + 10);
      uVar14 = *(uint *)((longlong)param_2 + 0x4c);
      local_150._0_8_ = ZEXT48(uVar14);
      local_190 = (longlong *)(ulonglong)*(uint *)(param_2 + 10);
      if (uVar14 != 0xffffffff || *(uint *)(param_2 + 10) != 0xffffffff) {
        puVar25[0x1ab] = 0;
        puVar25[0x1ac] = 0;
        if (uVar14 != 0) {
          QueryPerformanceFrequency(&local_178);
          if (local_150._0_8_ == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x180052ab0);
            (*pcVar9)();
          }
          lVar6 = 0;
          if (local_150._0_8_ != 0) {
            lVar6 = ((longlong)local_190 * local_178.QuadPart) / (longlong)local_150._0_8_;
          }
          puVar25[0x1ab] = lVar6;
        }
      }
    }
    if (bVar10) goto LAB_180052974;
    bVar10 = *(char *)((longlong)param_2 + 0x45) != '\0';
    uVar14 = (uint)bVar10;
    if ((((((*(int *)(puVar25 + 3) == iVar5) && (*(int *)((longlong)puVar25 + 0x1c) == iVar4)) &&
          (*(int *)(puVar25 + 4) == iVar15)) &&
         ((*(int *)((longlong)puVar25 + 0x24) == local_188.left &&
          ((int)uStack_f8 == *(int *)(param_2 + 5))))) &&
        ((uStack_f8._4_4_ == *(int *)((longlong)param_2 + 0x2c) &&
         (((int)local_e8 == iVar3 && (*(int *)(puVar25 + 6) == iVar26)))))) &&
       ((*(int *)((longlong)puVar25 + 0x34) == *(int *)(param_2 + 7) &&
        ((uStack_f0._4_4_ == uVar14 && (puVar25[1] != 0)))))) {
      (**(code **)(*param_1 + 0x28))(param_1,puVar25,*(undefined4 *)(param_2 + 9));
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1,puVar25);
      *(int *)(puVar25 + 3) = iVar5;
      *(int *)((longlong)puVar25 + 0x1c) = iVar4;
      plVar23 = (longlong *)puVar25[1];
      iVar22 = 0;
      local_190 = (longlong *)((ulonglong)local_190 & 0xffffffff00000000);
      local_178.QuadPart = 0;
      *(int *)(puVar25 + 4) = iVar15;
      *(LONG *)((longlong)puVar25 + 0x24) = local_188.left;
      *(undefined4 *)((longlong)puVar25 + 0x34) = *(undefined4 *)(param_2 + 7);
      if (plVar23 == (longlong *)0x0) {
        plVar23 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar23 + 0x58))(plVar23,&local_190,&local_178);
        plVar23 = (longlong *)puVar25[1];
        iVar22 = (int)local_190;
      }
      piVar1 = (int *)(param_2 + 5);
      iStack_168 = *piVar1;
      iStack_164 = *(int *)((longlong)param_2 + 0x2c);
      uVar8._0_4_ = piVar1[0];
      uVar8._4_4_ = piVar1[1];
      local_160 = *(undefined4 *)(&DAT_1800621b8 + (longlong)*(int *)(param_2 + 7) * 4);
      local_170 = iVar5;
      iStack_16c = iVar4;
      local_158 = iVar3;
      if ((*(int *)((longlong)puVar25 + 0x3c) != 0) && (iVar26 - 1U < 2)) {
        local_158 = 0;
        local_170 = (int)local_100;
        iStack_16c = local_100._4_4_;
      }
      uStack_15c = uVar14;
      if (((int)uStack_f8 == iStack_168) && (uStack_f8._4_4_ == iStack_164)) {
        if (iVar22 == 0) {
          GetWindowRect((HWND)*puVar25,&local_150);
          GetClientRect((HWND)*puVar25,&local_188);
          SetWindowPos((HWND)*puVar25,(HWND)0x0,0,0,
                       ((local_150.right - local_150.left) - local_188.right) + local_188.left +
                       local_170,
                       ((local_150.bottom - local_150.top) - local_188.bottom) + local_188.top +
                       iStack_16c,0x216);
        }
        else {
          local_140 = (ulonglong)CONCAT14(bVar10,local_160);
          local_150._0_8_ = CONCAT44(iStack_16c,local_170);
          local_188._0_8_ = (longlong *)0x0;
          local_150._8_8_ = uVar8;
          local_138 = local_158;
          iVar15 = (**(code **)(*plVar23 + 0x78))(plVar23,&local_188);
          if (-1 < iVar15) {
            iVar15 = (**(code **)(*(longlong *)local_188._0_8_ + 0x38))(local_188._0_8_,auStack_b0);
            if (-1 < iVar15) {
              local_130.rcMonitor.top = 0;
              local_130.rcMonitor.right = 0;
              local_130.rcWork.top = 0;
              local_130.rcWork.right = 0;
              local_130.rcMonitor.bottom = 0;
              local_130.rcWork.left = 0;
              local_130.cbSize = 0x28;
              local_130.rcMonitor.left = 0;
              local_130.rcWork.bottom = 0;
              local_130.dwFlags = 0;
              BVar16 = GetMonitorInfoW(local_58,&local_130);
              if (BVar16 != 0) {
                local_150.top = local_130.rcMonitor.bottom - local_130.rcMonitor.top;
                local_150.left = local_130.rcMonitor.right - local_130.rcMonitor.left;
              }
            }
            (**(code **)(*(longlong *)local_188._0_8_ + 0x10))();
          }
          (**(code **)(*(longlong *)puVar25[1] + 0x70))((longlong *)puVar25[1],&local_150);
        }
        uVar19 = 0x802;
        if (*(char *)((longlong)puVar25 + 0xd6c) == '\0') {
          uVar19 = 2;
        }
        (**(code **)(*(longlong *)puVar25[1] + 0x68))
                  ((longlong *)puVar25[1],2,local_170,iStack_16c,local_160,uVar19);
      }
      else {
        if (plVar23 != (longlong *)0x0) {
          (**(code **)(*plVar23 + 0x50))(plVar23,0,0);
          (**(code **)(*(longlong *)puVar25[1] + 0x10))();
        }
        pHVar24 = (HWND)param_2[2];
        DVar12 = GetWindowThreadProcessId(pHVar24,(LPDWORD)0x0);
        DVar13 = GetCurrentThreadId();
        if ((DVar13 == DVar12) && (uVar14 = GetWindowLongW(pHVar24,-0x14), (uVar14 >> 3 & 1) != 0))
        {
          SetWindowPos(pHVar24,(HWND)0xfffffffffffffffe,0,0,0,0,0x41b);
        }
        cVar11 = (**(code **)(*param_1 + 0x10))
                           (param_1,puVar25,&local_170,*(undefined4 *)((longlong)param_2 + 0x3c),
                            param_2[2]);
        if (cVar11 != '\0') {
          if (*(int *)((longlong)puVar25 + 0x34) == 2) {
            local_188._0_8_ = (longlong *)0x0;
            iVar15 = (*(code *)**(undefined8 **)puVar25[1])
                               ((undefined8 *)puVar25[1],&DAT_180061480,&local_188);
            if (-1 < iVar15) {
              (**(code **)(*(longlong *)local_188._0_8_ + 0x130))(local_188._0_8_,0xc);
              (**(code **)(*(longlong *)local_188._0_8_ + 0x10))();
            }
          }
          (**(code **)(*(longlong *)puVar25[1] + 0x50))
                    ((longlong *)puVar25[1],(ulonglong)local_190 & 0xffffffff,local_178.QuadPart);
        }
        if ((longlong *)local_178.QuadPart != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_178 + 0x10))();
        }
      }
      if (puVar25[1] == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,puVar25);
        (**(code **)(*param_1 + 0x40))(param_1,puVar25);
        uVar14 = *(uint *)(param_1 + 0xca);
        if (uVar14 != 0) {
          uVar20 = 0;
          do {
            if (*(undefined8 **)(param_1[0xc9] + uVar20 * 8) == puVar25) {
              if ((int)uVar20 != -1) {
                while (uVar2 = (int)uVar20 + 1, uVar2 < uVar14) {
                  *(undefined8 *)(param_1[0xc9] + uVar20 * 8) =
                       *(undefined8 *)(param_1[0xc9] + (ulonglong)uVar2 * 8);
                  uVar20 = (ulonglong)uVar2;
                  uVar14 = *(uint *)(param_1 + 0xca);
                }
                *(int *)(param_1 + 0xca) = (int)param_1[0xca] + -1;
              }
              break;
            }
            uVar2 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar2;
          } while (uVar2 < uVar14);
        }
        FUN_18005fbc8(puVar25);
        *(undefined1 *)((longlong)puVar25 + 0xd6b) = 0;
        puVar17 = (undefined8 *)0x0;
        goto LAB_180052988;
      }
      (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],param_2[2],1);
      (**(code **)(*param_1 + 0x18))(param_1,puVar25,*(undefined4 *)(param_2 + 9));
      *(int *)(puVar25 + 6) = iVar26;
      if ((*(char *)((longlong)param_2 + 0x44) == '\0') &&
         (*(char *)((longlong)param_1 + 0x312) != '\0')) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      *(undefined1 *)(puVar25 + 0x1ad) = uVar18;
      (**(code **)(*param_1 + 0x70))(param_1,puVar25);
    }
    puVar17 = puVar25;
    if (puVar25 == (undefined8 *)0x0) goto LAB_180052988;
    iVar15 = *(int *)(param_2 + 6);
    if ((iVar15 == 7) && (*(char *)((longlong)param_1 + 0x67c) == '\0')) {
      iVar15 = 3;
    }
    *(int *)((longlong)puVar25 + 0x2c) = iVar15;
    if (((*(uint *)((longlong)puVar25 + 0x3c) < 2) && (uVar14 = *(uint *)(param_2 + 8), uVar14 < 2))
       && (uVar14 != *(uint *)((longlong)puVar25 + 0x3c))) {
      *(uint *)((longlong)puVar25 + 0x3c) = uVar14;
      FUN_180051fe0(param_1,puVar25,(longlong *)0x0,'\0');
    }
  }
  *(undefined1 *)((longlong)puVar25 + 0xd6b) = 0;
  *(int *)((longlong)puVar25 + 0x14) = *(int *)((longlong)puVar25 + 0x14) + 1;
  puVar17 = puVar25;
LAB_180052988:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  return puVar17;
}

