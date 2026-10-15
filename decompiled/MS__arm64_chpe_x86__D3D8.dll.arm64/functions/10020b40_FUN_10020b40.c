/*
 * FUN_10020b40 at 10020b40
 * undefined FUN_10020b40(void)
 * Address ranges: 10020b40-10020d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10020b40(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x214);
  uVar10 = 0xffffffff;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x210) + uVar7 * 4) == 0) {
        uVar10 = uVar7;
        if (uVar7 != 0xffffffff) goto LAB_10020c48;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  piVar1 = (int *)(param_1 + 0x210);
  puVar2 = (uint *)(param_1 + 0x218);
  puVar3 = (uint *)(param_1 + 0x214);
  uVar5 = *puVar2;
  if (*puVar3 == uVar5) {
    uVar7 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar7 = 0x10;
    }
    iVar9 = uVar7 * 4;
    if (uVar7 >> 0x1e != 0) {
      iVar9 = -1;
    }
    iVar9 = FUN_100fece0(iVar9);
    if (iVar9 == 0) {
      return uVar10;
    }
    FUN_100ff660(iVar9,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
    FUN_100fed00(*piVar1);
    *piVar1 = iVar9;
    *puVar2 = uVar7;
  }
  *(undefined4 *)(*piVar1 + *puVar3 * 4) = 0;
  *puVar3 = *puVar3 + 1;
  uVar7 = *(uint *)(param_1 + 0x214) - 1;
  if (uVar7 != 0xffffffff) {
LAB_10020c48:
    puVar6 = (undefined8 *)FUN_100febf0(0x93a4);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar8 = puVar6 + 0xcc;
      iVar9 = 0x10a;
      do {
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        iVar9 = iVar9 + -1;
        *(undefined4 *)((int)puVar8 + 0x3c) = 0x3f800000;
        *(undefined4 *)(puVar8 + 5) = 0x3f800000;
        puVar4 = (undefined4 *)((int)puVar8 + 0x14);
        *(undefined4 *)puVar8 = 0x3f800000;
        puVar8 = puVar8 + 8;
        *puVar4 = 0x3f800000;
      } while (iVar9 != 0);
      *(undefined8 *)((int)puVar6 + 0x499c) = 0;
      *(undefined8 *)((int)puVar6 + 0x49a4) = 0;
      *(undefined8 *)((int)puVar6 + 0x933c) = 0;
      *(undefined8 *)((int)puVar6 + 0x9334) = 0;
      *(undefined8 *)((int)puVar6 + 0x9344) = 0;
      *(undefined8 *)((int)puVar6 + 0x9354) = 0;
      *(undefined8 *)((int)puVar6 + 0x934c) = 0;
      *(undefined8 *)((int)puVar6 + 0x9364) = 0;
      *(undefined8 *)((int)puVar6 + 0x935c) = 0;
      *(undefined8 *)((int)puVar6 + 0x9374) = 0;
      *(undefined8 *)((int)puVar6 + 0x936c) = 0;
      *(undefined8 *)((int)puVar6 + 0x9384) = 0;
      *(undefined8 *)((int)puVar6 + 0x937c) = 0;
      *(undefined4 *)((int)puVar6 + 0x938c) = 0;
      puVar6[0x1272] = 0;
      *(undefined2 *)(puVar6 + 0x1273) = 0;
      *(undefined8 *)((int)puVar6 + 0x939c) = 0;
    }
    *(undefined8 **)(*(int *)(param_1 + 0x210) + uVar7 * 4) = puVar6;
    iVar9 = *(int *)(*(int *)(param_1 + 0x210) + uVar7 * 4);
    if (iVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      FUN_100ff690(iVar9,0,0x93a4);
    }
  }
  return uVar7;
}

