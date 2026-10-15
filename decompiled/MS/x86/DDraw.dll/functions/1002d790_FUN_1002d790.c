/*
 * FUN_1002d790 at 1002d790
 * undefined __stdcall FUN_1002d790(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002d790-1002d887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d790(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  uVar7 = param_1[2] - *param_1;
  if (iVar9 < param_1[3]) {
    do {
      if (uVar7 >> 2 != 0) {
        uVar8 = 0;
        do {
          iVar6 = uVar8 * 0x10;
          iVar5 = param_5 + uVar8 * -0x10;
          uVar8 = uVar8 + 1;
          uVar2 = *(undefined4 *)(iVar5 + -0x10);
          uVar3 = *(undefined4 *)(iVar5 + -0xc);
          uVar4 = *(undefined4 *)(iVar5 + -8);
          puVar1 = (undefined4 *)(iVar6 + param_7);
          *puVar1 = *(undefined4 *)(iVar5 + -4);
          puVar1[1] = uVar4;
          puVar1[2] = uVar3;
          puVar1[3] = uVar2;
        } while (uVar8 < uVar7 >> 2);
      }
      if ((uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          iVar6 = uVar8 * 4;
          iVar5 = uVar8 * -4;
          uVar8 = uVar8 + 1;
          *(undefined4 *)((uVar7 & 0xfffffffc) * 4 + param_7 + iVar6) =
               *(undefined4 *)(param_5 + (uVar7 & 0xfffffffc) * -4 + iVar5 + -4);
        } while (uVar8 < (uVar7 & 3));
      }
      param_5 = param_5 + param_6;
      param_7 = param_7 + *(int *)(param_4 + 0x14);
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1[3]);
  }
  return;
}

