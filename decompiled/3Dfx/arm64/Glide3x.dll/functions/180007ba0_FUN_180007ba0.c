/*
 * FUN_180007ba0 at 180007ba0
 * LRESULT __cdecl FUN_180007ba0(HWND param_1, UINT param_2, WPARAM param_3, longlong param_4)
 * Address ranges: 180007ba0-180007bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_180007ba0(HWND param_1,UINT param_2,WPARAM param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  WNDPROC pWVar5;
  longlong lVar6;
  HWND hWnd;
  LRESULT LVar7;
  
  pWVar5 = FUN_180006148();
  lVar6 = FUN_180007a00((longlong)pWVar5,(longlong)param_1);
  LVar7 = 0;
  if (lVar6 != 0) {
    if ((param_2 - 0x46 < 2) && ((*(uint *)(param_4 + 0x20) & 3) == 0)) {
      uVar1 = *(undefined4 *)(param_4 + 0x10);
      uVar3 = *(undefined4 *)(param_4 + 0x14);
      uVar2 = *(undefined4 *)(param_4 + 0x18);
      uVar4 = *(undefined4 *)(param_4 + 0x1c);
      LVar7 = CallWindowProcW(*(WNDPROC *)(lVar6 + 0x30),hWnd,param_2,param_3,param_4);
      *(undefined4 *)(param_4 + 0x10) = uVar1;
      *(undefined4 *)(param_4 + 0x14) = uVar3;
      *(undefined4 *)(param_4 + 0x18) = uVar2;
      *(undefined4 *)(param_4 + 0x1c) = uVar4;
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) & 0xfffffffc;
    }
    else {
      LVar7 = CallWindowProcW(*(WNDPROC *)(lVar6 + 0x30),param_1,param_2,param_3,param_4);
    }
  }
  FUN_180006938((undefined8 *)pWVar5);
  return LVar7;
}

