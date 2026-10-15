/*
 * FUN_100136a0 at 100136a0
 * undefined FUN_100136a0(void)
 * Address ranges: 100136a0-1001375b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100136a0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1009c60c;
  FUN_10013e30(param_1);
  FUN_1001c090(param_1 + 0x76c);
  FUN_10081dc0(param_1[0x76f]);
  *(undefined8 *)(param_1 + 0x76f) = 0;
  *(undefined8 *)(param_1 + 0x771) = 0;
  FUN_10081dc0(param_1[0x765]);
  FUN_1001b988(param_1 + 0x75f);
  FUN_10081dc0(param_1[0x761]);
  *(undefined8 *)(param_1 + 0x761) = 0;
  *(undefined8 *)(param_1 + 0x763) = 0;
  *param_1 = &PTR_FUN_1009c6b0;
  if ((param_2 & 1) != 0) {
    FUN_10081d50(param_1,0x2280);
  }
  return param_1;
}

