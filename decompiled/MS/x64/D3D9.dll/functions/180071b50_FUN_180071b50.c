/*
 * FUN_180071b50 at 180071b50
 * undefined __fastcall FUN_180071b50(longlong param_1, longlong param_2, undefined8 param_3, char param_4)
 * Address ranges: 180071b50-180071c37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180071b50(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    FUN_1800ee208(0xe4,*(byte *)(param_2 + 4));
    FUN_1800edd10(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),1,param_2);
    FUN_1800edd10(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),0x3c,
                  *(uint **)(param_1 + 8) + 0xd0);
  }
  return;
}

