/*
 * FUN_1007bf78 at 1007bf78
 * undefined FUN_1007bf78(void)
 * Address ranges: 1007bf78-1007c25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007bf78(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar10 = *(undefined4 *)(param_3 + 0xc4);
  puVar1 = (undefined4 *)(param_3 + 0x160);
  puVar2 = (undefined4 *)(param_3 + 0x16c);
  puVar3 = (undefined4 *)(param_3 + 0x170);
  *puVar1 = uVar10;
  puVar4 = (undefined4 *)(param_3 + 0x164);
  *puVar4 = 0x630;
  puVar5 = (undefined4 *)(param_3 + 0x168);
  puVar6 = (undefined4 *)(param_3 + 0x174);
  *puVar5 = uVar10;
  *puVar2 = 0x650;
  puVar7 = (undefined4 *)(param_3 + 0x17c);
  *puVar3 = *(undefined4 *)(param_3 + 0xc0);
  *puVar6 = 0x620;
  puVar8 = (undefined4 *)(param_3 + 0x178);
  *puVar8 = uVar10;
  *puVar7 = 0x640;
  if ((*(uint *)(param_3 + 0x198) & 1) != 0) {
    piVar9 = (int *)(param_3 + 0x19c);
    if ((*(uint *)(*piVar9 + 0x2c) & 3) == 1) {
      uVar10 = FUN_1007e0b8(param_1,param_2,param_3);
      *puVar1 = uVar10;
      *puVar4 = 0xffffffff;
    }
    if ((*(uint *)(*piVar9 + 0x2c) & 0xc) == 4) {
      uVar10 = FUN_1007e0b8(param_1,param_2,param_3);
      *puVar2 = 0xffffffff;
      *puVar5 = uVar10;
    }
    if (*(char *)(param_3 + 0x1ae) == '\0') {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x10) {
        uVar10 = FUN_1007e0b8(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
    }
    else {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x10) {
        uVar10 = FUN_1007e0b8(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
      if ((*(uint *)(*piVar9 + 0x2c) & 0xc0) == 0x40) {
        uVar10 = FUN_1007e0b8(param_1,param_2,param_3);
        *puVar8 = uVar10;
        *puVar7 = 0xffffffff;
      }
    }
  }
  if ((*(uint *)(param_3 + 0x198) >> 1 & 1) != 0) {
    piVar9 = (int *)(param_3 + 0x19c);
    if ((*(uint *)(*piVar9 + 0x2c) & 3) == 2) {
      uVar10 = FUN_1007e130(param_1,param_2,param_3);
      *puVar1 = uVar10;
      *puVar4 = 0xffffffff;
    }
    if ((*(uint *)(*piVar9 + 0x2c) & 0xc) == 8) {
      uVar10 = FUN_1007e130(param_1,param_2,param_3);
      *puVar2 = 0xffffffff;
      *puVar5 = uVar10;
    }
    if (*(char *)(param_3 + 0x1ae) == '\0') {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x20) {
        uVar10 = FUN_1007e130(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
    }
    else {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x20) {
        uVar10 = FUN_1007e130(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
      if ((*(uint *)(*piVar9 + 0x2c) & 0xc0) == 0x80) {
        uVar10 = FUN_1007e130(param_1,param_2,param_3);
        *puVar8 = uVar10;
        *puVar7 = 0xffffffff;
      }
    }
  }
  return;
}

