/*
 * FUN_1004d919 at 1004d919
 * undefined4 * __thiscall FUN_1004d919(void * this, undefined4 param_1, undefined4 * param_2)
 * Address ranges: 1004d919-1004d9ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004d919(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_100d5e80;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined ***)this = &PTR_FUN_100d5a00;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_100d59f4;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined ***)((int)this + 0x88) = &PTR_FUN_100d5e80;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa8));
  return this;
}

