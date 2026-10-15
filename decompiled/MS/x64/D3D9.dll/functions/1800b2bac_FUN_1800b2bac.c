/*
 * FUN_1800b2bac at 1800b2bac
 * undefined8 __fastcall FUN_1800b2bac(longlong param_1, int param_2)
 * Address ranges: 1800b2bac-1800b2c96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b2bac(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_18;
  
  if (*(char *)(param_1 + -0x5b27) != '\0') {
    return 0x8876086c;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar5 = false;
  uVar4 = 0;
  if (*(uint *)(param_1 + -0x5980) != 0) {
    do {
      if (bVar5) goto LAB_1800b2c5f;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x5988) + uVar4 * 8);
      uStack_50 = *(undefined8 *)(lVar2 + 0xc0);
      local_38 = *(undefined8 *)(lVar2 + 0xd8);
      uStack_30 = *(undefined8 *)(lVar2 + 0xe0);
      uVar1 = *(undefined8 *)(lVar2 + 0xf8);
      local_18._1_1_ = (char)((ulonglong)uVar1 >> 8);
      bVar5 = local_18._1_1_ == '\0';
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      local_18 = uVar1;
    } while (uVar3 < *(uint *)(param_1 + -0x5980));
    uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
    if (bVar5) goto LAB_1800b2c5f;
  }
  lVar2 = **(longlong **)(param_1 + -0x5a08);
  uStack_50._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar2 + 0xc0) >> 0x20);
  uStack_30 = *(undefined8 *)(lVar2 + 0xe0);
  local_38._0_4_ = (int)*(undefined8 *)(lVar2 + 0xd8);
  local_18 = *(undefined8 *)(lVar2 + 0xf8);
  if (*(char *)(lVar2 + 0xf9) != '\0') {
    return 0;
  }
LAB_1800b2c5f:
  if (2 < (int)local_38 - 0x16U) {
    return 0x8876086c;
  }
  if ((int)uStack_30 != 0) {
    if ((int)uStack_30 != 1) {
      return 0x8876086c;
    }
    if (uStack_30._4_4_ != 0) {
      return 0x8876086c;
    }
  }
  if ((char)local_18 == '\0') {
    return 0x8876086c;
  }
  if (uStack_50._4_4_ == 1) {
    return 0;
  }
  return 0x8876086c;
}

