/*
 * FUN_100195f0 at 100195f0
 * undefined __thiscall FUN_100195f0(void * this, void * param_1, undefined4 * param_2, HWND param_3, UINT param_4, WPARAM param_5, LONG * param_6)
 * Address ranges: 100195f0-10019656
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100195f0(void *this,void *param_1,undefined4 *param_2,HWND param_3,UINT param_4,WPARAM param_5,
            LONG *param_6)

{
  if (*(int *)(*(int *)((int)this + 8) + 0x94) == *(int *)((int)this + 0x24)) {
    FUN_10018f11((int)this + -4,param_1,(int)param_2,param_3,param_4,param_5,param_6);
  }
  else if (*(int *)((int)param_1 + 0x822) == 1) {
    FUN_1001905c((void *)((int)this + -4),(int)param_1,param_2,param_3,param_4,param_5,(uint)param_6
                );
  }
  else if (*(int *)((int)param_1 + 0x822) == 2) {
    CallWindowProcW((WNDPROC)param_2[5],param_3,param_4,param_5,(LPARAM)param_6);
  }
  else {
    FUN_1001915a((undefined4 *)((int)this + -4),param_1,(int)param_2,param_3,param_4,param_5,param_6
                );
  }
  return;
}

