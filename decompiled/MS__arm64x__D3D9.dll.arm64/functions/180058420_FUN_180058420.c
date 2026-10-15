/*
 * FUN_180058420 at 180058420
 * undefined FUN_180058420(void)
 * Address ranges: 180058420-18005857b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180058420(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_180102f80(0x1ebf0);
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      uVar1 = iVar3 + 1;
      (&DAT_18024ded0)[uVar4] = (&DAT_18022c0d0)[uVar4 & 0xf] | (&DAT_18022c0d0)[uVar4 >> 4] << 0xc;
      (&DAT_18024ded0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 2;
      (&DAT_18024ded0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 3;
      uVar4 = (ulonglong)(iVar3 + 4U);
      (&DAT_18024ded0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
    } while (iVar3 + 4U < 0x100);
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      uVar1 = iVar3 + 1;
      (&DAT_18024ded0)[uVar4] = (&DAT_18022c0d0)[uVar4 & 0xf] | (&DAT_18022c0d0)[uVar4 >> 4] << 0xc;
      (&DAT_18024ded0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 2;
      (&DAT_18024ded0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
      uVar1 = iVar3 + 3;
      uVar4 = (ulonglong)(iVar3 + 4U);
      (&DAT_18024ded0)[uVar1] =
           (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
    } while (iVar3 + 4U < 0x100);
    func_0x000180222c50(lVar2,0,0x1ebf0);
    return lVar2;
  }
  return 0;
}

