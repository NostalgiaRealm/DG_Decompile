/*
 * FUN_1800090e4 at 1800090e4
 * undefined1 * __fastcall FUN_1800090e4(undefined1 * param_1, longlong param_2)
 * Address ranges: 1800090e4-18000917c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_1800090e4(undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  FUN_180060f94(param_1,0,0x150);
  lVar2 = 0;
  do {
    bVar1 = (&DAT_180063a18)[lVar2];
    lVar3 = lVar2 + 1;
    *(int *)(param_1 + lVar2 * 0x18 + 8) = (int)(char)(&DAT_180063a08)[lVar2];
    *(uint *)(param_1 + lVar2 * 0x18 + 4) = (uint)bVar1;
    *(ulonglong *)(param_1 + lVar2 * 0x18 + 0x10) = param_2 + (ulonglong)bVar1 * 4;
    lVar2 = lVar3;
  } while (lVar3 != 0xe);
  FUN_180009180((longlong)param_1,param_2,0,0,'\x01');
  return param_1;
}

