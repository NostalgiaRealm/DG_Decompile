/*
 * FUN_10007de0 at 10007de0
 * undefined __thiscall FUN_10007de0(void * this, undefined4 * param_1)
 * Address ranges: 10007de0-10007e30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007de0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x12;
  if (*(char *)((int)this + 0x224) == '\0') {
    puVar3 = (undefined4 *)((int)this + 0x104);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)((int)this + 0x14) + 100))((undefined4 *)((int)this + 0x104));
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
    *(undefined1 *)(iVar1 + 0xa59) = 1;
    puVar3 = (undefined4 *)(iVar1 + 0x90c);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

