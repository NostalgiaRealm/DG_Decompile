/*
 * _guTexGetCurrentMipMap@4 at 1800030b8
 * undefined4 __fastcall _guTexGetCurrentMipMap@4(int param_1)
 * Address ranges: 1800030b8-1800030ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _guTexGetCurrentMipMap_4(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  
                    /* 0x30b8  137  _guTexGetCurrentMipMap@4
                       0x30b8  298  guTexGetCurrentMipMap */
  lVar3 = (longlong)param_1;
  puVar1 = FUN_180015384();
  uVar2 = 0xffffffff;
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if ((*(longlong *)(puVar1 + 0xa0) != 0) &&
       (uVar2 = 0xffffffff, (int)lVar3 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833))) {
      uVar2 = *(undefined4 *)(puVar1 + lVar3 * 4 + 0xb8);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return uVar2;
}

