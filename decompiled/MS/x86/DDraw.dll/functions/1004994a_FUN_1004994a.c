/*
 * FUN_1004994a at 1004994a
 * undefined __thiscall FUN_1004994a(void * this, int * param_1, int * param_2)
 * Address ranges: 1004994a-100499be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004994a(void *this,int *param_1,int *param_2)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  bVar1 = FUN_100486bb(param_1);
  if ((*(char *)((int)param_1 + 0xd5e) != '\0') || (bVar1 != (bool)*(char *)((int)param_1 + 0xd5d)))
  {
    if (!bVar1) {
      param_1[0xd] = 0;
    }
    FUN_1004881e(param_1,(int *)0x0,param_2);
    *(char *)((int)param_1 + 0xd5d) = bVar1;
    *(undefined1 *)((int)param_1 + 0xd5e) = 0;
    (**(code **)(*(int *)this + 0x38))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

