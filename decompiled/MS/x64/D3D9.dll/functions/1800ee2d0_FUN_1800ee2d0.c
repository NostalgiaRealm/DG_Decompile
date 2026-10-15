/*
 * FUN_1800ee2d0 at 1800ee2d0
 * undefined __fastcall FUN_1800ee2d0(int param_1, longlong * param_2, uint param_3)
 * Address ranges: 1800ee2d0-1800ee350
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ee2d0(int param_1,longlong *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if (((param_1 == 0x40) || (param_1 == 0x41)) || (param_1 == 0x50)) {
LAB_1800ee320:
    uVar1 = FUN_1800ee040(param_1);
    uVar2 = param_3 & 0xffffbfff;
    if ((uint)uVar1 < 0x50) {
      uVar2 = (uint)uVar4;
    }
    uVar3 = (ulonglong)(uVar2 & 0xfff000 | 0x100086a);
  }
  else {
    if (param_1 != 0x51) {
      if ((param_1 == 0x10040) || (param_1 == 0x10050)) goto LAB_1800ee320;
      if (param_1 != 0x10051) {
        if (param_1 == 0x20050) goto LAB_1800ee320;
        if (param_1 != 0x20051) {
          return;
        }
      }
    }
    uVar3 = (ulonglong)(param_3 & 0xf7b000 | 0x108086a);
    uVar4 = uVar3;
  }
  FUN_1800eddec(param_2,1,uVar3,uVar4);
  return;
}

