/*
 * FUN_1400106c0 at 1400106c0
 * ulonglong __fastcall FUN_1400106c0(longlong param_1, undefined4 param_2)
 * Address ranges: 1400106c0-14001070f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1400106c0(longlong param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001400106ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                      (*(longlong **)(param_1 + 0x10),param_2);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}

