/*
 * FUN_10049ffd at 10049ffd
 * undefined __thiscall FUN_10049ffd(void * this, LPVOID param_1)
 * Address ranges: 10049ffd-1004a03a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049ffd(void *this,LPVOID param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)((int)param_1 + uVar2 * 0x24 + 0x1c);
    if (piVar1 != (int *)0x0) {
      FUN_10043e76(*(void **)((int)this + 0xc),*(int *)((int)this + 0x10),piVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_10052276(param_1);
  return;
}

