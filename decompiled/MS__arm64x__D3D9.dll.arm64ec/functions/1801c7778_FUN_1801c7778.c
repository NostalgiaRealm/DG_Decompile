/*
 * FUN_1801c7778 at 1801c7778
 * undefined FUN_1801c7778(void)
 * Address ranges: 1801c7778-1801c796f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c7778(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *extraout_x11;
  int iVar7;
  longlong lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [2];
  undefined1 auStack_50 [16];
  
  iVar7 = -0x7789f794;
  if (param_2 != 0) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar3 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar3 == 0) {
        FUN_1801085c8();
      }
    }
    iVar4 = *(int *)(param_2 + -0x38);
    iVar3 = iVar7;
    if ((((10 < iVar4 - 0x46U) || ((0x6abU >> (ulonglong)(iVar4 - 0x46U & 0x1f) & 1) == 0)) &&
        ((iVar4 != 0x36314644 && iVar4 != 0x34324644) && iVar4 != 0x5a544e49)) &&
       (iVar3 = 0, *(int *)(param_2 + -0x2c) != 0)) {
      iVar3 = iVar7;
    }
    thunk_FUN_180223c20(local_60,0,0,*(undefined4 *)(param_2 + -0x20),
                        *(undefined4 *)(param_2 + -0x1c));
    if (param_3 == (undefined8 *)0x0) {
      param_3 = local_60;
    }
    uStack_68 = param_3[1];
    local_70 = *param_3;
    thunk_FUN_180223c34(auStack_50,&local_70,local_60);
    if (-1 < iVar3) {
      iVar4 = thunk_FUN_180223c48(auStack_50,&local_70);
      if (iVar4 == 0) {
        iVar3 = iVar7;
      }
      if (-1 < iVar3) {
        lVar8 = *(longlong *)(param_2 + -0x78);
        if ((*(uint *)(lVar8 + 0x100) & 0x800) != 0) {
          iVar3 = iVar7;
        }
        if ((-1 < iVar3) && (*(char *)(param_1 + -0x1f) == '\0')) {
          FUN_180116f60(param_2 + -0x80,0);
          lVar6 = *(longlong *)(param_2 + -0x78);
          uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                            (0x180224000,(float)(int)local_70,(float)local_70._4_4_,
                             (float)(int)uStack_68,(float)uStack_68._4_4_);
          cVar2 = (*extraout_x11)(uVar5,*(undefined4 *)(lVar8 + 0x94),*(undefined4 *)(lVar8 + 0x98),
                                  *(undefined8 *)(lVar6 + 0x70),param_4);
          if (cVar2 == '\0') {
            iVar3 = -0x7789f7d9;
          }
          if (*(longlong *)(*(longlong *)(param_2 + -0x78) + 0x70) != 0) {
            FUN_18010b470(*(undefined8 *)(param_2 + -0x58),param_2 + -0x80);
          }
        }
      }
    }
    iVar7 = iVar3;
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return iVar7;
}

