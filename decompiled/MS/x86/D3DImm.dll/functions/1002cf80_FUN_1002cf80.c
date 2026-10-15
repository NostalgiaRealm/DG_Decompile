/*
 * FUN_1002cf80 at 1002cf80
 * undefined __thiscall FUN_1002cf80(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 1002cf80-1002d0b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cf80(void *this,undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
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
    uVar1 = (int)this + 0x80;
    uVar15 = 0;
    if (((param_2 + 0x1cac < uVar1) || ((int)this + 0x1d2cU < param_2)) &&
       ((param_2 + 0x395c < uVar1 || ((int)this + 0x1d2cU < param_2 + 0x1cb0)))) {
      do {
        puVar2 = (uint *)(param_2 + 0x1cb0 + uVar15 * 4);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (uint *)(param_2 + uVar15 * 4);
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];
        puVar4 = (uint *)(uVar1 + uVar15 * 4);
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];
        puVar5 = (uint *)(uVar1 + uVar15 * 4);
        *puVar5 = ~*puVar2 & *puVar4 | *puVar2 & *puVar3;
        puVar5[1] = ~uVar6 & uVar12 | uVar6 & uVar9;
        puVar5[2] = ~uVar7 & uVar13 | uVar7 & uVar10;
        puVar5[3] = ~uVar8 & uVar14 | uVar8 & uVar11;
        uVar15 = uVar15 + 4;
      } while (uVar15 < 0x72c);
    }
    else {
      do {
        uVar1 = *(uint *)(param_2 + 0x1cb0 + uVar15 * 4);
        *(uint *)((int)this + uVar15 * 4 + 0x80) =
             ~uVar1 & *(uint *)((int)this + uVar15 * 4 + 0x80) |
             uVar1 & *(uint *)(param_2 + uVar15 * 4);
        uVar15 = uVar15 + 1;
      } while (uVar15 < 0x72c);
    }
    *(uint *)((int)this + 0x1d30) = *(uint *)((int)this + 0x1d30) | *(uint *)(param_2 + 0x3960);
    *(uint *)((int)this + 0x1d34) = *(uint *)((int)this + 0x1d34) | *(uint *)(param_2 + 0x3964);
    *(uint *)((int)this + 0x1d38) = *(uint *)((int)this + 0x1d38) | *(uint *)(param_2 + 0x3968);
    *(uint *)((int)this + 0x1d3c) = *(uint *)((int)this + 0x1d3c) | *(uint *)(param_2 + 0x396c);
    *(uint *)((int)this + 0x1d40) = *(uint *)((int)this + 0x1d40) | *(uint *)(param_2 + 0x3970);
    *(uint *)((int)this + 0x1d44) = *(uint *)((int)this + 0x1d44) | *(uint *)(param_2 + 0x3974);
    *(uint *)((int)this + 0x1d48) = *(uint *)((int)this + 0x1d48) | *(uint *)(param_2 + 0x3978);
    *(uint *)((int)this + 0x1d4c) = *(uint *)((int)this + 0x1d4c) | *(uint *)(param_2 + 0x397c);
  }
  return;
}

