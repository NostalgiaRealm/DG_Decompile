/*
 * FUN_1009b1a8 at 1009b1a8
 * undefined FUN_1009b1a8(void)
 * Address ranges: 1009b1a8-1009b48f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b1a8(undefined4 param_1,undefined4 param_2,int param_3)

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
  puVar1 = (undefined4 *)(param_3 + 0x164);
  puVar2 = (undefined4 *)(param_3 + 0x170);
  puVar3 = (undefined4 *)(param_3 + 0x174);
  *puVar1 = uVar10;
  puVar4 = (undefined4 *)(param_3 + 0x168);
  *puVar4 = 0x650;
  puVar5 = (undefined4 *)(param_3 + 0x16c);
  puVar6 = (undefined4 *)(param_3 + 0x178);
  *puVar5 = uVar10;
  *puVar2 = 0x670;
  puVar7 = (undefined4 *)(param_3 + 0x180);
  *puVar3 = *(undefined4 *)(param_3 + 0xc0);
  *puVar6 = 0x640;
  puVar8 = (undefined4 *)(param_3 + 0x17c);
  *puVar8 = uVar10;
  *puVar7 = 0x660;
  if ((*(uint *)(param_3 + 0x19c) & 1) != 0) {
    piVar9 = (int *)(param_3 + 0x1a0);
    if ((*(uint *)(*piVar9 + 0x2c) & 3) == 1) {
      uVar10 = FUN_1009d308(param_1,param_2,param_3);
      *puVar1 = uVar10;
      *puVar4 = 0xffffffff;
    }
    if ((*(uint *)(*piVar9 + 0x2c) & 0xc) == 4) {
      uVar10 = FUN_1009d308(param_1,param_2,param_3);
      *puVar2 = 0xffffffff;
      *puVar5 = uVar10;
    }
    if (*(char *)(param_3 + 0x1b2) == '\0') {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x10) {
        uVar10 = FUN_1009d308(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
    }
    else {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x10) {
        uVar10 = FUN_1009d308(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
      if ((*(uint *)(*piVar9 + 0x2c) & 0xc0) == 0x40) {
        uVar10 = FUN_1009d308(param_1,param_2,param_3);
        *puVar8 = uVar10;
        *puVar7 = 0xffffffff;
      }
    }
  }
  if ((*(uint *)(param_3 + 0x19c) >> 1 & 1) != 0) {
    piVar9 = (int *)(param_3 + 0x1a0);
    if ((*(uint *)(*piVar9 + 0x2c) & 3) == 2) {
      uVar10 = FUN_1009d380(param_1,param_2,param_3);
      *puVar1 = uVar10;
      *puVar4 = 0xffffffff;
    }
    if ((*(uint *)(*piVar9 + 0x2c) & 0xc) == 8) {
      uVar10 = FUN_1009d380(param_1,param_2,param_3);
      *puVar2 = 0xffffffff;
      *puVar5 = uVar10;
    }
    if (*(char *)(param_3 + 0x1b2) == '\0') {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x20) {
        uVar10 = FUN_1009d380(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
    }
    else {
      if ((*(uint *)(*piVar9 + 0x2c) & 0x30) == 0x20) {
        uVar10 = FUN_1009d380(param_1,param_2,param_3);
        *puVar6 = 0xffffffff;
        *puVar3 = uVar10;
      }
      if ((*(uint *)(*piVar9 + 0x2c) & 0xc0) == 0x80) {
        uVar10 = FUN_1009d380(param_1,param_2,param_3);
        *puVar8 = uVar10;
        *puVar7 = 0xffffffff;
      }
    }
  }
  return;
}

