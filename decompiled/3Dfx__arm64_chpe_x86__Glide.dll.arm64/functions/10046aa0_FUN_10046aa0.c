/*
 * FUN_10046aa0 at 10046aa0
 * undefined FUN_10046aa0(void)
 * Address ranges: 10046aa0-10046cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10046aa0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  FUN_10046e60(param_1);
  FUN_1006e1d8(*(undefined4 *)(param_1 + 0x68),param_1 + 0x60);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x84);
  uVar10 = 0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    do {
      iVar8 = *piVar1;
      if (*(int *)(*(int *)(iVar8 + uVar10 * 4) + 4) != 0) {
        uVar9 = 0;
        do {
          if (*(int *)(**(int **)(iVar8 + uVar10 * 4) + uVar9 * 4) != 0) {
            uVar7 = (*pcVar6)();
            (*extraout_w11)(uVar7,1);
          }
          iVar8 = *piVar1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(*(int *)(iVar8 + uVar10 * 4) + 4));
      }
      puVar2 = *(undefined4 **)(iVar8 + uVar10 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_1007a4e0(*puVar2);
        FUN_1007a470(puVar2,0xc);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x88));
  }
  FUN_1007a4e0(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar8 = *(int *)(param_1 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(iVar8 + 0x3184);
  iVar5 = *(int *)(iVar8 + 0x3180);
  iVar8 = iVar5 + 0x4a0;
  (*(code *)PTR_FUN_1009d03c)(iVar8);
  piVar1 = (int *)(iVar5 + iVar4 * 0x1510 + 0x7c4);
  if (iVar3 == *piVar1) {
    *piVar1 = 0;
  }
  (*pcVar6)();
  (*extraout_w11_00)(iVar3);
  (*(code *)PTR_FUN_1009d090)(iVar8);
  iVar8 = *(int *)(param_1 + 0x3c);
  auVar11 = FUN_10066fc8(*(undefined4 *)(iVar8 + 0x3180),*(undefined4 *)(iVar8 + 0x3184),
                         *(undefined4 *)(param_1 + 0x54));
  FUN_10066c08(auVar11._0_8_,auVar11._8_8_,1,param_1 + 0x4c,param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x58) = 0;
  return;
}

