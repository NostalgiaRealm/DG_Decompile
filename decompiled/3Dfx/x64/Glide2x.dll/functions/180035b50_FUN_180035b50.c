/*
 * FUN_180035b50 at 180035b50
 * undefined __fastcall FUN_180035b50(longlong * param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 180035b50-180035c6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035b50(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_2;
  (**(code **)(*param_1 + 0x2a0))();
  lVar7 = (longlong)(int)param_2;
  *(undefined4 *)(param_1 + lVar7 * 0x30 + 0x59f) = param_7;
  *(undefined4 *)(param_1 + (lVar7 + 0x1e) * 0x30) = param_5;
  *(undefined4 *)(lVar7 * 0x180 + 0x2d04 + (longlong)param_1) = param_6;
  *(undefined4 *)(param_1 + lVar7 * 0x30 + 0x5a1) = param_8;
  *(undefined4 *)(lVar7 * 0x180 + 0x2cf4 + (longlong)param_1) = param_4;
  *(undefined4 *)(param_1 + lVar7 * 0x30 + 0x59e) = param_3;
  if ((((*(uint *)(uVar6 * 0x180 + 0x2cf4 + (longlong)param_1) & 7) - 1 & 0xfffffffd) == 0) ||
     (((*(uint *)(uVar6 * 0x180 + 0x2d04 + (longlong)param_1) & 7) - 1 & 0xfffffffd) == 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  if (*(uint *)(param_1 + uVar6 * 0x30 + 0x59e) < 0xb) {
    bVar4 = (&DAT_180063b38)[*(uint *)(param_1 + uVar6 * 0x30 + 0x59e)];
  }
  else {
    bVar4 = 0;
  }
  if (*(uint *)(param_1 + (uVar6 + 0x1e) * 0x30) < 0xb) {
    bVar2 = (&DAT_180063b38)[*(uint *)(param_1 + (uVar6 + 0x1e) * 0x30)];
  }
  else {
    bVar2 = 0;
  }
  uVar5 = (ulonglong)param_2;
  *(byte *)(uVar6 + 0x3179 + (longlong)param_1) = bVar2 | bVar4 | bVar1;
  plVar3 = param_1;
  FUN_180035790((longlong)param_1,uVar5);
  FUN_180035dac((longlong)plVar3,
                (uint)CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)((longlong)param_1 + 0x29b4)));
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

