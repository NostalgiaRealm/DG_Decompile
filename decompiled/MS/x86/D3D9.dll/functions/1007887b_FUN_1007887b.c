/*
 * FUN_1007887b at 1007887b
 * undefined4 __thiscall FUN_1007887b(void * this, int param_1, int param_2)
 * Address ranges: 1007887b-1007889d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1007887b(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
  (**(code **)(*piVar1 + 0x3c))
            (piVar1,*(undefined4 *)((int)this + 0x74),*(int *)((int)this + 0x2c) * param_2 + param_1
            );
  return 0;
}

