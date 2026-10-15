/*
 * FUN_100b68f0 at 100b68f0
 * undefined FUN_100b68f0(void)
 * Address ranges: 100b68f0-100b6a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b68f0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_40 [16];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar4 == 0) {
      FUN_10006560(0);
    }
  }
  FUN_10121020(auStack_40);
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = FUN_100bd3f0(param_1 + 0x3c,param_2);
  }
  if (*(char *)(param_1 + -0x56c0) == '\0') {
    cVar3 = FUN_100b59e0(param_1 + -0x58e0,param_2);
    uVar5 = 0x8876086c;
    if (cVar3 != '\0') {
      uVar5 = 0;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + -0x56d0) + *(int *)(param_1 + -0x56c4) * 4);
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x49ac) = 0;
    }
    else {
      uVar5 = 0x8876086c;
      if (iVar4 == 0) goto LAB_100b6a08;
      *(int *)(iVar1 + 0x49ac) = param_2;
    }
    *(undefined1 *)(iVar1 + 0x93a0) = 1;
    uVar5 = 0;
  }
LAB_100b6a08:
  FUN_10120f70(auStack_40);
  if (bVar2) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar5;
}

