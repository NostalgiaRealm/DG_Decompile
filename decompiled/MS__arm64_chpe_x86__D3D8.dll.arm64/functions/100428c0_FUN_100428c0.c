/*
 * FUN_100428c0 at 100428c0
 * undefined FUN_100428c0(void)
 * Address ranges: 100428c0-10042a27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100428c0(int param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,ulonglong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  ulonglong extraout_x1;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *extraout_w11;
  code *extraout_w11_00;
  int *extraout_w12;
  undefined4 *extraout_w13;
  uint *extraout_w14;
  int *extraout_w15;
  undefined4 local_230 [2];
  undefined1 auStack_228 [20];
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [464];
  
  param_5 = param_5 & 0xffffffff;
  uVar10 = (ulonglong)*(uint *)(param_1 + 8);
  uVar9 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    iVar1 = param_1 + 0x9c;
    iVar2 = param_1 + 0x19;
    iVar3 = param_1 + 0x18;
    iVar4 = param_1 + 0x14;
    iVar5 = param_1 + 0x17;
    uVar12 = ZEXT48(auStack_214);
    uVar11 = ZEXT48(auStack_210);
    local_230[0] = param_3;
    do {
      iVar8 = (int)uVar9;
      bVar6 = *(byte *)(iVar1 + iVar8);
      bVar7 = *(byte *)(iVar2 + (uint)bVar6 * 8);
      param_1 = FUN_100837d8(bVar7,iVar8 * 7);
      uVar9 = (ulonglong)(iVar8 + 1U);
      *extraout_w15 = param_1;
      *extraout_w14 = bVar7 & 0xf;
      *extraout_w13 = *(undefined4 *)(&DAT_1012c758 + (uint)*(byte *)(iVar3 + (uint)bVar6 * 8) * 4);
      *extraout_w12 = (int)*(char *)(iVar4 + (uint)bVar6 * 8);
      *extraout_w11 = (uint)*(byte *)(iVar5 + (uint)bVar6 * 8) << 2;
      *(undefined4 *)uVar12 = 0;
      *(undefined4 *)uVar11 = 0;
      param_3 = local_230[0];
    } while (iVar8 + 1U < (uint)uVar10);
  }
  local_230[0] = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_1,param_3);
  (*extraout_w11_00)(param_5 & 0xffffffff,auStack_228,uVar9 & 0xffffffff,extraout_x1 & 0xffffffff,
                     param_4 & 0xffffffff,local_230);
  return local_230[0];
}

