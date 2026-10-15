/*
 * FUN_1800f63a8 at 1800f63a8
 * undefined FUN_1800f63a8(void)
 * Address ranges: 1800f63a8-1800f66af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800f63a8(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  uint uStack_44;
  
  lVar6 = param_1 + (ulonglong)param_2 * 0x1ac0;
  if ((DAT_180258cfc & 1) == 0) {
    DAT_180258cfc = DAT_180258cfc | 1;
    _DAT_180258c40 = CONCAT44(uStack_5c,2);
    lRam0000000180258c58 = (ulonglong)uStack_44 << 0x20;
    uRam0000000180258c48 = 2;
    _DAT_180258c50 = local_50;
    _DAT_180258c60 = (ulonglong)uStack_5c << 0x20;
    uRam0000000180258c78 = CONCAT44(uStack_44,5);
    uRam0000000180258c68 = 1;
    _DAT_180258c70 = &DAT_18024ca90;
    _DAT_180258c80 = CONCAT44(uStack_5c,3);
    uRam0000000180258c98 = CONCAT44(uStack_44,5);
    uStack_58._4_4_ = 0;
    uRam0000000180258c88 = 1;
    _DAT_180258c90 = &DAT_18024ca90;
    _DAT_180258ca0 = CONCAT44(uStack_5c,3);
    uRam0000000180258cb8 = CONCAT44(uStack_44,5);
    uRam0000000180258ca8 = 2;
    _DAT_180258cb0 = &DAT_18024ca90;
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                    (param_1 + 0x6b0,param_2,1,&DAT_18024ca68,0);
  *(longlong *)(lVar6 + 0x918) = lVar1;
  if (lVar1 != 0) {
    if ((DAT_180258d00 & 1) == 0) {
      DAT_180258d00 = DAT_180258d00 | 1;
      uStack_58 = CONCAT44(uStack_58._4_4_,1);
      _DAT_180258bc0 = (ulonglong)uStack_5c << 0x20;
      lRam0000000180258bd8 = (ulonglong)uStack_44 << 0x20;
      uRam0000000180258bc8 = uStack_58;
      _DAT_180258bd0 = &DAT_18024cb18;
      _DAT_180258be0 = CONCAT44(uStack_5c,3);
      lRam0000000180258bf8 = (ulonglong)uStack_44 << 0x20;
      uRam0000000180258be8 = 1;
      _DAT_180258bf0 = &DAT_18024cb18;
      _DAT_180258c00 = CONCAT44(uStack_5c,3);
      lRam0000000180258c18 = (ulonglong)uStack_44 << 0x20;
      uRam0000000180258c08 = 2;
      _DAT_180258c10 = &DAT_18024cb18;
      _DAT_180258c20 = CONCAT44(uStack_5c,4);
      lRam0000000180258c38 = (ulonglong)uStack_44 << 0x20;
      uRam0000000180258c28 = 0;
      _DAT_180258c30 = &DAT_18024cb18;
    }
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                      (param_1 + 0x6b0,param_2,1,&DAT_18024ca20,0);
    *(longlong *)(lVar6 + 0x9b8) = lVar1;
    if (lVar1 != 0) {
      uVar2 = FUN_1800ed058(lVar1,*(undefined8 *)(param_1 + 0x298),2,&DAT_18024b1d0,lVar6 + 0x1b98);
      if ((uVar2 & 1) != 0) {
        uVar2 = FUN_1800ed058(uVar2,*(undefined8 *)(param_1 + 0x298),0x2b,&DAT_18024b1e0,
                              lVar6 + 0x1a40);
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_1800ed058(uVar2,*(undefined8 *)(param_1 + 0x298),4,&DAT_18024b238,
                                lVar6 + 0x1a20);
          if ((uVar2 & 1) != 0) {
            puVar3 = (undefined8 *)FUN_180102f80(0x10);
            *(undefined8 **)(lVar6 + 0x1ba8) = puVar3;
            *(undefined8 **)(lVar6 + 0x1bb0) = puVar3;
            uVar5 = 0;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = &PTR_s_POSITION_18024ca48;
              *(undefined4 *)(*(longlong *)(lVar6 + 0x1ba8) + 8) = 1;
              lVar1 = 0;
              if (param_1 != 0) {
                lVar1 = param_1 + 0x6d0;
              }
              lVar4 = FUN_1800eeec0(lVar1,param_2,lVar6 + 0x1e20,0x1040,0);
              *(longlong *)(lVar6 + 0x910) = lVar4;
              if (lVar4 != 0) {
                lVar4 = 0;
                if (param_1 != 0) {
                  lVar4 = param_1 + 0x6a8;
                }
                lVar1 = FUN_1800eeec0(lVar1,param_2,lVar6 + 0x1eb0,0x200,lVar4);
                *(longlong *)(lVar6 + 0x908) = lVar1;
                if (lVar1 != 0) {
                  return 1;
                }
                if (*(longlong *)(lVar6 + 0x910) != 0) {
                  FUN_1800380e0(*(longlong *)(lVar6 + 0x910),1);
                }
                *(undefined8 *)(lVar6 + 0x910) = 0;
              }
              uVar5 = FUN_180102fc0(*(undefined8 *)(lVar6 + 0x1ba8),0x10);
              *(undefined8 *)(lVar6 + 0x1ba8) = 0;
              *(undefined8 *)(lVar6 + 0x1bb0) = 0;
            }
            uVar2 = FUN_1800ed150(uVar5,4,lVar6 + 0x1a20);
          }
          uVar2 = FUN_1800ed150(uVar2,0x2b,lVar6 + 0x1a40);
        }
        FUN_1800ed150(uVar2,2,lVar6 + 0x1b98);
      }
      (**(code **)(**(longlong **)(lVar6 + 0x9b8) + 0x10))();
      *(undefined8 *)(lVar6 + 0x9b8) = 0;
    }
    (**(code **)(**(longlong **)(lVar6 + 0x918) + 0x10))();
    *(undefined8 *)(lVar6 + 0x918) = 0;
  }
  return 0;
}

