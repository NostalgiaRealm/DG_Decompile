/*
 * FUN_10012450 at 10012450
 * undefined __thiscall FUN_10012450(void * this, undefined4 param_1)
 * Address ranges: 10012450-10012476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012450(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  (**(code **)(**(int **)(iVar1 + 0x50) + 0x18))
            (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x50) = param_1;
  return;
}

