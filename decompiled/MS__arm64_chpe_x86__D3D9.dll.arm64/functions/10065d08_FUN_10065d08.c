/*
 * FUN_10065d08 at 10065d08
 * undefined FUN_10065d08(void)
 * Address ranges: 10065d08-10065ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065d08(int *param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = *(int *)(*param_1 + 4);
  *(int *)(*param_1 + 4) = (int)(param_2 + 1);
  piVar7 = (int *)*param_1;
  uVar5 = piVar7[3] + piVar7[1] + 0xfU & 0xfffffff0;
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 8) != 0) {
    uVar9 = 0;
    do {
      bVar2 = *(byte *)(iVar4 + uVar9 + 0x214);
      *(uint *)(piVar7[1] + uVar9 * 0xc) = uVar5;
      uVar8 = (uint)bVar2;
      *(uint *)(((int *)*param_1)[1] + uVar9 * 0xc + 4) =
           (uint)*(byte *)(*(int *)*param_1 + uVar8 * 8 + 0x16);
      *(undefined4 *)(*(int *)(*param_1 + 4) + uVar9 * 0xc + 8) =
           *(undefined4 *)(iVar1 + 8 + uVar9 * 0xc);
      piVar7 = (int *)*param_1;
      iVar4 = *(int *)(iVar1 + 4 + uVar9 * 0xc);
      uVar3 = *(undefined1 *)(*piVar7 + uVar8 * 8 + 0x16);
      iVar4 = FUN_10062e80(param_1[2],uVar3,
                           *(int *)(iVar1 + uVar9 * 0xc) + (piVar7[6] + piVar7[5]) * iVar4,iVar4,
                           uVar5,uVar3);
      uVar9 = uVar9 + 1;
      uVar5 = iVar4 + 0xfU & 0xfffffff0;
      piVar7 = (int *)*param_1;
      iVar4 = *piVar7;
    } while (uVar9 < *(uint *)(iVar4 + 8));
  }
  uVar6 = FUN_100604d0(uVar5,piVar7[2],uVar5,param_1[3],-piVar7[6],(char)param_1[4]);
  *(undefined4 *)(*param_1 + 0x14) = 0;
  *param_2 = uVar6;
  *(undefined4 *)(*param_1 + 8) = uVar6;
  return;
}

