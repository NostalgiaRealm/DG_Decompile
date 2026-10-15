/*
 * FUN_100be1b6 at 100be1b6
 * undefined __thiscall FUN_100be1b6(void * this, int * param_1)
 * Address ranges: 100be1b6-100be212
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100be1b6(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_100bee69(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_100cfd6c((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_100cfd6c(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_100cfd6c((LPVOID)*piVar1);
  FUN_100cfd6c(piVar1);
  return;
}

