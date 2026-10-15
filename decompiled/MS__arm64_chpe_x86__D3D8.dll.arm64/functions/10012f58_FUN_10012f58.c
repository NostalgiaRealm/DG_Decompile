/*
 * FUN_10012f58 at 10012f58
 * undefined FUN_10012f58(void)
 * Address ranges: 10012f58-10013147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10012f58(undefined4 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                undefined8 param_5,undefined4 param_6,char param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_58;
  undefined8 auStack_50 [2];
  
  local_58 = param_5;
  auStack_50[0] = param_4;
  uVar4 = FUN_10012968(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                       *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0);
  uVar8 = uVar4 & 0xffffffff;
  FUN_10012d90(param_1,uVar8);
  uVar5 = FUN_10012968(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                       *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0);
  uVar7 = uVar5 & 0xffffffff;
  FUN_10012d90(param_1,uVar7);
  iVar3 = (int)uVar4;
  if ((uVar4 & 0x80000000) != 0) {
    iVar3 = (int)uVar5;
  }
  if ((param_7 == '\0') || (*(short *)(param_3 + 0x11) != *(short *)(param_3 + 5))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((iVar3 < 0) || (*(char *)(param_3 + 0x10) != '\0' && *(char *)(param_3 + 0x10) != '\x0f')) {
    if (bVar1) goto LAB_1001308c;
    sVar6 = *(short *)(param_3 + 0x11);
  }
  else {
    if (!bVar1) {
      if ((uVar4 & 0x80000000) != 0) {
        uVar7 = uVar4 & 0xffffffff;
        uVar8 = uVar5 & 0xffffffff;
        uVar5 = uVar4;
      }
      goto LAB_100130e0;
    }
LAB_1001308c:
    sVar6 = -1;
  }
  if (*(char *)(param_3 + 0x10) != '\0' && *(char *)(param_3 + 0x10) != '\x0f') {
    sVar6 = -1;
  }
  iVar3 = FUN_100127d8(param_1,param_2,sVar6);
  FUN_10002350(param_2,0x290200100100,iVar3,uVar8,uVar4 >> 0x20,0);
LAB_100130e0:
  puVar2 = &local_58;
  if (*(char *)(param_3 + 0x10) != '\x01') {
    puVar2 = auStack_50;
  }
  FUN_10002350(param_2,*puVar2,iVar3,uVar7,uVar5 >> 0x20,param_6);
  FUN_10012d60(param_1,uVar7);
  FUN_10012d60(param_1,uVar8);
  return iVar3;
}

