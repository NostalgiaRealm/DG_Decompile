/*
 * FUN_180016168 at 180016168
 * undefined8 __fastcall FUN_180016168(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180016168-1800162d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180016168(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  HWND pHVar4;
  EXECUTION_STATE EVar5;
  BOOL BVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar10 = (uint)param_4;
  bVar11 = false;
  if (*(char *)(param_1 + 100) == '\0') {
    uVar9 = in_RAX & 0xffffffffffffff00;
  }
  else {
    *(undefined1 *)(param_1 + 100) = 0;
    iVar2 = *(int *)(param_1 + 0x60);
    while (iVar2 != 0) {
      Sleep(1);
      uVar10 = (uint)param_4;
      iVar2 = *(int *)(param_1 + 0x60);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (**(code **)(param_1 + 0x80))();
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
      FreeLibrary(*(HMODULE *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(char *)(lVar3 + 0xee) == '\0') {
      ShowCursor(1);
      *(undefined1 *)(lVar3 + 0xee) = 1;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if ((lVar3 != 0) &&
       (plVar7 = FUN_1800052d4(*(longlong *)(param_1 + 0x30),lVar3), plVar7 != (longlong *)0x0)) {
      bVar11 = *(int *)((longlong)plVar7 + 0x3c) != 0;
    }
    FUN_18001e278(param_1,'\0','\0',uVar10);
    pHVar4 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if (pHVar4 != (HWND)0x0) {
      FUN_180005064(*(longlong *)(param_1 + 0x30),pHVar4,-(ulonglong)(param_1 != 0) & param_1 + 8U);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (*(longlong *)(param_1 + 0x38) != 0) {
      PostMessageW(*(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0),0x401,0,0);
      while (*(longlong *)(param_1 + 0x48) != 0) {
        Sleep(1);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    uVar8 = FUN_180004c68(*(longlong *)(param_1 + 0x30));
    lVar3 = *(longlong *)(param_1 + 0x30);
    piVar1 = (int *)(lVar3 + 0x160);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (*(char *)(lVar3 + 0x825) != '\0')) {
      EVar5 = SetThreadExecutionState(*(EXECUTION_STATE *)(lVar3 + 0x15c));
      uVar8 = CONCAT44(extraout_var,EVar5);
      *(undefined4 *)(lVar3 + 0x15c) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (!bVar11) {
      BVar6 = FreeLibrary(DAT_18006c870);
      uVar8 = CONCAT44(extraout_var_00,BVar6);
    }
    uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  return uVar9;
}

