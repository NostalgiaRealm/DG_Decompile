/*
 * FUN_10092a86 at 10092a86
 * undefined __thiscall FUN_10092a86(void * this, int param_1, int * param_2)
 * Address ranges: 10092a86-10092aca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10092a86(void *this,int param_1,int *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  if (param_2 == *(int **)(param_1 * 0x1510 + 0x7c4 + (int)this)) {
    *(undefined4 *)(param_1 * 0x1510 + 0x7c4 + (int)this) = 0;
  }
  (**(code **)(*param_2 + 8))(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

