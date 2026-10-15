/*
 * FUN_10097092 at 10097092
 * LPRECT __thiscall FUN_10097092(void * this, LPRECT param_1, int param_2)
 * Address ranges: 10097092-100970f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT __thiscall FUN_10097092(void *this,LPRECT param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_100ada8e(&param_1->left,0,0x30);
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar2 = 0;
  if (*(uint *)((int)this + 0x4bc) != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x4b8) + uVar2 * 4);
      if (*piVar1 == param_2) {
        FUN_10095835((int)piVar1,param_1,(int *)0x0);
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x4bc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return param_1;
}

