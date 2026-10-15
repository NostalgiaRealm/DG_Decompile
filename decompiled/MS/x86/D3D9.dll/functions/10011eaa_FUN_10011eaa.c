/*
 * FUN_10011eaa at 10011eaa
 * undefined4 * __thiscall FUN_10011eaa(void * this)
 * Address ranges: 10011eaa-10011edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10011eaa(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 in_stack_00000014;
  undefined1 in_stack_00000018;
  
  *(undefined1 *)((int)this + 0x29) = in_stack_00000014;
  *(undefined1 *)((int)this + 0x2a) = in_stack_00000018;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2b) = 0x100;
  puVar2 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

