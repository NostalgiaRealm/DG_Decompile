/*
 * FUN_18017f058 at 18017f058
 * undefined FUN_18017f058(void)
 * Address ranges: 18017f058-18017f1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18017f058(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_70 = 0x200;
  local_68 = 1;
  uVar5 = 0;
  local_80 = FUN_1802229a8(0x200);
  lStack_78 = local_80;
  auVar6 = FUN_18017b4f8(local_80,&local_80,param_3);
  uVar3 = auVar6._8_8_;
  lVar4 = local_80;
  if (auVar6._0_4_ != 0) {
    uVar2 = auVar6._0_8_;
    if (*(int *)(param_3 + 0x158) != 0) {
      do {
        auVar7 = FUN_1802134e8(&local_80,uVar3,uVar5,
                               *(undefined1 *)
                                (param_3 + 0x134 + (ulonglong)*(byte *)(param_3 + 0x146 + uVar5)));
        uVar3 = auVar7._8_8_;
        uVar2 = auVar7._0_8_;
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_3 + 0x158));
    }
    FUN_18017b630(uVar2,&local_80,param_3);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0x80;
    local_48 = 1;
    local_60 = FUN_1802229a8(0x80);
    uStack_58 = local_60;
    FUN_18017b860(param_1,&local_60,0,param_3);
    uVar3 = FUN_180215058(&local_60,1,0x100003e);
    uVar3 = FUN_180184740(uVar3,&local_80,param_3);
    if ((*(uint *)(param_3 + 0x28) >> 3 & 1) != 0) {
      uVar3 = FUN_1802133a8(*(undefined4 *)(param_3 + 0x20),&local_80,3,2,0x2f0,
                            *(uint *)(param_3 + 0x24) >> 3 & 1);
    }
    FUN_18017b740(uVar3,&local_80,param_3);
    FUN_180213108(&local_80,&local_60,auVar6._0_8_ & 0xffffffff);
    lVar4 = local_80;
    FUN_180214fe8(param_2,local_80,lStack_78 - local_80);
    uVar5 = 1;
    FUN_1802229d8(local_60);
  }
  FUN_1802229d8(lVar4);
  return uVar5;
}

