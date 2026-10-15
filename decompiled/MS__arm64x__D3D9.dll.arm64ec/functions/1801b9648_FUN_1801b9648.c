/*
 * FUN_1801b9648 at 1801b9648
 * undefined FUN_1801b9648(void)
 * Address ranges: 1801b9648-1801b96ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b9648(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_1801b7f38(param_1,param_3,param_5,param_2);
  uVar3 = 0;
  if (param_4 != 0) {
    lVar1 = (longlong)param_4 * 0x2c;
    uVar3 = (uVar2 >> (ulonglong)((byte)(&DAT_180248462)[lVar1] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_180248463)[lVar1] & 0x1f) |
            (uVar2 >> (ulonglong)((byte)(&DAT_18024845c)[lVar1] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_18024845d)[lVar1] & 0x1f) |
            (uVar2 >> (ulonglong)((byte)(&DAT_18024845e)[lVar1] + 0x10 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_18024845f)[lVar1] & 0x1f) |
            (uVar2 >> (ulonglong)((byte)(&DAT_180248460)[lVar1] + 8 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_180248461)[lVar1] & 0x1f);
  }
  return uVar3;
}

