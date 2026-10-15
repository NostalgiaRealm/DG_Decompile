/*
 * FUN_10030da0 at 10030da0
 * undefined FUN_10030da0(void)
 * Address ranges: 10030da0-10030fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030da0(int param_1)

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
  
  FUN_10031118(param_1);
  FUN_10077098(*(undefined4 *)(param_1 + 0x21c),param_1 + 0x214);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x23c) != 0) {
    piVar1 = (int *)(param_1 + 0x238);
    do {
      iVar6 = *piVar1;
      if (*(int *)(*(int *)(iVar6 + uVar8 * 4) + 4) != 0) {
        uVar7 = 0;
        do {
          FUN_10060a40(*(int *)(param_1 + 0x220) + 0x1640,
                       *(undefined4 *)(*(int *)(**(int **)(iVar6 + uVar8 * 4) + uVar7 * 4) + 0x58));
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
        FUN_10083420(*puVar3);
        FUN_100833b0(puVar3,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x23c));
  }
  FUN_10083420(*(undefined4 *)(param_1 + 0x238));
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  piVar1 = (int *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x230) = 0;
  iVar6 = *piVar1;
  if (iVar6 != 0) {
    FUN_10061340(iVar6);
    FUN_100833b0(iVar6,0x78);
  }
  piVar2 = (int *)(param_1 + 0x208);
  *piVar1 = 0;
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    FUN_10061340(iVar6);
    FUN_100833b0(iVar6,0x78);
  }
  *piVar2 = 0;
  FUN_10030d30(param_1);
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

