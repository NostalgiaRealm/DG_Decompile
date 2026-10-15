/*
 * FUN_10096bdc at 10096bdc
 * undefined __thiscall FUN_10096bdc(void * this, int * param_1, int * param_2)
 * Address ranges: 10096bdc-10096c50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10096bdc(void *this,int *param_1,int *param_2)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  bVar1 = FUN_1009594d(param_1);
  if ((*(char *)((int)param_1 + 0xd5e) != '\0') || (bVar1 != (bool)*(char *)((int)param_1 + 0xd5d)))
  {
    if (!bVar1) {
      param_1[0xd] = 0;
    }
    FUN_10095ab0(param_1,(int *)0x0,param_2);
    *(char *)((int)param_1 + 0xd5d) = bVar1;
    *(undefined1 *)((int)param_1 + 0xd5e) = 0;
    (**(code **)(*(int *)this + 0x38))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

