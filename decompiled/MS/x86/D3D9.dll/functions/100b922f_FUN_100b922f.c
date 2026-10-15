/*
 * FUN_100b922f at 100b922f
 * undefined __thiscall FUN_100b922f(void * this, int * param_1, int * param_2)
 * Address ranges: 100b922f-100b92a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b922f(void *this,int *param_1,int *param_2)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  bVar1 = FUN_100b7fa0(param_1);
  if ((*(char *)((int)param_1 + 0xd5e) != '\0') || (bVar1 != (bool)*(char *)((int)param_1 + 0xd5d)))
  {
    if (!bVar1) {
      param_1[0xd] = 0;
    }
    FUN_100b8103(param_1,(int *)0x0,param_2);
    *(char *)((int)param_1 + 0xd5d) = bVar1;
    *(undefined1 *)((int)param_1 + 0xd5e) = 0;
    (**(code **)(*(int *)this + 0x38))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

