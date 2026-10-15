/*
 * FUN_10046c6e at 10046c6e
 * undefined __thiscall FUN_10046c6e(void * this, undefined4 * param_1)
 * Address ranges: 10046c6e-10046cbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046c6e(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xc);
  puVar2 = FUN_10045dc1(**(int **)this,uVar1,(undefined4 *)**(undefined4 **)((int)this + 8),
                        **(uint **)((int)this + 0xc),param_1,uVar1);
  FUN_100439d0((int *)**(undefined4 **)((int)this + 0x14),(int *)((int)puVar2 + 0xfU & 0xfffffff0),
               **(uint **)((int)this + 0x18),-**(int **)((int)this + 0x1c),
               **(char **)((int)this + 0x20));
  return;
}

