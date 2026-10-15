/*
 * FUN_18007057c at 18007057c
 * undefined __fastcall FUN_18007057c(undefined8 param_1, longlong param_2)
 * Address ranges: 18007057c-18007064d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007057c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_1800ec960(param_2,*(uint *)(param_2 + 0x218 + lVar1 * 4));
    *(undefined4 *)(param_2 + 0x218 + lVar1 * 4) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x20);
  lVar1 = 0;
  do {
    FUN_1800ec960(param_2,*(uint *)(param_2 + 0x298 + lVar1 * 4));
    *(undefined4 *)(param_2 + 0x298 + lVar1 * 4) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  FUN_1800ec960(param_2,*(uint *)(param_2 + 0x30c));
  lVar1 = 0;
  *(undefined4 *)(param_2 + 0x30c) = 0;
  do {
    FUN_1800ec960(param_2,*(uint *)(param_2 + 0x2e4 + lVar1 * 4));
    *(undefined4 *)(param_2 + 0x2e4 + lVar1 * 4) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_1800ec960(param_2,*(uint *)(param_2 + 0x310));
  *(undefined4 *)(param_2 + 0x310) = 0;
  FUN_1800ec960(param_2,*(uint *)(param_2 + 0x314));
  *(undefined4 *)(param_2 + 0x314) = 0;
  return;
}

