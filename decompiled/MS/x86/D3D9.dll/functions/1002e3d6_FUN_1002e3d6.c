/*
 * FUN_1002e3d6 at 1002e3d6
 * undefined4 * __thiscall FUN_1002e3d6(void * this, undefined4 param_1)
 * Address ranges: 1002e3d6-1002e467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002e3d6(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x14c) = param_1;
  *(undefined ***)this = &PTR_FUN_100d52b4;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  FUN_100cfed0((int *)((int)this + 4),0,0x44);
  FUN_100cfed0((int *)((int)this + 0x48),0,0x44);
  FUN_100cfed0((int *)((int)this + 0x8c),0,0x48);
  FUN_100cfed0((int *)((int)this + 0xd4),0,0x44);
  puVar2 = (undefined4 *)((int)this + 0x118);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  return this;
}

