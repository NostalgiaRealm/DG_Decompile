/*
 * FUN_100250f3 at 100250f3
 * undefined __thiscall FUN_100250f3(void * this, undefined4 * param_1)
 * Address ranges: 100250f3-1002511b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100250f3(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xc);
  FUN_10024895(**(int **)this,uVar1,(undefined4 *)**(undefined4 **)((int)this + 8),
               **(uint **)((int)this + 0xc),param_1,uVar1);
  return;
}

