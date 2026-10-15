/*
 * FUN_1801685d0 at 1801685d0
 * undefined FUN_1801685d0(void)
 * Address ranges: 1801685d0-18016872b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801685d0(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_1802229a8(0x1ebf0);
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      uVar1 = iVar3 + 1;
      (&DAT_18024d9e0)[uVar4] = (&DAT_18022c0d0)[uVar4 & 0xf] | (&DAT_18022c0d0)[uVar4 >> 4] << 0xc;
      (&DAT_18024d9e0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 2;
      (&DAT_18024d9e0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 3;
      uVar4 = (ulonglong)(iVar3 + 4U);
      (&DAT_18024d9e0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
    } while (iVar3 + 4U < 0x100);
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      uVar1 = iVar3 + 1;
      (&DAT_18024d9e0)[uVar4] = (&DAT_18022c0d0)[uVar4 & 0xf] | (&DAT_18022c0d0)[uVar4 >> 4] << 0xc;
      (&DAT_18024d9e0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 2;
      (&DAT_18024d9e0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 3;
      uVar4 = (ulonglong)(iVar3 + 4U);
      (&DAT_18024d9e0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
    } while (iVar3 + 4U < 0x100);
    FUN_180222c50(lVar2,0,0x1ebf0);
    return lVar2;
  }
  return 0;
}

