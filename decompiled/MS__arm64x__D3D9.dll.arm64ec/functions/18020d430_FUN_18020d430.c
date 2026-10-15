/*
 * FUN_18020d430 at 18020d430
 * undefined FUN_18020d430(void)
 * Address ranges: 18020d430-18020d51b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18020d430(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,byte param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *extraout_x11;
  undefined8 local_80;
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
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x20;
  local_64 = 0;
  local_48[0] = 1;
  local_80 = 0;
  bVar2 = *(char *)(lVar1 + 0x18) != '\0';
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
  uVar3 = FUN_18020d338(param_1,param_2,&local_70,0,local_48,0,0,param_8,&local_80);
  if ((((uVar3 & 1) != 0) && (*(char *)(lVar1 + 0x18) != '\0')) && ((param_5 & 1) != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = 0;
    uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar4,0,&local_58,&local_78);
  }
  return local_80;
}

