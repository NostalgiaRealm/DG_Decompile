/*
 * FUN_10026a30 at 10026a30
 * undefined FUN_10026a30(void)
 * Address ranges: 10026a30-10026caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10026a30(int param_1)

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
  
  uVar5 = *(uint *)(param_1 + 0x3b8);
  uVar10 = 0xffffffff;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x3b4) + uVar7 * 4) == 0) {
        uVar10 = uVar7;
        if (uVar7 != 0xffffffff) goto LAB_10026b38;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  piVar1 = (int *)(param_1 + 0x3b4);
  puVar2 = (uint *)(param_1 + 0x3bc);
  puVar3 = (uint *)(param_1 + 0x3b8);
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
    iVar9 = FUN_101322b0(iVar9);
    if (iVar9 == 0) {
      return uVar10;
    }
    FUN_101325a0(iVar9,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
    FUN_101322d0(*piVar1);
    *piVar1 = iVar9;
    *puVar2 = uVar7;
  }
  *(undefined4 *)(*piVar1 + *puVar3 * 4) = 0;
  *puVar3 = *puVar3 + 1;
  uVar7 = *(uint *)(param_1 + 0x3b8) - 1;
  if (uVar7 != 0xffffffff) {
LAB_10026b38:
    puVar6 = (undefined8 *)FUN_101321c0(0xac54);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar8 = puVar6 + 0xee;
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
      *(undefined8 *)((int)puVar6 + 0x4aac) = 0;
      *(undefined8 *)((int)puVar6 + 0x4ab4) = 0;
      puVar6[0x1576] = 0;
      puVar6[0x1575] = 0;
      puVar6[0x1577] = 0;
      *(undefined4 *)(puVar6 + 0x1578) = 0;
      *(undefined8 *)((int)puVar6 + 0xabcc) = 0;
      *(undefined8 *)((int)puVar6 + 0xabc4) = 0;
      *(undefined8 *)((int)puVar6 + 0xabdc) = 0;
      *(undefined8 *)((int)puVar6 + 0xabd4) = 0;
      *(undefined4 *)((int)puVar6 + 0xabe4) = 0;
      puVar6[0x157e] = 0;
      puVar6[0x157d] = 0;
      puVar6[0x1580] = 0;
      puVar6[0x157f] = 0;
      *(undefined4 *)(puVar6 + 0x1581) = 0;
      *(undefined8 *)((int)puVar6 + 0xac0c) = 0;
      *(undefined2 *)((int)puVar6 + 0xac14) = 0;
      puVar6[0x1583] = 0;
      *(undefined2 *)(puVar6 + 0x1584) = 0;
      *(undefined1 *)((int)puVar6 + 0xac22) = 0;
      *(undefined8 *)((int)puVar6 + 0xac2c) = 0;
      *(undefined8 *)((int)puVar6 + 0xac24) = 0;
      *(undefined8 *)((int)puVar6 + 0xac34) = 0;
      *(undefined4 *)((int)puVar6 + 0xac3c) = 0;
      puVar6[0x1588] = 0;
      *(undefined4 *)(puVar6 + 0x1589) = 0;
      *(undefined8 *)((int)puVar6 + 0xac4c) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f5c) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f54) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f6c) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f64) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f7c) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f74) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f8c) = 0;
      *(undefined8 *)((int)puVar6 + 0x4f84) = 0;
    }
    *(undefined8 **)(*(int *)(param_1 + 0x3b4) + uVar7 * 4) = puVar6;
    iVar9 = *(int *)(*(int *)(param_1 + 0x3b4) + uVar7 * 4);
    if (iVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      FUN_101325d0(iVar9,0,0xac54);
    }
  }
  return uVar7;
}

