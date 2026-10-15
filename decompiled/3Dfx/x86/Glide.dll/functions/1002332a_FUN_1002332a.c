/*
 * FUN_1002332a at 1002332a
 * undefined __thiscall FUN_1002332a(void * this, undefined4 * param_1)
 * Address ranges: 1002332a-1002338a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002332a(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)this;
  FUN_100500b0(param_1,(undefined4 *)**(undefined4 **)((int)this + 4),iVar1 * 0x3c);
  FUN_100171a8((int *)**(undefined4 **)((int)this + 0xc),
               (int *)((int)param_1 + iVar1 * 0x3c + 0xfU & 0xfffffff0),
               **(uint **)((int)this + 0x10),-**(int **)((int)this + 0x14));
  return;
}

