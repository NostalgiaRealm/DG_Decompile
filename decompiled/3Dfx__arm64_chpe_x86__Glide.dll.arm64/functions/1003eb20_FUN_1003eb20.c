/*
 * FUN_1003eb20 at 1003eb20
 * undefined FUN_1003eb20(void)
 * Address ranges: 1003eb20-1003ed47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003eb20(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  code *extraout_w11;
  uint uVar7;
  uint uVar8;
  
  FUN_1003ee98(param_1);
  FUN_1006e1d8(*(undefined4 *)(param_1 + 0x68),param_1 + 0x60);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    piVar1 = (int *)(param_1 + 0x84);
    do {
      iVar6 = *piVar1;
      if (*(int *)(*(int *)(iVar6 + uVar8 * 4) + 4) != 0) {
        uVar7 = 0;
        do {
          FUN_10057b80(*(int *)(param_1 + 0x6c) + 0x1640,
                       *(undefined4 *)(*(int *)(**(int **)(iVar6 + uVar8 * 4) + uVar7 * 4) + 0x24));
          if (*(int *)(**(int **)(*piVar1 + uVar8 * 4) + uVar7 * 4) != 0) {
            uVar5 = (*pcVar4)();
            (*extraout_w11)(uVar5,1);
          }
          iVar6 = *piVar1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(*(int *)(iVar6 + uVar8 * 4) + 4));
      }
      puVar3 = *(undefined4 **)(iVar6 + uVar8 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_1007a4e0(*puVar3);
        FUN_1007a470(puVar3,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x88));
  }
  FUN_1007a4e0(*(undefined4 *)(param_1 + 0x84));
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  piVar1 = (int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar6 = *piVar1;
  if (iVar6 != 0) {
    FUN_10058480(iVar6);
    FUN_1007a470(iVar6,0x78);
  }
  piVar2 = (int *)(param_1 + 0x54);
  *piVar1 = 0;
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    FUN_10058480(iVar6);
    FUN_1007a470(iVar6,0x78);
  }
  *piVar2 = 0;
  FUN_1003ead0(param_1);
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *piVar1 = 0;
  return;
}

