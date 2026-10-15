/*
 * FUN_10046e90 at 10046e90
 * undefined FUN_10046e90(void)
 * Address ranges: 10046e90-10047177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10046e90(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  
  uVar10 = *(undefined4 *)(param_3 + 0xb4);
  puVar1 = (undefined4 *)(param_3 + 0x144);
  puVar2 = (undefined4 *)(param_3 + 0x150);
  puVar3 = (undefined4 *)(param_3 + 0x154);
  *puVar1 = uVar10;
  puVar4 = (undefined4 *)(param_3 + 0x148);
  *puVar4 = 0x640;
  puVar5 = (undefined4 *)(param_3 + 0x14c);
  puVar6 = (undefined4 *)(param_3 + 0x158);
  *puVar5 = uVar10;
  *puVar2 = 0x660;
  puVar7 = (undefined4 *)(param_3 + 0x160);
  *puVar3 = *(undefined4 *)(param_3 + 0xb0);
  *puVar6 = 0x630;
  puVar8 = (undefined4 *)(param_3 + 0x15c);
  *puVar8 = uVar10;
  *puVar7 = 0x650;
  if ((*(uint *)(param_3 + 0x17c) & 1) != 0) {
    piVar9 = (int *)(param_3 + 0x180);
    if ((*(uint *)(*piVar9 + 0x2c) & 3) == 1) {
      uVar10 = FUN_10049100(param_1,param_2,param_3);
      *puVar1 = uVar10;
      *puVar4 = 0xffffffff;
    }
    if ((*(uint *)(*piVar9 + 0x2c) & 0xc) == 4) {
      uVar10 = FUN_10049100(param_1,param_2,param_3);
      *puVar2 = 0xffffffff;
      *puVar5 = uVar10;
    }
    if (*(char *)(param_3 + 0x192) == '\0') {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x10) {
        uVar10 = FUN_10049100(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
    }
    else {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x10) {
        uVar10 = FUN_10049100(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
      if ((*(uint *)(*piVar9 + 0x2c) & 0xc0) == 0x40) {
        uVar10 = FUN_10049100(param_1,param_2,param_3);
        *puVar8 = uVar10;
        *puVar7 = 0xffffffff;
      }
    }
  }
  if ((*(uint *)(param_3 + 0x17c) >> 1 & 1) != 0) {
    piVar9 = (int *)(param_3 + 0x180);
    if ((*(uint *)(*piVar9 + 0x2c) & 3) == 2) {
      uVar10 = FUN_10049178(param_1,param_2,param_3);
      *puVar1 = uVar10;
      *puVar4 = 0xffffffff;
    }
    if ((*(uint *)(*piVar9 + 0x2c) & 0xc) == 8) {
      uVar10 = FUN_10049178(param_1,param_2,param_3);
      *puVar2 = 0xffffffff;
      *puVar5 = uVar10;
    }
    if (*(char *)(param_3 + 0x192) == '\0') {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x20) {
        uVar10 = FUN_10049178(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
    }
    else {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x20) {
        uVar10 = FUN_10049178(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
      if ((*(uint *)(*piVar9 + 0x2c) & 0xc0) == 0x80) {
        uVar10 = FUN_10049178(param_1,param_2,param_3);
        *puVar8 = uVar10;
        *puVar7 = 0xffffffff;
      }
    }
  }
  return;
}

