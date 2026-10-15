/*
 * FUN_10093f63 at 10093f63
 * undefined __thiscall FUN_10093f63(void * this, LPVOID param_1)
 * Address ranges: 10093f63-10093fa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10093f63(void *this,LPVOID param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)((int)param_1 + uVar2 * 0x24 + 0x1c);
    if (piVar1 != (int *)0x0) {
      FUN_1009291f(*(void **)((int)this + 0xc),*(int *)((int)this + 0x10),piVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_100ad48c(param_1);
  return;
}

