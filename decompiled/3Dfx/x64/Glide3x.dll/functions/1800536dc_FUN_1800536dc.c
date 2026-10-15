/*
 * FUN_1800536dc at 1800536dc
 * undefined __fastcall FUN_1800536dc(longlong param_1, undefined8 param_2)
 * Address ranges: 1800536dc-18005380a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800536dc(longlong param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_c;
  
  if ((DAT_18006dc6c & 1) == 0) {
    DAT_18006dc6c = DAT_18006dc6c | 1;
    _DAT_18006da90 = 0;
    _DAT_18006da94 = local_24;
    _DAT_18006da9c = local_1c;
    _DAT_18006daa0 = &DAT_18006d988;
    _DAT_18006daac = local_c;
    _DAT_18006dab4 = local_24;
    _DAT_18006dac0 = local_18;
    _DAT_18006dacc = local_c;
    _DAT_18006dad4 = local_24;
    _DAT_18006dae0 = local_18;
    _DAT_18006daec = local_c;
    _DAT_18006daf4 = local_24;
    _DAT_18006db00 = local_18;
    _DAT_18006db0c = local_c;
    _DAT_18006da98 = 1;
    _DAT_18006daa8 = 0;
    _DAT_18006dab0 = 3;
    _DAT_18006dab8 = 1;
    _DAT_18006dac8 = 0;
    _DAT_18006dad0 = 3;
    _DAT_18006dad8 = 2;
    _DAT_18006dae8 = 0;
    _DAT_18006daf0 = 4;
    _DAT_18006daf8 = 0;
    _DAT_18006db08 = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
            ((longlong *)(param_1 + 0x6b0),param_2,1,&DAT_18006d898,0);
  return;
}

