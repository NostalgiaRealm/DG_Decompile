/*
 * FUN_1001806f at 1001806f
 * undefined4 __fastcall FUN_1001806f(int param_1)
 * Address ranges: 1001806f-100182ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001806f(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint3 uVar8;
  int iVar7;
  float *pfVar9;
  float *pfVar10;
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
  
  piVar1 = (int *)(param_1 + 0x3184);
  puVar2 = (undefined4 *)(param_1 + 0x3180);
  piVar5 = piVar1;
  if (*(char *)(param_1 + 0x2bc0) != '\0') {
    iVar7 = *(int *)(param_1 + 0x2a74);
    pfVar9 = (float *)(param_1 + 0x2a40);
    pfVar10 = local_144;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    piVar5 = (int *)FUN_100415c7((void *)*puVar2,*piVar1,(int *)local_144,iVar7);
    *(undefined1 *)(param_1 + 0x2bc0) = 0;
  }
  if (*(char *)(param_1 + 0x2bc1) != '\0') {
    FUN_100501d1(local_110,0,0x108);
    local_110[2] = *(undefined4 *)(param_1 + 0x2a80);
    local_104 = *(undefined4 *)(param_1 + 0x2a84);
    local_100 = *(undefined4 *)(param_1 + 0x2a88);
    local_fc = *(undefined4 *)(param_1 + 0x2a8c);
    local_f8 = *(undefined4 *)(param_1 + 0x2a90);
    local_f4 = *(undefined4 *)(param_1 + 0x2a94);
    local_f0 = *(undefined4 *)(param_1 + 0x2a98);
    local_ec = *(undefined1 *)(param_1 + 0x2a9c);
    local_e8 = *(undefined4 *)(param_1 + 0x2aa0);
    local_e4 = *(undefined4 *)(param_1 + 0x2aa4);
    local_e0 = *(undefined4 *)(param_1 + 0x2aa8);
    local_dc = *(undefined4 *)(param_1 + 0x2aac);
    local_d8 = *(undefined4 *)(param_1 + 0x2ab0);
    local_d4 = *(undefined4 *)(param_1 + 0x2ab4);
    local_d0 = *(undefined4 *)(param_1 + 0x2ab8);
    local_110[1] = 1;
    if ((*(int *)(param_1 + 0x2a40) == 0) || (*(int *)(param_1 + 0x2a44) != 1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar3 = *(uint *)(param_1 + 0x2bec);
    uVar8 = (uint3)(uVar3 >> 8);
    if ((uVar3 == 4) || ((uVar3 & 0xff0000) != 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    local_cc = -(bVar4 || (char)iVar7 != '\0') & 0xf;
    piVar5 = (int *)FUN_10041558(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),local_110,
                                 iVar7,*(int *)(param_1 + 0x2a7c));
    *(undefined1 *)(param_1 + 0x2bc1) = 0;
  }
  if (*(char *)(param_1 + 0x2bc2) != '\0') {
    local_144[0] = *(float *)(param_1 + 0x2ac0);
    local_134 = *(undefined4 *)(param_1 + 0x2ad0);
    local_144[1] = *(float *)(param_1 + 0x2ac4);
    local_144[2] = *(float *)(param_1 + 0x2ac8);
    local_144[3] = *(float *)(param_1 + 0x2acc);
    local_12c = *(undefined4 *)(param_1 + 0x2ad8);
    local_128 = *(undefined4 *)(param_1 + 0x2adc);
    local_124 = *(undefined4 *)(param_1 + 0x2ae0);
    local_120 = *(undefined4 *)(param_1 + 0x2ae4);
    local_130 = *(undefined4 *)(param_1 + 0x2ad4);
    piVar5 = (int *)FUN_10041634((void *)*puVar2,*piVar1,(uint *)local_144);
    *(undefined1 *)(param_1 + 0x2bc2) = 0;
  }
  if (*(char *)(param_1 + 0x2bc4) != '\0') {
    *(undefined1 *)(param_1 + 0x2bc4) = 0;
  }
  if (*(char *)(param_1 + 0x2bc3) != '\0') {
    pfVar9 = (float *)(param_1 + 0x2ae8);
    pfVar10 = local_144;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    piVar5 = (int *)FUN_100416a7((void *)*puVar2,*piVar1,local_144);
    *(undefined1 *)(param_1 + 0x2bc3) = 0;
  }
  if (*(char *)(param_1 + 0x2bc5) != '\0') {
    piVar5 = (int *)FUN_1001dc2e(param_1);
    *(undefined1 *)(param_1 + 0x2bc5) = 0;
  }
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}

