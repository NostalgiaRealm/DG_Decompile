/*
 * FUN_1002b7e1 at 1002b7e1
 * undefined __thiscall FUN_1002b7e1(void * this, byte param_1, byte param_2)
 * Address ranges: 1002b7e1-1002b81e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002b7e1(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1002b6c4(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_10018d00(*(int *)((int)this + 0x3c));
    FUN_1002b691((int)this);
    FUN_1002b5f6(this,param_1,param_2);
    FUN_10018db6(*(int *)((int)this + 0x3c));
  }
  return;
}

