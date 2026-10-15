/*
 * FUN_1004b7cb at 1004b7cb
 * undefined __thiscall FUN_1004b7cb(void * this, int * param_1)
 * Address ranges: 1004b7cb-1004b7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b7cb(void *this,int *param_1)

{
  FUN_100398cb(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

