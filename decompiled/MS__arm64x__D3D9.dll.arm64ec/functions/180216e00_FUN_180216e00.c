/*
 * FUN_180216e00 at 180216e00
 * undefined FUN_180216e00(void)
 * Address ranges: 180216e00-1802170a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180216e00(longlong param_1,ulonglong param_2)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar7;
  uint uStack_5c;
  undefined8 local_50;
  uint uStack_44;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  param_2 = param_2 & 0xffffffff;
  lVar7 = param_1 + param_2 * 0x1ac0;
  if ((DAT_180258cec & 1) == 0) {
    DAT_180258cec = DAT_180258cec | 1;
    _DAT_180258af0 = CONCAT44(uStack_5c,2);
    lRam0000000180258b08 = (ulonglong)uStack_44 << 0x20;
    uRam0000000180258af8 = 2;
    _DAT_180258b00 = local_50;
    _DAT_180258b10 = (ulonglong)uStack_5c << 0x20;
    uRam0000000180258b28 = CONCAT44(uStack_44,5);
    uRam0000000180258b18 = 1;
    _DAT_180258b20 = &DAT_18024c788;
    _DAT_180258b30 = CONCAT44(uStack_5c,3);
    uRam0000000180258b48 = CONCAT44(uStack_44,5);
    uRam0000000180258b38 = 1;
    _DAT_180258b40 = &DAT_18024c788;
    _DAT_180258b50 = CONCAT44(uStack_5c,3);
    uRam0000000180258b68 = CONCAT44(uStack_44,5);
    uRam0000000180258b58 = 2;
    _DAT_180258b60 = &DAT_18024c788;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar2 = (*extraout_x11)(param_1 + 0x6b0,param_2,1,&DAT_18024c760,0);
  *(longlong *)(lVar7 + 0x918) = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_1802170a8(param_1,param_2);
    *(longlong *)(lVar7 + 0x9b8) = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_180206a78(lVar2,*(undefined8 *)(param_1 + 0x298),2,&DAT_18024c6d0,lVar7 + 0x1b98);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_180206a78(uVar3,*(undefined8 *)(param_1 + 0x298),0x2b,&DAT_18024c6e0,
                              lVar7 + 0x1a40);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_180206a78(uVar3,*(undefined8 *)(param_1 + 0x298),4,&DAT_18024c758,
                                lVar7 + 0x1a20);
          if ((uVar3 & 1) != 0) {
            puVar4 = (undefined8 *)FUN_1802229a8(0x10);
            *(undefined8 **)(lVar7 + 0x1ba8) = puVar4;
            *(undefined8 **)(lVar7 + 0x1bb0) = puVar4;
            uVar6 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = &PTR_s_POSITION_18024c738;
              *(undefined4 *)(*(longlong *)(lVar7 + 0x1ba8) + 8) = 1;
              lVar2 = 0;
              if (param_1 != 0) {
                lVar2 = param_1 + 0x6d0;
              }
              lVar5 = FUN_1802109e8(lVar2,param_2,lVar7 + 0x1e20,0x1040,0);
              *(longlong *)(lVar7 + 0x910) = lVar5;
              if (lVar5 != 0) {
                lVar5 = 0;
                if (param_1 != 0) {
                  lVar5 = param_1 + 0x6a8;
                }
                lVar2 = FUN_1802109e8(lVar2,param_2,lVar7 + 0x1eb0,0x200,lVar5);
                *(longlong *)(lVar7 + 0x908) = lVar2;
                if (lVar2 != 0) {
                  return 1;
                }
                if (*(longlong *)(lVar7 + 0x910) != 0) {
                  FUN_180146480(*(longlong *)(lVar7 + 0x910),1);
                }
                *(undefined8 *)(lVar7 + 0x910) = 0;
              }
              uVar6 = FUN_1802229d8(*(undefined8 *)(lVar7 + 0x1ba8),0x10);
              *(undefined8 *)(lVar7 + 0x1ba8) = 0;
              *(undefined8 *)(lVar7 + 0x1bb0) = 0;
            }
            uVar3 = FUN_180206b80(uVar6,4,lVar7 + 0x1a20);
          }
          uVar3 = FUN_180206b80(uVar3,0x2b,lVar7 + 0x1a40);
        }
        FUN_180206b80(uVar3,2,lVar7 + 0x1b98);
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
      *(undefined8 *)(lVar7 + 0x9b8) = 0;
    }
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(lVar7 + 0x918) = 0;
  }
  return 0;
}

