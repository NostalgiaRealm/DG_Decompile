/*
 * FUN_1800362fc at 1800362fc
 * undefined __fastcall FUN_1800362fc(longlong param_1, longlong param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 1800362fc-180036355
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800362fc(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  *(longlong *)(param_1 + 0x40) = param_2;
  *(longlong *)(param_1 + 0x30) = param_2;
  *(longlong *)(param_1 + 0x48) = param_3;
  if (param_4 == '\0') {
    *(ulonglong *)(param_1 + 0x40) = (ulonglong)(0x4000 - *(int *)(param_1 + 0x14)) * 0x3c + param_2
    ;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0x4000;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x20) = param_3;
  if (param_5 == '\0') {
    param_3 = param_3 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x18)) * 4;
    *(longlong *)(param_1 + 0x48) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0x4000;
  }
  *(longlong *)(param_1 + 0x28) = param_3;
  return;
}

