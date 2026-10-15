/*
 * FUN_1009a22a at 1009a22a
 * int __stdcall FUN_1009a22a(int param_1, uint param_2, uint param_3, uint param_4, int * param_5, uint param_6, int param_7, int * param_8, undefined4 * param_9, int param_10)
 * Address ranges: 1009a22a-1009a3b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009a22a(int param_1,uint param_2,uint param_3,uint param_4,int *param_5,uint param_6,
                int param_7,int *param_8,undefined4 *param_9,int param_10)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_c = 0;
  local_10 = 0x2a;
  iVar4 = FUN_10004b50((void *)(param_1 + -0x66b4),param_2,param_3,param_4,(uint *)&param_5,param_6,
                       param_7,(int)param_8,param_9,&local_c,&local_10);
  if (iVar4 == 0x876086f) {
    piVar5 = (int *)0x1;
  }
  else {
    piVar5 = param_5;
    if (iVar4 < 0) goto LAB_1009a3a2;
  }
  iVar4 = -0x7789f794;
  if (param_10 != 0) goto LAB_1009a3a2;
  iVar4 = -0x7ff8fff2;
  piVar5 = FUN_1008fbcb(param_1 + -0x66b4,param_2,param_3,param_4,(short)piVar5,param_6,param_7,
                        param_8,local_10,*(undefined4 *)(param_1 + -0x58cc),local_c);
  param_8 = piVar5;
  if (piVar5 == (int *)0x0) goto LAB_1009a3a2;
  cVar3 = FUN_100154f0(piVar5);
  iVar7 = -0x7ff8fff2;
  if (cVar3 != '\0') {
    param_5 = piVar5;
    uVar6 = FUN_10003d8f((void *)(param_1 + -0x589c),&param_5);
    if ((char)uVar6 != '\0') {
      iVar4 = FUN_1009eef8((int)(piVar5 + 0x32),0x100d1340,param_9);
      piVar2 = param_8;
      if (-1 < iVar4) {
        iVar7 = *(int *)(param_1 + -0x58c4) * 0x228;
        uVar1 = *(uint *)(&DAT_100df4e0 + iVar7);
        *(uint *)(&DAT_100df4e0 + iVar7) = uVar1 - local_c;
        *(uint *)(&DAT_100df4e4 + iVar7) = *(int *)(&DAT_100df4e4 + iVar7) - (uint)(uVar1 < local_c)
        ;
        FUN_1000137c((void *)(param_1 + -0x66b4),param_8 + 0x30);
        piVar5 = piVar2;
        iVar7 = iVar4;
        goto LAB_1009a388;
      }
      FUN_10006f0e((void *)(param_1 + -0x66b4),(int)piVar5);
    }
    FUN_1009ee64(piVar5);
    iVar7 = iVar4;
  }
LAB_1009a388:
  iVar4 = iVar7;
  if (iVar4 < 0) {
    FUN_1009ecb1(piVar5);
    FUN_100cfd6c(piVar5);
  }
LAB_1009a3a2:
  FUN_10003e89(&local_5);
  return iVar4;
}

