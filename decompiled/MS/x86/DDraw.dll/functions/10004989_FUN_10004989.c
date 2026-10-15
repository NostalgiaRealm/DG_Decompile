/*
 * FUN_10004989 at 10004989
 * undefined4 * __thiscall FUN_10004989(void * this, undefined1 param_1)
 * Address ranges: 10004989-100049be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10004989(void *this,undefined1 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 in_stack_00000014;
  undefined1 in_stack_00000018;
  
  *(undefined1 *)((int)this + 0x29) = in_stack_00000014;
  *(undefined1 *)((int)this + 0x2a) = in_stack_00000018;
  *(undefined1 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2b) = 0;
  puVar2 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

