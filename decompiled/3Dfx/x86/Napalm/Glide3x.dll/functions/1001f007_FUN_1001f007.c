/*
 * FUN_1001f007 at 1001f007
 * undefined __thiscall FUN_1001f007(void * this, byte param_1, byte param_2)
 * Address ranges: 1001f007-1001f04a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001f007(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1001ee7e(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_1000cf4c(*(int *)((int)this + 0x1e8));
    FUN_1001ee3f((int)this);
    FUN_1001ed92(this,param_1,param_2);
    FUN_1000d002(*(int *)((int)this + 0x1e8));
  }
  return;
}

