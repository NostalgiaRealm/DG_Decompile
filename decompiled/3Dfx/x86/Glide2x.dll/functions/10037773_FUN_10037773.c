/*
 * FUN_10037773 at 10037773
 * undefined __thiscall FUN_10037773(void * this, int * param_1)
 * Address ranges: 10037773-100377cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10037773(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_100383e4(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_1004f626((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_1004f626(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_1004f626((LPVOID)*piVar1);
  FUN_1004f626(piVar1);
  return;
}

