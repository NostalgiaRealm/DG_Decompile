/*
 * FUN_1003a40b at 1003a40b
 * undefined __thiscall FUN_1003a40b(void * this, LPVOID param_1)
 * Address ranges: 1003a40b-1003a462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003a40b(void *this,LPVOID param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0x24;
    if (*(int *)((int)param_1 + iVar1 + 0x1c) != -1) {
      FUN_1003ee8f(*(void **)((int)this + 0xc),*(int **)((int)param_1 + iVar1 + 0x1c),1,(int *)0x0,0
                   ,0);
      FUN_1003b172(*(void **)((int)this + 0x10),(uint *)((int)param_1 + iVar1 + 0x1c));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_10052276(param_1);
  return;
}

