/*
 * FUN_100be369 at 100be369
 * undefined __thiscall FUN_100be369(void * this, LPVOID param_1)
 * Address ranges: 100be369-100be3c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100be369(void *this,LPVOID param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0x24;
    if (*(int *)((int)param_1 + iVar1 + 0x1c) != -1) {
      FUN_100b9fca(*(void **)((int)this + 0xc),*(int **)((int)param_1 + iVar1 + 0x1c),1,(int *)0x0,0
                   ,0);
      FUN_100bf112(*(void **)((int)this + 0x10),(uint *)((int)param_1 + iVar1 + 0x1c));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_100cfd6c(param_1);
  return;
}

