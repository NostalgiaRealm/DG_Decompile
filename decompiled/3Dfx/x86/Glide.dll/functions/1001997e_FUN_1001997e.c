/*
 * FUN_1001997e at 1001997e
 * undefined __thiscall FUN_1001997e(void * this, void * param_1, undefined4 * param_2, HWND param_3, UINT param_4, WPARAM param_5, LONG * param_6)
 * Address ranges: 1001997e-100199e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001997e(void *this,void *param_1,undefined4 *param_2,HWND param_3,UINT param_4,WPARAM param_5,
            LONG *param_6)

{
  if (*(int *)(*(int *)((int)this + 8) + 0x94) == *(int *)((int)this + 0x24)) {
    FUN_1001929f((int)this + -4,param_1,(int)param_2,param_3,param_4,param_5,param_6);
  }
  else if (*(int *)((int)param_1 + 0x822) == 1) {
    FUN_100193ea((void *)((int)this + -4),(int)param_1,param_2,param_3,param_4,param_5,(uint)param_6
                );
  }
  else if (*(int *)((int)param_1 + 0x822) == 2) {
    CallWindowProcW((WNDPROC)param_2[5],param_3,param_4,param_5,(LPARAM)param_6);
  }
  else {
    FUN_100194e8((undefined4 *)((int)this + -4),param_1,(int)param_2,param_3,param_4,param_5,param_6
                );
  }
  return;
}

