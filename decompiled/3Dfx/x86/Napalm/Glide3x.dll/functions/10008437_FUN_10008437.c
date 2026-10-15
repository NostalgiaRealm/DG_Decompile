/*
 * FUN_10008437 at 10008437
 * undefined4 __fastcall FUN_10008437(int param_1)
 * Address ranges: 10008437-100085b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10008437(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar5;
  undefined4 uVar4;
  undefined1 uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  local_10 = 0.0;
  local_14 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  uVar2 = FUN_100118f8(*(void **)(param_1 + 0x365c),*(int *)(param_1 + 0x2b1c));
  if (uVar2 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x365c) + 0x2c))(uVar2);
    local_8 = (float)*(int *)(iVar3 + 0x28);
    if (*(int *)(iVar3 + 0x28) < 0) {
      local_8 = local_8 + 4.2949673e+09;
    }
    local_c = (float)*(int *)(iVar3 + 0x2c);
    if (*(int *)(iVar3 + 0x2c) < 0) {
      local_c = local_c + 4.2949673e+09;
    }
  }
  iVar3 = *(int *)(param_1 + 0x3660);
  local_18 = 0.0;
  local_1c = 1.0;
  if (*(int *)(iVar3 + 0xf0) != 0) {
    local_10 = *(float *)(param_1 + 0x2ce0);
    iVar3 = *(int *)(param_1 + 0x2b38);
    local_14 = *(float *)(param_1 + 0x2ce4);
    local_8 = *(float *)(param_1 + 0x2ce8);
    local_c = *(float *)(param_1 + 0x2cec);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      local_18 = *(float *)(param_1 + 0x2cf0);
      local_1c = *(float *)(param_1 + 0x2cf4);
    }
  }
  uVar5 = (undefined2)((uint)iVar3 >> 0x10);
  if ((((local_10 != *(float *)(param_1 + 0x2cc8)) || (*(float *)(param_1 + 0x2ccc) != local_14)) ||
      (*(float *)(param_1 + 0x2cd0) != local_8)) || (*(float *)(param_1 + 0x2cd4) != local_c)) {
    uVar6 = 1;
    *(float *)(param_1 + 0x2cc8) = local_10;
    *(float *)(param_1 + 0x2ccc) = local_14;
    *(float *)(param_1 + 0x2cd0) = local_8;
    *(float *)(param_1 + 0x2cd4) = local_c;
  }
  fVar1 = *(float *)(param_1 + 0x2cd8);
  uVar4 = CONCAT22(uVar5,(ushort)(local_18 < fVar1) << 8 |
                         (ushort)(NAN(local_18) || NAN(fVar1)) << 10 |
                         (ushort)(local_18 == fVar1) << 0xe);
  if (local_18 == fVar1) {
    fVar1 = *(float *)(param_1 + 0x2cdc);
    uVar4 = CONCAT22(uVar5,(ushort)(local_1c < fVar1) << 8 |
                           (ushort)(NAN(local_1c) || NAN(fVar1)) << 10 |
                           (ushort)(local_1c == fVar1) << 0xe);
    if (local_1c == fVar1) goto LAB_100085b2;
  }
  uVar6 = 1;
  *(float *)(param_1 + 0x2cd8) = local_18;
  *(float *)(param_1 + 0x2cdc) = local_1c;
LAB_100085b2:
  return CONCAT31((int3)((uint)uVar4 >> 8),uVar6);
}

