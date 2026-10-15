/*
 * FUN_180007784 at 180007784
 * ulonglong __fastcall FUN_180007784(HMODULE param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180007784-180007919
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180007784(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong in_RAX;
  undefined7 extraout_var;
  ulonglong uVar5;
  longlong *plVar6;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  HMODULE hLibModule;
  uint uVar8;
  bool bVar9;
  undefined7 uVar7;
  
  uVar8 = (uint)param_4;
  bVar9 = false;
  if (((char)param_1[0x19].unused == '\0') || ((param_2 != 0 && (param_2 != param_1[0x16].unused))))
  {
    uVar5 = in_RAX & 0xffffffffffffff00;
  }
  else {
    *(undefined1 *)&param_1[0x19].unused = 0;
    iVar2 = param_1[0x18].unused;
    hLibModule = param_1;
    while (iVar2 != 0) {
      hLibModule = (HMODULE)0x1;
      Sleep(1);
      uVar8 = (uint)param_4;
      iVar2 = param_1[0x18].unused;
    }
    if (*(longlong *)(param_1 + 0x1c) != 0) {
      (**(code **)(param_1 + 0x20))();
      (**(code **)(**(longlong **)(param_1 + 6) + 0x40))();
      hLibModule = *(HMODULE *)(param_1 + 0x1c);
      FreeLibrary(hLibModule);
      *(undefined8 *)(param_1 + 0x1c) = 0;
    }
    cVar4 = FUN_1800057b0((ulonglong)hLibModule);
    if ((cVar4 == '\0') || (*(char *)((longlong)&param_1[0x19].unused + 1) != '\0')) {
      lVar3 = *(longlong *)(param_1 + 6);
      if (*(char *)(lVar3 + 0xee) == '\0') {
        ShowCursor(1);
        *(undefined1 *)(lVar3 + 0xee) = 1;
      }
      if ((*(longlong *)(*(longlong *)(param_1 + 6) + 0xa0) != 0) &&
         (plVar6 = FUN_180004efc(*(longlong *)(param_1 + 0xc),
                                 *(longlong *)(*(longlong *)(param_1 + 6) + 0xa0)),
         plVar6 != (longlong *)0x0)) {
        bVar9 = *(int *)((longlong)plVar6 + 0x3c) != 0;
      }
      FUN_180010c14((longlong)param_1,'\0','\0',uVar8);
      if (*(HWND *)(*(longlong *)(param_1 + 6) + 0xa0) != (HWND)0x0) {
        FUN_180004c8c(*(longlong *)(param_1 + 0xc),*(HWND *)(*(longlong *)(param_1 + 6) + 0xa0),
                      -(ulonglong)(param_1 != (HMODULE)0x0) & (ulonglong)(param_1 + 2));
      }
      (**(code **)(**(longlong **)(param_1 + 6) + 0x18))();
      if (*(longlong *)(param_1 + 0xe) != 0) {
        PostMessageW(*(HWND *)(*(longlong *)(param_1 + 6) + 0xa0),0x401,0,0);
        while (*(longlong *)(param_1 + 0x12) != 0) {
          Sleep(1);
        }
        *(undefined8 *)(param_1 + 0xe) = 0;
      }
      FUN_180004890(*(longlong *)(param_1 + 0xc));
      lVar3 = *(longlong *)(param_1 + 0xc);
      piVar1 = (int *)(lVar3 + 0x160);
      *piVar1 = *piVar1 + -1;
      uVar7 = extraout_var_00;
      if ((*piVar1 == 0) && (*(char *)(lVar3 + 0x825) != '\0')) {
        SetThreadExecutionState(*(EXECUTION_STATE *)(lVar3 + 0x15c));
        *(undefined4 *)(lVar3 + 0x15c) = 0;
        uVar7 = extraout_var_01;
      }
      param_1[0x16].unused = 0;
      if (!bVar9) {
        FreeLibrary(DAT_18006d9d0);
        uVar7 = extraout_var_02;
      }
    }
    else {
      *(undefined1 *)&param_1[0x19].unused = 1;
      uVar7 = extraout_var;
    }
    uVar5 = CONCAT71(uVar7,1);
  }
  return uVar5;
}

