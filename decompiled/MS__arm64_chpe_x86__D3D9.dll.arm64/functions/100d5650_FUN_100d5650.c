/*
 * FUN_100d5650 at 100d5650
 * undefined FUN_100d5650(void)
 * Address ranges: 100d5650-100d5767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d5650(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  if (*(char *)(param_1 + -0x59ef) != '\0') {
    return 0x8876086c;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + -0x58bc) != 0) {
    bVar3 = false;
    uVar4 = 0;
    uVar2 = uStack_28;
    do {
      uStack_28 = uVar2;
      if (bVar3) goto LAB_100d571c;
      iVar1 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + -0x58c0) + iVar1);
      local_38 = *(undefined8 *)(iVar1 + 0x80);
      local_18 = *(undefined8 *)(iVar1 + 0xa0);
      uStack_20 = *(undefined8 *)(iVar1 + 0x98);
      uStack_28._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x90) >> 0x20);
      uVar5 = *(undefined8 *)(iVar1 + 0xb0);
      uStack_8._5_1_ = (char)((ulonglong)uVar5 >> 0x28);
      bVar3 = uStack_8._5_1_ == '\0';
      uVar2 = *(undefined8 *)(iVar1 + 0x90);
      uStack_8 = uVar5;
    } while (uVar4 < *(uint *)(param_1 + -0x58bc));
    uStack_20._4_4_ = (int)((ulonglong)uStack_20 >> 0x20);
    if (bVar3) goto LAB_100d571c;
  }
  iVar1 = **(int **)(param_1 + -0x5920);
  local_38._0_4_ = (int)*(undefined8 *)(iVar1 + 0x80);
  uStack_28._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x90) >> 0x20);
  local_18._0_4_ = (int)*(undefined8 *)(iVar1 + 0xa0);
  uStack_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x98) >> 0x20);
  uStack_8 = *(undefined8 *)(iVar1 + 0xb0);
  if (*(char *)(iVar1 + 0xb5) != '\0') {
    return 0;
  }
LAB_100d571c:
  if (2 < uStack_28._4_4_ - 0x16U) {
    return 0x8876086c;
  }
  if (uStack_20._4_4_ != 0) {
    if (uStack_20._4_4_ != 1) {
      return 0x8876086c;
    }
    if ((int)local_18 != 0) {
      return 0x8876086c;
    }
  }
  if (uStack_8._4_1_ == '\0') {
    return 0x8876086c;
  }
  if ((int)local_38 == 1) {
    return 0;
  }
  return 0x8876086c;
}

