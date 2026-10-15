/*
 * FUN_100cff40 at 100cff40
 * undefined FUN_100cff40(void)
 * Address ranges: 100cff40-100d002f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100cff40(undefined4 *param_1,undefined4 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  FUN_10001520(param_1,param_2);
  puVar1 = (undefined8 *)(param_1 + 0x1d);
  *puVar1 = 0;
  param_1[0x1f] = 0;
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1 + 0x1c;
  }
  param_1[0x20] = puVar2;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *param_1 = &DAT_1015f834;
  param_1[0x18] = &PTR_FUN_1015e680;
  param_1[0x1c] = &PTR_FUN_1015f7dc;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    FUN_100d1450(puVar1,&DAT_1015e670);
    FUN_100d1450(puVar1,&DAT_1015e440);
    if (param_3 != '\0') {
      FUN_100d1450(puVar1,&DAT_1015e530);
    }
    *(char *)((int)param_1 + 0x47) = param_3;
  }
  return param_1;
}

