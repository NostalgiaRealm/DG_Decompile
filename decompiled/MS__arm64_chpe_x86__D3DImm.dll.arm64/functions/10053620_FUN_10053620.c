/*
 * FUN_10053620 at 10053620
 * undefined FUN_10053620(void)
 * Address ranges: 10053620-100539d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053620(int param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  uint uVar5;
  undefined1 auStack_50 [16];
  
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_10096840(auStack_50);
    FUN_1004bbd0(param_1);
    *(char *)(param_1 + 0x100) = '\0';
    piVar1 = (int *)(param_1 + 0x214);
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x218) != 0) {
      do {
        if (*(int *)(*piVar1 + uVar5 * 4) != 0) {
          FUN_10051050(param_1,uVar5);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x218));
    }
    FUN_10081dc0(*piVar1);
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0;
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4);
    uVar4 = (*pcVar2)();
    (*extraout_w11_00)(uVar4);
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x14f4 + uVar5 * 4) != 0) {
        uVar4 = (*pcVar2)();
        (*extraout_w11_01)(uVar4);
        *(undefined4 *)(param_1 + uVar5 * 4 + 0x14f4) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    if (*(int *)(param_1 + 0x1514) != 0) {
      uVar4 = (*pcVar2)();
      (*extraout_w11_02)(uVar4);
      *(int *)(param_1 + 0x1514) = 0;
    }
    if (*(int *)(param_1 + 0x1520) != 0) {
      uVar4 = (*pcVar2)();
      (*extraout_w11_03)(uVar4);
    }
    *(int *)(param_1 + 0x1520) = 0;
    *(undefined4 *)(param_1 + 0x151c) = 0;
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x1528) != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1524) + uVar5 * 8) + 0x84) = 0;
        uVar4 = (*pcVar2)();
        (*extraout_w11_04)(uVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x1528));
    }
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x1524));
    *(undefined8 *)(param_1 + 0x1524) = 0;
    *(undefined4 *)(param_1 + 0x152c) = 0;
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x1674));
    *(undefined4 *)(param_1 + 0x1674) = 0;
    FUN_10081dd0(*(undefined4 *)(*(int *)(param_1 + 0x9cc) + -4));
    *(int *)(param_1 + 0x9cc) = 0;
    if (*(int *)(param_1 + 0xa7c) != 0) {
      uVar4 = (*pcVar2)();
      (*extraout_w11_05)(uVar4);
    }
    if (*(int *)(param_1 + 0xa78) != 0) {
      uVar4 = (*pcVar2)();
      (*extraout_w11_06)(uVar4);
    }
    *(int *)(param_1 + 0xa7c) = 0;
    *(int *)(param_1 + 0xa78) = 0;
    FUN_10096790(auStack_50);
    uVar4 = (*pcVar2)();
    cVar3 = (*extraout_w11_07)(uVar4);
    if (cVar3 == '\0') {
      uVar4 = (*pcVar2)();
      cVar3 = (*extraout_w11_09)(uVar4);
      if (cVar3 != '\0') {
        return;
      }
    }
    else {
      uVar4 = (*pcVar2)();
      cVar3 = (*extraout_w11_08)(uVar4);
      if (cVar3 == '\0') {
        return;
      }
    }
    FUN_10096af0();
  }
  return;
}

