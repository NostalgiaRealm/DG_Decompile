/*
 * FUN_1009679d at 1009679d
 * bool __thiscall FUN_1009679d(void * this, int * param_1)
 * Address ranges: 1009679d-100967df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1009679d(void *this,int *param_1)

{
  char cVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  bVar2 = FUN_1009594d(param_1);
  cVar1 = *(char *)((int)param_1 + 0xd5d);
  *(bool *)((int)param_1 + 0xd5d) = bVar2;
  *(byte *)((int)param_1 + 0xd5e) = *(byte *)((int)param_1 + 0xd5e) | bVar2 != (bool)cVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return bVar2;
}

