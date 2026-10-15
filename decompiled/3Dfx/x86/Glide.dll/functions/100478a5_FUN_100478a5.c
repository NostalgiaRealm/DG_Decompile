/*
 * FUN_100478a5 at 100478a5
 * undefined __thiscall FUN_100478a5(void * this, LPVOID param_1)
 * Address ranges: 100478a5-100478e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100478a5(void *this,LPVOID param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)((int)param_1 + uVar2 * 0x24 + 0x1c);
    if (piVar1 != (int *)0x0) {
      FUN_1004171e(*(void **)((int)this + 0xc),*(int *)((int)this + 0x10),piVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_1004f9b6(param_1);
  return;
}

