/*
 * FUN_100212d0 at 100212d0
 * undefined FUN_100212d0(void)
 * Address ranges: 100212d0-10021523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100212d0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar4;
  uint uVar5;
  undefined4 local_50 [4];
  
  *(undefined4 *)(param_1 + 0x180) = 3;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  piVar1 = (int *)(param_1 + 0x174);
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  FUN_100fed00(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  iVar4 = 8;
  do {
    local_50[0] = 0xffffffff;
    FUN_10006490(piVar1,local_50);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_100fed00(*(undefined4 *)(param_1 + 0x148));
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_100fed00(*(undefined4 *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(uint *)(param_1 + 0x178) < 9) {
    uVar5 = 0;
    do {
      if (*(int *)(*piVar1 + uVar5 * 4) != -1) {
        uVar3 = (*pcVar2)();
        (*extraout_w11_00)(uVar3,uVar5,0);
        *(undefined4 *)(*piVar1 + uVar5 * 4) = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
  }
  else {
    uVar5 = 0;
    do {
      if (*(int *)(*piVar1 + uVar5 * 4) != -1) {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3,uVar5,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    FUN_100fed00(*piVar1);
    *piVar1 = 0;
    iVar4 = 8;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    do {
      local_50[0] = 0xffffffff;
      FUN_10006490(piVar1,local_50);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

