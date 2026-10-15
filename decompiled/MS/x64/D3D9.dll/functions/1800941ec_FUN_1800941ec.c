/*
 * FUN_1800941ec at 1800941ec
 * undefined __fastcall FUN_1800941ec(longlong param_1)
 * Address ranges: 1800941ec-1800943fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800941ec(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_c;
  
  if ((DAT_1801176b8 & 1) == 0) {
    DAT_1801176b8 = DAT_1801176b8 | 1;
    _DAT_180117478 = 0;
    _DAT_180117474 = local_24;
    _DAT_180117480 = CONCAT44(uStack_14,local_18);
    _DAT_18011748c = local_c;
    _DAT_180117494 = local_24;
    _DAT_1801174a0 = CONCAT44(uStack_14,local_18);
    _DAT_1801174ac = local_c;
    _DAT_1801174b4 = local_24;
    _DAT_1801174c0 = CONCAT44(uStack_14,local_18);
    _DAT_1801174cc = local_c;
    _DAT_1801174d4 = local_24;
    _DAT_1801174e0 = CONCAT44(uStack_14,local_18);
    _DAT_1801174ec = local_c;
    _DAT_1801174f4 = local_24;
    _DAT_180117500 = CONCAT44(uStack_14,local_18);
    _DAT_18011750c = local_c;
    _DAT_180117514 = local_24;
    _DAT_180117520 = CONCAT44(uStack_14,local_18);
    _DAT_18011752c = local_c;
    _DAT_180117534 = local_24;
    _DAT_18011753c = local_1c;
    _DAT_180117540 = &DAT_180111d88;
    _DAT_18011754c = local_c;
    _DAT_180117554 = local_24;
    _DAT_180117564 = uStack_14;
    _DAT_18011756c = local_c;
    _DAT_180117470 = 2;
    _DAT_180117488 = 0;
    _DAT_180117490 = 3;
    _DAT_180117498 = 0;
    _DAT_1801174a8 = 5;
    _DAT_1801174b0 = 3;
    _DAT_1801174b8 = 1;
    _DAT_1801174c8 = 5;
    _DAT_1801174d0 = 3;
    _DAT_1801174d8 = 2;
    _DAT_1801174e8 = 5;
    _DAT_1801174f0 = 3;
    _DAT_1801174f8 = 3;
    _DAT_180117508 = 5;
    _DAT_180117510 = 3;
    _DAT_180117518 = 4;
    _DAT_180117528 = 5;
    _DAT_180117530 = 0;
    _DAT_180117538 = 1;
    _DAT_180117548 = 5;
    _DAT_180117550 = 1;
    _DAT_180117558 = 1;
    _DAT_180117560 = 2;
    _DAT_180117568 = 5;
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1cf10) + 0x6b0);
  (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(param_1 + 0x28),1,&DAT_180111cb8,0);
  return;
}

