/*
 * FUN_10037bee at 10037bee
 * undefined4 * __thiscall FUN_10037bee(void * this, undefined4 param_1, undefined4 * param_2)
 * Address ranges: 10037bee-10037c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10037bee(void *this,undefined4 param_1,undefined4 *param_2)

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
  *(undefined ***)this = &PTR_FUN_100d56cc;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_100d56c0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa0));
  return this;
}

