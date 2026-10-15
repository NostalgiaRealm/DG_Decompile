/*
 * FUN_10003458 at 10003458
 * undefined4 __stdcall FUN_10003458(undefined4 * param_1)
 * Address ranges: 10003458-100034e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003458(undefined4 *param_1)

{
  undefined4 uVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (DAT_1006c2a4 == DAT_1006c2a8) {
    if (DAT_1006c2a8 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = DAT_1006c2a8 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar4 * 4);
    if ((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_10060bfe(SVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_10060d80(puVar3,DAT_1006c2a0,DAT_1006c2a8 << 2);
    thunk_FUN_10060be1(DAT_1006c2a0);
    DAT_1006c2a0 = puVar3;
    DAT_1006c2a8 = uVar4;
  }
  uVar1 = *param_1;
  DAT_1006c2a0[DAT_1006c2a4] = uVar1;
  DAT_1006c2a4 = DAT_1006c2a4 + 1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

