/*
 * FUN_1009e1e0 at 1009e1e0
 * undefined4 * __thiscall FUN_1009e1e0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined1 param_8)
 * Address ranges: 1009e1e0-1009e287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1009e1e0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x6c) = 0;
  iVar1 = (int)this + 0x68;
  *(undefined4 *)((int)this + 0x70) = 0;
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  *(int *)((int)this + 0x74) = iVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x38) = param_5;
  *(undefined4 *)((int)this + 0x3c) = param_6;
  *(undefined4 *)((int)this + 0x40) = param_7;
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined1 *)((int)this + 0x60) = param_8;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x61) = 0;
  *(uint *)((int)this + 0x2c) = -(uint)(param_1 != 0) & param_1 + 0x66b4U;
  *(undefined4 *)((int)this + 0x30) = 6;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_100d7238;
  *(undefined ***)((int)this + 0x68) = &PTR_FUN_100d7200;
  return this;
}

