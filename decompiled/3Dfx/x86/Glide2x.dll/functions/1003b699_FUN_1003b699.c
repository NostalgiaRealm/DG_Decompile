/*
 * FUN_1003b699 at 1003b699
 * undefined __thiscall FUN_1003b699(void * this, int * param_1)
 * Address ranges: 1003b699-1003b6bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003b699(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_1003953b(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}

