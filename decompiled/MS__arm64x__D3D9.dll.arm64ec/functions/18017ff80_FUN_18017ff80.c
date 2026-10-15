/*
 * FUN_18017ff80 at 18017ff80
 * undefined FUN_18017ff80(void)
 * Address ranges: 18017ff80-180180137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18017ff80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  longlong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_90 = 0x200;
  local_88 = 1;
  iVar4 = 0;
  local_a0 = FUN_1802229a8(0x200);
  lStack_98 = local_a0;
  auVar6 = FUN_18017b4f8(local_a0,&local_a0,param_3);
  uVar2 = auVar6._0_8_;
  lVar5 = local_a0;
  if (auVar6._0_4_ != 0) {
    lVar5 = 0;
    do {
      pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + lVar5);
      if ((pcVar1[0x10] != '\0') && (*pcVar1 != -1)) {
        auVar6 = FUN_1802134e8(&local_a0,auVar6._8_8_,iVar4);
        iVar4 = iVar4 + 1;
      }
      uVar3 = auVar6._0_8_;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x10);
    if (*(int *)(param_3 + 0x528) != -1) {
      uVar3 = FUN_1802134e8(&local_a0,auVar6._8_8_,iVar4,7);
    }
    FUN_18017b630(uVar3,&local_a0,param_3);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0x80;
    local_68 = 1;
    local_80 = FUN_1802229a8(0x80);
    local_60 = 0;
    lStack_58 = 0;
    local_50 = 0x80;
    local_48 = 1;
    uStack_78 = local_80;
    local_60 = FUN_1802229a8(0x80);
    lStack_58 = local_60;
    FUN_18017b860(param_1,&local_80,&local_60,param_3);
    FUN_180214c88(param_3 + 0x20,&local_80,0x3e,0,&stack0xffffffffffffff50,0);
    uVar3 = FUN_180214fe8(&local_80,local_60,lStack_58 - local_60);
    uVar3 = FUN_18018dc20(uVar3,&local_a0,param_3);
    uVar3 = FUN_180182600(uVar3,param_3,&local_a0);
    FUN_18017b740(uVar3,&local_a0,param_3);
    FUN_180213108(&local_a0,&local_80,uVar2 & 0xffffffff);
    lVar5 = local_a0;
    FUN_180214fe8(param_2,local_a0,lStack_98 - local_a0);
    iVar4 = 1;
    FUN_1802229d8(local_60);
    FUN_1802229d8(local_80);
  }
  FUN_1802229d8(lVar5);
  return iVar4;
}

