/*
 * FUN_1009bd91 at 1009bd91
 * undefined __thiscall FUN_1009bd91(void * this, LPVOID param_1)
 * Address ranges: 1009bd91-1009bde8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009bd91(void *this,LPVOID param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0x24;
    if (*(int *)((int)param_1 + iVar1 + 0x1c) != -1) {
      FUN_10097999(*(void **)((int)this + 0xc),*(int **)((int)param_1 + iVar1 + 0x1c),1,(int *)0x0,0
                   ,0);
      FUN_1009cb3a(*(void **)((int)this + 0x10),(uint *)((int)param_1 + iVar1 + 0x1c));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_100ad48c(param_1);
  return;
}

