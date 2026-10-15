/*
 * FUN_18021fe78 at 18021fe78
 * undefined FUN_18021fe78(void)
 * Address ranges: 18021fe78-18021fec7;18021fed8-18021fee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021fe78(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x3c0));
    thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x3c8));
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_1 + 0x5dc,param_1 + 0x3d0,0x20c);
    }
  }
  return 0;
}

