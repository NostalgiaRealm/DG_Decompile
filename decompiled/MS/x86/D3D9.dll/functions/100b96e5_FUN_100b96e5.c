/*
 * FUN_100b96e5 at 100b96e5
 * LPRECT __thiscall FUN_100b96e5(void * this, LPRECT param_1, int param_2)
 * Address ranges: 100b96e5-100b9747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT __thiscall FUN_100b96e5(void *this,LPRECT param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_100cfed0(&param_1->left,0,0x30);
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar2 = 0;
  if (*(uint *)((int)this + 0x4bc) != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x4b8) + uVar2 * 4);
      if (*piVar1 == param_2) {
        FUN_100b7e88((int)piVar1,param_1,(int *)0x0);
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x4bc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return param_1;
}

