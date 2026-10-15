/*
 * FUN_180089164 at 180089164
 * bool __fastcall FUN_180089164(longlong param_1, uint param_2, undefined8 param_3, byte param_4)
 * Address ranges: 180089164-18008922d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180089164(longlong param_1,uint param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined8 local_10;
  
  local_34 = (uint)param_4;
  local_38 = 0x1000;
  local_30 = 8;
  local_28 = 0x40;
  local_24 = 0x10;
  local_40 = 0;
  uVar2 = (ulonglong)param_2;
  local_48 = param_3;
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),&local_38,&local_48,
                     param_1 + (uVar2 + 0x3a17) * 8);
  if (iVar1 < 0) {
    bVar3 = false;
  }
  else {
    local_20 = 0;
    local_10 = 0;
    local_1c = 1;
    local_14 = 0x100;
    iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),
                       *(undefined8 *)(param_1 + 0x1d0b8 + uVar2 * 8),&local_20,
                       param_1 + (uVar2 + 0x3a57) * 8);
    bVar3 = -1 < iVar1;
  }
  return bVar3;
}

