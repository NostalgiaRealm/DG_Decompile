/*
 * FUN_10045dfe at 10045dfe
 * undefined __stdcall FUN_10045dfe(int * param_1, int * param_2, int * param_3)
 * Address ranges: 10045dfe-10045f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045dfe(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  DWORD *pDVar7;
  DWORD *pDVar8;
  DWORD local_90 [15];
  DWORD local_54 [6];
  undefined4 local_3c;
  DWORD local_38 [7];
  DWORD local_1c;
  int local_18;
  int *local_c;
  
  piVar1 = param_1;
  (**(code **)(*(int *)param_1[1] + 0x30))((int *)param_1[1],local_90);
  iVar4 = piVar1[0xd];
  pDVar7 = local_90;
  pDVar8 = local_38;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pDVar8 = *pDVar7;
    pDVar7 = pDVar7 + 1;
    pDVar8 = pDVar8 + 1;
  }
  if ((iVar4 != 1) &&
     (((piVar1[0xd] != 2 && (piVar1[0xd] != 3)) || ((piVar1[10] != 1 && (piVar1[10] != 2)))))) {
    local_38[0] = piVar1[4];
    local_38[1] = piVar1[5];
    iVar4 = local_38[1];
    DVar5 = local_38[0];
    goto LAB_10045ec8;
  }
  param_1 = param_2;
  if (param_2 == (int *)0x0) {
    (**(code **)(*(int *)piVar1[1] + 0x3c))((int *)piVar1[1],&param_1);
    piVar6 = param_1;
    if (param_1 != (int *)0x0) goto LAB_10045e78;
  }
  else {
LAB_10045e78:
    piVar6 = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  FUN_10045916(local_c,piVar6,&local_1c);
  local_54[1] = local_18;
  local_54[0] = local_1c;
  pDVar7 = local_38;
  pDVar8 = local_54;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pDVar8 = *pDVar7;
    pDVar7 = pDVar7 + 1;
    pDVar8 = pDVar8 + 1;
  }
  local_3c = 0;
  pDVar7 = local_54;
  pDVar8 = local_38;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pDVar8 = *pDVar7;
    pDVar7 = pDVar7 + 1;
    pDVar8 = pDVar8 + 1;
  }
  iVar4 = local_54[1];
  DVar5 = local_54[0];
  if (param_1 != param_2) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar4 = local_18;
    DVar5 = local_1c;
  }
LAB_10045ec8:
  if (((local_90[0] != DVar5) || (local_90[1] != iVar4)) || ((char)param_3 != '\0')) {
    (**(code **)(*local_c + 0x10))(piVar1);
    bVar2 = FUN_10045c9b(piVar1);
    param_3 = (int *)CONCAT31(param_3._1_3_,bVar2);
    FUN_10045ce6(piVar1,(int *)local_38,param_3);
    (**(code **)(*local_c + 0xc))(piVar1,0);
    (**(code **)(*(int *)local_c[0x13b] + 0x20))((int *)local_c[0x13b],*piVar1,1);
  }
  return;
}

