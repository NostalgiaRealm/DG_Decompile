/*
 * FUN_10078f18 at 10078f18
 * undefined FUN_10078f18(void)
 * Address ranges: 10078f18-100791af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078f18(int *param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
                 uint *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if ((char)param_1[3] != '\0') {
    if (param_3 == (uint *)0x0) {
      param_3 = &DAT_100a2918;
    }
    if (param_4 == (uint *)0x0) {
      param_4 = &DAT_100a2918;
    }
    if (param_5 == (uint *)0x0) {
      param_5 = &DAT_100a2918;
    }
    if (param_6 == (uint *)0x0) {
      param_6 = &DAT_100a2918;
    }
    piVar1 = param_1 + 1;
    iVar5 = (*param_6 + DAT_100a2918 * 2 + *param_5 + *param_4 + *param_3 + 1) * 4;
    if ((uint)param_1[2] < (uint)((iVar5 - *param_1) + *piVar1)) {
      FUN_10078c90(param_1,iVar5);
    }
    puVar3 = (undefined4 *)*piVar1;
    puVar10 = param_3 + 1;
    uVar12 = 0;
    *puVar3 = param_2;
    uVar4 = *param_3;
    puVar8 = puVar3 + 1;
    uVar6 = uVar4 >> 1;
    if (uVar6 != 0) {
      do {
        uVar13 = *(undefined8 *)puVar10;
        uVar12 = uVar12 + 1;
        puVar10 = puVar10 + 2;
        *(undefined8 *)puVar8 = uVar13;
        puVar8 = puVar8 + 2;
      } while (uVar12 < uVar6);
    }
    if ((uVar4 & 1) != 0) {
      *puVar8 = *puVar10;
    }
    uVar4 = *param_3;
    puVar10 = param_4 + 1;
    uVar6 = *param_4;
    uVar12 = 0;
    puVar8 = puVar3 + uVar4 + 1;
    uVar7 = uVar6 >> 1;
    if (uVar7 != 0) {
      do {
        uVar13 = *(undefined8 *)puVar10;
        uVar12 = uVar12 + 1;
        puVar10 = puVar10 + 2;
        *(undefined8 *)puVar8 = uVar13;
        puVar8 = puVar8 + 2;
      } while (uVar12 < uVar7);
    }
    if ((uVar6 & 1) != 0) {
      *puVar8 = *puVar10;
    }
    puVar10 = param_5 + 1;
    uVar6 = *param_5;
    uVar12 = 0;
    iVar2 = *param_4 + uVar4;
    puVar8 = puVar3 + iVar2 + 1;
    uVar4 = uVar6 >> 1;
    if (uVar4 != 0) {
      do {
        uVar13 = *(undefined8 *)puVar10;
        uVar12 = uVar12 + 1;
        puVar10 = puVar10 + 2;
        *(undefined8 *)puVar8 = uVar13;
        puVar8 = puVar8 + 2;
      } while (uVar12 < uVar4);
    }
    if ((uVar6 & 1) != 0) {
      *puVar8 = *puVar10;
    }
    puVar10 = param_6 + 1;
    uVar4 = *param_6;
    uVar12 = 0;
    iVar2 = *param_5 + iVar2;
    puVar8 = puVar3 + iVar2 + 1;
    uVar6 = uVar4 >> 1;
    if (uVar6 != 0) {
      do {
        uVar13 = *(undefined8 *)puVar10;
        uVar12 = uVar12 + 1;
        puVar10 = puVar10 + 2;
        *(undefined8 *)puVar8 = uVar13;
        puVar8 = puVar8 + 2;
      } while (uVar12 < uVar6);
    }
    if ((uVar4 & 1) != 0) {
      *puVar8 = *puVar10;
    }
    uVar6 = DAT_100a2918;
    puVar11 = &DAT_100a291c;
    uVar12 = 0;
    iVar2 = *param_6 + iVar2;
    puVar9 = (undefined8 *)(puVar3 + iVar2 + 1);
    uVar4 = DAT_100a2918 >> 1;
    if (uVar4 != 0) {
      do {
        uVar13 = *puVar11;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 1;
      } while (uVar12 < uVar4);
    }
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
    }
    uVar6 = DAT_100a2918;
    puVar11 = &DAT_100a291c;
    puVar9 = (undefined8 *)(puVar3 + DAT_100a2918 + iVar2 + 1);
    uVar4 = DAT_100a2918 >> 1;
    uVar12 = 0;
    if (uVar4 != 0) {
      do {
        uVar13 = *puVar11;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 1;
      } while (uVar12 < uVar4);
    }
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
    }
    *piVar1 = iVar5 + *piVar1;
  }
  return;
}

