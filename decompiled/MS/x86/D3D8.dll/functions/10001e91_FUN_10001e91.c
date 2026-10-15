/*
 * FUN_10001e91 at 10001e91
 * undefined4 __fastcall FUN_10001e91(undefined4 param_1)
 * Address ranges: 10001e91-10001f3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10001e91(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  
  if (DAT_100ba2ac == (undefined4 *)0x0) {
    DAT_100ba2ac = (undefined4 *)FUN_100ad4a9(0x100);
    DAT_100ba2a4 = 0x40;
    if (DAT_100ba2ac != (undefined4 *)0x0) goto LAB_10001ec9;
LAB_10001ebf:
    uVar2 = 0;
  }
  else {
LAB_10001ec9:
    if (DAT_100ba2a4 == DAT_100ba2a8) {
      lVar1 = (ulonglong)(uint)(DAT_100ba2a4 * 2) * 4;
      SVar3 = (SIZE_T)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
        SVar3 = 0xffffffff;
      }
      puVar4 = (undefined4 *)FUN_100ad4a9(SVar3);
      if (puVar4 == (undefined4 *)0x0) goto LAB_10001ebf;
      FUN_100adac0(puVar4,DAT_100ba2ac,DAT_100ba2a4 << 2);
      thunk_FUN_100ad48c(DAT_100ba2ac);
      DAT_100ba2a4 = DAT_100ba2a4 * 2;
      DAT_100ba2ac = puVar4;
      puVar4[DAT_100ba2a8] = param_1;
    }
    else {
      DAT_100ba2ac[DAT_100ba2a8] = param_1;
    }
    DAT_100ba2a8 = DAT_100ba2a8 + 1;
    uVar2 = CONCAT31((int3)((uint)DAT_100ba2a8 >> 8),1);
  }
  return uVar2;
}

