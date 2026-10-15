/*
 * FUN_1007d613 at 1007d613
 * uint __stdcall FUN_1007d613(float * param_1, int param_2, int * param_3)
 * Address ranges: 1007d613-1007d7eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007d613(float *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_50 [56];
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  
  piVar1 = param_3;
  iVar2 = (**(code **)(*param_3 + 0x28))();
  if (iVar2 == 1) {
    uVar5 = 0xf;
    uVar6 = 0x22;
  }
  else if (iVar2 == 2) {
    uVar5 = 0x10;
    uVar6 = 0x23;
  }
  else if (iVar2 == 4) {
    uVar5 = 0x11;
    uVar6 = 0x24;
  }
  else if (iVar2 == 8) {
    uVar5 = 0x12;
    uVar6 = 0x25;
  }
  else {
    if (iVar2 - 0x10U != 0) {
      return iVar2 - 0x10U & 0xffffff00;
    }
    uVar5 = 0x13;
    uVar6 = 0x26;
  }
  FUN_100ba192(*(void **)(*(int *)((int)local_c + 0x1cf04) + 0x15d8),(int *)&local_14,piVar1[0x18],0
              );
  FUN_100ba192(*(void **)(*(int *)((int)local_c + 0x1cf04) + 0x15e0),(int *)&local_18,
               *(uint *)(param_2 + 0x68),(int)param_1[10]);
  iVar2 = param_2;
  param_3 = (int *)piVar1[0x16];
  if (param_3 == (int *)0x0) {
    param_3 = (int *)piVar1[0x15];
  }
  local_10 = *(float *)(param_2 + 0x58);
  if (local_10 == 0.0) {
    local_10 = *(float *)(param_2 + 0x54);
  }
  param_1[0x12] = (float)param_3;
  param_1[0x14] = local_14;
  param_1[0x16] = local_10;
  param_1[0x17] = local_18;
  param_1[0x1a] = *(float *)(param_2 + 0x7c);
  FUN_1007cf8b(local_c,param_1,*(int *)(param_2 + 0x1c),piVar1[7],uVar5,'\0',(float *)0x0,0.0);
  if (((*(char *)(*(int *)((int)local_c + 0x14) * 0x18 + 0x531 + *(int *)((int)local_c + 0x1cf00))
        != '\0') && ((&DAT_100d29e8)[piVar1[7]] != '\0')) &&
     ((&DAT_100d29e8)[*(int *)(iVar2 + 0x1c)] != '\0')) {
    iVar3 = (**(code **)(*param_3 + 0x28))(param_3,local_50);
    param_2 = *(int *)(iVar3 + 0x20);
    iVar3 = (**(code **)(*param_3 + 0x28))(param_3,local_50);
    if (((param_2 == 0x2c) || (param_2 == 0x2d)) &&
       ((*(int *)(iVar3 + 0x20) == 0x2c || (*(int *)(iVar3 + 0x20) == 0x2d)))) {
      param_1[10] = (float)(((int)param_1[9] + *(int *)(iVar2 + 0x24)) * *(int *)(iVar2 + 0x2c) +
                           (int)param_1[8]);
      param_1[0xd] = (float)(((int)param_1[0xc] + piVar1[9]) * piVar1[0xb] + (int)param_1[0xb]);
      pfVar4 = (float *)FUN_100ba192(*(void **)(*(int *)((int)local_c + 0x1cf04) + 0x15d8),&param_2,
                                     piVar1[0x18],1);
      param_1[0x14] = *pfVar4;
      FUN_1007cf8b(local_c,param_1,*(int *)(iVar2 + 0x1c),piVar1[7],uVar6,'\x01',(float *)0x0,0.0);
    }
  }
  return 1;
}

