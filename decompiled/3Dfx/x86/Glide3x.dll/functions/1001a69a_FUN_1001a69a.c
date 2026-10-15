/*
 * FUN_1001a69a at 1001a69a
 * undefined __thiscall FUN_1001a69a(void * this, byte param_1, byte param_2)
 * Address ranges: 1001a69a-1001a6cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a69a(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1001a774(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_1001a754((int)this);
    FUN_1001a6d7(this,param_1,param_2);
  }
  return;
}

