/*
 * _guTexGetMipMapInfo@4 at 180003100
 * longlong __fastcall _guTexGetMipMapInfo@4(uint param_1)
 * Address ranges: 180003100-180003147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong _guTexGetMipMapInfo_4(uint param_1)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
                    /* 0x3100  138  _guTexGetMipMapInfo@4
                       0x3100  299  guTexGetMipMapInfo */
  uVar3 = (ulonglong)param_1;
  puVar1 = FUN_180015384();
  lVar2 = 0;
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (((*(longlong *)(puVar1 + 0xa0) != 0) && ((uint)uVar3 != 0xffffffff)) &&
       ((uint)uVar3 < *(uint *)(puVar1 + 0xa8))) {
      lVar2 = uVar3 * 0xd0 + *(longlong *)(puVar1 + 0xa0);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return lVar2;
}

