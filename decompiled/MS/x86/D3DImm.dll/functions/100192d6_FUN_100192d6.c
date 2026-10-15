/*
 * FUN_100192d6 at 100192d6
 * undefined __thiscall FUN_100192d6(void * this, int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 param_5)
 * Address ranges: 100192d6-10019339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100192d6(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  FUN_1002d4b0(this,param_1,param_2,1,0,param_3,(undefined4 *)0x0,param_4,'\x01',param_5);
  return;
}

