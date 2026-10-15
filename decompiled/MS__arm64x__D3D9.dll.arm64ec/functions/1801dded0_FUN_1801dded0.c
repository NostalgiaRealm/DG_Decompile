/*
 * FUN_1801dded0 at 1801dded0
 * undefined FUN_1801dded0(void)
 * Address ranges: 1801dded0-1801de01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801dded0(longlong param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *extraout_x11;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar6 = 0x88760868;
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x6819) == '\0') {
      if (((*(uint *)(*(longlong *)(param_1 + 0x18) + 0xe78) >> 2 & 1) == 0) &&
         (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar2 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar2 = true;
        iVar5 = thunk_FUN_1802236e4(DAT_180258900);
        if (iVar5 == 0) {
          FUN_1801085c8();
        }
      }
      uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar6 = (*extraout_x11)(uVar7,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20),
                              param_2,param_3,param_4);
      if (bVar2) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
  }
  else {
    uVar4 = FUN_1801ddd58();
    if (param_3 != 0) {
      if (param_3 < uVar4) {
        return 0x80004005;
      }
      puVar3 = (undefined8 *)(param_1 + 0x38);
      for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      if ((uVar4 >> 2 & 1) != 0) {
        *(undefined4 *)param_2 = *(undefined4 *)puVar3;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}

