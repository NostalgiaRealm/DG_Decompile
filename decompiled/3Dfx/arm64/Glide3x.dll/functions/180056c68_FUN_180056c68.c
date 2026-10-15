/*
 * FUN_180056c68 at 180056c68
 * int __cdecl FUN_180056c68(longlong * param_1, longlong param_2, longlong param_3)
 * Address ranges: 180056c68-180056edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180056c68(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  if (*(uint *)(param_1 + 0xca) != 0) {
    uVar9 = 0;
    do {
      plVar3 = *(longlong **)(param_1[0xc9] + uVar9 * 8);
      if ((*plVar3 == param_2) && (*(char *)((longlong)plVar3 + 0xd6b) == '\0')) {
        if ((param_3 != 0) && (plVar3[0x1ae] == param_3)) {
          plVar3[0x1ae] = 0;
        }
        lVar6 = *(longlong *)(param_1[0xc9] + uVar9 * 8);
        iVar8 = *(int *)(lVar6 + 0x14) + -1;
        *(int *)(lVar6 + 0x14) = iVar8;
        if (iVar8 == 0) {
          *(undefined1 *)(*(longlong *)(param_1[0xc9] + uVar9 * 8) + 0xd6b) = 1;
          puVar7 = *(undefined8 **)(param_1[0xc9] + uVar9 * 8);
          if (puVar7[1] != 0) {
            if (*(int *)((longlong)puVar7 + 0x3c) == 3) {
              if (*(short *)(puVar7 + 0x193) != 0) {
                ChangeDisplaySettingsExW
                          ((LPCWSTR)((longlong)puVar7 + 0xc54),
                           (DEVMODEW *)((longlong)puVar7 + 0xc54),(HWND)0x0,0,(LPVOID)0x0);
              }
              SetWindowLongPtrW((HWND)*puVar7,-0x10,puVar7[0x1a8]);
              SetWindowLongPtrW((HWND)*puVar7,-0x14,puVar7[0x1a9]);
              SetWindowPos((HWND)*puVar7,(HWND)0x0,*(int *)(puVar7 + 0x1a6),
                           *(int *)((longlong)puVar7 + 0xd34),
                           *(int *)(puVar7 + 0x1a7) - *(int *)(puVar7 + 0x1a6),
                           *(int *)((longlong)puVar7 + 0xd3c) - *(int *)((longlong)puVar7 + 0xd34),
                           0x214);
            }
            (**(code **)(*(longlong *)puVar7[1] + 0x50))((longlong *)puVar7[1],0,0);
            *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
            (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0xc9] + uVar9 * 8));
            (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_1[0xc9] + uVar9 * 8));
            (**(code **)(*param_1 + 0x30))(param_1,*(undefined8 *)(param_1[0xc9] + uVar9 * 8));
            (**(code **)(*param_1 + 0x40))(param_1,*(undefined8 *)(param_1[0xc9] + uVar9 * 8));
            (**(code **)(**(longlong **)(*(longlong *)(param_1[0xc9] + uVar9 * 8) + 8) + 0x10))();
          }
          uVar4 = 0;
          uVar5 = *(uint *)(param_1 + 0xca);
          pvVar2 = *(LPVOID *)(param_1[0xc9] + uVar9 * 8);
          if (uVar5 == 0) goto LAB_180056eb0;
          goto LAB_180056e5c;
        }
        break;
      }
      uVar5 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xca));
  }
  goto LAB_180056eb8;
  while (uVar1 = (int)uVar4 + 1, uVar4 = (ulonglong)uVar1, uVar1 < uVar5) {
LAB_180056e5c:
    if (*(LPVOID *)(param_1[0xc9] + uVar4 * 8) == pvVar2) {
      if ((int)uVar4 != -1) {
        while (uVar1 = (int)uVar4 + 1, uVar1 < uVar5) {
          *(undefined8 *)(param_1[0xc9] + uVar4 * 8) =
               *(undefined8 *)(param_1[0xc9] + (ulonglong)uVar1 * 8);
          uVar4 = (ulonglong)uVar1;
          uVar5 = *(uint *)(param_1 + 0xca);
        }
        *(int *)(param_1 + 0xca) = (int)param_1[0xca] + -1;
      }
      break;
    }
  }
LAB_180056eb0:
  FUN_180063700(pvVar2);
LAB_180056eb8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  return iVar8;
}

