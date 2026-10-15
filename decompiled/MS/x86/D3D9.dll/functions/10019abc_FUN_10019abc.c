/*
 * FUN_10019abc at 10019abc
 * undefined __thiscall FUN_10019abc(void * this, undefined4 * param_1)
 * Address ranges: 10019abc-10019b0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019abc(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x11;
  if (*(char *)((int)this + 0x3c4) == '\0') {
    puVar3 = (undefined4 *)((int)this + 0x2a8);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)((int)this + 0x14) + 0x5c))((undefined4 *)((int)this + 0x2a8));
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4);
    *(undefined1 *)(iVar1 + 0xac15) = 1;
    puVar3 = (undefined4 *)(iVar1 + 0x49f0);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

