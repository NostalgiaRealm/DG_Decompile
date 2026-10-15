/*
 * FUN_100b65b6 at 100b65b6
 * undefined __thiscall FUN_100b65b6(void * this, LPVOID param_1)
 * Address ranges: 100b65b6-100b65f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b65b6(void *this,LPVOID param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)((int)param_1 + uVar2 * 0x24 + 0x1c);
    if (piVar1 != (int *)0x0) {
      FUN_100b4b23(*(void **)((int)this + 0xc),*(int *)((int)this + 0x10),piVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_100cfd6c(param_1);
  return;
}

