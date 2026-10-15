/*
 * FUN_1002c2f0 at 1002c2f0
 * undefined __thiscall FUN_1002c2f0(void * this, int param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * Address ranges: 1002c2f0-1002c38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c2f0(void *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_1e4 [476];
  int *local_8;
  
  piVar3 = param_4;
  iVar2 = param_1;
  iVar5 = *(int *)this;
  *(undefined4 *)(iVar5 + param_1 * 0x18) = param_2;
  *(undefined4 *)(iVar5 + 4 + param_1 * 0x18) = param_3;
  iVar5 = *(int *)this;
  *(undefined8 *)(iVar5 + 8 + param_1 * 0x18) = *(undefined8 *)param_4;
  *(int *)(iVar5 + 0x10 + param_1 * 0x18) = param_4[2];
  local_8 = this;
  iVar5 = FUN_10048f39(*param_4,(int)local_1e4,(char)param_4[2]);
  piVar4 = local_8;
  param_1 = 0;
  piVar1 = *(int **)(local_8[4] * 0x1510 + 0x510 + local_8[3]);
  (**(code **)(*piVar1 + 0x2c))
            (piVar1,local_1e4,iVar5,*(undefined4 *)(local_8[5] + piVar3[1] * 4),
             *(undefined4 *)(local_8[6] + piVar3[1] * 4),&param_1);
  *(int *)(*piVar4 + 0x14 + iVar2 * 0x18) = param_1;
  return;
}

