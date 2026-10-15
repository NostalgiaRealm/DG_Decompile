/*
 * FUN_180011710 at 180011710
 * undefined FUN_180011710(void)
 * Address ranges: 180011710-18001183f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011710(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong extraout_x15;
  undefined1 auStack_50 [64];
  
  iVar3 = (int)param_2;
  if (9 < iVar3) {
    uVar1 = iVar3 - 10;
    lVar6 = param_1 + ((ulonglong)(uVar1 >> 6) + 0x19e) * 8;
    uVar7 = (ulonglong)(uVar1 >> 3) & 7;
    *(byte *)(lVar6 + uVar7) =
         *(byte *)(lVar6 + uVar7) & ((byte)(1 << ((ulonglong)uVar1 & 7)) ^ 0xff);
  }
  if (iVar3 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_18001ef50(*(longlong *)(param_1 + 0xe10) + 0x40,auStack_50,param_1 + 0xd88);
    (**(code **)(extraout_x15 + 0xa8))(uVar4,1,uVar2);
    lVar6 = *(longlong *)(param_1 + 0xe10);
    if ((((*(float *)(lVar6 + 0x70) != 0.0) || (*(float *)(lVar6 + 0x74) != 0.0)) ||
        (*(float *)(lVar6 + 0x78) != 0.0)) || (uVar5 = 0, *(float *)(lVar6 + 0x7c) != 1.0)) {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x40d) = uVar5;
    *(undefined2 *)(param_1 + 0xce1) = 0;
    *(undefined1 *)(param_1 + 0xce3) = 0;
  }
  else {
    lVar6 = param_1 + ((param_2 >> 6 & 0x3ffffff) + 0x1a4) * 8;
    uVar7 = param_2 >> 3 & 7;
    *(byte *)(lVar6 + uVar7) = *(byte *)(lVar6 + uVar7) | (byte)(1 << (param_2 & 7));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xce0) = 0;
      *(undefined2 *)(param_1 + 0xce4) = 0;
    }
    else {
      if (iVar3 != 10) {
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

