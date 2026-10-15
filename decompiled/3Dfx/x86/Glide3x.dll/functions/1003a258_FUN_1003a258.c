/*
 * FUN_1003a258 at 1003a258
 * undefined __thiscall FUN_1003a258(void * this, int * param_1)
 * Address ranges: 1003a258-1003a2b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003a258(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_1003aec9(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_10052276((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_10052276(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_10052276((LPVOID)*piVar1);
  FUN_10052276(piVar1);
  return;
}

