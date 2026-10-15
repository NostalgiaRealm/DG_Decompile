/*
 * FUN_100456f0 at 100456f0
 * undefined __thiscall FUN_100456f0(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 100456f0-10045821
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100456f0(void *this,undefined4 param_1,uint param_2)

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
    uVar14 = (int)this + 0x90;
    uVar15 = 0;
    if (((param_2 + 0xd8dc < uVar14) || ((int)this + 0xd96cU < param_2)) &&
       ((param_2 + 0x1b1bc < uVar14 || ((int)this + 0xd96cU < param_2 + 0xd8e0)))) {
      do {
        puVar1 = (uint *)(param_2 + 0xd8e0 + uVar15 * 4);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (uint *)(param_2 + uVar15 * 4);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (uint *)(uVar14 + uVar15 * 4);
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        puVar4 = (uint *)(uVar14 + uVar15 * 4);
        *puVar4 = ~*puVar1 & *puVar3 | *puVar1 & *puVar2;
        puVar4[1] = ~uVar5 & uVar11 | uVar5 & uVar8;
        puVar4[2] = ~uVar6 & uVar12 | uVar6 & uVar9;
        puVar4[3] = ~uVar7 & uVar13 | uVar7 & uVar10;
        uVar15 = uVar15 + 4;
      } while (uVar15 < 0x3638);
    }
    else {
      do {
        uVar14 = *(uint *)(param_2 + 0xd8e0 + uVar15 * 4);
        *(uint *)((int)this + uVar15 * 4 + 0x90) =
             ~uVar14 & *(uint *)((int)this + uVar15 * 4 + 0x90) |
             uVar14 & *(uint *)(param_2 + uVar15 * 4);
        uVar15 = uVar15 + 1;
      } while (uVar15 < 0x3638);
    }
    uVar14 = 0;
    puVar1 = (uint *)((int)this + 0xd970);
    if ((puVar1 <= (uint *)(param_2 + 0x1b1fc)) &&
       ((uint *)(param_2 + 0x1b1c0) <= (uint *)((int)this + 0xd9acU))) {
      do {
        *(uint *)((int)this + uVar14 * 4 + 0xd970) =
             *(uint *)((int)this + uVar14 * 4 + 0xd970) | *(uint *)(param_2 + 0x1b1c0 + uVar14 * 4);
        uVar14 = uVar14 + 1;
      } while (uVar14 < 0x10);
      return;
    }
    uVar14 = *(uint *)(param_2 + 0x1b1c4);
    uVar15 = *(uint *)(param_2 + 0x1b1c8);
    uVar5 = *(uint *)(param_2 + 0x1b1cc);
    *puVar1 = *puVar1 | *(uint *)(param_2 + 0x1b1c0);
    *(uint *)((int)this + 0xd974) = *(uint *)((int)this + 0xd974) | uVar14;
    *(uint *)((int)this + 0xd978) = *(uint *)((int)this + 0xd978) | uVar15;
    *(uint *)((int)this + 0xd97c) = *(uint *)((int)this + 0xd97c) | uVar5;
    uVar14 = *(uint *)(param_2 + 0x1b1d4);
    uVar15 = *(uint *)(param_2 + 0x1b1d8);
    uVar5 = *(uint *)(param_2 + 0x1b1dc);
    *(uint *)((int)this + 0xd980) = *(uint *)((int)this + 0xd980) | *(uint *)(param_2 + 0x1b1d0);
    *(uint *)((int)this + 0xd984) = *(uint *)((int)this + 0xd984) | uVar14;
    *(uint *)((int)this + 0xd988) = *(uint *)((int)this + 0xd988) | uVar15;
    *(uint *)((int)this + 0xd98c) = *(uint *)((int)this + 0xd98c) | uVar5;
    uVar14 = *(uint *)(param_2 + 0x1b1e4);
    uVar15 = *(uint *)(param_2 + 0x1b1e8);
    uVar5 = *(uint *)(param_2 + 0x1b1ec);
    *(uint *)((int)this + 0xd990) = *(uint *)((int)this + 0xd990) | *(uint *)(param_2 + 0x1b1e0);
    *(uint *)((int)this + 0xd994) = *(uint *)((int)this + 0xd994) | uVar14;
    *(uint *)((int)this + 0xd998) = *(uint *)((int)this + 0xd998) | uVar15;
    *(uint *)((int)this + 0xd99c) = *(uint *)((int)this + 0xd99c) | uVar5;
    uVar14 = *(uint *)(param_2 + 0x1b1f4);
    uVar15 = *(uint *)(param_2 + 0x1b1f8);
    uVar5 = *(uint *)(param_2 + 0x1b1fc);
    *(uint *)((int)this + 0xd9a0) = *(uint *)((int)this + 0xd9a0) | *(uint *)(param_2 + 0x1b1f0);
    *(uint *)((int)this + 0xd9a4) = *(uint *)((int)this + 0xd9a4) | uVar14;
    *(uint *)((int)this + 0xd9a8) = *(uint *)((int)this + 0xd9a8) | uVar15;
    *(uint *)((int)this + 0xd9ac) = *(uint *)((int)this + 0xd9ac) | uVar5;
  }
  return;
}

