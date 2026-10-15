/*
 * FUN_10018d90 at 10018d90
 * undefined __thiscall FUN_10018d90(void * this, uint param_1, int param_2, int * param_3, uint param_4, uint param_5, int * param_6, undefined4 param_7)
 * Address ranges: 10018d90-10018e36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10018d90(void *this,uint param_1,int param_2,int *param_3,uint param_4,uint param_5,int *param_6
            ,undefined4 param_7)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  
  if (param_1 < 8) {
    FUN_10017820(this,0,0,0);
    if (param_3 != (int *)0x0) {
      iVar1 = (**(code **)(*param_3 + 4))();
      if (iVar1 == 1) {
        puVar2 = (uint *)(param_3 + -7);
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = param_3 + -0x22;
        (**(code **)(param_3[-0x22] + 0x7c))(param_7);
        puVar2 = (uint *)0x0;
      }
      *(int **)((int)this + param_1 * 4 + 0x1e94) = piVar3;
      FUN_1002bd70(this,param_1,param_2,piVar3,puVar2,param_4,param_5,param_6,param_7,(int *)0x1);
      return;
    }
    FUN_1002bd70(this,param_1,param_2,(int *)0x0,(uint *)0x0,param_4,param_5,param_6,param_7,
                 (int *)0x1);
    *(undefined4 *)((int)this + param_1 * 4 + 0x1e94) = 0;
  }
  return;
}

