/*
 * FUN_1002bb6b at 1002bb6b
 * undefined __thiscall FUN_1002bb6b(void * this, byte param_1, byte param_2)
 * Address ranges: 1002bb6b-1002bba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002bb6b(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1002ba4e(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_1001908e(*(int *)((int)this + 0x3c));
    FUN_1002ba1b((int)this);
    FUN_1002b980(this,param_1,param_2);
    FUN_10019144(*(int *)((int)this + 0x3c));
  }
  return;
}

