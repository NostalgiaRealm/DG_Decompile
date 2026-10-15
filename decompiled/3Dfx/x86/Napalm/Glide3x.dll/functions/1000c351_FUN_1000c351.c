/*
 * FUN_1000c351 at 1000c351
 * undefined4 __fastcall FUN_1000c351(int param_1)
 * Address ranges: 1000c351-1000c5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000c351(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  uint3 uVar9;
  int iVar8;
  float *pfVar10;
  float *pfVar11;
  float local_144 [4];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_110 [3];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  byte local_cc;
  
  pbVar1 = (byte *)(param_1 + 0x3684);
  puVar2 = (undefined4 *)(param_1 + 0x3680);
  pbVar6 = pbVar1;
  if (*(char *)(param_1 + 0x2da8) != '\0') {
    iVar8 = *(int *)(param_1 + 0x2c54);
    pfVar10 = (float *)(param_1 + 0x2c20);
    pfVar11 = local_144;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    pbVar6 = (byte *)FUN_100474b8((void *)*puVar2,*(int *)pbVar1,(int *)local_144,iVar8);
    *(undefined1 *)(param_1 + 0x2da8) = 0;
  }
  if (*(char *)(param_1 + 0x2da9) != '\0') {
    FUN_100561f1(local_110,0,0x108);
    local_110[2] = *(undefined4 *)(param_1 + 0x2c60);
    local_104 = *(undefined4 *)(param_1 + 0x2c64);
    local_100 = *(undefined4 *)(param_1 + 0x2c68);
    local_fc = *(undefined4 *)(param_1 + 0x2c6c);
    local_f8 = *(undefined4 *)(param_1 + 0x2c70);
    local_f4 = *(undefined4 *)(param_1 + 0x2c74);
    local_f0 = *(undefined4 *)(param_1 + 0x2c78);
    local_ec = *(undefined1 *)(param_1 + 0x2c7c);
    local_e8 = *(undefined4 *)(param_1 + 0x2c80);
    local_e4 = *(undefined4 *)(param_1 + 0x2c84);
    local_e0 = *(undefined4 *)(param_1 + 0x2c88);
    local_dc = *(undefined4 *)(param_1 + 0x2c8c);
    local_d8 = *(undefined4 *)(param_1 + 0x2c90);
    local_d4 = *(undefined4 *)(param_1 + 0x2c94);
    local_d0 = *(undefined4 *)(param_1 + 0x2c98);
    local_110[1] = 1;
    if ((*(int *)(param_1 + 0x2c20) == 0) || (*(int *)(param_1 + 0x2c24) != 1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar4 = *(uint *)(param_1 + 0x2ddc);
    uVar9 = (uint3)(uVar4 >> 8);
    if ((uVar4 == 4) || ((uVar4 & 0xff0000) != 0)) {
      iVar8 = (uint)uVar9 << 8;
    }
    else {
      iVar8 = CONCAT31(uVar9,1);
    }
    local_cc = -(bVar5 || (char)iVar8 != '\0') & 0xf;
    pbVar6 = (byte *)FUN_10047449(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),local_110,
                                  iVar8,*(int *)(param_1 + 0x2c5c));
    *(undefined1 *)(param_1 + 0x2da9) = 0;
  }
  if (*(char *)(param_1 + 0x2daa) != '\0') {
    local_144[0] = *(float *)(param_1 + 0x2ca0);
    local_134 = *(undefined4 *)(param_1 + 0x2cb0);
    local_144[1] = *(float *)(param_1 + 0x2ca4);
    local_144[2] = *(float *)(param_1 + 0x2ca8);
    local_144[3] = *(float *)(param_1 + 0x2cac);
    local_12c = *(undefined4 *)(param_1 + 0x2cb8);
    local_128 = *(undefined4 *)(param_1 + 0x2cbc);
    local_124 = *(undefined4 *)(param_1 + 0x2cc0);
    local_120 = *(undefined4 *)(param_1 + 0x2cc4);
    local_130 = *(undefined4 *)(param_1 + 0x2cb4);
    pbVar6 = (byte *)FUN_10047525((void *)*puVar2,*(int *)pbVar1,(uint *)local_144);
    *(undefined1 *)(param_1 + 0x2daa) = 0;
  }
  pbVar3 = (byte *)(param_1 + 0x2dab);
  if (*(char *)(param_1 + 0x2dac) != '\0') {
    pbVar6 = (byte *)FUN_10008437(param_1);
    *(undefined1 *)(param_1 + 0x2dac) = 0;
    *pbVar3 = *pbVar3 | (byte)pbVar6;
    *(byte *)(param_1 + 0x3650) = *(byte *)(param_1 + 0x3650) | (byte)pbVar6;
  }
  if (*pbVar3 != 0) {
    pfVar10 = (float *)(param_1 + 0x2cc8);
    pfVar11 = local_144;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    FUN_10047598((void *)*puVar2,*(int *)pbVar1,local_144);
    *pbVar3 = 0;
    pbVar6 = pbVar3;
  }
  if (*(char *)(param_1 + 0x2dad) != '\0') {
    pbVar6 = (byte *)FUN_1000f338(param_1);
    *(undefined1 *)(param_1 + 0x2dad) = 0;
  }
  return CONCAT31((int3)((uint)pbVar6 >> 8),1);
}

