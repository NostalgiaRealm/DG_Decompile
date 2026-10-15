/*
 * FUN_100039aa at 100039aa
 * LRESULT __stdcall FUN_100039aa(HWND param_1, UINT param_2, WPARAM param_3, int param_4)
 * Address ranges: 100039aa-10003a4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_100039aa(HWND param_1,UINT param_2,WPARAM param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  WNDPROC this;
  int *piVar5;
  LRESULT LVar6;
  
  this = FUN_10002bb5();
  piVar5 = FUN_10003897(this,(int)param_1);
  LVar6 = 0;
  if (piVar5 != (int *)0x0) {
    if (((param_2 == 0x46) || (param_2 == 0x47)) && ((*(byte *)(param_4 + 0x18) & 3) == 0)) {
      uVar1 = *(undefined4 *)(param_4 + 8);
      uVar2 = *(undefined4 *)(param_4 + 0xc);
      uVar3 = *(undefined4 *)(param_4 + 0x14);
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      LVar6 = CallWindowProcW((WNDPROC)piVar5[7],param_1,param_2,param_3,param_4);
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) & 0xfffffffc;
      *(undefined4 *)(param_4 + 0xc) = uVar2;
      *(undefined4 *)(param_4 + 0x10) = uVar4;
      *(undefined4 *)(param_4 + 0x14) = uVar3;
      *(undefined4 *)(param_4 + 8) = uVar1;
    }
    else {
      LVar6 = CallWindowProcW((WNDPROC)piVar5[7],param_1,param_2,param_3,param_4);
    }
  }
  FUN_10002c3a((undefined4 *)this);
  return LVar6;
}

