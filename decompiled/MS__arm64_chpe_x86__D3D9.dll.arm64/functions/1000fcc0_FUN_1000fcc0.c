/*
 * FUN_1000fcc0 at 1000fcc0
 * undefined FUN_1000fcc0(void)
 * Address ranges: 1000fcc0-1000fd8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000fcc0(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar4 = *puVar1;
  if (*puVar2 == uVar4) {
    uVar5 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar5 = 0x10;
    }
    iVar6 = uVar5 * 0x40;
    if (uVar5 >> 0x1a != 0) {
      iVar6 = -1;
    }
    iVar6 = FUN_101322b0(iVar6);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_101325a0(iVar6,*param_1,((ulonglong)*puVar1 & 0x3ffffff) << 6);
    FUN_101322d0(*param_1);
    *param_1 = iVar6;
    *puVar1 = uVar5;
  }
  uVar9 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  puVar3 = (undefined8 *)(*param_1 + *puVar2 * 0x40);
  puVar3[1] = param_2[1];
  *puVar3 = uVar9;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  uVar9 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  puVar3[5] = param_2[5];
  puVar3[4] = uVar9;
  puVar3[7] = uVar8;
  puVar3[6] = uVar7;
  *puVar2 = *puVar2 + 1;
  return 1;
}

