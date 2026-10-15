/*
 * FUN_10020f74 at 10020f74
 * undefined4 * __thiscall FUN_10020f74(void * this, int param_1)
 * Address ranges: 10020f74-10020fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10020f74(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0x9c) != 0) {
    do {
      puVar1 = (undefined4 *)(uVar2 * 0x28 + *(int *)((int)this + 0x98));
      if (param_1 == *(int *)*puVar1) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x9c));
  }
  return (undefined4 *)0x0;
}

