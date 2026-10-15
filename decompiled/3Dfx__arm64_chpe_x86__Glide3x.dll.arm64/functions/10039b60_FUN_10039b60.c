/*
 * FUN_10039b60 at 10039b60
 * undefined FUN_10039b60(void)
 * Address ranges: 10039b60-10039ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039b60(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong extraout_x10;
  uint extraout_w11;
  uint extraout_w12;
  int extraout_w13;
  ulonglong extraout_x15;
  
  if (param_2 < 2) {
    iVar10 = 0x10e;
    if ((param_4 & 0xff) == 0) {
      iVar10 = 0xd6;
    }
    uVar4 = (ulonglong)*(ushort *)(iVar10 + param_3 + param_2 * 0xe);
  }
  else {
    uVar4 = 0;
  }
  param_1 = param_1 + param_2 * 0x1a0;
  uVar9 = param_4 & 0xff;
  uVar6 = (param_4 & 0xf) << 0xc;
  uVar11 = (ulonglong)*(uint *)(param_1 + uVar9 * 0x10 + 0x100);
  uVar1 = *(uint *)(param_1 + uVar9 * 0x10 + 0x104);
  uVar3 = 0x100;
  if (*(int *)(param_1 + uVar9 * 0x10 + 0x108) == 0) {
    uVar3 = 0;
  }
  uVar5 = (ulonglong)uVar3;
  if (uVar1 < 0x10) {
    uVar3 = (uint)*(ushort *)(&DAT_10099d38 + uVar1 * 2);
  }
  else {
    uVar3 = 0;
  }
  if ((uVar3 & 0xf0) == 0xf0) {
    uVar3 = FUN_10039988(uVar4,uVar3 & 0xf00);
    uVar3 = uVar3 | extraout_w12 & 0x1000;
    uVar11 = extraout_x10;
    param_1 = extraout_w13;
    param_2 = extraout_w11;
  }
  uVar8 = (ushort)uVar3;
  uVar2 = (ushort)param_2;
  if (((uVar3 & 0xf0) - 0x20 & 0xffef) == 0) {
    if (*(int *)(param_1 + 0x144) == 0) {
      uVar8 = uVar8 & 0xff0f;
    }
    else {
      uVar8 = uVar8 | uVar2;
    }
  }
  uVar7 = (ulonglong)uVar6;
  FUN_10039a68(uVar11 & 0xffffffff,(ushort)uVar6 | uVar8,uVar4 & 0xffffffff,
               (ushort)uVar6 | uVar2 | 0x2010,uVar2 | 0x3010);
  FUN_10039f20(extraout_x15 & 0xffffffff,uVar5 & 0xffffffff,uVar7 & 0xffffffff);
  return;
}

