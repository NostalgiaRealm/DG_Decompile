/*
 * FUN_10053c80 at 10053c80
 * undefined __thiscall FUN_10053c80(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 10053c80-10053db0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053c80(void *this,undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_2 != 0) {
    uVar15 = (int)this + 0x90;
    uVar14 = 0;
    if (((param_2 + 0xf5cc < uVar15) || ((int)this + 0xf65cU < param_2)) &&
       ((param_2 + 0x1eb9c < uVar15 || ((int)this + 0xf65cU < param_2 + 0xf5d0)))) {
      do {
        puVar1 = (uint *)(param_2 + 0xf5d0 + uVar14 * 4);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (uint *)(param_2 + uVar14 * 4);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (uint *)(uVar15 + uVar14 * 4);
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        puVar4 = (uint *)(uVar15 + uVar14 * 4);
        *puVar4 = ~*puVar1 & *puVar3 | *puVar1 & *puVar2;
        puVar4[1] = ~uVar5 & uVar11 | uVar5 & uVar8;
        puVar4[2] = ~uVar6 & uVar12 | uVar6 & uVar9;
        puVar4[3] = ~uVar7 & uVar13 | uVar7 & uVar10;
        uVar14 = uVar14 + 4;
      } while (uVar14 < 0x3d74);
    }
    else {
      do {
        uVar15 = *(uint *)(param_2 + 0xf5d0 + uVar14 * 4);
        *(uint *)((int)this + uVar14 * 4 + 0x90) =
             ~uVar15 & *(uint *)((int)this + uVar14 * 4 + 0x90) |
             uVar15 & *(uint *)(param_2 + uVar14 * 4);
        uVar14 = uVar14 + 1;
      } while (uVar14 < 0x3d74);
    }
    uVar15 = 0;
    puVar1 = (uint *)((int)this + 0xf660);
    if (((uint *)(param_2 + 0x1ebe8) < puVar1) ||
       ((uint *)((int)this + 0xf6a8U) < (uint *)(param_2 + 0x1eba0))) {
      uVar14 = *(uint *)(param_2 + 0x1eba4);
      uVar5 = *(uint *)(param_2 + 0x1eba8);
      uVar6 = *(uint *)(param_2 + 0x1ebac);
      uVar15 = 0x10;
      *puVar1 = *puVar1 | *(uint *)(param_2 + 0x1eba0);
      *(uint *)((int)this + 0xf664) = *(uint *)((int)this + 0xf664) | uVar14;
      *(uint *)((int)this + 0xf668) = *(uint *)((int)this + 0xf668) | uVar5;
      *(uint *)((int)this + 0xf66c) = *(uint *)((int)this + 0xf66c) | uVar6;
      uVar14 = *(uint *)(param_2 + 0x1ebb4);
      uVar5 = *(uint *)(param_2 + 0x1ebb8);
      uVar6 = *(uint *)(param_2 + 0x1ebbc);
      *(uint *)((int)this + 0xf670) = *(uint *)((int)this + 0xf670) | *(uint *)(param_2 + 0x1ebb0);
      *(uint *)((int)this + 0xf674) = *(uint *)((int)this + 0xf674) | uVar14;
      *(uint *)((int)this + 0xf678) = *(uint *)((int)this + 0xf678) | uVar5;
      *(uint *)((int)this + 0xf67c) = *(uint *)((int)this + 0xf67c) | uVar6;
      uVar14 = *(uint *)(param_2 + 0x1ebc4);
      uVar5 = *(uint *)(param_2 + 0x1ebc8);
      uVar6 = *(uint *)(param_2 + 0x1ebcc);
      *(uint *)((int)this + 0xf680) = *(uint *)((int)this + 0xf680) | *(uint *)(param_2 + 0x1ebc0);
      *(uint *)((int)this + 0xf684) = *(uint *)((int)this + 0xf684) | uVar14;
      *(uint *)((int)this + 0xf688) = *(uint *)((int)this + 0xf688) | uVar5;
      *(uint *)((int)this + 0xf68c) = *(uint *)((int)this + 0xf68c) | uVar6;
      uVar14 = *(uint *)(param_2 + 0x1ebd4);
      uVar5 = *(uint *)(param_2 + 0x1ebd8);
      uVar6 = *(uint *)(param_2 + 0x1ebdc);
      *(uint *)((int)this + 0xf690) = *(uint *)((int)this + 0xf690) | *(uint *)(param_2 + 0x1ebd0);
      *(uint *)((int)this + 0xf694) = *(uint *)((int)this + 0xf694) | uVar14;
      *(uint *)((int)this + 0xf698) = *(uint *)((int)this + 0xf698) | uVar5;
      *(uint *)((int)this + 0xf69c) = *(uint *)((int)this + 0xf69c) | uVar6;
    }
    do {
      *(uint *)((int)this + uVar15 * 4 + 0xf660) =
           *(uint *)((int)this + uVar15 * 4 + 0xf660) | *(uint *)(param_2 + 0x1eba0 + uVar15 * 4);
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x13);
  }
  return;
}

