/*
 * FUN_1003d666 at 1003d666
 * undefined __thiscall FUN_1003d666(void * this, int * param_1)
 * Address ranges: 1003d666-1003d6c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d666(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_1003e2d7(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_10055686((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_10055686(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_10055686((LPVOID)*piVar1);
  FUN_10055686(piVar1);
  return;
}

