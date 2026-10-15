/*
 * FUN_10022ddb at 10022ddb
 * undefined __thiscall FUN_10022ddb(void * this, undefined4 param_1)
 * Address ranges: 10022ddb-10022e24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022ddb(void *this,undefined4 param_1)

{
  HWND pHVar1;
  int *piVar2;
  
  pHVar1 = FUN_100245b0((void *)((int)this + -0x10),'\0');
  if (pHVar1 != (HWND)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x108) + 0x30))(pHVar1,0,0,4,2,2,0,0,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34))(param_1);
      (**(code **)(*piVar2 + 0x10))();
    }
  }
  return;
}

