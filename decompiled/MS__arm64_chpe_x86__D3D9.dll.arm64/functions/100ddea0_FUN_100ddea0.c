/*
 * FUN_100ddea0 at 100ddea0
 * undefined FUN_100ddea0(void)
 * Address ranges: 100ddea0-100de267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ddea0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  piVar5 = (int *)(param_1 + 0x3b4);
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x3b8) != 0) {
    do {
      if (*(int *)(*piVar5 + uVar8 * 4) != 0) {
        FUN_1000c8c0(param_1,uVar8);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x3b8));
  }
  FUN_101322d0(*piVar5);
  piVar5[0] = 0;
  piVar5[1] = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  uVar3 = FUN_100d2998(param_1);
  uVar7 = *(uint *)(param_1 + 0x6734);
  uVar8 = 0;
  if (uVar7 != 0) {
    if (uVar7 == 0) {
      iVar4 = 8;
      goto LAB_100ddf64;
    }
    do {
      iVar4 = *(int *)(param_1 + 0x6730) + uVar8 * 0x880 + 0x10;
LAB_100ddf64:
      uVar3 = FUN_100e55a8(uVar3,iVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x6734));
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0x672c));
  *(undefined8 *)(param_1 + 0x672c) = 0;
  *(undefined8 *)(param_1 + 0x6734) = 0;
  uVar7 = *(uint *)(param_1 + 0x6744);
  uVar8 = 0;
  if (uVar7 != 0) {
    if (uVar7 == 0) {
      piVar5 = (int *)&DAT_00000008;
      goto LAB_100ddfc8;
    }
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x6740) + uVar8 * 0x18 + 0x10);
LAB_100ddfc8:
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_101322d0(*puVar2);
        FUN_10132260(puVar2,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x6744));
  }
  uVar3 = FUN_101322d0(*(undefined4 *)(param_1 + 0x673c));
  *(undefined8 *)(param_1 + 0x673c) = 0;
  puVar1 = (uint *)(param_1 + 0x6720);
  *(undefined8 *)(param_1 + 0x6744) = 0;
  if (*puVar1 != 0) {
    uVar8 = 0;
    if (*puVar1 == 0) {
      piVar5 = (int *)&DAT_00000008;
      goto LAB_100de050;
    }
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x671c) + uVar8 * 0x18 + 0x10);
LAB_100de050:
      piVar6 = (int *)*piVar5;
      if (piVar6[1] != 0) {
        uVar7 = 0;
        do {
          uVar3 = FUN_100e55a8(uVar3,*piVar6 + uVar7 * 0x870);
          piVar6 = (int *)*piVar5;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)piVar6[1]);
      }
      if (piVar6 != (int *)0x0) {
        FUN_101322d0(*piVar6);
        uVar3 = FUN_10132260(piVar6,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  uVar3 = FUN_101322d0(*(undefined4 *)(param_1 + 0x6718));
  *(undefined8 *)(param_1 + 0x6718) = 0;
  *(undefined4 *)(param_1 + 0x6724) = 0;
  *puVar1 = 0;
  uVar7 = *(uint *)(param_1 + 0x676c);
  uVar8 = 0;
  if (uVar7 != 0) {
    if (uVar7 == 0) {
      iVar4 = 8;
      goto LAB_100de110;
    }
    do {
      iVar4 = *(int *)(param_1 + 0x6768) + uVar8 * 0x238 + 0x10;
LAB_100de110:
      uVar3 = FUN_100e56d8(uVar3,iVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x676c));
  }
  uVar3 = FUN_101322d0(*(undefined4 *)(param_1 + 0x6764));
  *(undefined8 *)(param_1 + 0x6764) = 0;
  puVar1 = (uint *)(param_1 + 0x6758);
  *(undefined8 *)(param_1 + 0x676c) = 0;
  if (*puVar1 != 0) {
    uVar8 = 0;
    if (*puVar1 == 0) {
      piVar5 = (int *)&DAT_00000008;
      goto LAB_100de184;
    }
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x6754) + uVar8 * 0x18 + 0x10);
LAB_100de184:
      piVar6 = (int *)*piVar5;
      if (piVar6[1] != 0) {
        uVar7 = 0;
        do {
          uVar3 = FUN_100e56d8(uVar3,*piVar6 + uVar7 * 0x228);
          piVar6 = (int *)*piVar5;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)piVar6[1]);
      }
      if (piVar6 != (int *)0x0) {
        FUN_101322d0(*piVar6);
        uVar3 = FUN_10132260(piVar6,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0x6750));
  *(undefined8 *)(param_1 + 0x6750) = 0;
  *(undefined4 *)(param_1 + 0x675c) = 0;
  *puVar1 = 0;
  puVar1 = (uint *)(param_1 + 0x677c);
  uVar8 = 0;
  if (*puVar1 != 0) {
    do {
      FUN_100eb670(*(undefined4 *)(*(int *)(param_1 + 0x6774) + uVar8 * 0x10 + 0xc));
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  *puVar1 = 0;
  return;
}

