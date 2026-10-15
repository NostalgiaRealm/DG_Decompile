/*
 * FUN_1002b2d4 at 1002b2d4
 * undefined4 __stdcall FUN_1002b2d4(undefined4 * param_1)
 * Address ranges: 1002b2d4-1002b365
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002b2d4(undefined4 *param_1)

{
  undefined4 uVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (DAT_100df2dc == DAT_100df2e0) {
    if (DAT_100df2e0 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = DAT_100df2e0 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar4 * 4);
    if ((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_100cfd89(SVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_100cff00(puVar3,DAT_100df2d8,DAT_100df2e0 << 2);
    thunk_FUN_100cfd6c(DAT_100df2d8);
    DAT_100df2d8 = puVar3;
    DAT_100df2e0 = uVar4;
  }
  uVar1 = *param_1;
  DAT_100df2d8[DAT_100df2dc] = uVar1;
  DAT_100df2dc = DAT_100df2dc + 1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

