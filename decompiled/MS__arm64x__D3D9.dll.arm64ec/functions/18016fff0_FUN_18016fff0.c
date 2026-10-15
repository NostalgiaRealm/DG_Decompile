/*
 * FUN_18016fff0 at 18016fff0
 * undefined FUN_18016fff0(void)
 * Address ranges: 18016fff0-180170083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016fff0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x218) == 0) {
    uVar1 = FUN_180213760(param_2,4,1,param_4,param_3);
    *(undefined4 *)(param_2 + 0x218) = uVar1;
    if (*(byte *)(param_2 + 0x20a) != 0xf) {
      FUN_180213268(*(undefined1 *)(param_2 + 0x20e),*(byte *)(param_2 + 0x20a) ^ 0xf);
      FUN_180214c88(param_2,param_3,0x2036);
    }
  }
  return;
}

