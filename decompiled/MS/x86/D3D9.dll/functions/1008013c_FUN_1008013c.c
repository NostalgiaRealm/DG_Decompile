/*
 * FUN_1008013c at 1008013c
 * undefined __stdcall FUN_1008013c(int param_1, int param_2, int param_3, void * param_4, int param_5, int param_6, int * param_7)
 * Address ranges: 1008013c-10080472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008013c(int param_1,int param_2,int param_3,void *param_4,int param_5,int param_6,
                 int *param_7)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 extraout_ECX;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  char cStack_4c;
  char cStack_4b;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  
  piVar8 = (int *)(param_5 + -0xc0);
  local_7c = CONCAT31(local_7c._1_3_,*(int *)(param_5 + 4) == 0);
  piVar9 = (int *)(-(uint)(param_6 != 0) & param_6 - 0xc0U);
  if ((*(int *)(param_5 + 4) == 0) && (param_5 == 0)) {
    piVar8 = (int *)0x0;
  }
  (**(code **)(*piVar9 + 0x58))(param_3);
  (**(code **)(*piVar8 + 0x58))(param_1,param_2,0);
  if ((((((char)param_7[0xb] != '\0') && ((char)param_7[10] == '\0')) &&
       (*(char *)((int)param_7 + 0x2b) == '\0')) &&
      ((FUN_1007d8c0((int *)&stack0xffffff70,piVar8,piVar9,(byte)param_1,extraout_ECX,(byte)param_3,
                     extraout_ECX,param_7,param_7 + 4), local_7c == iStack_78 &&
       (piVar9[7] == piVar8[7])))) &&
     ((iStack_54 - iStack_5c == iStack_64 - iStack_6c &&
      (iStack_50 - iStack_58 == iStack_60 - iStack_68)))) {
    if (cStack_45 == '\0') {
      bVar7 = true;
      if (iStack_74 == iStack_70) {
        cVar1 = cStack_46;
        if ((iStack_70 != 1) || (cStack_4c != cStack_4b)) goto LAB_10080252;
      }
      else {
        if (iStack_70 == 1) {
          cVar1 = cStack_47;
LAB_10080252:
          if (cVar1 != '\0') goto LAB_10080256;
        }
        bVar7 = false;
      }
LAB_10080256:
      bVar6 = false;
      if (cStack_48 == '\0') {
        bVar6 = bVar7;
      }
LAB_10080291:
      if (bVar6) {
LAB_10080293:
        FUN_1007d974(param_1,param_2,param_3,(int)param_4,piVar8,piVar9,(int *)&stack0xffffff70,
                     param_7);
        goto LAB_10080450;
      }
    }
    else if (iStack_74 == iStack_70) {
      if (cStack_46 == '\0') {
        bVar6 = cStack_4c == cStack_4b;
        if (*(char *)(*(int *)((int)param_4 + 0x14) * 0x18 + 0x532 +
                     *(int *)((int)param_4 + 0x1cf00)) == '\0') goto LAB_100802b6;
        goto LAB_10080291;
      }
      goto LAB_10080293;
    }
  }
LAB_100802b6:
  if ((char)param_7[0xb] == '\0') {
    bVar2 = *(byte *)((int)param_7 + 0x2b);
    bVar3 = *(byte *)((int)param_7 + 0x2a);
    bVar4 = *(byte *)((int)param_7 + 0x29);
    bVar5 = *(byte *)(param_7 + 10);
    uVar11 = param_7[9];
    uVar10 = param_7[8];
    param_7 = (int *)0x0;
  }
  else {
    bVar2 = *(byte *)((int)param_7 + 0x2b);
    bVar3 = *(byte *)((int)param_7 + 0x2a);
    bVar4 = *(byte *)((int)param_7 + 0x29);
    bVar5 = *(byte *)(param_7 + 10);
    uVar11 = param_7[9];
    uVar10 = param_7[8];
  }
  FUN_1007dc10(param_4,(float *)&stack0xffffff70,piVar8,piVar9,0.0,param_7,uVar10,uVar11,(uint)bVar5
               ,(float *)(uint)bVar4,(uint)bVar3,(float)(uint)bVar2);
LAB_10080450:
  (**(code **)(*piVar9 + 0x5c))(param_3,param_4);
  (**(code **)(*piVar8 + 0x5c))(param_1,param_2);
  return;
}

