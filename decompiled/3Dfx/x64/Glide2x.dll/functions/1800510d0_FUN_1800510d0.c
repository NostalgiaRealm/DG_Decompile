/*
 * FUN_1800510d0 at 1800510d0
 * undefined __fastcall FUN_1800510d0(longlong param_1, undefined8 param_2)
 * Address ranges: 1800510d0-1800511fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800510d0(longlong param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_c;
  
  if ((DAT_18006cab4 & 1) == 0) {
    DAT_18006cab4 = DAT_18006cab4 | 1;
    _DAT_18006c8b0 = 0;
    _DAT_18006c8b4 = local_24;
    _DAT_18006c8bc = local_1c;
    _DAT_18006c8c0 = &DAT_18006c838;
    _DAT_18006c8cc = local_c;
    _DAT_18006c8d4 = local_24;
    _DAT_18006c8e0 = local_18;
    _DAT_18006c8ec = local_c;
    _DAT_18006c8f4 = local_24;
    _DAT_18006c900 = local_18;
    _DAT_18006c90c = local_c;
    _DAT_18006c914 = local_24;
    _DAT_18006c920 = local_18;
    _DAT_18006c92c = local_c;
    _DAT_18006c8b8 = 1;
    _DAT_18006c8c8 = 0;
    _DAT_18006c8d0 = 3;
    _DAT_18006c8d8 = 1;
    _DAT_18006c8e8 = 0;
    _DAT_18006c8f0 = 3;
    _DAT_18006c8f8 = 2;
    _DAT_18006c908 = 0;
    _DAT_18006c910 = 4;
    _DAT_18006c918 = 0;
    _DAT_18006c928 = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
            ((longlong *)(param_1 + 0x6b0),param_2,1,&DAT_18006c740,0);
  return;
}

