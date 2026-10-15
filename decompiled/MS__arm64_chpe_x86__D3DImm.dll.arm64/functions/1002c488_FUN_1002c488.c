/*
 * FUN_1002c488 at 1002c488
 * undefined FUN_1002c488(void)
 * Address ranges: 1002c488-1002c5a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c488(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*param_1 + 4);
  *(int *)(*param_1 + 4) = param_2;
  piVar6 = (int *)*param_1;
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 8) != 0) {
    uVar8 = 0;
    param_2 = piVar6[2] + param_2;
    do {
      uVar4 = param_2 + 0xfU & 0xfffffff0;
      bVar2 = *(byte *)(iVar5 + uVar8 + 0x9c);
      *(uint *)(piVar6[1] + uVar8 * 8) = uVar4;
      uVar7 = (uint)bVar2;
      *(uint *)(((int *)*param_1)[1] + uVar8 * 8 + 4) =
           (uint)*(byte *)(*(int *)*param_1 + uVar7 * 8 + 0x16);
      uVar3 = *(undefined1 *)(*(int *)*param_1 + uVar7 * 8 + 0x16);
      param_2 = FUN_10029dd0(param_1[1],uVar3,*(undefined4 *)(iVar1 + uVar8 * 8),
                             *(undefined4 *)(iVar1 + 4 + uVar8 * 8),uVar4,uVar3);
      piVar6 = (int *)*param_1;
      uVar8 = uVar8 + 1;
      iVar5 = *piVar6;
    } while (uVar8 < *(uint *)(iVar5 + 8));
  }
  return;
}

