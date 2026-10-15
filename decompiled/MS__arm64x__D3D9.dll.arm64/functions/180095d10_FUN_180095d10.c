/*
 * FUN_180095d10 at 180095d10
 * undefined FUN_180095d10(void)
 * Address ranges: 180095d10-180095d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180095d10(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x130) + 0x1cf04);
  if (*(uint *)(&DAT_180231470 + uVar2 * 4) < uVar1) {
    if (uVar1 == 0x10) {
      uVar2 = 0x22;
    }
    else if (uVar1 == 0x18) {
      uVar2 = 0x23;
    }
    else if (uVar1 == 0x20) {
      uVar2 = 0x26;
    }
  }
  return uVar2;
}

