/*
 * _guTexGetMipMapInfo@4 at 180005080
 * longlong __cdecl _guTexGetMipMapInfo@4(uint param_1)
 * Address ranges: 180005080-1800050ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong _guTexGetMipMapInfo_4(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  
                    /* 0x5080  134  _guTexGetMipMapInfo@4
                       0x5080  291  guTexGetMipMapInfo */
  lVar1 = FUN_180016878();
  lVar2 = 0;
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    if ((*(longlong *)(lVar1 + 0xa0) != 0 && param_1 != 0xffffffff) &&
       (param_1 < *(uint *)(lVar1 + 0xa8))) {
      lVar2 = *(longlong *)(lVar1 + 0xa0) + (ulonglong)param_1 * 0xd0;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return lVar2;
}

