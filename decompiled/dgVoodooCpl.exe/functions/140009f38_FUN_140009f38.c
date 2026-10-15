/*
 * FUN_140009f38 at 140009f38
 * undefined __fastcall FUN_140009f38(longlong param_1, undefined8 param_2, wchar_t * param_3, ulonglong param_4)
 * Address ranges: 140009f38-140009faa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140009f38(longlong param_1,undefined8 param_2,wchar_t *param_3,ulonglong param_4)

{
  FUN_140007c8c(param_1 + 0x528,param_2,param_3);
  FUN_14000902c(param_1 + 0x660);
  FUN_140004c48(param_1 + 0x8f0,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x410) != '\0') {
    FUN_1400063f4(param_1 + 0xb80);
    FUN_1400088fc(param_1 + 0xe00,param_2,param_3,param_4);
    FUN_1400034d8(param_1 + 0xf28,param_2,param_3,param_4);
    FUN_140002440(param_1 + 0x1168);
  }
  *(undefined1 *)(param_1 + 0x1d40) = 0;
  return;
}

