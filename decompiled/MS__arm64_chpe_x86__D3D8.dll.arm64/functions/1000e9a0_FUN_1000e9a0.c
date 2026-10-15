/*
 * FUN_1000e9a0 at 1000e9a0
 * undefined FUN_1000e9a0(void)
 * Address ranges: 1000e9a0-1000eabf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000e9a0(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar7 = *puVar1;
  if (*puVar2 == uVar7) {
    uVar4 = uVar7 << 1;
    if (uVar7 == 0) {
      uVar4 = 0x10;
    }
    uVar6 = (undefined4)((ulonglong)uVar4 * 0x70);
    if ((ulonglong)uVar4 * 0x70 >> 0x20 != 0) {
      uVar6 = 0xffffffff;
    }
    iVar5 = FUN_100fece0(uVar6);
    if (iVar5 == 0) {
      return 0;
    }
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(iVar5 + 4);
      uVar7 = uVar4;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 0xe;
      } while (uVar7 != 0);
    }
    FUN_100ff660(iVar5,*param_1,((ulonglong)(*puVar1 * 7) & 0xfffffff) << 4);
    FUN_100fed00(*param_1);
    *param_1 = iVar5;
    *puVar1 = uVar4;
  }
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  puVar3 = (undefined8 *)(*param_1 + *puVar2 * 0x70);
  puVar3[1] = param_2[1];
  *puVar3 = uVar10;
  puVar3[3] = uVar9;
  puVar3[2] = uVar8;
  uVar10 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  puVar3[5] = param_2[5];
  puVar3[4] = uVar10;
  puVar3[7] = uVar9;
  puVar3[6] = uVar8;
  uVar10 = param_2[8];
  uVar9 = param_2[0xb];
  uVar8 = param_2[10];
  puVar3[9] = param_2[9];
  puVar3[8] = uVar10;
  puVar3[0xb] = uVar9;
  puVar3[10] = uVar8;
  uVar8 = param_2[0xc];
  puVar3[0xd] = param_2[0xd];
  puVar3[0xc] = uVar8;
  *puVar2 = *puVar2 + 1;
  return 1;
}

