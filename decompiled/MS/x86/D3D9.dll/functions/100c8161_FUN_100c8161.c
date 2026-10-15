/*
 * FUN_100c8161 at 100c8161
 * undefined __thiscall FUN_100c8161(void * this, int * param_1)
 * Address ranges: 100c8161-100c817d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c8161(void *this,int *param_1)

{
  FUN_100c10d6(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

