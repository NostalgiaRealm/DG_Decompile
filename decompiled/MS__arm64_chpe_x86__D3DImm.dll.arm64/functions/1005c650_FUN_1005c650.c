/*
 * FUN_1005c650 at 1005c650
 * undefined FUN_1005c650(void)
 * Address ranges: 1005c650-1005c81b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1005c650(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_100 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_100[0] = param_3;
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10059b10(param_1 + 0x940,&local_f0,local_100);
  *(undefined8 *)(param_1 + 0x168c) = uStack_e8;
  *(undefined8 *)(param_1 + 0x1684) = local_f0;
  *(undefined8 *)(param_1 + 0x169c) = uStack_d8;
  *(undefined8 *)(param_1 + 0x1694) = uStack_e0;
  *(int *)(param_1 + 0x1678) = param_2;
  *(undefined8 *)(param_1 + 0x16ac) = uStack_c8;
  *(undefined8 *)(param_1 + 0x16a4) = local_d0;
  *(undefined8 *)(param_1 + 0x16bc) = uStack_b8;
  *(undefined8 *)(param_1 + 0x16b4) = uStack_c0;
  *(undefined8 *)(param_1 + 0x16cc) = uStack_a8;
  *(undefined8 *)(param_1 + 0x16c4) = local_b0;
  *(undefined8 *)(param_1 + 0x16dc) = uStack_98;
  *(undefined8 *)(param_1 + 0x16d4) = uStack_a0;
  *(undefined8 *)(param_1 + 0x16ec) = uStack_88;
  *(undefined8 *)(param_1 + 0x16e4) = local_90;
  *(undefined8 *)(param_1 + 0x16fc) = uStack_78;
  *(undefined8 *)(param_1 + 0x16f4) = uStack_80;
  *(undefined8 *)(param_1 + 0x170c) = uStack_68;
  *(undefined8 *)(param_1 + 0x1704) = local_70;
  *(undefined8 *)(param_1 + 0x171c) = uStack_58;
  *(undefined8 *)(param_1 + 0x1714) = uStack_60;
  *(undefined8 *)(param_1 + 0x172c) = uStack_48;
  *(undefined8 *)(param_1 + 0x1724) = local_50;
  if (param_2 - 1U < 6) {
    uVar4 = (uint)*(byte *)(param_2 + 0x1009e6e8);
  }
  else {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x167c) = uVar4;
  if (param_2 - 1U < 6) {
    uVar4 = (uint)*(byte *)(param_2 + 0x1009e6e0);
  }
  else {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x1680) = uVar4;
  *(undefined8 *)(param_1 + 0x1740) = 0;
  if (*(int *)(param_1 + 0x1688) == 3) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1690);
    if (uVar1 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x1005c78c);
      (*(code *)uVar2)();
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = 0x4000 / uVar1;
    }
    uVar5 = uVar5 & 0xfffffffc;
  }
  *(uint *)(param_1 + 0x1738) = uVar5;
  *(undefined4 *)(param_1 + 0x173c) = 0x2000;
  *(undefined1 *)(param_1 + 0x1750) = 1;
  *(undefined4 *)(param_1 + 0x1748) = param_4;
  *(undefined4 *)(param_1 + 0x174c) = param_5;
  *(bool *)(param_1 + 0x1751) = uVar4 != 0;
  *(undefined4 *)(param_1 + 0x1734) = param_6;
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return 0;
}

