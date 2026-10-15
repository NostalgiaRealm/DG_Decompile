/*
 * FUN_10038b86 at 10038b86
 * undefined4 * __thiscall FUN_10038b86(void * this, undefined4 param_1, undefined1 param_2)
 * Address ranges: 10038b86-10038c2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10038b86(void *this,undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 200) = param_1;
  *(undefined1 *)((int)this + 0xec) = param_2;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__100d57b8;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  FUN_100cfed0((int *)((int)this + 4),0,0x48);
  FUN_100cfed0((int *)((int)this + 0x4c),0,0x44);
  puVar2 = (undefined4 *)((int)this + 0x90);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  return this;
}

