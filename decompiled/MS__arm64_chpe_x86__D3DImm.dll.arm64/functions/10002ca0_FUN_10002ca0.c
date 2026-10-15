/*
 * FUN_10002ca0 at 10002ca0
 * undefined FUN_10002ca0(void)
 * Address ranges: 10002ca0-10002e1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002ca0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar4;
  int iVar5;
  undefined4 local_50 [4];
  
  FUN_10081dc0(*(undefined4 *)(param_1 + 0x14c));
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  FUN_10081dc0(*(undefined4 *)(param_1 + 0x15c));
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(uint *)(param_1 + 0x17c) < 9) {
    uVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x178) + uVar4 * 4) != -1) {
        uVar3 = (*pcVar2)();
        (*extraout_w11_00)(uVar3,uVar4,0);
        *(undefined4 *)(*(int *)(param_1 + 0x178) + uVar4 * 4) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  else {
    piVar1 = (int *)(param_1 + 0x178);
    uVar4 = 0;
    do {
      if (*(int *)(*piVar1 + uVar4 * 4) != -1) {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3,uVar4,0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    FUN_10081dc0(*piVar1);
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    iVar5 = 8;
    do {
      local_50[0] = 0xffffffff;
      FUN_100059f0(piVar1,local_50);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

