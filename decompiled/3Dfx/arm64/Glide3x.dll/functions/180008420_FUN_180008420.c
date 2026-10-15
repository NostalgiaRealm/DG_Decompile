/*
 * FUN_180008420 at 180008420
 * undefined __cdecl FUN_180008420(longlong param_1, undefined8 * param_2)
 * Address ranges: 180008420-180008493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008420(longlong param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x240))(*(longlong **)(param_1 + 0x18),param_2);
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  uRam000000018006f9e8 = param_2[1];
  _DAT_18006f9e0 = *param_2;
  uRam000000018006f9f8 = param_2[3];
  _DAT_18006f9f0 = param_2[2];
  uRam000000018006fa08 = param_2[5];
  _DAT_18006fa00 = param_2[4];
  uRam000000018006fa18 = param_2[7];
  _DAT_18006fa10 = param_2[6];
  uRam000000018006fa28 = param_2[9];
  _DAT_18006fa20 = param_2[8];
  uRam000000018006fa38 = param_2[0xb];
  _DAT_18006fa30 = param_2[10];
  uRam000000018006fa48 = param_2[0xd];
  _DAT_18006fa40 = param_2[0xc];
  return;
}

