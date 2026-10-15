/*
 * FUN_100563a4 at 100563a4
 * undefined4 __stdcall FUN_100563a4(int param_1, int param_2, byte param_3)
 * Address ranges: 100563a4-10056413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100563a4(int param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  
  if (*(int *)(param_1 + 0xdc + param_2 * 4) == 0) {
    if (*(char *)(param_1 + 0x1af) == '\0') {
      *(uint *)(param_1 + 0xdc + param_2 * 4) = *(uint *)(param_1 + 0x148) | 0x410100;
      *(char *)(*(int *)(param_1 + 0x148) + 0x136 + param_1) = (char)param_2;
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
    }
    else {
      *(uint *)(param_1 + 0xdc + param_2 * 4) = *(byte *)(param_1 + 0x136 + param_2) | 0x410100;
    }
  }
  pbVar1 = (byte *)(param_1 + param_2 + 0x124);
  *pbVar1 = *pbVar1 | param_3;
  return *(undefined4 *)(param_1 + 0xdc + param_2 * 4);
}

