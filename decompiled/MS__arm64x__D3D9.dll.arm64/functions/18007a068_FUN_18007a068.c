/*
 * FUN_18007a068 at 18007a068
 * undefined FUN_18007a068(void)
 * Address ranges: 18007a068-18007a11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18007a068(longlong param_1,ulonglong param_2,undefined8 param_3,byte param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uStack_58 = 0;
  uStack_4c = (uint)param_4;
  local_50 = 0x1000;
  lVar1 = param_1 + (param_2 & 0xffffffff) * 8;
  local_48 = 8;
  uStack_40 = 0x1000000040;
  local_60 = param_3;
  iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),&local_50,&local_60,
                     lVar1 + 0x1d0b8);
  if (iVar3 < 0) {
    bVar2 = false;
  }
  else {
    local_28 = 0;
    local_38 = 0x100000000;
    uStack_30 = 0x10000000000;
    iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),
                       *(undefined8 *)(lVar1 + 0x1d0b8),&local_38,lVar1 + 0x1d2b8);
    bVar2 = -1 < iVar3;
  }
  return bVar2;
}

