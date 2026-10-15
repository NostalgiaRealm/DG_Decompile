/*
 * FUN_180007de4 at 180007de4
 * undefined __fastcall FUN_180007de4(longlong param_1, undefined4 param_2)
 * Address ranges: 180007de4-180007fa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007de4(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  HWND hWnd;
  MSG local_38;
  
  if (*(char *)(param_1 + 100) == '\0') {
    return;
  }
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(lVar2 + 0x857) != '\0') goto LAB_180007f02;
  if (*(char *)(lVar2 + 0xa0d) == '\0') {
    hWnd = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if (hWnd == (HWND)0x0) {
      if ((*(int *)(lVar2 + 0x138) != 0) &&
         (plVar4 = (longlong *)
                   ((ulonglong)(*(int *)(lVar2 + 0x138) - 1) * 0x60 + *(longlong *)(lVar2 + 0x130)),
         plVar4 != (longlong *)0x0)) {
        hWnd = (HWND)*plVar4;
      }
      if (hWnd == (HWND)0x0) goto LAB_180007ebb;
    }
    while (BVar3 = PeekMessageW(&local_38,hWnd,0x400,0x7fff,1), BVar3 != 0) {
      if (local_38.message == 0x12) {
        PostMessageW(hWnd,0x12,local_38.wParam,local_38.lParam);
        break;
      }
      TranslateMessage(&local_38);
      DispatchMessageW(&local_38);
    }
  }
LAB_180007ebb:
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x138);
  if ((iVar1 != 0) &&
     (puVar5 = (undefined8 *)
               ((ulonglong)(iVar1 - 1) * 0x60 + *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x130)
               ), puVar5 != (undefined8 *)0x0)) {
    SendNotifyMessageW((HWND)*puVar5,0x402,0x44454745,0x45474544);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xa0d) = 0;
LAB_180007f02:
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x30) + 0x388));
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x7e9) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
              (*(longlong **)(param_1 + 0x18),*(longlong *)(param_1 + 0x30) + 0x5dc);
    *(byte *)(param_1 + 0x98) =
         *(byte *)(param_1 + 0x98) | *(byte *)(*(longlong *)(param_1 + 0x30) + 0x631);
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x7e9) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x30) + 0x388));
  if ((*(char *)(param_1 + 0x98) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x855) != '\0')) {
    FUN_180010e54(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe0))(*(longlong **)(param_1 + 0x18),param_2);
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
  return;
}

