/*
 * FUN_10062a22 at 10062a22
 * undefined4 __thiscall FUN_10062a22(void * this, int param_1, int param_2)
 * Address ranges: 10062a22-10062a44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10062a22(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
  (**(code **)(*piVar1 + 0x3c))
            (piVar1,*(undefined4 *)((int)this + 0x74),*(int *)((int)this + 0x2c) * param_2 + param_1
            );
  return 0;
}

