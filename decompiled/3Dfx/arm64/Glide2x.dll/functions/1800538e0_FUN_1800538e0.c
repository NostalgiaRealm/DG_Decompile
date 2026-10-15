/*
 * FUN_1800538e0 at 1800538e0
 * undefined8 __cdecl FUN_1800538e0(longlong param_1, uint param_2)
 * Address ranges: 1800538e0-180053bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800538e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  uint uStack_44;
  
  uVar7 = (ulonglong)param_2;
  lVar6 = param_1 + uVar7 * 0x1ac0;
  if ((DAT_18006baa0 & 1) == 0) {
    DAT_18006baa0 = DAT_18006baa0 | 1;
    _DAT_18006b920 = CONCAT44(uStack_5c,2);
    lRam000000018006b938 = (ulonglong)uStack_44 << 0x20;
    uRam000000018006b928 = 2;
    _DAT_18006b930 = local_50;
    _DAT_18006b940 = (ulonglong)uStack_5c << 0x20;
    uRam000000018006b958 = CONCAT44(uStack_44,5);
    uRam000000018006b948 = 1;
    _DAT_18006b950 = &DAT_18006b7a0;
    _DAT_18006b960 = CONCAT44(uStack_5c,3);
    uRam000000018006b978 = CONCAT44(uStack_44,5);
    uStack_58._4_4_ = 0;
    uRam000000018006b968 = 1;
    _DAT_18006b970 = &DAT_18006b7a0;
    _DAT_18006b980 = CONCAT44(uStack_5c,3);
    uRam000000018006b998 = CONCAT44(uStack_44,5);
    uRam000000018006b988 = 2;
    _DAT_18006b990 = &DAT_18006b7a0;
  }
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                    (param_1 + 0x6b0,uVar7,1,&DAT_18006b778,0);
  *(longlong *)(lVar6 + 0x918) = lVar3;
  if (lVar3 != 0) {
    if ((DAT_18006baa4 & 1) == 0) {
      DAT_18006baa4 = DAT_18006baa4 | 1;
      uStack_58 = CONCAT44(uStack_58._4_4_,1);
      _DAT_18006b8a0 = (ulonglong)uStack_5c << 0x20;
      lRam000000018006b8b8 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006b8a8 = uStack_58;
      _DAT_18006b8b0 = &DAT_18006b828;
      _DAT_18006b8c0 = CONCAT44(uStack_5c,3);
      lRam000000018006b8d8 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006b8c8 = 1;
      _DAT_18006b8d0 = &DAT_18006b828;
      _DAT_18006b8e0 = CONCAT44(uStack_5c,3);
      lRam000000018006b8f8 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006b8e8 = 2;
      _DAT_18006b8f0 = &DAT_18006b828;
      _DAT_18006b900 = CONCAT44(uStack_5c,4);
      lRam000000018006b918 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006b908 = 0;
      _DAT_18006b910 = &DAT_18006b828;
    }
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                      (param_1 + 0x6b0,uVar7,1,&DAT_18006b730,0);
    *(longlong *)(lVar6 + 0x9b8) = lVar3;
    if (lVar3 != 0) {
      uVar2 = FUN_180048dd8(lVar3,*(HMODULE *)(param_1 + 0x298),2,0x18006b470,lVar6 + 0x1b98);
      if ((uVar2 & 1) != 0) {
        uVar2 = FUN_180048dd8((ulonglong)uVar2,*(HMODULE *)(param_1 + 0x298),0x2b,0x18006b480,
                              lVar6 + 0x1a40);
        uVar7 = (ulonglong)uVar2;
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_180048dd8(uVar7,*(HMODULE *)(param_1 + 0x298),4,0x18006b4d8,lVar6 + 0x1a20);
          uVar7 = (ulonglong)uVar2;
          if ((uVar2 & 1) != 0) {
            puVar4 = (undefined8 *)FUN_18005fb88(0x10);
            *(undefined8 **)(lVar6 + 0x1ba8) = puVar4;
            *(undefined8 **)(lVar6 + 0x1bb0) = puVar4;
            uVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = &PTR_s_POSITION_1800655cf_1_18006b758;
              *(undefined4 *)(*(longlong *)(lVar6 + 0x1ba8) + 8) = 1;
              lVar3 = 0;
              if (param_1 != 0) {
                lVar3 = param_1 + 0x6d0;
              }
              puVar4 = FUN_180044ff8(lVar3,param_2,lVar6 + 0x1e20,0x1040,0);
              *(undefined8 **)(lVar6 + 0x910) = puVar4;
              if (puVar4 != (undefined8 *)0x0) {
                lVar1 = 0;
                if (param_1 != 0) {
                  lVar1 = param_1 + 0x6a8;
                }
                puVar4 = FUN_180044ff8(lVar3,param_2,lVar6 + 0x1eb0,0x200,lVar1);
                *(undefined8 **)(lVar6 + 0x908) = puVar4;
                if (puVar4 != (undefined8 *)0x0) {
                  return 1;
                }
                puVar4 = *(undefined8 **)(lVar6 + 0x910);
                if (puVar4 != (undefined8 *)0x0) {
                  FUN_180044f00(puVar4);
                  FUN_18005fbc8(puVar4);
                }
                *(undefined8 *)(lVar6 + 0x910) = 0;
              }
              uVar5 = FUN_18005fbc8(*(LPVOID *)(lVar6 + 0x1ba8));
              *(undefined8 *)(lVar6 + 0x1ba8) = 0;
              *(undefined8 *)(lVar6 + 0x1bb0) = 0;
            }
            uVar7 = FUN_180048f30(uVar5,4,lVar6 + 0x1a20);
          }
          uVar7 = FUN_180048f30(uVar7,0x2b,lVar6 + 0x1a40);
        }
        FUN_180048f30(uVar7,2,lVar6 + 0x1b98);
      }
      (**(code **)(**(longlong **)(lVar6 + 0x9b8) + 0x10))();
      *(undefined8 *)(lVar6 + 0x9b8) = 0;
    }
    (**(code **)(**(longlong **)(lVar6 + 0x918) + 0x10))();
    *(undefined8 *)(lVar6 + 0x918) = 0;
  }
  return 0;
}

