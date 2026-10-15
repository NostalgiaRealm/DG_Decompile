/*
 * FUN_1002e020 at 1002e020
 * undefined FUN_1002e020(void)
 * Address ranges: 1002e020-1002e247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e020(int param_1)

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
  
  FUN_1002e398(param_1);
  FUN_100719f8(*(undefined4 *)(param_1 + 0x21c),param_1 + 0x214);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x23c) != 0) {
    piVar1 = (int *)(param_1 + 0x238);
    do {
      iVar6 = *piVar1;
      if (*(int *)(*(int *)(iVar6 + uVar8 * 4) + 4) != 0) {
        uVar7 = 0;
        do {
          FUN_1005b390(*(int *)(param_1 + 0x220) + 0x1640,
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
        FUN_1007dd80(*puVar3);
        FUN_1007dd10(puVar3,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x23c));
  }
  FUN_1007dd80(*(undefined4 *)(param_1 + 0x238));
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  piVar1 = (int *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x230) = 0;
  iVar6 = *piVar1;
  if (iVar6 != 0) {
    FUN_1005bc90(iVar6);
    FUN_1007dd10(iVar6,0x78);
  }
  piVar2 = (int *)(param_1 + 0x208);
  *piVar1 = 0;
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    FUN_1005bc90(iVar6);
    FUN_1007dd10(iVar6,0x78);
  }
  *piVar2 = 0;
  FUN_1002dfb0(param_1);
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  *piVar1 = 0;
  return;
}

