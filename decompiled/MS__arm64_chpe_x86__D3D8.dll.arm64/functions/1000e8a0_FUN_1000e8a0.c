/*
 * FUN_1000e8a0 at 1000e8a0
 * undefined FUN_1000e8a0(void)
 * Address ranges: 1000e8a0-1000e98f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000e8a0(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar4 = *puVar1;
  if (*puVar2 == uVar4) {
    uVar5 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar5 = 0x10;
    }
    uVar7 = (undefined4)((ulonglong)uVar5 * 0x3c);
    if ((ulonglong)uVar5 * 0x3c >> 0x20 != 0) {
      uVar7 = 0xffffffff;
    }
    iVar6 = FUN_100fece0(uVar7);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_100ff660(iVar6,*param_1,((ulonglong)(*puVar1 * 0xf) & 0x3fffffff) << 2);
    FUN_100fed00(*param_1);
    *param_1 = iVar6;
    *puVar1 = uVar5;
  }
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  puVar3 = (undefined8 *)(*param_1 + *puVar2 * 0x3c);
  puVar3[1] = param_2[1];
  *puVar3 = uVar10;
  puVar3[3] = uVar9;
  puVar3[2] = uVar8;
  uVar8 = param_2[4];
  puVar3[5] = param_2[5];
  puVar3[4] = uVar8;
  puVar3[6] = param_2[6];
  *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_2 + 7);
  *puVar2 = *puVar2 + 1;
  return 1;
}

