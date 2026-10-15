/*
 * FUN_10046621 at 10046621
 * undefined __thiscall FUN_10046621(void * this, undefined4 * param_1)
 * Address ranges: 10046621-10046649
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046621(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xc);
  FUN_10045dc1(**(int **)this,uVar1,(undefined4 *)**(undefined4 **)((int)this + 8),
               **(uint **)((int)this + 0xc),param_1,uVar1);
  return;
}

