/*
 * FUN_10009c90 at 10009c90
 * char __stdcall FUN_10009c90(int param_1, int param_2, int param_3, uint param_4, int param_5, int param_6, int * param_7)
 * Address ranges: 10009c90-10009f84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10009c90(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  byte bStack_71;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  char cStack_28;
  char cStack_27;
  char cStack_24;
  char cStack_23;
  byte bStack_22;
  char cStack_21;
  
  piVar8 = (int *)(param_5 + -0x88);
  piVar7 = (int *)(-(uint)(param_6 != 0) & param_6 - 0x88U);
  if ((*(int *)(param_5 + 4) == 0) && (param_5 == 0)) {
    piVar8 = (int *)0x0;
  }
  (**(code **)(*piVar7 + 0x58))(param_3);
  (**(code **)(*piVar8 + 0x58))(param_1,param_2);
  if ((char)param_7[0xb] == '\0') {
LAB_10009ee5:
    iVar4 = *(int *)(param_5 + 4);
    bVar6 = *(byte *)((int)param_7 + 0x2b);
    bVar1 = *(byte *)((int)param_7 + 0x2a);
    bVar2 = *(byte *)((int)param_7 + 0x29);
    bVar3 = *(byte *)(param_7 + 10);
    uVar10 = param_7[9];
    uVar9 = param_7[8];
    param_7 = (LONG *)0x0;
  }
  else {
    if ((((((char)param_7[10] == '\0') && (*(char *)((int)param_7 + 0x2b) == '\0')) &&
         (FUN_10008232((int *)&stack0xffffff98,piVar8,piVar7,(char)unaff_ESI,param_1,param_2,param_3
                       ,param_4,param_7,param_7 + 4), iStack_58 == iStack_54)) &&
        ((piVar7[7] == piVar8[7] && (iStack_30 - iStack_38 == iStack_40 - iStack_48)))) &&
       (iStack_2c - iStack_34 == iStack_3c - iStack_44)) {
      if (cStack_21 == '\0') {
        bVar6 = 1;
        if (iStack_50 == iStack_4c) {
          if (iStack_4c == 1) {
            if (cStack_28 != cStack_27) goto LAB_10009da8;
LAB_10009db7:
            bStack_71 = 1;
          }
          else {
LAB_10009da8:
            if (bStack_22 != 0) goto LAB_10009db7;
            bStack_71 = 0;
          }
          if ((iStack_4c != 1) &&
             (*(int *)(*(int *)((int)unaff_EDI + 0x14) * 0x1510 + 0x520 +
                      *(int *)((int)unaff_EDI + 0xcf00)) < 0xa001)) {
            bVar6 = 0;
          }
          bStack_71 = bStack_71 & bVar6;
        }
        else if ((iStack_4c == 1) && (cStack_23 != '\0')) {
          bStack_71 = 1;
        }
        else {
          bStack_71 = 0;
        }
        bStack_22 = 0;
        if (cStack_24 == '\0') {
          bStack_22 = bStack_71;
        }
      }
      else if (iStack_50 != iStack_4c) goto LAB_10009e2c;
      if (bStack_22 != 0) {
        cVar5 = FUN_100083c1(unaff_EDI,param_1,param_2,param_3,param_4,piVar8,piVar7,
                             (undefined4 *)&stack0xffffff98,param_7,(RECT *)(param_7 + 4));
        goto LAB_10009f5e;
      }
    }
LAB_10009e2c:
    if ((char)param_7[0xb] == '\0') goto LAB_10009ee5;
    iVar4 = *(int *)(param_5 + 4);
    bVar6 = *(byte *)((int)param_7 + 0x2b);
    bVar1 = *(byte *)((int)param_7 + 0x2a);
    bVar2 = *(byte *)((int)param_7 + 0x29);
    bVar3 = *(byte *)(param_7 + 10);
    uVar10 = param_7[9];
    uVar9 = param_7[8];
  }
  cVar5 = FUN_10008b1f(unaff_EDI,(float *)&stack0xffffff98,piVar8,piVar7,
                       (int *)CONCAT31((int3)((uint)unaff_ESI >> 8),iVar4 == 0),param_7,uVar9,uVar10
                       ,(int *)(uint)bVar3,(uint)bVar2,(uint)bVar1,(int *)(uint)bVar6);
LAB_10009f5e:
  (**(code **)(*piVar7 + 0x5c))(param_3,param_4);
  (**(code **)(*piVar8 + 0x5c))(param_1,param_2);
  return cVar5;
}

