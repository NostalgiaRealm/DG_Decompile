/*
 * FUN_10012450 at 10012450
 * undefined FUN_10012450(void)
 * Address ranges: 10012450-10012517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10012450(int param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar7 = 0;
  do {
    uVar6 = 0;
    fVar11 = *(float *)(param_3 + 0xc + uVar7 * 0x10);
    fVar10 = *(float *)(param_3 + 8 + uVar7 * 0x10);
    fVar9 = *(float *)(param_3 + uVar7 * 0x10);
    fVar8 = *(float *)(param_3 + 4 + uVar7 * 0x10);
    do {
      iVar1 = uVar6 * 0x10;
      iVar2 = uVar6 * 0x10;
      iVar3 = uVar6 * 0x10;
      iVar4 = uVar6 * 0x10;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)((int)&local_40 + iVar5 + uVar7 * 4) =
           *(float *)(param_1 + iVar1) * fVar9 + *(float *)(param_1 + 4 + iVar2) * fVar8 +
           *(float *)(param_1 + 8 + iVar3) * fVar10 + *(float *)(param_1 + 0xc + iVar4) * fVar11;
    } while (uVar6 < 4);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  param_2[1] = uStack_38;
  *param_2 = local_40;
  param_2[3] = uStack_28;
  param_2[2] = uStack_30;
  param_2[5] = uStack_18;
  param_2[4] = local_20;
  param_2[7] = uStack_8;
  param_2[6] = uStack_10;
  return param_2;
}

