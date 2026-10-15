/*
 * FUN_1800928f0 at 1800928f0
 * undefined FUN_1800928f0(void)
 * Address ranges: 1800928f0-180092983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800928f0(longlong param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong extraout_x12;
  uint extraout_w13;
  uint extraout_w14;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar7 = *(uint *)(&DAT_180231470 + (ulonglong)uVar6 * 4);
  if (uVar7 == 0x18) {
    uVar7 = 0x20;
  }
  *(bool *)(param_2 + 5) = uVar7 < 8;
  uVar1 = uVar7 >> 3;
  if (uVar7 < 8) {
    uVar1 = *(uint *)(&DAT_180231630 + (ulonglong)uVar6 * 4);
  }
  *param_2 = param_3 + iVar2 * param_4;
  param_2[1] = uVar1;
  bVar4 = (&DAT_180231708)[uVar6];
  param_2[2] = (uint)(byte)(&DAT_1802316d8)[uVar6];
  param_2[3] = (uint)bVar4;
  uVar6 = FUN_1800a2b50(param_1,uVar3);
  uVar7 = uVar6;
  if (extraout_w14 < 8) {
    if (extraout_w13 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180092970);
      (*pcVar5)();
    }
    uVar7 = 0;
    if (extraout_w13 != 0) {
      uVar7 = uVar6 / extraout_w13;
    }
  }
  *(uint *)(extraout_x12 + 0x10) = uVar7;
  return extraout_x12;
}

