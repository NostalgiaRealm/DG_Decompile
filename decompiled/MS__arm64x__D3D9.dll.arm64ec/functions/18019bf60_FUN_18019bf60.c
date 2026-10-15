/*
 * FUN_18019bf60 at 18019bf60
 * undefined FUN_18019bf60(void)
 * Address ranges: 18019bf60-18019bfb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18019bf60(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04);
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

