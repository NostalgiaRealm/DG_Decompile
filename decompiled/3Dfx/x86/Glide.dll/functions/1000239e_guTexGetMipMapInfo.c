/*
 * guTexGetMipMapInfo at 1000239e
 * int __stdcall guTexGetMipMapInfo(uint param_1)
 * Address ranges: 1000239e-100023d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guTexGetMipMapInfo,4
 */

/* __stdcall guTexGetMipMapInfo,4 */

int guTexGetMipMapInfo(uint param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x239e  136  _guTexGetMipMapInfo@4 */
  puVar2 = FUN_10012ab2();
  iVar3 = 0;
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (((*(int *)(puVar2 + 0x5c) != 0) && (param_1 != 0xffffffff)) &&
       (param_1 < *(uint *)(puVar2 + 0x60))) {
      iVar3 = param_1 * 0xc4 + *(int *)(puVar2 + 0x5c);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return iVar3;
}

