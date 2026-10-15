/*
 * FUN_100500f0 at 100500f0
 * undefined FUN_100500f0(void)
 * Address ranges: 100500f0-10050277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100500f0(int param_1,undefined8 param_2,uint param_3,uint param_4,ulonglong param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int extraout_w1;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int extraout_w11;
  code *extraout_w11_00;
  int extraout_w12;
  int extraout_w13;
  int extraout_w14;
  int extraout_w15;
  uint local_750;
  uint uStack_74c;
  undefined4 auStack_748 [6];
  undefined1 auStack_730 [1776];
  
  param_5 = param_5 & 0xffffffff;
  uVar6 = (ulonglong)*(uint *)(param_1 + 8);
  uVar4 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    uVar8 = ZEXT48(auStack_730);
    local_750 = param_3;
    uStack_74c = param_4;
    do {
      iVar3 = (int)uVar4;
      bVar1 = *(byte *)(param_1 + 0x214 + iVar3);
      uVar5 = (uint)bVar1;
      bVar1 = *(byte *)(param_1 + 0x19 + (uint)bVar1 * 8);
      iVar7 = iVar3 * 7;
      uVar2 = FUN_100a33c8(bVar1);
      auStack_748[iVar7] = uVar2;
      *(uint *)(extraout_w15 + iVar7 * 4) = bVar1 & 0xf;
      *(undefined4 *)(extraout_w14 + iVar7 * 4) =
           *(undefined4 *)(&DAT_101620c0 + (uint)*(byte *)(param_1 + 0x18 + uVar5 * 8) * 4);
      iVar9 = (int)*(char *)(param_1 + 0x14 + uVar5 * 8);
      *(int *)(extraout_w13 + iVar7 * 4) = iVar9;
      *(uint *)(extraout_w12 + iVar7 * 4) = (uint)*(byte *)(param_1 + 0x17 + uVar5 * 8) << 2;
      if (extraout_w1 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(extraout_w1 + iVar9 * 4);
      }
      uVar4 = (ulonglong)(iVar3 + 1U);
      *(uint *)(extraout_w11 + iVar7 * 4) = (uint)(iVar9 != 0);
      *(int *)((int)uVar8 + iVar7 * 4) = iVar9;
      param_4 = uStack_74c;
      param_3 = local_750;
    } while (iVar3 + 1U < (uint)uVar6);
  }
  uVar8 = (ulonglong)param_3;
  uVar6 = (ulonglong)param_4;
  local_750 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11_00)(param_5 & 0xffffffff,auStack_748,uVar4 & 0xffffffff,uVar8 & 0xffffffff,
                     uVar6 & 0xffffffff,&local_750);
  return local_750;
}

