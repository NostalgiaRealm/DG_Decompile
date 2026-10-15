/*
 * FUN_100c9ad2 at 100c9ad2
 * undefined1 __thiscall FUN_100c9ad2(void * this, undefined1 param_1)
 * Address ranges: 100c9ad2-100c9b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100c9ad2(void *this,undefined1 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)this + 4) + 0x172c0);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x1c));
  uVar1 = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x34) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x1c));
  return uVar1;
}

