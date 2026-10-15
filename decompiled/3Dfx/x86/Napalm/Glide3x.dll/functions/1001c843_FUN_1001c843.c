/*
 * FUN_1001c843 at 1001c843
 * undefined __thiscall FUN_1001c843(void * this, byte param_1, byte param_2)
 * Address ranges: 1001c843-1001c876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001c843(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1001c91d(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_1001c8fd((int)this);
    FUN_1001c880(this,param_1,param_2);
  }
  return;
}

