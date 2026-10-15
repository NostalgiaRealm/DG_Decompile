/*
 * FUN_1000baf0 at 1000baf0
 * undefined4 __fastcall FUN_1000baf0(int param_1)
 * Address ranges: 1000baf0-1000bd92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000baf0(int param_1)

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
  
  pbVar1 = (byte *)(param_1 + 0x3304);
  puVar2 = (undefined4 *)(param_1 + 0x3300);
  pbVar6 = pbVar1;
  if (*(char *)(param_1 + 0x2c60) != '\0') {
    iVar8 = *(int *)(param_1 + 0x2b14);
    pfVar10 = (float *)(param_1 + 0x2ae0);
    pfVar11 = local_144;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    pbVar6 = (byte *)FUN_100440af((void *)*puVar2,*(int *)pbVar1,(int *)local_144,iVar8);
    *(undefined1 *)(param_1 + 0x2c60) = 0;
  }
  if (*(char *)(param_1 + 0x2c61) != '\0') {
    FUN_10052de1(local_110,0,0x108);
    local_110[2] = *(undefined4 *)(param_1 + 0x2b20);
    local_104 = *(undefined4 *)(param_1 + 0x2b24);
    local_100 = *(undefined4 *)(param_1 + 0x2b28);
    local_fc = *(undefined4 *)(param_1 + 0x2b2c);
    local_f8 = *(undefined4 *)(param_1 + 0x2b30);
    local_f4 = *(undefined4 *)(param_1 + 0x2b34);
    local_f0 = *(undefined4 *)(param_1 + 0x2b38);
    local_ec = *(undefined1 *)(param_1 + 0x2b3c);
    local_e8 = *(undefined4 *)(param_1 + 0x2b40);
    local_e4 = *(undefined4 *)(param_1 + 0x2b44);
    local_e0 = *(undefined4 *)(param_1 + 0x2b48);
    local_dc = *(undefined4 *)(param_1 + 0x2b4c);
    local_d8 = *(undefined4 *)(param_1 + 0x2b50);
    local_d4 = *(undefined4 *)(param_1 + 0x2b54);
    local_d0 = *(undefined4 *)(param_1 + 0x2b58);
    local_110[1] = 1;
    if ((*(int *)(param_1 + 0x2ae0) == 0) || (*(int *)(param_1 + 0x2ae4) != 1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar4 = *(uint *)(param_1 + 0x2c8c);
    uVar9 = (uint3)(uVar4 >> 8);
    if ((uVar4 == 4) || ((uVar4 & 0xff0000) != 0)) {
      iVar8 = (uint)uVar9 << 8;
    }
    else {
      iVar8 = CONCAT31(uVar9,1);
    }
    local_cc = -(bVar5 || (char)iVar8 != '\0') & 0xf;
    pbVar6 = (byte *)FUN_10044040(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),local_110,
                                  iVar8,*(int *)(param_1 + 0x2b1c));
    *(undefined1 *)(param_1 + 0x2c61) = 0;
  }
  if (*(char *)(param_1 + 0x2c62) != '\0') {
    local_144[0] = *(float *)(param_1 + 0x2b60);
    local_134 = *(undefined4 *)(param_1 + 0x2b70);
    local_144[1] = *(float *)(param_1 + 0x2b64);
    local_144[2] = *(float *)(param_1 + 0x2b68);
    local_144[3] = *(float *)(param_1 + 0x2b6c);
    local_12c = *(undefined4 *)(param_1 + 0x2b78);
    local_128 = *(undefined4 *)(param_1 + 0x2b7c);
    local_124 = *(undefined4 *)(param_1 + 0x2b80);
    local_120 = *(undefined4 *)(param_1 + 0x2b84);
    local_130 = *(undefined4 *)(param_1 + 0x2b74);
    pbVar6 = (byte *)FUN_1004411c((void *)*puVar2,*(int *)pbVar1,(uint *)local_144);
    *(undefined1 *)(param_1 + 0x2c62) = 0;
  }
  pbVar3 = (byte *)(param_1 + 0x2c63);
  if (*(char *)(param_1 + 0x2c64) != '\0') {
    pbVar6 = (byte *)FUN_10007e8d(param_1);
    *(undefined1 *)(param_1 + 0x2c64) = 0;
    *pbVar3 = *pbVar3 | (byte)pbVar6;
    *(byte *)(param_1 + 0x32d0) = *(byte *)(param_1 + 0x32d0) | (byte)pbVar6;
  }
  if (*pbVar3 != 0) {
    pfVar10 = (float *)(param_1 + 0x2b88);
    pfVar11 = local_144;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    FUN_1004418f((void *)*puVar2,*(int *)pbVar1,local_144);
    *pbVar3 = 0;
    pbVar6 = pbVar3;
  }
  if (*(char *)(param_1 + 0x2c65) != '\0') {
    pbVar6 = (byte *)FUN_1000e07e(param_1);
    *(undefined1 *)(param_1 + 0x2c65) = 0;
  }
  return CONCAT31((int3)((uint)pbVar6 >> 8),1);
}

