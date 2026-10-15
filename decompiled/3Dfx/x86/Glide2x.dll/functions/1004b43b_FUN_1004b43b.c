/*
 * FUN_1004b43b at 1004b43b
 * undefined __thiscall FUN_1004b43b(void * this, int * param_1)
 * Address ranges: 1004b43b-1004b457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b43b(void *this,int *param_1)

{
  FUN_1003953b(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

