/*
 * FUN_1007f425 at 1007f425
 * undefined __thiscall FUN_1007f425(void * this, int param_1, int param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6, uint param_7, undefined4 param_8, undefined4 param_9, uint param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, int param_14, int param_15, int * param_16, uint param_17, int param_18, char param_19, char param_20)
 * Address ranges: 1007f425-1007f756
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1007f425(void *this,int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,uint param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,int param_14,int param_15,
            int *param_16,uint param_17,int param_18,char param_19,char param_20)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint local_6c [3];
  undefined4 local_60;
  undefined4 local_5c [6];
  uint local_44 [3];
  undefined4 local_38;
  undefined4 local_34 [6];
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  *(void **)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x948) = this;
  piVar6 = (int *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x634);
  *piVar6 = *piVar6 + 1;
  local_44[0] = param_3;
  local_44[2] = param_7;
  local_44[1] = 0;
  local_38 = 0;
  puVar8 = local_34;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_6c[2] = param_10;
  local_6c[1] = 0;
  local_60 = 0;
  local_6c[0] = param_4;
  puVar8 = local_5c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_14 = 0;
  local_1c = param_14;
  local_10 = (param_16[2] - *param_16) + param_14;
  local_18 = param_15;
  local_c = (param_16[3] - param_16[1]) + param_15;
  bVar2 = true;
  local_8 = 1;
  if ((param_17 < 2) || (param_18 != 1)) {
    bVar2 = false;
  }
  piVar6 = (int *)0x800;
  if (bVar2) {
    piVar6 = (int *)0x2000;
  }
  piVar7 = (int *)0x400;
  if (bVar2) {
    piVar7 = (int *)0x1000;
  }
  pcVar9 = (char *)(param_1 + 0x39);
  cVar1 = *(char *)(param_2 + 0x39);
  if ((cVar1 == '\0') || (*pcVar9 == '\0')) {
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = param_10;
    }
    FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_4,uVar3,
                 (uint)(cVar1 == '\0'),(uint)piVar7);
    uVar3 = 0;
    if (*pcVar9 != '\0') {
      uVar3 = param_7;
    }
    FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_3,uVar3,
                 (uint)(*pcVar9 == '\0'),(uint)piVar6);
    if (*pcVar9 == '\0') {
      local_44[1] = 1;
      local_44[2] = *(uint *)(*(int *)(param_1 + 0x14) + param_7 * 0x20);
      local_34[0] = param_11;
      local_34[1] = param_5;
      local_38 = 0;
      local_34[2] = param_6;
      local_34[3] = 1;
      local_34[4] = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + param_7 * 0x20);
    }
    if (*(char *)(param_2 + 0x39) == '\0') {
      local_6c[1] = 1;
      local_6c[2] = *(uint *)(*(int *)(param_2 + 0x14) + param_10 * 0x20);
      local_5c[0] = param_12;
      local_5c[1] = param_8;
      local_60 = 0;
      local_5c[2] = param_9;
      local_5c[3] = 1;
      local_5c[4] = *(undefined4 *)(*(int *)(param_2 + 0x14) + 8 + param_10 * 0x20);
    }
    if (param_20 == '\0') {
      piVar6 = &local_1c;
      iVar5 = *param_16;
      iVar4 = param_16[1];
    }
    else {
      iVar5 = 0;
      iVar4 = 0;
      piVar6 = (int *)0x0;
    }
    FUN_100bc04a(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),local_6c,iVar5,iVar4,0,local_44,
                 piVar6);
    if (*pcVar9 == '\0') {
      FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_3,0,1,0);
    }
    if (*(char *)(param_2 + 0x39) == '\0') {
      FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_4,0,1,0);
    }
  }
  else {
    if ((param_19 == '\0') || (bVar2)) {
      FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_4,param_10,0,
                   (uint)piVar7);
      FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_3,param_7,0,(uint)piVar6
                  );
      if (param_19 == '\0') {
        FUN_100bc04a(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),local_6c,*param_16,param_16[1]
                     ,0,local_44,&local_1c);
        goto LAB_1007f73a;
      }
    }
    else {
      FUN_100baff6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_4,
                   CONCAT31((int3)((uint)param_2 >> 8),cVar1),piVar7,(int *)0x0);
      FUN_100baff6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_3,extraout_ECX,piVar6,
                   (int *)0x0);
    }
    iVar5 = *(int *)(*(int *)((int)this + 0x1cf04) + 0x1304);
    if (bVar2) {
      FUN_100bbf8e(iVar5,param_4,param_10,param_3,param_7,param_13);
    }
    else {
      FUN_100bbfcc(iVar5,param_4,param_3);
    }
  }
LAB_1007f73a:
  FUN_100baeff((void *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 4),'\0');
  return;
}

