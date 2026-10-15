/*
 * FUN_14000c354 at 14000c354
 * undefined8 __fastcall FUN_14000c354(longlong param_1, int param_2)
 * Address ranges: 14000c354-14000c88d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000c354(longlong param_1,int param_2)

{
  uint uVar1;
  BOOL BVar2;
  HINSTANCE in_RAX;
  ulonglong uVar3;
  HWND pHVar4;
  longlong lVar5;
  uint7 extraout_var;
  LRESULT LVar6;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint uVar7;
  char cVar8;
  undefined8 local_378 [4];
  undefined **local_358 [13];
  undefined **local_2f0;
  undefined8 local_2e8 [20];
  WCHAR local_248 [268];
  
  if (param_2 != 0x3ea) {
    if (param_2 != 0x3eb) {
      if (param_2 == 0x3ec) {
        FUN_14000f350(local_358,*(undefined8 *)(param_1 + -0x50),0x67,0);
        local_358[0] = &PTR_FUN_1400263d0;
        local_2f0 = &PTR_FUN_1400263b8;
        FUN_14000f4d0(local_2e8,local_358);
        FUN_14000f410((longlong)local_358);
        lVar5 = FUN_140001298(local_358);
      }
      else if (param_2 == 0x3ed) {
        FUN_140009800(param_1 + 0x678);
        FUN_1400058b8(param_1 + 0x908);
        uVar3 = 0;
        if (*(char *)(param_1 + 0x428) != '\0') {
          FUN_1400072c0(param_1 + 0xb98);
          FUN_140008af0(param_1 + 0xe18);
          FUN_14000463c(param_1 + 0xf40);
        }
        if (*(longlong *)(param_1 + 0x1ae0) == 0) {
          FUN_14000a228(param_1 + -0x68,(LPWSTR)(param_1 + 0x18c8));
          cVar8 = FUN_140014848((uint *)(param_1 + 0x1af8),(LPWSTR)(param_1 + 0x18c8),
                                *(char **)(param_1 + 0x1db8));
        }
        else {
          (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))((longlong *)(param_1 + 0x18),1);
          LVar6 = SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x409,0,*(LPARAM *)(param_1 + -0x50));
          cVar8 = LVar6 != 0;
        }
        FUN_140023fa0(local_378,(LPCWSTR)(param_1 + 0x16c0),'\x01');
        if (*(int *)(param_1 + 0x1ad8) != 0) {
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x1ad0) + uVar3 * 0x218) == 0) {
              FUN_1400241c0((longlong)local_378,0x208,
                            (LPCVOID)(*(longlong *)(param_1 + 0x1ad0) + 0x10 + uVar3 * 0x218),
                            (DWORD *)0x0);
            }
            uVar7 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar7;
          } while (uVar7 < *(uint *)(param_1 + 0x1ad8));
        }
        lVar5 = FUN_140024020(local_378);
        if (cVar8 != '\0') {
          pHVar4 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3ed);
          BVar2 = EnableWindow(pHVar4,0);
          lVar5 = CONCAT44(extraout_var_00,BVar2);
        }
      }
      else {
        if (param_2 == 0x3fa) {
          GetModuleFileNameW((HMODULE)0x0,local_248,0x104);
          PathRemoveFileSpecW(local_248);
          lVar5 = param_1 + -0x68;
          uVar7 = FUN_14000a708(lVar5,(ushort *)local_248);
          if (uVar7 == 0xffffffff) {
            FUN_14000a9b8(lVar5,(ushort *)local_248,0,'\x01');
          }
          else {
            FUN_14000e4a0(lVar5,0x402,uVar7);
          }
          FUN_14000a2e0(lVar5);
        }
        else if (param_2 == 0x3fb) {
          uVar7 = FUN_14000e460(param_1 + -0x68,0x402);
          FUN_14000a808(param_1 + -0x68,uVar7,'\0');
          pHVar4 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3fb);
          EnableWindow(pHVar4,0);
        }
        else {
          if (param_2 == 0x3fc) {
            FUN_14000d32c(param_1,param_1 + -0x68);
            lVar5 = (ulonglong)extraout_var << 8;
            goto LAB_14000c87c;
          }
          if (param_2 != 0x3fd) {
            if (param_2 == 0x3fe) {
              uVar1 = FUN_14000e460(param_1 + -0x68,0x402);
              uVar7 = *(uint *)(param_1 + 0x1ad8);
              in_RAX = (HINSTANCE)FUN_14000e270(param_1 + -0x68,0x402,(ulonglong)uVar1);
              if ((uint)in_RAX < uVar7) {
                in_RAX = ShellExecuteW(*(HWND *)(param_1 + -0x50),L"open",
                                       (LPCWSTR)(*(longlong *)(param_1 + 0x1ad0) + 0x10 +
                                                ((ulonglong)in_RAX & 0xffffffff) * 0x218),
                                       (LPCWSTR)0x0,(LPCWSTR)0x0,1);
              }
            }
            return (ulonglong)in_RAX & 0xffffffffffffff00;
          }
          lVar5 = param_1 + -0x68;
          if (*(HWND *)(param_1 + 0x1ae0) != (HWND)0x0) {
            SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x402,0,*(LPARAM *)(param_1 + -0x50));
            *(undefined8 *)(param_1 + 0x1ae8) = 0;
            *(undefined8 *)(param_1 + 0x1af0) = 0;
            *(undefined8 *)(param_1 + 0x1ae0) = 0;
          }
          uVar3 = FUN_14000e230(lVar5,0x402);
          uVar7 = (uint)uVar3;
          uVar3 = uVar3 & 0xffffffff;
          while (uVar7 != 0) {
            uVar7 = (int)uVar3 - 1;
            uVar3 = (ulonglong)uVar7;
            uVar1 = FUN_14000e270(lVar5,0x402,(ulonglong)uVar7);
            if (*(int *)((ulonglong)uVar1 * 0x218 + *(longlong *)(param_1 + 0x1ad0)) == 2) {
              FUN_14000a808(lVar5,uVar7,'\x01');
            }
          }
          pHVar4 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3fb);
          EnableWindow(pHVar4,0);
          FUN_14000ad34(lVar5);
          FUN_14000e4a0(lVar5,0x402,0);
          FUN_14000a2e0(lVar5);
        }
        lVar5 = FUN_14000e4d0(param_1 + -0x68,0x402);
      }
      goto LAB_14000c87c;
    }
    FUN_140009800(param_1 + 0x678);
    FUN_1400058b8(param_1 + 0x908);
    uVar3 = 0;
    if (*(char *)(param_1 + 0x428) != '\0') {
      FUN_1400072c0(param_1 + 0xb98);
      FUN_140008af0(param_1 + 0xe18);
      FUN_14000463c(param_1 + 0xf40);
    }
    if (*(longlong *)(param_1 + 0x1ae0) == 0) {
      FUN_14000a228(param_1 + -0x68,(LPWSTR)(param_1 + 0x18c8));
      FUN_140014848((uint *)(param_1 + 0x1af8),(LPWSTR)(param_1 + 0x18c8),
                    *(char **)(param_1 + 0x1db8));
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))((longlong *)(param_1 + 0x18),1);
      if (*(HWND *)(param_1 + 0x1ae0) != (HWND)0x0) {
        SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x402,1,*(LPARAM *)(param_1 + -0x50));
        *(undefined8 *)(param_1 + 0x1ae8) = 0;
        *(undefined8 *)(param_1 + 0x1af0) = 0;
        *(undefined8 *)(param_1 + 0x1ae0) = 0;
      }
    }
    FUN_140023fa0(local_378,(LPCWSTR)(param_1 + 0x16c0),'\x01');
    if (*(int *)(param_1 + 0x1ad8) != 0) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x1ad0) + uVar3 * 0x218) == 0) {
          FUN_1400241c0((longlong)local_378,0x208,
                        (LPCVOID)(*(longlong *)(param_1 + 0x1ad0) + 0x10 + uVar3 * 0x218),
                        (DWORD *)0x0);
        }
        uVar7 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0x1ad8));
    }
    FUN_140024020(local_378);
    FUN_14000d7d4((ushort *)(param_1 + 0x12b0),(LPCWSTR)(param_1 + 0x220));
  }
  (**(code **)(*(longlong *)(param_1 + -0x68) + 0x70))();
  BVar2 = EndDialog(*(HWND *)(param_1 + -0x50),1);
  lVar5 = CONCAT44(extraout_var_01,BVar2);
LAB_14000c87c:
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}

