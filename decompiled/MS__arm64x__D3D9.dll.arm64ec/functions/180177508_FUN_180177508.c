/*
 * FUN_180177508 at 180177508
 * undefined FUN_180177508(void)
 * Address ranges: 180177508-18017758f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180177508(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  int local_28;
  
  lVar1 = param_2 + (param_4 & 0xffffffff) * 4;
  if (*(int *)(lVar1 + 0x298) == 0) {
    uVar2 = FUN_180213760(param_2,1,1,param_4,param_3);
    local_28 = (int)param_4 << 4;
    local_30 = 0xff;
    *(undefined4 *)(lVar1 + 0x298) = uVar2;
    local_38 = *(undefined4 *)(param_2 + 0x88);
    local_40[0] = 1;
    FUN_180214c88(param_2,param_3,0x36,uVar2,local_40,0x20);
  }
  return *(undefined4 *)(lVar1 + 0x298);
}

