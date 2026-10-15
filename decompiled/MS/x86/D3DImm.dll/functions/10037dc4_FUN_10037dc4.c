/*
 * FUN_10037dc4 at 10037dc4
 * undefined4 __stdcall FUN_10037dc4(undefined4 param_1, int param_2, int param_3, byte param_4)
 * Address ranges: 10037dc4-10037e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10037dc4(undefined4 param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  
  if (*(int *)(param_2 + 0xcc + param_3 * 4) == 0) {
    if (*(char *)(param_2 + 0x193) == '\0') {
      *(uint *)(param_2 + 0xcc + param_3 * 4) = *(uint *)(param_2 + 300) | 0x410100;
      *(char *)(*(int *)(param_2 + 300) + 0x11c + param_2) = (char)param_3;
      *(int *)(param_2 + 300) = *(int *)(param_2 + 300) + 1;
    }
    else {
      *(uint *)(param_2 + 0xcc + param_3 * 4) = *(byte *)(param_2 + 0x11c + param_3) | 0x410100;
    }
  }
  pbVar1 = (byte *)(param_2 + param_3 + 0x10c);
  *pbVar1 = *pbVar1 | param_4;
  return *(undefined4 *)(param_2 + 0xcc + param_3 * 4);
}

