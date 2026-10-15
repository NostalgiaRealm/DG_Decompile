/*
 * FUN_1004ba3d at 1004ba3d
 * undefined4 __fastcall FUN_1004ba3d(int param_1)
 * Address ranges: 1004ba3d-1004bab0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004ba3d(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x70) & 0x10800) == 0x10000) {
    uVar1 = *(undefined4 *)(param_1 + 300);
    if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
      uVar2 = *(uint *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
      if (((*(int *)(param_1 + 0x130) == -1) ||
          ((*(char *)(param_1 + 0x137) == '\0' && (uVar2 < 0x2001)))) ||
         ((0x58 < (uint)(*(int *)(param_1 + 0x130) << 7) / *(uint *)(param_1 + 0x10) &&
          ((*(char *)(param_1 + 0x137) == '\0' || (0x1fff < uVar2)))))) {
        FUN_1004b8b2(param_1);
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0x138) = 1;
    }
  }
  return uVar1;
}

