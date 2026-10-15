/*
 * FUN_1801acfa8 at 1801acfa8
 * undefined FUN_1801acfa8(void)
 * Address ranges: 1801acfa8-1801acffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801acfa8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x130) + 0x1cf04);
  if (*(uint *)(&DAT_18022e050 + uVar2 * 4) < uVar1) {
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

