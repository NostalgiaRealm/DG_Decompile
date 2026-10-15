/*
 * FUN_1001dbf0 at 1001dbf0
 * undefined FUN_1001dbf0(void)
 * Address ranges: 1001dbf0-1001dd5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001dbf0(undefined4 *param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_1009c7a8;
  FUN_1001ebd0(param_1);
  FUN_10081dc0(param_1[0x7b0]);
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7b2) = 0;
  FUN_10081dc0(param_1[0x778]);
  puVar1 = param_1 + 0x776;
  if (*puVar1 != 0) {
    uVar3 = 0;
    if (*puVar1 == 0) {
      puVar2 = (undefined4 *)&DAT_00000004;
      goto LAB_1001dc90;
    }
    do {
      puVar2 = (undefined4 *)(param_1[0x775] + uVar3 * 0x10 + 0xc);
LAB_1001dc90:
      FUN_10081d50(*puVar2,0xb0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  FUN_10081dc0(param_1[0x774]);
  *(undefined8 *)(param_1 + 0x774) = 0;
  param_1[0x777] = 0;
  *puVar1 = 0;
  FUN_10031960(param_1 + 0x76d);
  FUN_10081dc0(param_1[0x770]);
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x772) = 0;
  FUN_10081dc0(param_1[0x769]);
  FUN_100314c8(param_1 + 0x762);
  FUN_10081dc0(param_1[0x765]);
  *(undefined8 *)(param_1 + 0x765) = 0;
  *(undefined8 *)(param_1 + 0x767) = 0;
  *param_1 = &PTR_FUN_1009c6b0;
  if ((param_2 & 1) != 0) {
    FUN_10081d50(param_1,0x21e0);
  }
  return param_1;
}

