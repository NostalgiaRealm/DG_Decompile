/*
 * FUN_10092a0f at 10092a0f
 * undefined4 __thiscall FUN_10092a0f(void * this, int param_1, undefined4 * param_2, int * param_3, LONG * param_4, undefined4 param_5)
 * Address ranges: 10092a0f-10092b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10092a0f(void *this,int param_1,undefined4 *param_2,int *param_3,LONG *param_4,
            undefined4 param_5)

{
  void *this_00;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  LONG LVar6;
  LONG LVar7;
  LONG LVar8;
  LONG LVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 4);
  local_10 = param_2[1];
  local_14 = this;
  if (((*(int *)(*(int *)(local_c + 0x50) + 4) == 2) &&
      (*(int *)(*(int *)(local_10 + 0x50) + 4) != 2)) &&
     ((param_2[0xd] == 2 || (param_2[0xd] == 0)))) {
    FUN_10012524(param_2);
  }
  FUN_100124b2(param_2,param_1);
  if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
    local_28 = *(undefined4 *)(param_2[1] + 0x50);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    (**(code **)(**(int **)((int)this + 0x14) + 0x40))(&local_28,0);
  }
  local_18 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x50);
  uVar5 = *(undefined4 *)(param_2[1] + 0x50);
  LVar6 = *param_4;
  LVar7 = param_4[1];
  LVar8 = param_4[2];
  LVar9 = param_4[3];
  iVar3 = FUN_10002621(*(int *)(param_1 + 0x28));
  iVar4 = FUN_100025c9(extraout_ECX);
  iVar1 = local_10;
  bVar2 = FUN_1002d87f(uVar5,local_18,*(int **)((int)local_14 + 0xde8),
                       *(undefined4 *)(local_c + 0x70),*(undefined4 *)(local_10 + 0x70),
                       *(int *)(local_c + 0x6c),*(int *)(local_10 + 0x6c),1,*(int *)(param_1 + 0x50)
                       ,param_2[0x14],param_3,iVar4,iVar3,param_5,LVar6,LVar7,LVar8,LVar9);
  uVar5 = 0x88760827;
  if (bVar2 != 0) {
    uVar5 = 0;
  }
  FUN_10012511((int)param_2);
  if (bVar2 != 0) {
    if ((((*(int *)(param_2[1] + 0xb0) != 0) && ((*(byte *)(param_2 + 0xc) & 1) != 0)) &&
        ((uint)param_2[0x10] < 5)) && ((uint)param_2[0x11] < 5)) {
      (**(code **)(**(int **)(param_2[1] + 0x50) + 0x34))
                (*(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(local_c + 0x6c));
    }
    this_00 = (void *)param_2[0x22];
    if (this_00 != (void *)0x0) {
      FUN_10014670(this_00,param_2[0x13],this_00,param_4);
    }
  }
  return uVar5;
}

