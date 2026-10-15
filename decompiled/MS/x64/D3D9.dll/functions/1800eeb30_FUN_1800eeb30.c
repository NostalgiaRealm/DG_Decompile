/*
 * FUN_1800eeb30 at 1800eeb30
 * undefined __fastcall FUN_1800eeb30(longlong param_1, undefined8 param_2)
 * Address ranges: 1800eeb30-1800eec5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800eeb30(longlong param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_c;
  
  if ((DAT_1801176c8 & 1) == 0) {
    DAT_1801176c8 = DAT_1801176c8 | 1;
    _DAT_1801175b0 = 0;
    _DAT_1801175b4 = local_24;
    _DAT_1801175bc = local_1c;
    _DAT_1801175c0 = &DAT_180111ea8;
    _DAT_1801175cc = local_c;
    _DAT_1801175d4 = local_24;
    _DAT_1801175e0 = local_18;
    _DAT_1801175ec = local_c;
    _DAT_1801175f4 = local_24;
    _DAT_180117600 = local_18;
    _DAT_18011760c = local_c;
    _DAT_180117614 = local_24;
    _DAT_180117620 = local_18;
    _DAT_18011762c = local_c;
    _DAT_1801175b8 = 1;
    _DAT_1801175c8 = 0;
    _DAT_1801175d0 = 3;
    _DAT_1801175d8 = 1;
    _DAT_1801175e8 = 0;
    _DAT_1801175f0 = 3;
    _DAT_1801175f8 = 2;
    _DAT_180117608 = 0;
    _DAT_180117610 = 4;
    _DAT_180117618 = 0;
    _DAT_180117628 = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
            ((longlong *)(param_1 + 0x6b0),param_2,1,&DAT_180111db8,0);
  return;
}

