/*
 * FUN_10001d82 at 10001d82
 * undefined4 __fastcall FUN_10001d82(undefined4 param_1)
 * Address ranges: 10001d82-10001e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10001d82(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  
  if (DAT_100dea6c == (undefined4 *)0x0) {
    DAT_100dea6c = (undefined4 *)FUN_100cfd89(0x100);
    DAT_100dea64 = 0x40;
    if (DAT_100dea6c != (undefined4 *)0x0) goto LAB_10001dba;
LAB_10001db0:
    uVar2 = 0;
  }
  else {
LAB_10001dba:
    if (DAT_100dea64 == DAT_100dea68) {
      lVar1 = (ulonglong)(uint)(DAT_100dea64 * 2) * 4;
      SVar3 = (SIZE_T)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
        SVar3 = 0xffffffff;
      }
      puVar4 = (undefined4 *)FUN_100cfd89(SVar3);
      if (puVar4 == (undefined4 *)0x0) goto LAB_10001db0;
      FUN_100cff00(puVar4,DAT_100dea6c,DAT_100dea64 << 2);
      thunk_FUN_100cfd6c(DAT_100dea6c);
      DAT_100dea64 = DAT_100dea64 * 2;
      DAT_100dea6c = puVar4;
      puVar4[DAT_100dea68] = param_1;
    }
    else {
      DAT_100dea6c[DAT_100dea68] = param_1;
    }
    DAT_100dea68 = DAT_100dea68 + 1;
    uVar2 = CONCAT31((int3)((uint)DAT_100dea68 >> 8),1);
  }
  return uVar2;
}

