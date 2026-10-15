/*
 * FUN_180085f90 at 180085f90
 * undefined FUN_180085f90(void)
 * Address ranges: 180085f90-180085fe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180085f90(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04);
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

