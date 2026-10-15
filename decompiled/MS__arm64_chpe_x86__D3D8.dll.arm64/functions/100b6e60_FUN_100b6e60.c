/*
 * FUN_100b6e60 at 100b6e60
 * undefined FUN_100b6e60(void)
 * Address ranges: 100b6e60-100b7167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b6e60(int param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)(param_1 + 0x210);
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x214) != 0) {
    do {
      if (*(int *)(*piVar7 + uVar8 * 4) != 0) {
        FUN_1000b860(param_1,uVar8);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x214));
  }
  FUN_100fed00(*piVar7);
  piVar7[0] = 0;
  piVar7[1] = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  FUN_100b12c8(param_1);
  puVar2 = (undefined8 *)(param_1 + 0x58f8);
  uVar6 = *(uint *)(param_1 + 0x5914);
  uVar8 = 0;
  if (uVar6 != 0) {
    if (uVar6 == 0) {
      iVar4 = 8;
      goto LAB_100b6f24;
    }
    do {
      iVar4 = *(int *)(param_1 + 0x5910) + uVar8 * 0x9a0 + 0x10;
LAB_100b6f24:
      FUN_100bd238(puVar2,iVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x5914));
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0x590c));
  *(undefined8 *)(param_1 + 0x590c) = 0;
  puVar1 = (uint *)(param_1 + 0x5900);
  *(undefined8 *)(param_1 + 0x5914) = 0;
  if (*puVar1 != 0) {
    uVar8 = 0;
    if (*puVar1 == 0) {
      piVar7 = (int *)&DAT_00000008;
      goto LAB_100b6f9c;
    }
    do {
      piVar7 = (int *)(*(int *)(param_1 + 0x58fc) + uVar8 * 0x18 + 0x10);
LAB_100b6f9c:
      piVar5 = (int *)*piVar7;
      if (piVar5[1] != 0) {
        uVar6 = 0;
        do {
          FUN_100bd238(puVar2,*piVar5 + uVar6 * 0x990);
          piVar5 = (int *)*piVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)piVar5[1]);
      }
      if (piVar5 != (int *)0x0) {
        FUN_100fed00(*piVar5);
        FUN_100fec90(piVar5,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  uVar3 = FUN_100fed00(*(undefined4 *)(param_1 + 0x58f8));
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x5904) = 0;
  *puVar1 = 0;
  uVar6 = *(uint *)(param_1 + 0x5938);
  uVar8 = 0;
  if (uVar6 != 0) {
    if (uVar6 == 0) {
      iVar4 = 8;
      goto LAB_100b705c;
    }
    do {
      iVar4 = *(int *)(param_1 + 0x5934) + uVar8 * 0x40 + 0x10;
LAB_100b705c:
      uVar3 = FUN_100bd380(uVar3,iVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x5938));
  }
  uVar3 = FUN_100fed00(*(undefined4 *)(param_1 + 0x5930));
  *(undefined8 *)(param_1 + 0x5930) = 0;
  puVar1 = (uint *)(param_1 + 0x5924);
  *(undefined8 *)(param_1 + 0x5938) = 0;
  if (*puVar1 != 0) {
    uVar8 = 0;
    if (*puVar1 == 0) {
      piVar7 = (int *)&DAT_00000008;
      goto LAB_100b70c8;
    }
    do {
      piVar7 = (int *)(*(int *)(param_1 + 0x5920) + uVar8 * 0x18 + 0x10);
LAB_100b70c8:
      piVar5 = (int *)*piVar7;
      if (piVar5[1] != 0) {
        uVar6 = 0;
        do {
          uVar3 = FUN_100bd380(uVar3,*piVar5 + uVar6 * 0x30);
          piVar5 = (int *)*piVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)piVar5[1]);
      }
      if (piVar5 != (int *)0x0) {
        FUN_100fed00(*piVar5);
        uVar3 = FUN_100fec90(piVar5,0xc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0x591c));
  *(undefined8 *)(param_1 + 0x591c) = 0;
  *(undefined4 *)(param_1 + 0x5928) = 0;
  *puVar1 = 0;
  return;
}

