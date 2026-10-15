/*
 * FUN_100134f0 at 100134f0
 * undefined FUN_100134f0(void)
 * Address ranges: 100134f0-10013743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100134f0(int param_1,char param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar10;
  longlong local_a0;
  undefined1 auStack_98 [56];
  longlong lStack_60;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2c6b) != '\0') {
    puVar1 = (uint *)(param_1 + 0x2ad8);
    uVar10 = 0;
    uVar4 = (uint)(*puVar1 != 0);
    if (param_2 != '\0') {
      uVar4 = *puVar1;
    }
    if (uVar4 != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x3338);
      do {
        do {
          uVar6 = (*pcVar5)();
          iVar7 = (*extraout_w11)(uVar6,*(undefined4 *)puVar2,auStack_98,0x58,0);
        } while (iVar7 == 1);
        do {
          uVar6 = (*pcVar5)();
          iVar7 = (*extraout_w11_00)(uVar6,*(undefined4 *)(param_1 + 0x333c),&local_a0,8,0);
        } while (iVar7 == 1);
        *(int *)(param_1 + 0x2c18) = (int)lStack_60 + *(int *)(param_1 + 0x2c18);
        *(int *)(param_1 + 0x2c1c) = (int)lStack_60 + *(int *)(param_1 + 0x2c1c);
        *(longlong *)(param_1 + 0x2c10) = (*(longlong *)(param_1 + 0x2c10) - local_a0) + lStack_60;
        *(int *)(param_1 + 0x2c20) = (int)auStack_98._8_8_ + *(int *)(param_1 + 0x2c20);
        *(int *)(param_1 + 0x2c00) = (int)auStack_98._48_8_ + *(int *)(param_1 + 0x2c00);
        uVar9 = *puVar2;
        uVar8 = 1;
        do {
          puVar3 = puVar2 + uVar8;
          iVar7 = uVar8 * 8;
          uVar8 = uVar8 + 1;
          *(undefined8 *)(param_1 + 0x3330 + iVar7) = *puVar3;
        } while (uVar8 < 0x20);
        uVar10 = uVar10 + 1;
        *(undefined8 *)(param_1 + 0x3430) = uVar9;
        *puVar1 = *puVar1 - 1;
      } while (uVar10 < uVar4);
    }
  }
  return;
}

