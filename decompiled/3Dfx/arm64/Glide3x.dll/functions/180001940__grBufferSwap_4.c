/*
 * _grBufferSwap@4 at 180001940
 * undefined __cdecl _grBufferSwap@4(int param_1)
 * Address ranges: 180001940-180001d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferSwap_4(int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  HWND hWnd;
  int local_470;
  uint uStack_46c;
  int local_468;
  undefined4 uStack_464;
  tagMSG tStack_460;
  undefined8 auStack_430 [128];
  
                    /* 0x1940  9  _grBufferSwap@4
                       0x1940  109  grBufferSwap */
  lVar5 = FUN_180008ce0();
  if (*(char *)(lVar5 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar5 + 0x60));
    lVar7 = *(longlong *)(lVar5 + 0x30);
    if (*(char *)(lVar7 + 0x857) == '\0') {
      if (*(char *)(lVar7 + 0xa0d) == '\0') {
        hWnd = *(HWND *)(*(longlong *)(lVar5 + 0x18) + 0xa0);
        if (((hWnd == (HWND)0x0) && (*(int *)(lVar7 + 0x138) != 0)) &&
           (puVar1 = (undefined8 *)
                     (*(longlong *)(lVar7 + 0x130) + (ulonglong)(*(int *)(lVar7 + 0x138) - 1) * 0x60
                     ), puVar1 != (undefined8 *)0x0)) {
          hWnd = (HWND)*puVar1;
        }
        if (hWnd != (HWND)0x0) {
          iVar4 = PeekMessageW(&tStack_460,hWnd,0x400,0x7fff,1);
          while (iVar4 != 0) {
            if (tStack_460.message == 0x12) {
              PostMessageW(hWnd,0x12,tStack_460.wParam,tStack_460.lParam);
              break;
            }
            TranslateMessage(&tStack_460);
            DispatchMessageW(&tStack_460);
            iVar4 = PeekMessageW(&tStack_460,hWnd,0x400,0x7fff,1);
          }
        }
      }
      iVar4 = *(int *)(*(longlong *)(lVar5 + 0x30) + 0x138);
      if ((iVar4 != 0) &&
         (puVar1 = (undefined8 *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x130) +
                   (ulonglong)(iVar4 - 1) * 0x60), puVar1 != (undefined8 *)0x0)) {
        SendNotifyMessageW((HWND)*puVar1,0x402,0x44454745,0x45474544);
      }
      *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 0xa0d) = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar5 + 0x30) + 0x388));
    if (*(char *)(*(longlong *)(lVar5 + 0x30) + 0x7e9) != '\0') {
      (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x38))();
      (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x28))
                (*(longlong **)(lVar5 + 0x18),*(longlong *)(lVar5 + 0x30) + 0x5dc);
      *(byte *)(lVar5 + 0x98) =
           *(byte *)(*(longlong *)(lVar5 + 0x30) + 0x631) | *(byte *)(lVar5 + 0x98);
      *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 0x7e9) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar5 + 0x30) + 0x388));
    if (((*(char *)(lVar5 + 0x98) != '\0') &&
        (*(char *)(*(longlong *)(lVar5 + 0x30) + 0x855) != '\0')) &&
       (*(longlong *)(lVar5 + 0x70) != 0)) {
      local_470 = 0;
      uStack_46c = 0;
      local_468 = 0;
      lVar7 = (**(code **)(lVar5 + 0x88))(&local_470,&uStack_46c,&local_468,&uStack_464);
      if (lVar7 != 0) {
        FUN_18000a978(lVar5,auStack_430);
        FUN_18000b218(lVar5,3,8,1,1,0);
        FUN_18000b108(lVar5,3,8,1,1,0);
        FUN_18000aed0(lVar5,1,5,4,0);
        FUN_18000ae00(lVar5,0);
        FUN_18000afa8(lVar5,7);
        FUN_18000b4b0(lVar5,0);
        FUN_18000b310(lVar5,1,0);
        if (*(char *)(lVar5 + 100) != '\0') {
          FUN_1800643e0((uint *)(lVar5 + 0x60));
          plVar6 = *(longlong **)(lVar5 + 0x18);
          if (*(char *)((longlong)plVar6 + 0x113) != '\x02') {
            (**(code **)(*plVar6 + 0x1b0))(plVar6,2);
            *(undefined1 *)(*(longlong *)(lVar5 + 0x18) + 0x113) = 2;
          }
          FUN_1800643d0((uint *)(lVar5 + 0x60));
        }
        FUN_18000b088(lVar5,0);
        FUN_18000b018(lVar5,1);
        if (*(char *)(lVar5 + 100) != '\0') {
          FUN_1800643e0((uint *)(lVar5 + 0x60));
          plVar6 = *(longlong **)(lVar5 + 0x18);
          if (*(char *)((longlong)plVar6 + 0x13d) != '\0') {
            (**(code **)(*plVar6 + 0x100))(plVar6,0);
            *(undefined1 *)(*(longlong *)(lVar5 + 0x18) + 0x13d) = 0;
          }
          FUN_1800643d0((uint *)(lVar5 + 0x60));
        }
        if (*(char *)(lVar5 + 100) != '\0') {
          FUN_1800643e0((uint *)(lVar5 + 0x60));
          plVar6 = *(longlong **)(lVar5 + 0x18);
          if (*(char *)((longlong)plVar6 + 0x13e) != '@') {
            (**(code **)(*plVar6 + 0xf0))(plVar6,0x40);
            *(undefined1 *)(*(longlong *)(lVar5 + 0x18) + 0x13e) = 0x40;
          }
          FUN_1800643d0((uint *)(lVar5 + 0x60));
        }
        FUN_18000b3b0(lVar5,0,0,*(int *)(*(longlong *)(lVar5 + 0x18) + 0xa8),
                      *(int *)(*(longlong *)(lVar5 + 0x18) + 0xac));
        lVar8 = *(longlong *)(lVar5 + 0x18);
        uVar2 = *(int *)(lVar8 + 0xac) - uStack_46c;
        if ((int)uVar2 < 1) {
          uVar2 = 0;
        }
        uVar3 = *(int *)(lVar8 + 0xa8) - local_470;
        if ((int)uVar3 < 1) {
          uVar3 = 0;
        }
        FUN_18000aca0(lVar5,(uint)*(byte *)(lVar8 + 0xf0),uVar3,uVar2,uStack_464,local_470,
                      uStack_46c,local_468,lVar7,1,1);
        FUN_18000aa08(lVar5,auStack_430,0);
      }
    }
    if (4 < param_1) {
      param_1 = 4;
    }
    (**(code **)(**(longlong **)(lVar5 + 0x18) + 0xe0))(*(longlong **)(lVar5 + 0x18),param_1);
    FUN_1800643d0((uint *)(lVar5 + 0x60));
  }
  return;
}

