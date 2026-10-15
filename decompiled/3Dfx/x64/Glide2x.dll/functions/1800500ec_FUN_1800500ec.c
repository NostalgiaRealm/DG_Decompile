/*
 * FUN_1800500ec at 1800500ec
 * undefined4 __fastcall FUN_1800500ec(longlong * param_1, longlong param_2, longlong param_3)
 * Address ranges: 1800500ec-180050232
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800500ec(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  if (*(uint *)(param_1 + 0xca) != 0) {
    uVar6 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0xc9] + uVar6 * 8);
      if ((*plVar2 == param_2) && (*(char *)((longlong)plVar2 + 0xd6b) == '\0')) {
        if ((param_3 != 0) && (plVar2[0x1ae] == param_3)) {
          plVar2[0x1ae] = 0;
        }
        lVar3 = *(longlong *)(param_1[0xc9] + uVar6 * 8);
        piVar1 = (int *)(lVar3 + 0x14);
        *piVar1 = *piVar1 + -1;
        uVar7 = *(undefined4 *)(lVar3 + 0x14);
        if (*piVar1 == 0) {
          lVar3 = *(longlong *)(param_1[0xc9] + uVar6 * 8);
          *(undefined1 *)(lVar3 + 0xd6b) = 1;
          puVar4 = *(undefined8 **)(param_1[0xc9] + uVar6 * 8);
          if (puVar4[1] != 0) {
            FUN_18004f418(lVar3,puVar4);
            (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0xc9] + uVar6 * 8));
            (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_1[0xc9] + uVar6 * 8));
            (**(code **)(*param_1 + 0x30))(param_1,*(undefined8 *)(param_1[0xc9] + uVar6 * 8));
            (**(code **)(*param_1 + 0x40))(param_1,*(undefined8 *)(param_1[0xc9] + uVar6 * 8));
            (**(code **)(**(longlong **)(*(longlong *)(param_1[0xc9] + uVar6 * 8) + 8) + 0x10))();
          }
          FUN_18004ee10((longlong)param_1,*(LPVOID *)(param_1[0xc9] + uVar6 * 8));
        }
        break;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xca));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  return uVar7;
}

