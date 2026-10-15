/*
 * FUN_1009bbde at 1009bbde
 * undefined __thiscall FUN_1009bbde(void * this, int * param_1)
 * Address ranges: 1009bbde-1009bc3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009bbde(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_1009c891(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_100ad48c((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_100ad48c(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_100ad48c((LPVOID)*piVar1);
  FUN_100ad48c(piVar1);
  return;
}

