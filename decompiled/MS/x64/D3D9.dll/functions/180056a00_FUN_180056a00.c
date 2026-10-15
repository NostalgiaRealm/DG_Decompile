/*
 * FUN_180056a00 at 180056a00
 * undefined __fastcall FUN_180056a00(longlong param_1)
 * Address ranges: 180056a00-180056b44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056a00(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1508);
  uVar4 = *(uint *)(lVar1 + 0xba8);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      iVar3 = (int)uVar5;
      if (*(longlong *)(*(longlong *)(lVar1 + 0xba0) + uVar5 * 8) == param_1) {
        if (iVar3 != -1) {
          uVar6 = iVar3 + 1;
          if (uVar6 < uVar4) {
            do {
              uVar5 = (ulonglong)uVar6;
              uVar4 = uVar6 - 1;
              uVar6 = uVar6 + 1;
              *(undefined8 *)(*(longlong *)(lVar1 + 0xba0) + (ulonglong)uVar4 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar1 + 0xba0) + uVar5 * 8);
            } while (uVar6 < *(uint *)(lVar1 + 0xba8));
          }
          *(int *)(lVar1 + 0xba8) = *(int *)(lVar1 + 0xba8) + -1;
        }
        break;
      }
      uVar5 = (ulonglong)(iVar3 + 1U);
    } while (iVar3 + 1U < uVar4);
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  SignalObjectAndWait(*(HANDLE *)(param_1 + 0xb0),*(HANDLE *)(param_1 + 0xa8),0xffffffff,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  CloseHandle(*(HANDLE *)(param_1 + 0xa8));
  CloseHandle(*(HANDLE *)(param_1 + 0xb0));
  pvVar2 = *(LPVOID *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800ebfe8((longlong)pvVar2);
    FUN_1800fbcf0(pvVar2);
  }
  pvVar2 = *(LPVOID *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800ebfe8((longlong)pvVar2);
    FUN_1800fbcf0(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

