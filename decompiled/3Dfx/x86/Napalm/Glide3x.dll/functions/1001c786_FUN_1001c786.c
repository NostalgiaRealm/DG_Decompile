/*
 * FUN_1001c786 at 1001c786
 * undefined4 * __thiscall FUN_1001c786(void * this, int param_1)
 * Address ranges: 1001c786-1001c829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001c786(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_1000fef4(this,param_1);
  *(undefined ***)this = &PTR_FUN_10059234;
  *(int *)((int)this + 0x1e8) = param_1;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined1 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  uVar1 = FUN_100556a3(0x18000);
  *(undefined4 *)((int)this + 0x228) = uVar1;
  *(undefined4 *)((int)this + 0x22c) = 0x400;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 **)((int)this + 0x234) = (undefined4 *)((int)this + 0x224);
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  FUN_1000793b((undefined4 *)((int)this + 0x330));
  *(undefined4 *)((int)this + 0x1b4) = 0xffffffff;
  FUN_10018264((int)this);
  FUN_1001c82a((int)this);
  return this;
}

