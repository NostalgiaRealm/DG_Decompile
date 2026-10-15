/*
 * FUN_1009a3b3 at 1009a3b3
 * int __stdcall FUN_1009a3b3(int param_1, int * param_2, int * param_3, uint param_4, int param_5, int param_6, undefined4 * param_7, int param_8)
 * Address ranges: 1009a3b3-1009a55c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009a3b3(int param_1,int *param_2,int *param_3,uint param_4,int param_5,int param_6,
                undefined4 *param_7,int param_8)

{
  void *this;
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  void *this_00;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_c = 0;
  local_10 = 0x2a;
  this = (void *)(param_1 + -0x66b4);
  iVar4 = FUN_10004c77(this,(uint)param_2,(uint *)&param_3,param_4,param_5,param_6,param_7,&local_c,
                       &local_10);
  if (iVar4 == 0x876086f) {
    piVar5 = (int *)0x1;
  }
  else {
    piVar5 = param_3;
    if (iVar4 < 0) goto LAB_1009a54c;
  }
  iVar4 = -0x7789f794;
  if (param_8 != 0) goto LAB_1009a54c;
  param_3 = *(int **)(param_1 + -0x58cc);
  iVar4 = -0x7ff8fff2;
  this_00 = (void *)FUN_100cfd55(0x270);
  if ((this_00 == (void *)0x0) ||
     (piVar5 = FUN_1009135c(this_00,param_1 + -0x66b4,(int)param_2,(int)param_2,(short)piVar5,
                            param_4,param_5,param_6,local_10,param_3,local_c), param_3 = piVar5,
     piVar5 == (int *)0x0)) goto LAB_1009a54c;
  cVar3 = FUN_10013e3a(piVar5,(void *)(-(uint)(piVar5[5] != 0) & piVar5[5] - 0x66b4U));
  if (cVar3 != '\0') {
    param_2 = piVar5;
    uVar6 = FUN_10003d8f((void *)(param_1 + -0x58a8),&param_2);
    if ((char)uVar6 != '\0') {
      iVar4 = FUN_100915bf((int)(piVar5 + 0x1e),0x100d1330,param_7);
      piVar2 = param_3;
      if (-1 < iVar4) {
        iVar7 = *(int *)(param_1 + -0x58c4) * 0x228;
        uVar1 = *(uint *)(&DAT_100df4e0 + iVar7);
        *(uint *)(&DAT_100df4e0 + iVar7) = uVar1 - local_c;
        *(uint *)(&DAT_100df4e4 + iVar7) = *(int *)(&DAT_100df4e4 + iVar7) - (uint)(uVar1 < local_c)
        ;
        FUN_1000137c(this,param_3 + 0x1c);
        piVar5 = piVar2;
        goto LAB_1009a532;
      }
      FUN_10006e98(this,(int)piVar5);
    }
    FUN_100147e0((int)piVar5);
    FUN_1001407d(piVar5);
  }
LAB_1009a532:
  if (iVar4 < 0) {
    FUN_10091417(piVar5);
    FUN_100cfd6c(piVar5);
  }
LAB_1009a54c:
  FUN_10003e89(&local_5);
  return iVar4;
}

