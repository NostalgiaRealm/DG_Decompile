/*
 * FUN_180054730 at 180054730
 * undefined8 __cdecl FUN_180054730(longlong param_1, uint param_2)
 * Address ranges: 180054730-180054a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180054730(longlong param_1,uint param_2)

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
  if ((DAT_18006cb00 & 1) == 0) {
    DAT_18006cb00 = DAT_18006cb00 | 1;
    _DAT_18006c980 = CONCAT44(uStack_5c,2);
    lRam000000018006c998 = (ulonglong)uStack_44 << 0x20;
    uRam000000018006c988 = 2;
    _DAT_18006c990 = local_50;
    _DAT_18006c9a0 = (ulonglong)uStack_5c << 0x20;
    uRam000000018006c9b8 = CONCAT44(uStack_44,5);
    uRam000000018006c9a8 = 1;
    _DAT_18006c9b0 = &DAT_18006c7a0;
    _DAT_18006c9c0 = CONCAT44(uStack_5c,3);
    uRam000000018006c9d8 = CONCAT44(uStack_44,5);
    uStack_58._4_4_ = 0;
    uRam000000018006c9c8 = 1;
    _DAT_18006c9d0 = &DAT_18006c7a0;
    _DAT_18006c9e0 = CONCAT44(uStack_5c,3);
    uRam000000018006c9f8 = CONCAT44(uStack_44,5);
    uRam000000018006c9e8 = 2;
    _DAT_18006c9f0 = &DAT_18006c7a0;
  }
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                    (param_1 + 0x6b0,uVar7,1,&DAT_18006c778,0);
  *(longlong *)(lVar6 + 0x918) = lVar3;
  if (lVar3 != 0) {
    if ((DAT_18006cb04 & 1) == 0) {
      DAT_18006cb04 = DAT_18006cb04 | 1;
      uStack_58 = CONCAT44(uStack_58._4_4_,1);
      _DAT_18006c900 = (ulonglong)uStack_5c << 0x20;
      lRam000000018006c918 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006c908 = uStack_58;
      _DAT_18006c910 = &DAT_18006c828;
      _DAT_18006c920 = CONCAT44(uStack_5c,3);
      lRam000000018006c938 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006c928 = 1;
      _DAT_18006c930 = &DAT_18006c828;
      _DAT_18006c940 = CONCAT44(uStack_5c,3);
      lRam000000018006c958 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006c948 = 2;
      _DAT_18006c950 = &DAT_18006c828;
      _DAT_18006c960 = CONCAT44(uStack_5c,4);
      lRam000000018006c978 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006c968 = 0;
      _DAT_18006c970 = &DAT_18006c828;
    }
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                      (param_1 + 0x6b0,uVar7,1,&DAT_18006c730,0);
    *(longlong *)(lVar6 + 0x9b8) = lVar3;
    if (lVar3 != 0) {
      uVar2 = FUN_180049c28(lVar3,*(HMODULE *)(param_1 + 0x298),2,0x18006c470,lVar6 + 0x1b98);
      if ((uVar2 & 1) != 0) {
        uVar2 = FUN_180049c28((ulonglong)uVar2,*(HMODULE *)(param_1 + 0x298),0x2b,0x18006c480,
                              lVar6 + 0x1a40);
        uVar7 = (ulonglong)uVar2;
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_180049c28(uVar7,*(HMODULE *)(param_1 + 0x298),4,0x18006c4d8,lVar6 + 0x1a20);
          uVar7 = (ulonglong)uVar2;
          if ((uVar2 & 1) != 0) {
            puVar4 = (undefined8 *)FUN_1800609d8(0x10);
            *(undefined8 **)(lVar6 + 0x1ba8) = puVar4;
            *(undefined8 **)(lVar6 + 0x1bb0) = puVar4;
            uVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = &PTR_s_POSITION_1800665cf_1_18006c758;
              *(undefined4 *)(*(longlong *)(lVar6 + 0x1ba8) + 8) = 1;
              lVar3 = 0;
              if (param_1 != 0) {
                lVar3 = param_1 + 0x6d0;
              }
              puVar4 = FUN_180045e48(lVar3,param_2,lVar6 + 0x1e20,0x1040,0);
              *(undefined8 **)(lVar6 + 0x910) = puVar4;
              if (puVar4 != (undefined8 *)0x0) {
                lVar1 = 0;
                if (param_1 != 0) {
                  lVar1 = param_1 + 0x6a8;
                }
                puVar4 = FUN_180045e48(lVar3,param_2,lVar6 + 0x1eb0,0x200,lVar1);
                *(undefined8 **)(lVar6 + 0x908) = puVar4;
                if (puVar4 != (undefined8 *)0x0) {
                  return 1;
                }
                puVar4 = *(undefined8 **)(lVar6 + 0x910);
                if (puVar4 != (undefined8 *)0x0) {
                  FUN_180045d50(puVar4);
                  FUN_180060a18(puVar4);
                }
                *(undefined8 *)(lVar6 + 0x910) = 0;
              }
              uVar5 = FUN_180060a18(*(LPVOID *)(lVar6 + 0x1ba8));
              *(undefined8 *)(lVar6 + 0x1ba8) = 0;
              *(undefined8 *)(lVar6 + 0x1bb0) = 0;
            }
            uVar7 = FUN_180049d80(uVar5,4,lVar6 + 0x1a20);
          }
          uVar7 = FUN_180049d80(uVar7,0x2b,lVar6 + 0x1a40);
        }
        FUN_180049d80(uVar7,2,lVar6 + 0x1b98);
      }
      (**(code **)(**(longlong **)(lVar6 + 0x9b8) + 0x10))();
      *(undefined8 *)(lVar6 + 0x9b8) = 0;
    }
    (**(code **)(**(longlong **)(lVar6 + 0x918) + 0x10))();
    *(undefined8 *)(lVar6 + 0x918) = 0;
  }
  return 0;
}

