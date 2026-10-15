/*
 * FUN_1000ac25 at 1000ac25
 * undefined __thiscall FUN_1000ac25(void * this, char param_1)
 * Address ranges: 1000ac25-1000af2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ac25(void *this,char param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_190 [3];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  byte local_13c;
  int local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  byte *local_c;
  
  local_10 = (int *)((int)this + 0x3688);
  local_c = (byte *)((int)this + 0x3736);
  if (*(char *)((int)this + 0x2da8) != '\0') {
    piVar6 = (int *)((int)this + 0x2c20);
    piVar8 = local_44;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    uVar4 = FUN_1000b758((void *)(*(int *)((int)this + 0x3688) + 0x15f0),local_44);
    *(undefined4 *)((int)this + 0x36e4) = uVar4;
    *(undefined1 *)((int)this + 0x2da8) = 0;
    *(undefined1 *)((int)this + 0x3736) = 1;
    FUN_10043cae(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),*(int *)((int)this + 0x2c54));
  }
  if (*(char *)((int)this + 0x2da9) != '\0') {
    FUN_100561f1(local_190,0,0x148);
    local_190[2] = *(undefined4 *)((int)this + 0x2c60);
    local_180 = *(undefined4 *)((int)this + 0x2c64);
    local_17c = *(undefined4 *)((int)this + 0x2c68);
    local_178 = *(undefined4 *)((int)this + 0x2c6c);
    local_174 = *(undefined4 *)((int)this + 0x2c70);
    local_170 = *(undefined4 *)((int)this + 0x2c74);
    local_16c = *(undefined4 *)((int)this + 0x2c78);
    local_164 = *(undefined1 *)((int)this + 0x2c7c);
    local_160 = *(undefined4 *)((int)this + 0x2c80);
    local_158 = *(undefined4 *)((int)this + 0x2c84);
    local_154 = *(undefined4 *)((int)this + 0x2c88);
    local_150 = *(undefined4 *)((int)this + 0x2c8c);
    local_14c = *(undefined4 *)((int)this + 0x2c90);
    local_148 = *(undefined4 *)((int)this + 0x2c94);
    local_144 = *(undefined4 *)((int)this + 0x2c98);
    local_190[1] = 1;
    local_184 = 0;
    local_168 = 0;
    local_15c = 0;
    local_140 = 0;
    if ((*(int *)((int)this + 0x2c20) == 0) || (bVar10 = true, *(int *)((int)this + 0x2c24) != 1)) {
      bVar10 = false;
    }
    if ((*(uint *)((int)this + 0x2ddc) == 4) ||
       (bVar3 = true, (*(uint *)((int)this + 0x2ddc) & 0xff0000) != 0)) {
      bVar3 = false;
    }
    local_13c = -(bVar10 || bVar3) & 0xf;
    uVar4 = FUN_1000b6a9((void *)(*(int *)((int)this + 0x3688) + 0x1600),local_190);
    *(undefined4 *)((int)this + 0x36d8) = uVar4;
    *(undefined1 *)((int)this + 0x2da9) = 0;
    *(undefined1 *)((int)this + 0x3736) = 1;
  }
  if (*(char *)((int)this + 0x2daa) != '\0') {
    local_44[2] = *(undefined4 *)((int)this + 0x2ca0);
    local_2c = *(undefined4 *)((int)this + 0x2cb0);
    iVar5 = *(int *)((int)this + 0x2cbc);
    local_44[3] = *(undefined4 *)((int)this + 0x2ca4);
    local_34 = *(undefined4 *)((int)this + 0x2ca8);
    local_30 = *(undefined4 *)((int)this + 0x2cac);
    local_28[1] = *(undefined4 *)((int)this + 0x2cb8);
    local_28[2] = *(undefined4 *)((int)this + 0x2cc0);
    local_28[3] = *(undefined4 *)((int)this + 0x2cc4);
    local_28[0] = *(undefined4 *)((int)this + 0x2cb4);
    local_18 = 0;
    local_14 = 0;
    uVar4 = FUN_1000b597((void *)(*(int *)((int)this + 0x3688) + 0x1620),(uint *)(local_44 + 2));
    bVar10 = iVar5 != 0;
    *(undefined4 *)((int)this + 0x36e0) = uVar4;
    *(undefined1 *)((int)this + 0x2daa) = 0;
    cVar2 = *(char *)((int)this + 0x3735);
    *(bool *)((int)this + 0x3735) = bVar10;
    *(byte *)((int)this + 0x3651) = *(byte *)((int)this + 0x3651) | (bool)cVar2 != bVar10;
    *local_c = 1;
  }
  pbVar1 = (byte *)((int)this + 0x2dab);
  local_c = pbVar1;
  if (*(char *)((int)this + 0x2dac) != '\0') {
    uVar4 = FUN_10008437((int)this);
    *pbVar1 = *pbVar1 | (byte)uVar4;
    *(undefined1 *)((int)this + 0x2dac) = 0;
  }
  piVar6 = local_10;
  if ((*pbVar1 != 0) || (param_1 != '\0')) {
    puVar7 = (undefined4 *)((int)this + 0x2cc8);
    puVar9 = local_28;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_10043ddf(*(int *)(*piVar6 + 0x1304),1,(int)local_28);
    *local_c = 0;
  }
  if (*(char *)((int)this + 0x2dad) != '\0') {
    FUN_1000f338((int)this);
    *(undefined1 *)((int)this + 0x2dad) = 0;
  }
  return;
}

