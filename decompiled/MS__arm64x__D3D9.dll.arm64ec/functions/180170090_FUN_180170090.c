/*
 * FUN_180170090 at 180170090
 * undefined FUN_180170090(void)
 * Address ranges: 180170090-18017010b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180170090(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 local_40 [2];
  undefined4 local_38;
  uint local_30;
  undefined8 local_28;
  
  if (*(int *)(param_2 + 0x228) == 0) {
    uVar1 = FUN_180213760(param_2,4,1,param_4,param_3);
    *(undefined4 *)(param_2 + 0x228) = uVar1;
    local_28 = 0;
    local_30 = (uint)*(byte *)(param_2 + 0x20f);
    local_38 = 0x410103;
    local_40[0] = 0xf;
    FUN_180214c88(param_2,param_3,0x2036,uVar1,local_40,0x20);
  }
  return;
}

