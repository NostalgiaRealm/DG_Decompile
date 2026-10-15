/*
 * FUN_1003ab92 at 1003ab92
 * undefined __thiscall FUN_1003ab92(void * this, undefined4 * param_1)
 * Address ranges: 1003ab92-1003abba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ab92(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xc);
  FUN_1003a334(**(int **)this,uVar1,(undefined4 *)**(undefined4 **)((int)this + 8),
               **(uint **)((int)this + 0xc),param_1,uVar1);
  return;
}

