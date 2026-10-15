/*
 * FUN_1000d360 at 1000d360
 * undefined FUN_1000d360(void)
 * Address ranges: 1000d360-1000d4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d360(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (uint *)(param_1 + 0xe28);
  if (*puVar1 != 0) {
    uVar10 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xe24) + uVar10 * 4) == param_2) {
        if (uVar10 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_2 + 0x34) == 0) && (*(int *)(param_1 + 0xdc8) == 1)) {
          uVar7 = *(undefined4 *)(param_2 + 0x28);
          uVar4 = FUN_100034b0(uVar7);
          iVar3 = *(int *)(param_1 + 0xdf0);
          auVar11 = FUN_100035f0(uVar7);
          uVar5 = FUN_10003300(uVar7,auVar11._8_8_,auVar11._0_8_ & 0xffffffff);
          iVar6 = FUN_1003ef60(*(undefined4 *)(param_2 + 0x40),uVar5);
          uVar7 = FUN_100036b0(uVar7);
          iVar8 = FUN_1003ebe0(*(undefined4 *)(param_2 + 0x44),uVar7,uVar4);
          (&DAT_10171578)[iVar3 * 0x45] =
               (&DAT_10171578)[iVar3 * 0x45] + (ulonglong)(uint)(iVar6 * iVar8);
        }
        uVar9 = *puVar1;
        if (uVar9 <= uVar10) {
          return;
        }
        uVar10 = uVar10 + 1;
        if (uVar10 < uVar9) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe24) + uVar10 * 4);
            uVar10 = uVar10 + 1;
            puVar2[-1] = *puVar2;
            uVar9 = *puVar1;
          } while (uVar10 < uVar9);
        }
        *puVar1 = uVar9 - 1;
        return;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *puVar1);
  }
  return;
}

