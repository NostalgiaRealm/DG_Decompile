/*
 * FUN_1800e6028 at 1800e6028
 * undefined FUN_1800e6028(void)
 * Address ranges: 1800e6028-1800e629f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800e6028(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xc4);
  if (*(uint *)(param_1 + 0xca) != 0) {
    uVar8 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0xc9] + uVar8 * 8);
      if ((*plVar2 == param_2) && (*(char *)((longlong)plVar2 + 0xd6b) == '\0')) {
        if ((param_3 != 0) && (plVar2[0x1ae] == param_3)) {
          plVar2[0x1ae] = 0;
        }
        lVar5 = *(longlong *)(param_1[0xc9] + uVar8 * 8);
        iVar7 = *(int *)(lVar5 + 0x14) + -1;
        *(int *)(lVar5 + 0x14) = iVar7;
        if (iVar7 == 0) {
          *(undefined1 *)(*(longlong *)(param_1[0xc9] + uVar8 * 8) + 0xd6b) = 1;
          puVar6 = *(undefined8 **)(param_1[0xc9] + uVar8 * 8);
          if (puVar6[1] != 0) {
            if (*(int *)((longlong)puVar6 + 0x3c) == 3) {
              if (*(short *)(puVar6 + 0x193) != 0) {
                (*__imp_USER32_dll_ChangeDisplaySettingsExW)
                          ((longlong)puVar6 + 0xc54,(longlong)puVar6 + 0xc54,0,0,0);
              }
              (*__imp_USER32_dll_SetWindowLongPtrW)(*puVar6,0xfffffff0,puVar6[0x1a8]);
              (*__imp_USER32_dll_SetWindowLongPtrW)(*puVar6,0xffffffec,puVar6[0x1a9]);
              (*__imp_USER32_dll_SetWindowPos)
                        (*puVar6,0,*(int *)(puVar6 + 0x1a6),*(int *)((longlong)puVar6 + 0xd34),
                         *(int *)(puVar6 + 0x1a7) - *(int *)(puVar6 + 0x1a6),
                         *(int *)((longlong)puVar6 + 0xd3c) - *(int *)((longlong)puVar6 + 0xd34),
                         0x214);
            }
            (**(code **)(*(longlong *)puVar6[1] + 0x50))((longlong *)puVar6[1],0,0);
            *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
            (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0xc9] + uVar8 * 8));
            (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_1[0xc9] + uVar8 * 8));
            (**(code **)(*param_1 + 0x30))(param_1,*(undefined8 *)(param_1[0xc9] + uVar8 * 8));
            (**(code **)(*param_1 + 0x40))(param_1,*(undefined8 *)(param_1[0xc9] + uVar8 * 8));
            (**(code **)(**(longlong **)(*(longlong *)(param_1[0xc9] + uVar8 * 8) + 8) + 0x10))();
          }
          uVar3 = 0;
          uVar4 = *(uint *)(param_1 + 0xca);
          lVar5 = *(longlong *)(param_1[0xc9] + uVar8 * 8);
          if (uVar4 == 0) goto LAB_1800e6270;
          goto LAB_1800e621c;
        }
        break;
      }
      uVar4 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xca));
  }
  goto LAB_1800e6278;
  while (uVar1 = (int)uVar3 + 1, uVar3 = (ulonglong)uVar1, uVar1 < uVar4) {
LAB_1800e621c:
    if (*(longlong *)(param_1[0xc9] + uVar3 * 8) == lVar5) {
      if ((int)uVar3 != -1) {
        while (uVar1 = (int)uVar3 + 1, uVar1 < uVar4) {
          *(undefined8 *)(param_1[0xc9] + uVar3 * 8) =
               *(undefined8 *)(param_1[0xc9] + (ulonglong)uVar1 * 8);
          uVar3 = (ulonglong)uVar1;
          uVar4 = *(uint *)(param_1 + 0xca);
        }
        *(int *)(param_1 + 0xca) = (int)param_1[0xca] + -1;
      }
      break;
    }
  }
LAB_1800e6270:
  FUN_180102fc0(lVar5,0xd78);
LAB_1800e6278:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xc4);
  return iVar7;
}

