/*
 * FUN_10022f9e at 10022f9e
 * undefined __thiscall FUN_10022f9e(void * this, undefined4 * param_1)
 * Address ranges: 10022f9e-10022ffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022f9e(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)this;
  FUN_1004fd20(param_1,(undefined4 *)**(undefined4 **)((int)this + 4),iVar1 * 0x3c);
  FUN_10016e1a((int *)**(undefined4 **)((int)this + 0xc),
               (int *)((int)param_1 + iVar1 * 0x3c + 0xfU & 0xfffffff0),
               **(uint **)((int)this + 0x10),-**(int **)((int)this + 0x14));
  return;
}

