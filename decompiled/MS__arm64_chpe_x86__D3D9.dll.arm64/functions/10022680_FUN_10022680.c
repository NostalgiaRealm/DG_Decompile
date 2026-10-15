/*
 * FUN_10022680 at 10022680
 * undefined FUN_10022680(void)
 * Address ranges: 10022680-10022723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022680(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  FUN_100036b0(uVar1);
  FUN_100035f0(uVar1);
  FUN_100034b0(uVar1);
  uVar1 = FUN_10003300(uVar1);
  FUN_1003ec20(param_1,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
               *(undefined4 *)(param_1 + 0x80),uVar1);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return;
}

