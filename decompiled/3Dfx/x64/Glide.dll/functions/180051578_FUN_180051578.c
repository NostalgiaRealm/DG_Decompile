/*
 * FUN_180051578 at 180051578
 * undefined __fastcall FUN_180051578(longlong param_1, undefined8 param_2)
 * Address ranges: 180051578-1800516a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180051578(longlong param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_c;
  
  if ((DAT_18006cb04 & 1) == 0) {
    DAT_18006cb04 = DAT_18006cb04 | 1;
    _DAT_18006c900 = 0;
    _DAT_18006c904 = local_24;
    _DAT_18006c90c = local_1c;
    _DAT_18006c910 = &DAT_18006c838;
    _DAT_18006c91c = local_c;
    _DAT_18006c924 = local_24;
    _DAT_18006c930 = local_18;
    _DAT_18006c93c = local_c;
    _DAT_18006c944 = local_24;
    _DAT_18006c950 = local_18;
    _DAT_18006c95c = local_c;
    _DAT_18006c964 = local_24;
    _DAT_18006c970 = local_18;
    _DAT_18006c97c = local_c;
    _DAT_18006c908 = 1;
    _DAT_18006c918 = 0;
    _DAT_18006c920 = 3;
    _DAT_18006c928 = 1;
    _DAT_18006c938 = 0;
    _DAT_18006c940 = 3;
    _DAT_18006c948 = 2;
    _DAT_18006c958 = 0;
    _DAT_18006c960 = 4;
    _DAT_18006c968 = 0;
    _DAT_18006c978 = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
            ((longlong *)(param_1 + 0x6b0),param_2,1,&DAT_18006c740,0);
  return;
}

