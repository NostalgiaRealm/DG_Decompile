/*
 * FUN_1006fc88 at 1006fc88
 * undefined FUN_1006fc88(void)
 * Address ranges: 1006fc88-1006fec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1006fc88(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined4 param_5,uint param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  int extraout_w10;
  int extraout_w10_00;
  ulonglong extraout_x11;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *local_80 [2];
  undefined1 auStack_78 [56];
  
  *(undefined4 *)param_2 = 0;
  if ((param_6 & 1) != 0) {
    return param_2;
  }
  FUN_1004fd48(param_3,param_5,auStack_78);
  piVar1 = param_1 + 3;
  iVar3 = FUN_100702e0(piVar1,auStack_78);
  if ((iVar3 == param_1[5]) ||
     (uVar6 = FUN_1004fc90(param_1[4] + iVar3 * 0x40,auStack_78), (uVar6 & 1) == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(extraout_w10 + 0x38);
  }
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_101321c0(0x80);
    if (puVar4 == (undefined4 *)0x0) {
      return param_2;
    }
    iVar3 = *param_1;
    iVar2 = param_1[1];
    *(undefined8 *)(puVar4 + 2) = 0;
    *puVar4 = &PTR_D3DPERF_GetStatus_native_1015ecfc;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    puVar4[8] = iVar3 + iVar2 * 0x16c0 + 0x1d00;
    puVar4[9] = iVar3;
    puVar4[10] = iVar2;
    puVar4[0xc] = 0;
    *(undefined1 *)(puVar4 + 0xe) = 0;
    puVar4[0xd] = *(undefined4 *)(iVar3 + iVar2 * 0x28 + 0x38);
    uVar11 = *param_3;
    uVar10 = param_3[3];
    uVar9 = param_3[2];
    *(undefined8 *)(puVar4 + 0x12) = param_3[1];
    *(undefined8 *)(puVar4 + 0x10) = uVar11;
    *(undefined8 *)(puVar4 + 0x16) = uVar10;
    *(undefined8 *)(puVar4 + 0x14) = uVar9;
    uVar9 = param_3[4];
    *(undefined8 *)(puVar4 + 0x1a) = param_3[5];
    *(undefined8 *)(puVar4 + 0x18) = uVar9;
    *(undefined8 *)(puVar4 + 0x1c) = param_3[6];
    *(undefined1 *)(puVar4 + 0x1e) = param_7;
    ppuVar8 = &PTR_FUN_1015ed04;
    *puVar4 = &PTR_FUN_1015ed04;
    local_80[0] = puVar4;
    uVar6 = FUN_10070068(puVar4);
    if ((uVar6 & 1) == 0) {
      *puVar4 = ppuVar8;
      FUN_1006f8c0(puVar4);
      FUN_10132260(puVar4,0x80);
      return param_2;
    }
    uVar7 = FUN_100702e0(piVar1,auStack_78);
    uVar6 = uVar7 & 0xffffffff;
    if (((int)uVar7 == param_1[5]) ||
       (uVar7 = FUN_1004fc90(param_1[4] + (int)uVar7 * 0x40,auStack_78), uVar6 = extraout_x11,
       (uVar7 & 1) == 0)) {
      FUN_10070130(piVar1,uVar6 & 0xffffffff,auStack_78,local_80);
      puVar4 = local_80[0];
    }
    else {
      *(undefined4 **)(extraout_w10_00 + 0x38) = puVar4;
    }
  }
  else {
    puVar4 = (undefined4 *)*puVar4;
  }
  puVar5 = (undefined8 *)FUN_1006f918(puVar4,auStack_78,param_4,0);
  uVar12 = *puVar5;
  uVar11 = puVar5[3];
  uVar10 = puVar5[2];
  uVar9 = puVar5[4];
  param_2[1] = puVar5[1];
  *param_2 = uVar12;
  param_2[3] = uVar11;
  param_2[2] = uVar10;
  param_2[4] = uVar9;
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar5 + 5);
  return param_2;
}

