/*
 * FUN_100254ca at 100254ca
 * undefined4 __fastcall FUN_100254ca(undefined4 param_1)
 * Address ranges: 100254ca-100255b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100254ca(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_1006c24c == (undefined4 *)0x0) {
    DAT_1006c24c = (undefined4 *)FUN_10060bfe(0x100);
    DAT_1006c248 = 0x40;
    if (DAT_1006c24c != (undefined4 *)0x0) goto LAB_1002550b;
LAB_100254fe:
    uVar2 = 0;
  }
  else {
LAB_1002550b:
    if (DAT_1006c248 == DAT_1006c23c) {
      lVar1 = (ulonglong)(uint)(DAT_1006c248 * 2) * 4;
      SVar3 = (SIZE_T)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
        SVar3 = 0xffffffff;
      }
      puVar4 = (undefined4 *)FUN_10060bfe(SVar3);
      if (puVar4 == (undefined4 *)0x0) goto LAB_100254fe;
      FUN_10060d80(puVar4,DAT_1006c24c,DAT_1006c248 << 2);
      thunk_FUN_10060be1(DAT_1006c24c);
      DAT_1006c248 = DAT_1006c248 * 2;
      DAT_1006c24c = puVar4;
      puVar4[DAT_1006c23c] = param_1;
    }
    else {
      if (DAT_1006c23c == 0) {
        local_14 = DAT_1006c23c;
        local_10 = DAT_1006c23c;
        local_c = DAT_1006c23c;
        local_8 = DAT_1006c23c;
        DAT_100707b0 = DAT_1006c23c;
        DAT_100707b4 = DAT_1006c23c;
        DAT_100707b8 = DAT_1006c23c;
        DAT_100707bc = DAT_1006c23c;
        FUN_1000a4ce(&local_14);
      }
      DAT_1006c24c[DAT_1006c23c] = param_1;
    }
    DAT_1006c23c = DAT_1006c23c + 1;
    uVar2 = CONCAT31((int3)((uint)DAT_1006c23c >> 8),1);
  }
  return uVar2;
}

