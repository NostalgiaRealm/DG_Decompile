/*
 * FUN_100975ed at 100975ed
 * int __stdcall FUN_100975ed(int param_1, uint param_2, RECT * param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 100975ed-10097786
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100975ed(int param_1,uint param_2,RECT *param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar7 = 0;
  if (*(char *)(iVar4 + -0x6410) == '\0') goto LAB_10097777;
  if ((((param_4 & 1) == 0) || ((param_4 & 6) == 0)) || (*(int *)(iVar4 + -0x668c) == 0)) {
LAB_10097722:
    pvVar1 = (void *)(iVar4 + -0x66b4);
    uVar6 = FUN_10096e70(pvVar1,(byte)param_4 & 1,(param_4 & 6) != 0);
    cVar5 = FUN_100926d4(pvVar1,uVar6);
    if ((cVar5 == '\0') || (cVar5 = FUN_100971a9((int)pvVar1), uVar6 = param_4, cVar5 == '\0'))
    goto LAB_10097777;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar4 + -0x668c) + 4);
    iVar3 = *(int *)(*(int *)(iVar4 + -0x669c) + 4);
    if (((*(int *)(iVar2 + 100) == *(int *)(iVar3 + 100)) &&
        (*(int *)(iVar2 + 0x68) == *(int *)(iVar3 + 0x68))) &&
       (*(int *)(iVar2 + 0x74) == *(int *)(iVar3 + 0x74))) goto LAB_10097722;
    pvVar1 = (void *)(iVar4 + -0x66b4);
    iVar7 = 0;
    cVar5 = FUN_100926d4(pvVar1,2);
    if ((cVar5 != '\0') && (cVar5 = FUN_100971a9((int)pvVar1), cVar5 != '\0')) {
      iVar7 = FUN_10008c04(pvVar1,param_2,param_3,param_4 & 0xfffffffe,param_5,param_6,param_7,
                           (RECT *)(iVar4 + 0x6cc));
    }
    if ((((iVar7 < 0) || (*(int *)(*(int *)(iVar4 + -0x669c) + 0x28) == 0x4c4c554e)) ||
        (cVar5 = FUN_100926d4((void *)(iVar4 + -0x66b4),1), cVar5 == '\0')) ||
       (cVar5 = FUN_100971a9(iVar4 + -0x66b4), cVar5 == '\0')) goto LAB_10097777;
    uVar6 = 1;
  }
  iVar7 = FUN_10008c04((void *)(iVar4 + -0x66b4),param_2,param_3,uVar6,param_5,param_6,param_7,
                       (RECT *)(iVar4 + 0x6cc));
LAB_10097777:
  FUN_10003e89((char *)((int)&param_1 + 3));
  return iVar7;
}

