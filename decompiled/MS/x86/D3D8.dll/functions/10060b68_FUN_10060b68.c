/*
 * FUN_10060b68 at 10060b68
 * char __stdcall FUN_10060b68(int param_1, int param_2, int param_3, uint param_4, int param_5, int param_6, int * param_7)
 * Address ranges: 10060b68-10060e5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10060b68(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
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
  
  piVar9 = (int *)(param_5 + -0x88);
  piVar8 = (int *)(-(uint)(param_6 != 0) & param_6 - 0x88U);
  if ((*(int *)(param_5 + 4) == 0) && (param_5 == 0)) {
    piVar9 = (int *)0x0;
  }
  (**(code **)(*piVar8 + 0x58))(param_3);
  (**(code **)(*piVar9 + 0x58))(param_1,param_2);
  if ((char)param_7[0xb] == '\0') {
LAB_10060dbd:
    iVar4 = *(int *)(param_5 + 4);
    bVar7 = *(byte *)((int)param_7 + 0x2b);
    bVar1 = *(byte *)((int)param_7 + 0x2a);
    bVar2 = *(byte *)((int)param_7 + 0x29);
    bVar3 = *(byte *)(param_7 + 10);
    uVar6 = param_7[9];
    uVar10 = param_7[8];
    param_7 = (LONG *)0x0;
  }
  else {
    if ((((((char)param_7[10] == '\0') && (*(char *)((int)param_7 + 0x2b) == '\0')) &&
         (FUN_1005f04d((int *)&stack0xffffff98,piVar9,piVar8,(char)unaff_ESI,param_1,param_2,param_3
                       ,param_4,param_7,param_7 + 4), iStack_58 == iStack_54)) &&
        ((piVar8[7] == piVar9[7] && (iStack_30 - iStack_38 == iStack_40 - iStack_48)))) &&
       (iStack_2c - iStack_34 == iStack_3c - iStack_44)) {
      if (cStack_21 == '\0') {
        bVar7 = 1;
        if (iStack_50 == iStack_4c) {
          if (iStack_4c == 1) {
            if (cStack_28 != cStack_27) goto LAB_10060c80;
LAB_10060c8f:
            bStack_71 = 1;
          }
          else {
LAB_10060c80:
            if (bStack_22 != 0) goto LAB_10060c8f;
            bStack_71 = 0;
          }
          if ((iStack_4c != 1) &&
             (*(int *)(*(int *)((int)unaff_EDI + 0x14) * 0x1510 + 0x520 +
                      *(int *)((int)unaff_EDI + 0x1cf00)) < 0xa001)) {
            bVar7 = 0;
          }
          bStack_71 = bStack_71 & bVar7;
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
      else if (iStack_50 != iStack_4c) goto LAB_10060d04;
      if (bStack_22 != 0) {
        uVar6 = FUN_1005f1dc(unaff_EDI,param_1,param_2,param_3,param_4,piVar9,piVar8,
                             (int)&stack0xffffff98,param_7,(RECT *)(param_7 + 4));
        cVar5 = (char)uVar6;
        goto LAB_10060e36;
      }
    }
LAB_10060d04:
    if ((char)param_7[0xb] == '\0') goto LAB_10060dbd;
    iVar4 = *(int *)(param_5 + 4);
    bVar7 = *(byte *)((int)param_7 + 0x2b);
    bVar1 = *(byte *)((int)param_7 + 0x2a);
    bVar2 = *(byte *)((int)param_7 + 0x29);
    bVar3 = *(byte *)(param_7 + 10);
    uVar6 = param_7[9];
    uVar10 = param_7[8];
  }
  cVar5 = FUN_1005f8ce(unaff_EDI,(float *)&stack0xffffff98,piVar9,piVar8,
                       (int *)CONCAT31((int3)((uint)unaff_ESI >> 8),iVar4 == 0),param_7,uVar10,uVar6
                       ,(uint)bVar3,(uint)bVar2,(int *)(uint)bVar1,(int *)(uint)bVar7);
LAB_10060e36:
  (**(code **)(*piVar8 + 0x5c))(param_3,param_4);
  (**(code **)(*piVar9 + 0x5c))(param_1,param_2);
  return cVar5;
}

