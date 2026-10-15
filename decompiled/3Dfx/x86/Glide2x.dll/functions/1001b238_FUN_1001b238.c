/*
 * FUN_1001b238 at 1001b238
 * undefined4 * __thiscall FUN_1001b238(void * this, undefined4 param_1)
 * Address ranges: 1001b238-1001b2b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001b238(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_grCheckForRoom_100539b0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined2 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0x126) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  puVar2 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_100501d1((int *)((int)this + 0x40),0,0x70);
  FUN_100501d1((int *)((int)this + 0xb0),0,0x70);
  return this;
}

