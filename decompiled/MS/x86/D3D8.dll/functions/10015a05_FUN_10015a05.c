/*
 * FUN_10015a05 at 10015a05
 * undefined __thiscall FUN_10015a05(void * this, undefined4 * param_1)
 * Address ranges: 10015a05-10015a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015a05(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x11;
  if (*(char *)((int)this + 0x220) == '\0') {
    puVar3 = (undefined4 *)((int)this + 0x104);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)((int)this + 0x14) + 0x5c))((undefined4 *)((int)this + 0x104));
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
    *(undefined1 *)(iVar1 + 0x9399) = 1;
    puVar3 = (undefined4 *)(iVar1 + 0x48e0);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

