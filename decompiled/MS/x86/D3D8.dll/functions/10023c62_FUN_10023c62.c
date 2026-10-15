/*
 * FUN_10023c62 at 10023c62
 * undefined4 __stdcall FUN_10023c62(undefined4 * param_1)
 * Address ranges: 10023c62-10023cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10023c62(undefined4 *param_1)

{
  undefined4 uVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (DAT_100ba718 == DAT_100ba71c) {
    if (DAT_100ba71c == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = DAT_100ba71c * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar4 * 4);
    if ((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_100ad4a9(SVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_100adac0(puVar3,DAT_100ba714,DAT_100ba71c << 2);
    thunk_FUN_100ad48c(DAT_100ba714);
    DAT_100ba714 = puVar3;
    DAT_100ba71c = uVar4;
  }
  uVar1 = *param_1;
  DAT_100ba714[DAT_100ba718] = uVar1;
  DAT_100ba718 = DAT_100ba718 + 1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

