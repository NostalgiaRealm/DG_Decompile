/*
 * FUN_100223a0 at 100223a0
 * undefined __thiscall FUN_100223a0(void * this, int * param_1, int param_2, uint * param_3, uint param_4, uint param_5, int * param_6, undefined4 param_7)
 * Address ranges: 100223a0-1002249c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100223a0(void *this,int *param_1,int param_2,uint *param_3,uint param_4,uint param_5,
            int *param_6,undefined4 param_7)

{
  int *piVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  puVar2 = param_3;
  piVar1 = param_1;
  FUN_100218e0(this,0,0,0);
  FUN_1001d230(this,*(uint *)((int)this + (int)param_1 * 4 + 0x1fc8));
  *(undefined4 *)((int)this + (int)param_1 * 4 + 0x1fc8) = 0;
  FUN_1001d230(this,*(uint *)((int)this + (int)param_1 * 4 + 0x1fec));
  *(undefined4 *)((int)this + (int)param_1 * 4 + 0x1fec) = 0;
  if (param_3 == (uint *)0x0) {
    FUN_1002bd70(this,(uint)param_1,param_2,(int *)0x0,(uint *)0x0,param_4,param_5,param_6,param_7,
                 (int *)0x0);
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x1fa8) = 0;
    return;
  }
  param_1 = (int *)0x0;
  param_3 = (uint *)0x0;
  iVar4 = (**(code **)(*puVar2 + 4))();
  if (iVar4 == 1) {
    param_3 = puVar2 + -7;
    goto LAB_1002243b;
  }
  param_1 = (int *)(puVar2 + -0x30);
  if ((char)param_7 == '\0') {
LAB_10022433:
    uVar3 = 0;
  }
  else {
    iVar4 = (**(code **)(*puVar2 + 0x24))();
    if ((iVar4 != 1) || (puVar2[-0x27] != 1)) goto LAB_10022433;
    uVar3 = 1;
  }
  *(undefined1 *)((int)puVar2 + 0x6e) = uVar3;
LAB_1002243b:
  *(int **)((int)this + (int)piVar1 * 4 + 0x1fa8) = param_1;
  FUN_1002bd70(this,(uint)piVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,(int *)0x0)
  ;
  *(undefined1 *)((int)this + 0x21d3) = 1;
  return;
}

