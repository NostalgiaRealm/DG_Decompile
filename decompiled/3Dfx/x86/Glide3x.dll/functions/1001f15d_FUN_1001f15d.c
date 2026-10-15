/*
 * FUN_1001f15d at 1001f15d
 * undefined4 * __thiscall FUN_1001f15d(void * this, int param_1)
 * Address ranges: 1001f15d-1001f1e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001f15d(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_1000eb11(this,param_1);
  *(undefined ***)this = &PTR_FUN_10055efc;
  *(int *)((int)this + 0x1e8) = param_1;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined1 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  uVar1 = FUN_10052293(0xc000);
  *(undefined4 *)((int)this + 0x228) = uVar1;
  *(undefined4 *)((int)this + 0x22c) = 0x400;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 **)((int)this + 0x234) = (undefined4 *)((int)this + 0x224);
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  FUN_1001a681((int)this);
  return this;
}

