/*
 * FUN_10026f51 at 10026f51
 * undefined __thiscall FUN_10026f51(void * this, byte param_1, byte param_2)
 * Address ranges: 10026f51-10026f84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026f51(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1002701c(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_10027002((int)this);
    FUN_10026f8e(this,param_1,param_2);
  }
  return;
}

