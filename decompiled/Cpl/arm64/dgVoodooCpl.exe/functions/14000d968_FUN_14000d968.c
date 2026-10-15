/*
 * FUN_14000d968 at 14000d968
 * undefined8 __cdecl FUN_14000d968(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined2 * param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 14000d968-14000e4b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000d968(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined2 *param_5,int *param_6,longlong param_7,undefined4 *param_8)

{
  wchar_t *pwVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  HRESULT HVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  LRESULT LVar11;
  HWND pHVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 uVar13;
  uint *puVar14;
  LPARAM LVar15;
  undefined2 *puVar16;
  longlong **ppv;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  ulonglong wParam;
  uint local_a10 [2];
  longlong *local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 *local_9e8;
  longlong *local_9e0;
  undefined **local_9d8 [8];
  undefined8 local_998;
  undefined4 local_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined **ppuStack_970;
  undefined8 auStack_968 [19];
  byte abStack_8d0 [128];
  undefined2 local_850;
  WCHAR aWStack_84e [1023];
  
  iVar7 = (int)param_2;
  if (iVar7 == 0x3ea) goto LAB_14000e470;
  if (iVar7 != 0x3eb) {
    if (iVar7 == 0x3ec) {
      uVar13 = *(undefined8 *)(param_1 + -0x50);
      FUN_1400106d8(local_9d8,0);
      local_998 = 0;
      local_990 = 0x67;
      local_9d8[0] = &PTR_FUN_1400263a8;
      local_988 = 0;
      local_978 = 0;
      ppuStack_970 = &PTR_FUN_140026390;
      uStack_980 = uVar13;
      FUN_140010c70(auStack_968,local_9d8);
      FUN_140010b90((longlong)local_9d8);
      FUN_140001580(local_9d8);
      return 1;
    }
    if (iVar7 == 0x3ed) {
      FUN_140009030(param_1 + 0x678,param_2,param_3,param_4,(undefined1 *)param_5,param_6,param_7,
                    param_8);
      FUN_140005330(param_1 + 0x908,extraout_x1_01,param_3,param_4,(undefined1 *)param_5,param_6,
                    param_7,param_8);
      if (*(char *)(param_1 + 0x428) != '\0') {
        FUN_140006788(param_1 + 0xb98,extraout_x1_02,param_3,param_4,(undefined1 *)param_5,param_6,
                      param_7,param_8);
        FUN_140008300(param_1 + 0xe18);
        FUN_140004550(param_1 + 0xf40);
      }
      if (*(longlong *)(param_1 + 0x1ae0) == 0) {
        uVar9 = FUN_14000ffb8(param_1 + -0x68,0x402);
        uVar9 = FUN_14000fd78(param_1 + -0x68,0x402,uVar9 & 0xffffffff);
        thunk_FUN_140001000((undefined8 *)(param_1 + 0x18c8),
                            (undefined8 *)
                            (*(longlong *)(param_1 + 0x1ad0) + (uVar9 & 0xffffffff) * 0x218 + 0x10),
                            0x104);
        PathAppendW((LPWSTR)(param_1 + 0x18c8),L"dgVoodoo.conf");
        uVar5 = FUN_140015a38(param_1 + 0x1af8,param_1 + 0x18c8,*(char **)(param_1 + 0x1db8));
        cVar2 = (char)uVar5;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))(param_1 + 0x18,1);
        LVar11 = SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x409,0,*(LPARAM *)(param_1 + -0x50));
        cVar2 = LVar11 != 0;
      }
      FUN_14000f1f0(&local_a00,(LPCWSTR)(param_1 + 0x16c0),1);
      uVar9 = 0;
      if (*(int *)(param_1 + 0x1ad8) != 0) {
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x1ad0) + uVar9 * 0x218) == 0) {
            FUN_14000f420((longlong)&local_a00,0x208,
                          (LPCVOID)(uVar9 * 0x218 + *(longlong *)(param_1 + 0x1ad0) + 0x10),
                          (DWORD *)0x0);
          }
          uVar5 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x1ad8));
      }
      FUN_14000f2c0(&local_a00);
      if (cVar2 == '\0') {
        return 1;
      }
      pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3ed);
      EnableWindow(pHVar12,0);
      return 1;
    }
    if (iVar7 == 0x3fa) {
      GetModuleFileNameW((HMODULE)0x0,&local_850,0x104);
      PathRemoveFileSpecW(&local_850);
      FUN_14000af60(param_1 - 0x68,(undefined8 *)&local_850,0,1,param_5,param_6,param_7,param_8);
    }
    else if (iVar7 == 0x3fb) {
      uVar9 = FUN_14000ffb8(param_1 + -0x68,0x402);
      uVar5 = *(uint *)(param_1 + 0x1ad8);
      uVar4 = FUN_14000fd78(param_1 + -0x68,0x402,uVar9 & 0xffffffff);
      if (uVar4 < uVar5) {
        uVar5 = *(uint *)(param_1 + 0x1ad8);
        if (uVar4 < uVar5) {
          uVar21 = uVar4 + 1;
          if (uVar21 < uVar5) {
            do {
              puVar18 = (undefined4 *)(*(longlong *)(param_1 + 0x1ad0) + (ulonglong)uVar21 * 0x218);
              puVar17 = (undefined4 *)
                        (*(longlong *)(param_1 + 0x1ad0) + (ulonglong)(uVar21 - 1) * 0x218);
              *puVar17 = *puVar18;
              *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar18 + 2);
              thunk_FUN_140001000((undefined8 *)(puVar17 + 4),(undefined8 *)(puVar18 + 4),0x104);
              uVar5 = *(uint *)(param_1 + 0x1ad8);
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar5);
          }
          *(uint *)(param_1 + 0x1ad8) = uVar5 - 1;
        }
        uVar10 = 0;
        LVar11 = FUN_14000fd38(param_1 + -0x68,0x402);
        if ((int)LVar11 != 0) {
          do {
            uVar5 = FUN_14000fd78(param_1 + -0x68,0x402,uVar10);
            if (uVar4 < uVar5) {
              pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x402);
              SendMessageW(pHVar12,0x151,uVar10,(ulonglong)(uVar5 - 1));
            }
            uVar5 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar5;
            LVar11 = FUN_14000fd38(param_1 + -0x68,0x402);
          } while (uVar5 < (uint)LVar11);
        }
        pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x402);
        LVar15 = 0;
        SendMessageA(pHVar12,0x144,uVar9 & 0xffffffff,0);
        uVar13 = 0;
        FUN_14000fff0(param_1 + -0x68,0x402,0);
        FUN_14000a740(param_1 - 0x68,extraout_x1_00,uVar13,LVar15,param_5,param_6,param_7,param_8);
      }
      pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3fb);
      EnableWindow(pHVar12,0);
    }
    else {
      if (iVar7 == 0x3fc) {
        ppv = &local_a08;
        HVar8 = CoCreateInstance((IID *)&DAT_140026380,(LPUNKNOWN)0x0,1,(IID *)&DAT_140028688,ppv);
        if (HVar8 < 0) {
          return 1;
        }
        iVar7 = (**(code **)(*local_a08 + 0x50))(local_a08,local_a10);
        if (-1 < iVar7) {
          (**(code **)(*local_a08 + 0x48))(local_a08,local_a10[0] | 0x20);
        }
        iVar7 = (**(code **)(*local_a08 + 0x18))(local_a08,0);
        if ((-1 < iVar7) &&
           (iVar7 = (**(code **)(*local_a08 + 0xa0))(local_a08,&local_9e0), -1 < iVar7)) {
          iVar7 = (**(code **)(*local_9e0 + 0x28))(local_9e0,0x80028000,&local_9e8);
          if (-1 < iVar7) {
            FUN_14000af60(param_1 - 0x68,local_9e8,0,1,ppv,param_6,param_7,param_8);
            FUN_140010070(param_1 + -0x68,0x402);
            CoTaskMemFree(local_9e8);
          }
          (**(code **)(*local_9e0 + 0x10))();
        }
        (**(code **)(*local_a08 + 0x10))();
        return 1;
      }
      if (iVar7 != 0x3fd) {
        if (iVar7 == 0x3fe) {
          uVar9 = FUN_14000ffb8(param_1 + -0x68,0x402);
          uVar5 = *(uint *)(param_1 + 0x1ad8);
          uVar4 = FUN_14000fd78(param_1 + -0x68,0x402,uVar9 & 0xffffffff);
          if (uVar4 < uVar5) {
            ShellExecuteW(*(HWND *)(param_1 + -0x50),L"open",
                          (LPCWSTR)(*(longlong *)(param_1 + 0x1ad0) + (ulonglong)uVar4 * 0x218 +
                                   0x10),(LPCWSTR)0x0,(LPCWSTR)0x0,1);
          }
        }
        return 0;
      }
      if (*(HWND *)(param_1 + 0x1ae0) != (HWND)0x0) {
        SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x402,0,*(LPARAM *)(param_1 + -0x50));
        *(undefined8 *)(param_1 + 0x1af0) = 0;
        *(undefined8 *)(param_1 + 0x1ae0) = 0;
        *(undefined8 *)(param_1 + 0x1ae8) = 0;
      }
      uVar10 = FUN_14000fd38(param_1 + -0x68,0x402);
      uVar9 = uVar10 & 0xffffffff;
      uVar5 = (uint)uVar10;
      while (uVar5 != 0) {
        wParam = (ulonglong)((int)uVar9 - 1);
        uVar10 = FUN_14000fd78(param_1 + -0x68,0x402,wParam);
        if ((*(int *)(*(longlong *)(param_1 + 0x1ad0) + (uVar10 & 0xffffffff) * 0x218) == 2) &&
           (uVar5 = *(uint *)(param_1 + 0x1ad8), uVar4 = FUN_14000fd78(param_1 + -0x68,0x402,wParam)
           , uVar4 < uVar5)) {
          uVar5 = *(uint *)(param_1 + 0x1ad8);
          uVar21 = uVar4;
          if (uVar4 < uVar5) {
            while (uVar20 = uVar21 + 1, uVar20 < uVar5) {
              puVar18 = (undefined4 *)(*(longlong *)(param_1 + 0x1ad0) + (ulonglong)uVar20 * 0x218);
              puVar17 = (undefined4 *)(*(longlong *)(param_1 + 0x1ad0) + (ulonglong)uVar21 * 0x218);
              *puVar17 = *puVar18;
              *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar18 + 2);
              thunk_FUN_140001000((undefined8 *)(puVar17 + 4),(undefined8 *)(puVar18 + 4),0x104);
              uVar21 = uVar20;
              uVar5 = *(uint *)(param_1 + 0x1ad8);
            }
            *(uint *)(param_1 + 0x1ad8) = uVar5 - 1;
          }
          uVar10 = 0;
          LVar11 = FUN_14000fd38(param_1 + -0x68,0x402);
          if ((int)LVar11 != 0) {
            do {
              uVar5 = FUN_14000fd78(param_1 + -0x68,0x402,uVar10);
              if (uVar4 < uVar5) {
                pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x402);
                SendMessageW(pHVar12,0x151,uVar10,(ulonglong)(uVar5 - 1));
              }
              uVar5 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar5;
              LVar11 = FUN_14000fd38(param_1 + -0x68,0x402);
            } while (uVar5 < (uint)LVar11);
          }
          pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x402);
          SendMessageA(pHVar12,0x144,wParam,0);
        }
        uVar5 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar5;
      }
      pHVar12 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3fb);
      EnableWindow(pHVar12,0);
      LVar15 = 0;
      for (pHVar12 = FindWindowExW((HWND)0xfffffffffffffffd,(HWND)0x0,L"DGVOODOOCOMM",(LPCWSTR)0x0);
          pHVar12 != (HWND)0x0;
          pHVar12 = FindWindowExW((HWND)0xfffffffffffffffd,pHVar12,L"DGVOODOOCOMM",(LPCWSTR)0x0)) {
        SetLastError(0);
        SendMessageW(pHVar12,0x407,0,0);
        DVar6 = GetLastError();
        if (DVar6 == 0) {
          uVar9 = 0;
          param_8 = (undefined4 *)&local_850;
          do {
            *(wchar_t *)((longlong)param_8 + uVar9 * 2) = L"[Running] "[uVar9];
            uVar5 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar5;
          } while (L"[Running] "[uVar9] != L'\0');
          aWStack_84e[uVar9 - 1] = L'\0';
          iVar7 = GetWindowTextW(pHVar12,aWStack_84e + ((ulonglong)uVar5 - 1),0x400 - uVar5);
          if ((pHVar12 != (HWND)0x0) && (LVar11 = SendMessageW(pHVar12,0x40a,0,0), (int)LVar11 != 0)
             ) {
            uVar9 = 0;
            param_5 = &local_850;
            do {
              pwVar1 = L" (already attached)" + uVar9;
              param_6 = (int *)(ulonglong)(iVar7 + uVar5 + (int)uVar9);
              uVar4 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar4;
              param_5[(longlong)param_6] = *pwVar1;
            } while (L" (already attached)"[uVar9] != L'\0');
            aWStack_84e[(ulonglong)(iVar7 + uVar5 + uVar4) - 1] = L'\0';
            param_7 = 0;
          }
          FUN_14000af60(param_1 - 0x68,(undefined8 *)&local_850,(ulonglong)pHVar12,0,param_5,param_6
                        ,param_7,param_8);
        }
        LVar15 = 0;
      }
      uVar13 = 0;
      FUN_14000fff0(param_1 + -0x68,0x402,0);
      FUN_14000a740(param_1 - 0x68,extraout_x1,uVar13,LVar15,param_5,param_6,param_7,param_8);
    }
    FUN_140010070(param_1 + -0x68,0x402);
    return 1;
  }
  local_a00 = 0;
  local_9f8 = 0;
  bVar3 = FUN_140001c30(param_1 + 0x7b8,(uint *)&local_a00,param_3,param_4,(undefined1 *)param_5,
                        param_6,param_7,param_8);
  if (bVar3) {
    *(uint *)(*(longlong *)(param_1 + 0x6f8) + 0x37) = (uint)local_a00;
    *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + 0x3b) = local_a00._4_4_;
    *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + 0x43) = (undefined4)local_9f8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + 0x47) = local_9f8._4_4_;
  }
  FUN_14000fca8(param_1 + 0x678,0x3f2,(LPARAM)abStack_8d0,0x80);
  FUN_140025250((undefined1 *)&local_850,0,0x400);
  puVar16 = &local_850;
  local_a10[0] = 0;
  puVar14 = local_a10;
  iVar7 = FUN_1400248b0(abStack_8d0,(byte *)"%d %s",puVar14,puVar16,param_5,param_6,param_7,param_8)
  ;
  uVar13 = extraout_x1_03;
  if (iVar7 == 1) {
LAB_14000e30c:
    uVar9 = -(ulonglong)(local_a10[0] >> 0x1f) & 0xfff0000000000000 |
            (ulonglong)local_a10[0] << 0x14;
LAB_14000e314:
    if (uVar9 != 0) {
      *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x2f) = (int)uVar9;
    }
  }
  else if (iVar7 == 2) {
    pbVar19 = (byte *)&local_850;
    while ((byte)local_850 != 0) {
      iVar7 = FUN_140024c68((int)(char)*pbVar19);
      *pbVar19 = (byte)iVar7;
      pbVar19 = pbVar19 + 1;
      local_850._0_1_ = *pbVar19;
    }
    uVar5 = FUN_140024ce0((byte *)&local_850,&DAT_14002829c);
    uVar13 = extraout_x1_04;
    if ((uVar5 == 0) ||
       (uVar5 = FUN_140024ce0((byte *)&local_850,&DAT_1400282a0), uVar13 = extraout_x1_05,
       uVar5 == 0)) {
      uVar9 = -(ulonglong)(local_a10[0] >> 0x1f) & 0xfffffc0000000000 |
              (ulonglong)local_a10[0] << 10;
    }
    else {
      uVar5 = FUN_140024ce0((byte *)&local_850,&DAT_1400282a4);
      uVar13 = extraout_x1_06;
      if ((uVar5 == 0) ||
         (uVar5 = FUN_140024ce0((byte *)&local_850,&DAT_1400282a8), uVar13 = extraout_x1_07,
         uVar5 == 0)) goto LAB_14000e30c;
      uVar5 = FUN_140024ce0((byte *)&local_850,&DAT_1400282ac);
      uVar13 = extraout_x1_08;
      if ((uVar5 != 0) &&
         (uVar5 = FUN_140024ce0((byte *)&local_850,&DAT_1400282b0), uVar13 = extraout_x1_09,
         uVar5 != 0)) goto LAB_14000e320;
      uVar9 = -(ulonglong)(local_a10[0] >> 0x1f) & 0xc000000000000000 |
              (ulonglong)local_a10[0] << 0x1e;
    }
    goto LAB_14000e314;
  }
LAB_14000e320:
  FUN_140005330(param_1 + 0x908,uVar13,puVar14,puVar16,(undefined1 *)param_5,param_6,param_7,param_8
               );
  if (*(char *)(param_1 + 0x428) != '\0') {
    FUN_140006788(param_1 + 0xb98,extraout_x1_10,puVar14,puVar16,(undefined1 *)param_5,param_6,
                  param_7,param_8);
    FUN_140008300(param_1 + 0xe18);
    FUN_140004550(param_1 + 0xf40);
  }
  if (*(longlong *)(param_1 + 0x1ae0) == 0) {
    uVar9 = FUN_14000ffb8(param_1 + -0x68,0x402);
    uVar9 = FUN_14000fd78(param_1 + -0x68,0x402,uVar9 & 0xffffffff);
    thunk_FUN_140001000((undefined8 *)(param_1 + 0x18c8),
                        (undefined8 *)
                        (*(longlong *)(param_1 + 0x1ad0) + (uVar9 & 0xffffffff) * 0x218 + 0x10),
                        0x104);
    PathAppendW((LPWSTR)(param_1 + 0x18c8),L"dgVoodoo.conf");
    FUN_140015a38(param_1 + 0x1af8,param_1 + 0x18c8,*(char **)(param_1 + 0x1db8));
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))(param_1 + 0x18,1);
    if (*(HWND *)(param_1 + 0x1ae0) != (HWND)0x0) {
      SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x402,1,*(LPARAM *)(param_1 + -0x50));
      *(undefined8 *)(param_1 + 0x1af0) = 0;
      *(undefined8 *)(param_1 + 0x1ae0) = 0;
      *(undefined8 *)(param_1 + 0x1ae8) = 0;
    }
  }
  FUN_14000f1f0(&local_a00,(LPCWSTR)(param_1 + 0x16c0),1);
  uVar9 = 0;
  if (*(int *)(param_1 + 0x1ad8) != 0) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1ad0) + uVar9 * 0x218) == 0) {
        FUN_14000f420((longlong)&local_a00,0x208,
                      (LPCVOID)(uVar9 * 0x218 + *(longlong *)(param_1 + 0x1ad0) + 0x10),(DWORD *)0x0
                     );
      }
      uVar5 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x1ad8));
  }
  FUN_14000f2c0(&local_a00);
  FUN_14000f038();
LAB_14000e470:
  (**(code **)(*(longlong *)(param_1 + -0x68) + 0x70))(param_1 + -0x68);
  EndDialog(*(HWND *)(param_1 + -0x50),1);
  return 1;
}

