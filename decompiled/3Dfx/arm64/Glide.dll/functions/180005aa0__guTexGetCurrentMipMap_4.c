/*
 * _guTexGetCurrentMipMap@4 at 180005aa0
 * undefined4 __cdecl _guTexGetCurrentMipMap@4(int param_1)
 * Address ranges: 180005aa0-180005b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _guTexGetCurrentMipMap_4(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
                    /* 0x5aa0  137  _guTexGetCurrentMipMap@4
                       0x5aa0  298  guTexGetCurrentMipMap */
  lVar2 = FUN_180017788();
  uVar1 = 0xffffffff;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    uVar1 = 0xffffffff;
    if ((*(longlong *)(lVar2 + 0xa0) != 0) &&
       (uVar1 = 0xffffffff, param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833))) {
      uVar1 = *(undefined4 *)(lVar2 + (longlong)param_1 * 4 + 0xb8);
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return uVar1;
}

