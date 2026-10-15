/*
 * FUN_180137af0 at 180137af0
 * undefined FUN_180137af0(void)
 * Address ranges: 180137af0-180137c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180137af0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((((param_2 | param_3) & 0xff) != 0) ||
         ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x80))))) {
        FUN_180137a70(param_1);
        FUN_1801378a0(param_1,param_2,param_3,param_4);
      }
    }
    else {
      uVar1 = FUN_1801336b0(param_1);
      if ((uVar1 & 1) != 0) {
        FUN_180137a70(param_1);
        lVar3 = 0x98;
        if (*(longlong *)(param_1 + 0xfcd8) == *(longlong *)(param_1 + 0xf718)) {
          lVar3 = 0x70;
        }
        uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11_00)(uVar2,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + lVar3));
        FUN_1801378a0(param_1,param_2,param_3,param_4);
      }
      thunk_FUN_18022370c(*(longlong *)(param_1 + 0xf6d0) + 0x620);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    uVar1 = FUN_1801336b0();
    if ((uVar1 & 1) != 0) {
      FUN_180137a70(param_1);
      lVar3 = 0x98;
      if (*(longlong *)(param_1 + 0xfcd8) == *(longlong *)(param_1 + 0xf718)) {
        lVar3 = 0x70;
      }
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar2,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x90),
                      *(undefined4 *)(param_1 + lVar3));
      FUN_1801378a0(param_1,param_2,param_3,param_4);
    }
    thunk_FUN_18022370c(*(longlong *)(param_1 + 0xf6d0) + 0x620);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return 0;
}

