/*
 * FUN_180005418 at 180005418
 * LRESULT __fastcall FUN_180005418(HWND param_1, UINT param_2, WPARAM param_3, longlong param_4)
 * Address ranges: 180005418-1800054f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_180005418(HWND param_1,UINT param_2,WPARAM param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  WNDPROC pWVar5;
  longlong *plVar6;
  LRESULT LVar7;
  HWND hWnd;
  
  pWVar5 = FUN_1800041ec();
  hWnd = param_1;
  plVar6 = FUN_1800052d4((longlong)pWVar5,(longlong)param_1);
  LVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    if (((param_2 == 0x46) || (param_2 == 0x47)) && ((*(byte *)(param_4 + 0x20) & 3) == 0)) {
      uVar1 = *(undefined4 *)(param_4 + 0x10);
      uVar2 = *(undefined4 *)(param_4 + 0x14);
      uVar3 = *(undefined4 *)(param_4 + 0x18);
      uVar4 = *(undefined4 *)(param_4 + 0x1c);
      LVar7 = CallWindowProcW((WNDPROC)plVar6[6],param_1,param_2,param_3,param_4);
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) & 0xfffffffc;
      *(undefined4 *)(param_4 + 0x10) = uVar1;
      *(undefined4 *)(param_4 + 0x14) = uVar2;
      *(undefined4 *)(param_4 + 0x18) = uVar3;
      *(undefined4 *)(param_4 + 0x1c) = uVar4;
    }
    else {
      LVar7 = CallWindowProcW((WNDPROC)plVar6[6],hWnd,param_2,param_3,param_4);
    }
  }
  FUN_1800043e8((undefined8 *)pWVar5);
  return LVar7;
}

