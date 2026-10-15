/*
 * FUN_18005ef80 at 18005ef80
 * undefined FUN_18005ef80(void)
 * Address ranges: 18005ef80-18005eff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ef80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x218) == 0) {
    uVar1 = FUN_1800f42d0(param_2,4,1);
    *(undefined4 *)(param_2 + 0x218) = uVar1;
    if (*(byte *)(param_2 + 0x20a) != 0xf) {
      FUN_1800f5ea8(*(undefined1 *)(param_2 + 0x20e),*(byte *)(param_2 + 0x20a) ^ 0xf);
      FUN_1800f5730(param_2,param_3,0x2036);
    }
  }
  return;
}

