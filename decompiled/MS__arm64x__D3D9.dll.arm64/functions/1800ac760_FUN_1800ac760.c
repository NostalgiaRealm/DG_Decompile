/*
 * FUN_1800ac760 at 1800ac760
 * undefined FUN_1800ac760(void)
 * Address ranges: 1800ac760-1800ac85f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ac760(longlong param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uStack_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_10;
  
  if (*(char *)(param_1 + -0x5b27) != '\0') {
    return 0x8876086c;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + -0x5980) != 0) {
    bVar2 = false;
    uVar5 = 0;
    do {
      if (bVar2) goto LAB_1800ac814;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + -0x5988) + uVar5 * 8);
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
      uStack_48 = *(undefined8 *)(lVar3 + 0xc0);
      local_28 = *(undefined8 *)(lVar3 + 0xe0);
      local_30 = *(undefined8 *)(lVar3 + 0xd8);
      uVar4 = *(undefined8 *)(lVar3 + 0xf8);
      local_10._1_1_ = (char)((ulonglong)uVar4 >> 8);
      bVar2 = local_10._1_1_ == '\0';
      local_10 = uVar4;
    } while (uVar1 < *(uint *)(param_1 + -0x5980));
    uStack_48._4_4_ = (int)((ulonglong)uStack_48 >> 0x20);
    if (bVar2) goto LAB_1800ac814;
  }
  lVar3 = **(longlong **)(param_1 + -0x5a08);
  uStack_48._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar3 + 0xc0) >> 0x20);
  local_28 = *(undefined8 *)(lVar3 + 0xe0);
  local_10 = *(undefined8 *)(lVar3 + 0xf8);
  local_30._0_4_ = (int)*(undefined8 *)(lVar3 + 0xd8);
  if (*(char *)(lVar3 + 0xf9) != '\0') {
    return 0;
  }
LAB_1800ac814:
  if (2 < (int)local_30 - 0x16U) {
    return 0x8876086c;
  }
  if ((int)local_28 != 0) {
    if ((int)local_28 != 1) {
      return 0x8876086c;
    }
    if (local_28._4_4_ != 0) {
      return 0x8876086c;
    }
  }
  if ((char)local_10 == '\0') {
    return 0x8876086c;
  }
  if (uStack_48._4_4_ == 1) {
    return 0;
  }
  return 0x8876086c;
}

