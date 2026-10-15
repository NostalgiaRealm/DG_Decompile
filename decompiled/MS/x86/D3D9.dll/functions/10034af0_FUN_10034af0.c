/*
 * FUN_10034af0 at 10034af0
 * undefined __thiscall FUN_10034af0(void * this, int * param_1, int param_2, int * param_3)
 * Address ranges: 10034af0-10034ba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10034af0(void *this,int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_stack_0000001c;
  
  if (param_1 < &DAT_00000010) {
    FUN_10032e50(this,0,0,0);
    if (param_3 != (int *)0x0) {
      iVar1 = (**(code **)(*param_3 + 4))();
      if (iVar1 == 1) {
        piVar2 = param_3 + -7;
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = param_3 + -0x22;
        (**(code **)(param_3[-0x22] + 0x7c))(in_stack_0000001c);
        piVar2 = (int *)0x0;
      }
      *(int **)((int)this + (int)param_1 * 4 + 0xf86c) = piVar3;
      *(int **)((int)this + (int)param_1 * 4 + 0xf8ac) = piVar2;
      FUN_10052810(this,param_1,param_2,piVar3,piVar2);
      return;
    }
    FUN_10052810(this,param_1,param_2,(int *)0x0,(int *)0x0);
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0xf86c) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0xf8ac) = 0;
  }
  return;
}

