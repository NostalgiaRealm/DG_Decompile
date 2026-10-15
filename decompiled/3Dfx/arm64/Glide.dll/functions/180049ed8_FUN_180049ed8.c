/*
 * FUN_180049ed8 at 180049ed8
 * longlong * __cdecl FUN_180049ed8(longlong param_1, ulonglong param_2, ulonglong param_3, undefined4 param_4, byte param_5)
 * Address ranges: 180049ed8-180049fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180049ed8(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,byte param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  puVar1 = (undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20);
  local_64 = 0;
  local_48[0] = 1;
  local_80 = (longlong *)0x0;
  bVar2 = *(char *)(puVar1 + 3) != '\0';
  local_70 = 4;
  if (!bVar2) {
    local_70 = 1;
  }
  uStack_6c = 2;
  if (!bVar2) {
    uStack_6c = 0;
  }
  local_68 = (uint)bVar2;
  uStack_38 = param_3 & 0xffffffff;
  local_40 = 0x10000;
  local_20 = 0x100000000;
  local_30 = 0x1000100000001;
  uStack_28 = 0x100000000;
  local_18 = param_4;
  iVar3 = (**(code **)(*(longlong *)*puVar1 + 0xd8))
                    ((longlong *)*puVar1,&local_70,0,local_48,0,0,&DAT_180064c58,&local_80);
  if (((-1 < iVar3) && (*(char *)(puVar1 + 3) != '\0')) && ((param_5 & 1) != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = 0;
    (**(code **)(*local_80 + 0x40))(local_80,0,&local_58,&local_78);
  }
  return local_80;
}

