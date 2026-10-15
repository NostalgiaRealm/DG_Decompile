/*
 * FUN_10037b03 at 10037b03
 * undefined __thiscall FUN_10037b03(void * this, int * param_1)
 * Address ranges: 10037b03-10037b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10037b03(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_10038774(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_1004f9b6((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_1004f9b6(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_1004f9b6((LPVOID)*piVar1);
  FUN_1004f9b6(piVar1);
  return;
}

