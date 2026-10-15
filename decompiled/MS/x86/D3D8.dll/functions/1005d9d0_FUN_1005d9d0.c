/*
 * FUN_1005d9d0 at 1005d9d0
 * undefined4 * __thiscall FUN_1005d9d0(void * this, undefined4 param_1)
 * Address ranges: 1005d9d0-1005daef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1005d9d0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_1007676a(this,param_1);
  *(undefined ***)this = &PTR_FUN_100b28a0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_100b289c;
  *(undefined4 *)((int)this + 0x1cf00) = 0;
  *(undefined4 *)((int)this + 0x1cf04) = 0;
  *(undefined4 *)((int)this + 0x1cfb0) = 0;
  *(undefined4 *)((int)this + 0x1cfb4) = 0;
  *(undefined4 *)((int)this + 0x1cfb8) = 0;
  *(undefined4 *)((int)this + 0x1cfbc) = 0;
  *(undefined4 *)((int)this + 0x1cfc0) = 0;
  *(undefined4 *)((int)this + 0x1cfc4) = 0;
  uVar1 = FUN_100ad4a9(0x80);
  *(undefined4 *)((int)this + 0x1cfc8) = uVar1;
  *(undefined4 *)((int)this + 0x1cfcc) = 8;
  *(undefined4 *)((int)this + 0x1cfd0) = 0;
  *(undefined4 *)((int)this + 0x1cfd4) = 0;
  *(undefined1 *)((int)this + 0x1cfd8) = 0;
  *(undefined4 *)((int)this + 0x1d1dc) = 0;
  *(undefined4 *)((int)this + 0x1d1e0) = 0;
  uVar1 = FUN_100ad4a9(0x4000);
  *(undefined4 *)((int)this + 0x1d1e4) = uVar1;
  *(undefined4 *)((int)this + 0x1d1e8) = 0x100;
  *(undefined4 *)((int)this + 0x1d1ec) = 0;
  *(undefined4 *)((int)this + 0x1d1f0) = 0;
  *(undefined4 *)((int)this + 0x1d1f4) = 0;
  *(undefined4 *)((int)this + 0x1d1f8) = 0;
  *(undefined4 *)((int)this + 0x1d1fc) = 0;
  *(undefined4 *)((int)this + 0x1d200) = 0;
  FUN_100ada8e((int *)((int)this + 0x1cf08),0,0xa0);
  *(undefined4 *)((int)this + 0x1cfa8) = 0;
  *(undefined4 *)((int)this + 0x1cfac) = 0;
  FUN_100ada8e((int *)((int)this + 0x1cfdc),0,0x100);
  FUN_100ada8e((int *)((int)this + 0x1d0dc),0,0x100);
  FUN_100ada8e((int *)((int)this + 0x100a8),0,0xc180);
  return this;
}

