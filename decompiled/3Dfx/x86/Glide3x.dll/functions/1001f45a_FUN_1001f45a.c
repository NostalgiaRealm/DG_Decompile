/*
 * FUN_1001f45a at 1001f45a
 * undefined __thiscall FUN_1001f45a(void * this, byte param_1, byte param_2)
 * Address ranges: 1001f45a-1001f49d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001f45a(void *this,byte param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1001f2d1(this,param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_1000c6f4(*(int *)((int)this + 0x1e8));
    FUN_1001f292((int)this);
    FUN_1001f1e5(this,param_1,param_2);
    FUN_1000c7aa(*(int *)((int)this + 0x1e8));
  }
  return;
}

