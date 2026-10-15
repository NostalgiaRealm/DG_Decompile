/*
 * FUN_1005dd80 at 1005dd80
 * undefined FUN_1005dd80(void)
 * Address ranges: 1005dd80-1005e077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1005dd80(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_4c [4];
  int *local_48;
  
  iVar6 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar6 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_4c);
  uVar7 = 0x80070057;
  if (param_6 == 0) goto LAB_1005e038;
  if (*(char *)(param_3 + 0x134) != '\0') {
    if (*(char *)(param_3 + 0x135) == '\0') {
      iVar6 = FUN_10081e90(*(int *)(param_1 + 0xa58) + 0x10,&DAT_1009c470,0x10);
      if (iVar6 == 0) goto LAB_1005e038;
    }
    else {
      iVar6 = FUN_10081e90(*(int *)(param_1 + 0xa58) + 0x10,&DAT_1009c470,0x10);
      if (iVar6 != 0) goto LAB_1005e038;
    }
  }
  local_48 = (int *)(param_3 + 0x1c);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(local_48),0x10);
    if (bVar5) {
      *local_48 = *local_48 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if ((param_4 == 0) && (param_5 == 0)) {
    param_5 = *(int *)(param_3 + 0x78);
  }
  if (((param_4 < *(uint *)(param_3 + 0x78)) && (param_5 + param_4 <= *(uint *)(param_3 + 0x78))) &&
     (uVar7 = 0x887602e0, param_2 - 1U < 6)) {
    iVar6 = *(int *)(param_3 + 0x88);
    iVar1 = *(int *)(param_3 + 4);
    uVar7 = 0;
    if (*(int *)(param_3 + 0xc) == 0) {
      FUN_10067220(param_3,param_7);
      uVar7 = FUN_10067140(param_3);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 == 0) || (*(char *)(iVar2 + 9) == '\0')) &&
       ((iVar3 = *(int *)(param_1 + 0x28), iVar3 == 0 || (*(char *)(iVar3 + 9) == '\0')))) {
      if (((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) &&
         ((iVar3 == 0 || (*(char *)(iVar3 + 8) == '\0')))) {
        uVar7 = FUN_1005a680(param_1,param_2,param_3 + 0x7c,uVar7,param_4,iVar1 + iVar6 * param_4,
                             param_5,param_6,param_7);
      }
      else {
        uVar7 = 0x887601c2;
      }
    }
    else {
      uVar7 = 0x887601ae;
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(local_48),0x10);
    if (bVar5) {
      *local_48 = *local_48 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
LAB_1005e038:
  FUN_10096790(auStack_4c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar7;
}

