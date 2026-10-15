/*
 * FUN_10037cb6 at 10037cb6
 * undefined __thiscall FUN_10037cb6(void * this, LPVOID param_1)
 * Address ranges: 10037cb6-10037d0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10037cb6(void *this,LPVOID param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0x24;
    if (*(int *)((int)param_1 + iVar1 + 0x1c) != -1) {
      FUN_1003c73a(*(void **)((int)this + 0xc),*(int **)((int)param_1 + iVar1 + 0x1c),1,(int *)0x0,0
                   ,0);
      FUN_10038a1d(*(void **)((int)this + 0x10),(uint *)((int)param_1 + iVar1 + 0x1c));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_1004f9b6(param_1);
  return;
}

