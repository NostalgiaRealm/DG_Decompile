/*
 * FUN_1007e4d6 at 1007e4d6
 * int __stdcall FUN_1007e4d6(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, int * param_8, undefined4 * param_9)
 * Address ranges: 1007e4d6-1007e63b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007e4d6(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int param_7,int *param_8,undefined4 *param_9)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  FUN_10003838(&local_5,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_c = 0;
  local_10 = 0x1c;
  iVar3 = FUN_100043ff((void *)(param_1 + -0x58e0),param_2,param_3,param_4,&param_5,param_6,param_7,
                       (int)param_8,param_9,&local_c,&local_10);
  if (iVar3 < 0) goto LAB_1007e62b;
  iVar3 = -0x7ff8fff2;
  piVar4 = FUN_10079759(param_1 + -0x58e0,param_2,param_3,param_4,(short)param_5,param_6,param_7,
                        param_8,local_10,*(undefined4 *)(param_1 + -0x4dbc),local_c);
  if (piVar4 == (int *)0x0) goto LAB_1007e62b;
  cVar2 = FUN_10011600(piVar4);
  iVar6 = -0x7ff8fff2;
  if (cVar2 != '\0') {
    param_8 = piVar4;
    uVar5 = FUN_10003787((void *)(param_1 + -0x4d8c),&param_8);
    if ((char)uVar5 != '\0') {
      iVar3 = FUN_10082408((int)(piVar4 + 0x32),0x100af360,param_9);
      if (-1 < iVar3) {
        iVar6 = *(int *)(param_1 + -0x4db4) * 0x228;
        uVar1 = *(uint *)(&DAT_100ba918 + iVar6);
        *(uint *)(&DAT_100ba918 + iVar6) = uVar1 - local_c;
        *(uint *)(&DAT_100ba91c + iVar6) = *(int *)(&DAT_100ba91c + iVar6) - (uint)(uVar1 < local_c)
        ;
        FUN_100014ec((void *)(param_1 + -0x58e0),piVar4 + 0x30);
        iVar6 = iVar3;
        goto LAB_1007e611;
      }
      FUN_10006605((void *)(param_1 + -0x58e0),(int)piVar4);
    }
    FUN_10082374(piVar4);
    iVar6 = iVar3;
  }
LAB_1007e611:
  iVar3 = iVar6;
  if (iVar3 < 0) {
    FUN_100821c1(piVar4);
    FUN_100ad48c(piVar4);
  }
LAB_1007e62b:
  FUN_10003881(&local_5);
  return iVar3;
}

