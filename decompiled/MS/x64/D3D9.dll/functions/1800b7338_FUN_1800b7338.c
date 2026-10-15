/*
 * FUN_1800b7338 at 1800b7338
 * ulonglong __fastcall FUN_1800b7338(longlong param_1)
 * Address ranges: 1800b7338-1800b737e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b7338(longlong param_1)

{
  ulonglong uVar1;
  
  if (((((*(int *)(param_1 + 0x718) == 0) ||
        (uVar1 = *(ulonglong *)(param_1 + 0x30), *(int *)(uVar1 + 0x48) == 0x4c4c554e)) &&
       ((uVar1 = *(ulonglong *)(param_1 + 0x38), uVar1 == 0 ||
        (*(int *)(uVar1 + 0x48) == 0x4c4c554e)))) &&
      ((uVar1 = *(ulonglong *)(param_1 + 0x40), uVar1 == 0 || (*(int *)(uVar1 + 0x48) == 0x4c4c554e)
       ))) && ((uVar1 = *(ulonglong *)(param_1 + 0x48), uVar1 == 0 ||
               (*(int *)(uVar1 + 0x48) == 0x4c4c554e)))) {
    return uVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}

