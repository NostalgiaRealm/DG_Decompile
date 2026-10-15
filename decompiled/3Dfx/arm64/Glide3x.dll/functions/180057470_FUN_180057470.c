/*
 * FUN_180057470 at 180057470
 * undefined8 __cdecl FUN_180057470(longlong param_1, uint param_2)
 * Address ranges: 180057470-180057783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180057470(longlong param_1,uint param_2)

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
  if ((DAT_18006fc68 & 1) == 0) {
    DAT_18006fc68 = DAT_18006fc68 | 1;
    _DAT_18006fb10 = CONCAT44(uStack_5c,2);
    lRam000000018006fb28 = (ulonglong)uStack_44 << 0x20;
    uRam000000018006fb18 = 2;
    _DAT_18006fb20 = local_50;
    _DAT_18006fb30 = (ulonglong)uStack_5c << 0x20;
    uRam000000018006fb48 = CONCAT44(uStack_44,5);
    uRam000000018006fb38 = 1;
    _DAT_18006fb40 = &DAT_18006f908;
    _DAT_18006fb50 = CONCAT44(uStack_5c,3);
    uRam000000018006fb68 = CONCAT44(uStack_44,5);
    uStack_58._4_4_ = 0;
    uRam000000018006fb58 = 1;
    _DAT_18006fb60 = &DAT_18006f908;
    _DAT_18006fb70 = CONCAT44(uStack_5c,3);
    uRam000000018006fb88 = CONCAT44(uStack_44,5);
    uRam000000018006fb78 = 2;
    _DAT_18006fb80 = &DAT_18006f908;
  }
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                    (param_1 + 0x6b0,uVar7,1,&DAT_18006f8e0,0);
  *(longlong *)(lVar6 + 0x918) = lVar3;
  if (lVar3 != 0) {
    if ((DAT_18006fc6c & 1) == 0) {
      DAT_18006fc6c = DAT_18006fc6c | 1;
      uStack_58 = CONCAT44(uStack_58._4_4_,1);
      _DAT_18006fa90 = (ulonglong)uStack_5c << 0x20;
      lRam000000018006faa8 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006fa98 = uStack_58;
      _DAT_18006faa0 = &DAT_18006f988;
      _DAT_18006fab0 = CONCAT44(uStack_5c,3);
      lRam000000018006fac8 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006fab8 = 1;
      _DAT_18006fac0 = &DAT_18006f988;
      _DAT_18006fad0 = CONCAT44(uStack_5c,3);
      lRam000000018006fae8 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006fad8 = 2;
      _DAT_18006fae0 = &DAT_18006f988;
      _DAT_18006faf0 = CONCAT44(uStack_5c,4);
      lRam000000018006fb08 = (ulonglong)uStack_44 << 0x20;
      uRam000000018006faf8 = 0;
      _DAT_18006fb00 = &DAT_18006f988;
    }
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                      (param_1 + 0x6b0,uVar7,1,&DAT_18006f898,0);
    *(longlong *)(lVar6 + 0x9b8) = lVar3;
    if (lVar3 != 0) {
      uVar2 = FUN_18004c968(lVar3,*(HMODULE *)(param_1 + 0x298),2,0x18006f5c0,lVar6 + 0x1b98);
      if ((uVar2 & 1) != 0) {
        uVar2 = FUN_18004c968((ulonglong)uVar2,*(HMODULE *)(param_1 + 0x298),0x2b,0x18006f5d0,
                              lVar6 + 0x1a40);
        uVar7 = (ulonglong)uVar2;
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_18004c968(uVar7,*(HMODULE *)(param_1 + 0x298),4,0x18006f628,lVar6 + 0x1a20);
          uVar7 = (ulonglong)uVar2;
          if ((uVar2 & 1) != 0) {
            puVar4 = (undefined8 *)FUN_1800636c0(0x10);
            *(undefined8 **)(lVar6 + 0x1ba8) = puVar4;
            *(undefined8 **)(lVar6 + 0x1bb0) = puVar4;
            uVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = &PTR_s_POSITION_18006985f_1_18006f8c0;
              *(undefined4 *)(*(longlong *)(lVar6 + 0x1ba8) + 8) = 1;
              lVar3 = 0;
              if (param_1 != 0) {
                lVar3 = param_1 + 0x6d0;
              }
              puVar4 = FUN_180048b88(lVar3,param_2,lVar6 + 0x1e20,0x1040,0);
              *(undefined8 **)(lVar6 + 0x910) = puVar4;
              if (puVar4 != (undefined8 *)0x0) {
                lVar1 = 0;
                if (param_1 != 0) {
                  lVar1 = param_1 + 0x6a8;
                }
                puVar4 = FUN_180048b88(lVar3,param_2,lVar6 + 0x1eb0,0x200,lVar1);
                *(undefined8 **)(lVar6 + 0x908) = puVar4;
                if (puVar4 != (undefined8 *)0x0) {
                  return 1;
                }
                puVar4 = *(undefined8 **)(lVar6 + 0x910);
                if (puVar4 != (undefined8 *)0x0) {
                  FUN_180048a90(puVar4);
                  FUN_180063700(puVar4);
                }
                *(undefined8 *)(lVar6 + 0x910) = 0;
              }
              uVar5 = FUN_180063700(*(LPVOID *)(lVar6 + 0x1ba8));
              *(undefined8 *)(lVar6 + 0x1ba8) = 0;
              *(undefined8 *)(lVar6 + 0x1bb0) = 0;
            }
            uVar7 = FUN_18004cac0(uVar5,4,lVar6 + 0x1a20);
          }
          uVar7 = FUN_18004cac0(uVar7,0x2b,lVar6 + 0x1a40);
        }
        FUN_18004cac0(uVar7,2,lVar6 + 0x1b98);
      }
      (**(code **)(**(longlong **)(lVar6 + 0x9b8) + 0x10))();
      *(undefined8 *)(lVar6 + 0x9b8) = 0;
    }
    (**(code **)(**(longlong **)(lVar6 + 0x918) + 0x10))();
    *(undefined8 *)(lVar6 + 0x918) = 0;
  }
  return 0;
}

