/*
 * FUN_18011d4d0 at 18011d4d0
 * undefined FUN_18011d4d0(void)
 * Address ranges: 18011d4d0-18011d613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011d4d0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *extraout_x11;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [64];
  
  iVar2 = (int)param_2;
  if (9 < iVar2) {
    uVar1 = iVar2 - 10;
    lVar5 = param_1 + ((ulonglong)(uVar1 >> 6) + 0x19e) * 8;
    uVar6 = (ulonglong)(uVar1 >> 3) & 7;
    *(byte *)(lVar5 + uVar6) =
         *(byte *)(lVar5 + uVar6) & ((byte)(1 << ((ulonglong)uVar1 & 7)) ^ 0xff);
  }
  if (iVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    auVar7 = FUN_18012b0f8(*(longlong *)(param_1 + 0xe10) + 0x40,auStack_50,param_1 + 0xd88);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,auVar7._0_8_,auVar7._8_8_,auVar7._0_8_)
    ;
    (*extraout_x11)(uVar3,1);
    lVar5 = *(longlong *)(param_1 + 0xe10);
    if ((((*(float *)(lVar5 + 0x70) != 0.0) || (*(float *)(lVar5 + 0x74) != 0.0)) ||
        (*(float *)(lVar5 + 0x78) != 0.0)) || (uVar4 = 0, *(float *)(lVar5 + 0x7c) != 1.0)) {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x40d) = uVar4;
    *(undefined2 *)(param_1 + 0xce1) = 0;
    *(undefined1 *)(param_1 + 0xce3) = 0;
  }
  else {
    lVar5 = param_1 + ((param_2 >> 6 & 0x3ffffff) + 0x1a4) * 8;
    uVar6 = param_2 >> 3 & 7;
    *(byte *)(lVar5 + uVar6) = *(byte *)(lVar5 + uVar6) | (byte)(1 << (param_2 & 7));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xce0) = 0;
      *(undefined2 *)(param_1 + 0xce4) = 0;
    }
    else {
      if (iVar2 != 10) {
        return;
      }
      *(undefined1 *)(param_1 + 0xce0) = 0;
      *(undefined2 *)(param_1 + 0xce2) = 0;
      *(undefined1 *)(param_1 + 0x411) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0xce6) = 0;
  *(undefined1 *)(param_1 + 0xce8) = 0;
  return;
}

