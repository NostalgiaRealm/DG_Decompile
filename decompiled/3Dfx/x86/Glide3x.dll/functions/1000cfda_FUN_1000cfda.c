/*
 * FUN_1000cfda at 1000cfda
 * undefined __thiscall FUN_1000cfda(void * this, void * param_1, undefined4 * param_2, HWND param_3, UINT param_4, WPARAM param_5, LONG * param_6)
 * Address ranges: 1000cfda-1000d040
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000cfda(void *this,void *param_1,undefined4 *param_2,HWND param_3,UINT param_4,WPARAM param_5,
            LONG *param_6)

{
  if (*(int *)(*(int *)((int)this + 8) + 0x94) == *(int *)((int)this + 0x24)) {
    FUN_1000c905((int)this + -4,param_1,(int)param_2,param_3,param_4,param_5,param_6);
  }
  else if (*(int *)((int)param_1 + 0x822) == 1) {
    FUN_1000ca50((void *)((int)this + -4),(int)param_1,param_2,param_3,param_4,param_5,(uint)param_6
                );
  }
  else if (*(int *)((int)param_1 + 0x822) == 2) {
    CallWindowProcW((WNDPROC)param_2[5],param_3,param_4,param_5,(LPARAM)param_6);
  }
  else {
    FUN_1000cb44((undefined4 *)((int)this + -4),param_1,(int)param_2,param_3,param_4,param_5,param_6
                );
  }
  return;
}

