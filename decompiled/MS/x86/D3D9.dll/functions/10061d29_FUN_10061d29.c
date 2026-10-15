/*
 * FUN_10061d29 at 10061d29
 * undefined __stdcall FUN_10061d29(uint * param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 param_5, uint param_6)
 * Address ranges: 10061d29-10061e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061d29(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 local_f0 [25];
  uint local_8c;
  uint *local_88;
  undefined4 local_84;
  undefined4 local_80 [9];
  undefined4 *local_5c;
  uint *local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte local_21;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  
  bVar1 = (byte)param_1[0x104];
  local_18 = (uint)bVar1;
  uVar6 = __aullshr(bVar1 * '\x03',param_6 & 0xffff);
  local_1c = (uint)uVar6 & 7;
  uVar2 = local_1c;
  if ((&DAT_100d5e40)[local_1c] != *(char *)(param_1[0x3d] + 0x14f + (uint)bVar1)) {
    uVar2 = 0;
    if (*(char *)((int)param_1 + 0xf2) != '\0') {
      uVar2 = local_1c;
    }
    local_1c = uVar2;
  }
  if (param_4 == (undefined4 *)0x0) {
    local_50 = 0;
    param_4 = &local_50;
    local_4c = 0;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
  }
  local_5c = local_80;
  local_54 = local_20;
  local_8c = local_20;
  local_84 = param_2;
  puVar4 = local_f0;
  local_1c = uVar2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_f0;
  puVar5 = local_80;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_58 = param_1;
  local_88 = param_1;
  if (((((uVar2 != 1) && (uVar2 != 2)) && (uVar2 != 3)) && ((uVar2 != 4 && (uVar2 != 7)))) ||
     (local_20 = CONCAT31(local_20._1_3_,1), 0x50 < *param_1)) {
    local_20 = local_20 & 0xffffff00;
  }
  local_21 = FUN_100c4090((byte)param_1[0xf9],(&DAT_100d5e38)[uVar2]);
  local_11 = (undefined1)param_1[0x105];
  *(byte *)(param_1 + 0xf9) = local_21;
  *(undefined1 *)(param_1 + 0x105) = 0;
                    /* WARNING: Could not recover jumptable at 0x10061e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_10062395 + local_1c * 4))();
  return;
}

