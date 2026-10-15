/*
 * FUN_180053a70 at 180053a70
 * undefined FUN_180053a70(void)
 * Address ranges: 180053a70-180053b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053a70(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = (int)uVar3;
    uVar1 = iVar2 + 1;
    (&DAT_18024ded0)[uVar3] = (&DAT_18022c0d0)[uVar3 & 0xf] | (&DAT_18022c0d0)[uVar3 >> 4] << 0xc;
    (&DAT_18024ded0)[uVar1] =
         (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
    uVar1 = iVar2 + 2;
    (&DAT_18024ded0)[uVar1] =
         (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
    uVar1 = iVar2 + 3;
    uVar3 = (ulonglong)(iVar2 + 4U);
    (&DAT_18024ded0)[uVar1] =
         (&DAT_18022c0d0)[(ulonglong)uVar1 & 0xf] | (&DAT_18022c0d0)[uVar1 >> 4] << 0xc;
  } while (iVar2 + 4U < 0x100);
  *(undefined8 *)(param_1 + 0xf30) = 0;
  return;
}

