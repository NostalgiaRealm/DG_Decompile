/*
 * FUN_1001a106 at 1001a106
 * undefined __thiscall FUN_1001a106(void * this, int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1001a106-1001a142
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a106(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = 0;
  *param_2 = 0;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    *param_2 = *(undefined4 *)((int)this + 0x98);
    *param_3 = *(undefined4 *)((int)this + 0x9c);
  }
  return;
}

