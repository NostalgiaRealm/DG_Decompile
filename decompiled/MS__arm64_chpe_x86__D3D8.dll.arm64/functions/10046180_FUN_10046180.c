/*
 * FUN_10046180 at 10046180
 * undefined FUN_10046180(void)
 * Address ranges: 10046180-100462f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10046180(undefined4 *param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_10129728;
  param_1[0x366c] = &PTR_FUN_10129724;
  FUN_10047080(param_1);
  FUN_100fed00(param_1[0x36ce]);
  *(undefined8 *)(param_1 + 0x36ce) = 0;
  *(undefined8 *)(param_1 + 0x36d0) = 0;
  FUN_100fed00(param_1[0x3691]);
  puVar1 = param_1 + 0x368f;
  if (*puVar1 != 0) {
    uVar3 = 0;
    if (*puVar1 == 0) {
      puVar2 = (undefined4 *)&DAT_00000004;
      goto LAB_1004622c;
    }
    do {
      puVar2 = (undefined4 *)(param_1[0x368e] + uVar3 * 0x10 + 0xc);
LAB_1004622c:
      FUN_100fec90(*puVar2,0xb0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  FUN_100fed00(param_1[0x368d]);
  *(undefined8 *)(param_1 + 0x368d) = 0;
  param_1[0x3690] = 0;
  *puVar1 = 0;
  FUN_1005e3e0(param_1 + 0x3686);
  FUN_100fed00(param_1[0x3689]);
  *(undefined8 *)(param_1 + 0x3689) = 0;
  *(undefined8 *)(param_1 + 0x368b) = 0;
  FUN_100fed00(param_1[0x3682]);
  FUN_1005d8a8(param_1 + 0x367b);
  FUN_100fed00(param_1[0x367e]);
  *(undefined8 *)(param_1 + 0x367e) = 0;
  *(undefined8 *)(param_1 + 0x3680) = 0;
  *param_1 = &PTR_FUN_101295a8;
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0xde70);
  }
  return param_1;
}

