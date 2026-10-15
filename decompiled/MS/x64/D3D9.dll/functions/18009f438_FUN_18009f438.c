/*
 * FUN_18009f438 at 18009f438
 * ulonglong __fastcall FUN_18009f438(longlong param_1)
 * Address ranges: 18009f438-18009f472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18009f438(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x130) + 0x1cf04);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if (*(uint *)(&DAT_1800ff000 + uVar2 * 4) < uVar1) {
    if (uVar1 == 0x10) {
      uVar2 = 0x22;
    }
    else {
      if (uVar1 == 0x18) {
        return 0x23;
      }
      if (uVar1 == 0x20) {
        return 0x26;
      }
    }
  }
  return uVar2;
}

