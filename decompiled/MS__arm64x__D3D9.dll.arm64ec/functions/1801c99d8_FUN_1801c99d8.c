/*
 * FUN_1801c99d8 at 1801c99d8
 * undefined FUN_1801c99d8(void)
 * Address ranges: 1801c99d8-1801c9beb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c99d8(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  code *extraout_x11;
  longlong extraout_x15;
  undefined1 auVar8 [16];
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar4 == 0) {
      FUN_1801085c8();
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    iVar4 = -0x7789f794;
  }
  else {
    uVar2 = *(uint *)(param_1 + -0x6430);
    uVar1 = uVar2 + 1;
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8) + 8) = 0;
    auVar8 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                       (0x180224000,*(undefined8 *)(param_1 + -0x6810),
                        *(undefined8 *)
                         (*(longlong *)(param_1 + -0x6440) +
                         (ulonglong)*(uint *)(param_1 + -0x6430) * 8));
    uVar5 = (*extraout_x11)(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(auVar8._8_8_ + 8));
    *(undefined1 *)(param_1 + -0x642c) = 0;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8);
    uVar5 = FUN_18010a4a8(uVar5,param_1 + -0x658,lVar7 + 0xa190,*(undefined4 *)(param_1 + -0x59bc));
    uVar5 = FUN_18010a4a8(uVar5,param_1 + -600,lVar7 + 0xa994,0xe0);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + extraout_x15) + (ulonglong)uVar2 * 8);
    uVar5 = FUN_18010a4a8(uVar5,param_1 + 600,lVar7 + 0x527c,0x10);
    uVar5 = FUN_18010a4a8(uVar5,param_1 + 0x268,lVar7 + 0x52a0);
    uVar5 = FUN_18010a4a8(uVar5,param_1 + 0x278,lVar7 + 0x52c4);
    FUN_18010a4a8(uVar5,param_1 + 0x288,lVar7 + 0x52e8);
    puVar6 = (undefined8 *)FUN_1802229a8(0x30);
    if (puVar6 == (undefined8 *)0x0) {
      iVar4 = 0;
    }
    else {
      *puVar6 = &PTR_FUN_18022edd8;
      puVar6[1] = 0;
      *(uint *)(puVar6 + 4) = uVar1;
      puVar6[5] = lVar7;
      puVar6[2] = puVar6;
      puVar6[3] = param_1 + -0x6838;
      iVar4 = FUN_1801de450(puVar6,&DAT_1802292d8,param_2);
      if ((((iVar4 < 0) && (uVar1 != 0)) && (uVar1 <= *(uint *)(param_1 + -0x6438))) &&
         (*(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8) != 0)) {
        FUN_18010a8c8(param_1 + -0x6838,uVar2);
      }
    }
  }
  if (bVar3) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar4;
}

