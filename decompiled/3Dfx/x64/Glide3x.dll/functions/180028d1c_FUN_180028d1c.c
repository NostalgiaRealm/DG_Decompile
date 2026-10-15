/*
 * FUN_180028d1c at 180028d1c
 * undefined __fastcall FUN_180028d1c(longlong * param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 180028d1c-180028e15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028d1c(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  (**(code **)(*param_1 + 0x2e0))();
  lVar1 = (longlong)(int)param_2;
  *(undefined4 *)(param_1 + lVar1 * 0x34 + 0x5b3) = param_7;
  *(undefined4 *)(param_1 + lVar1 * 0x34 + 0x5b4) = param_5;
  *(undefined4 *)(lVar1 * 0x1a0 + 0x2da4 + (longlong)param_1) = param_6;
  *(undefined4 *)(param_1 + lVar1 * 0x34 + 0x5b5) = param_8;
  *(undefined4 *)(lVar1 * 0x1a0 + 0x2d94 + (longlong)param_1) = param_4;
  *(undefined4 *)(param_1 + lVar1 * 0x34 + 0x5b2) = param_3;
  if ((((*(uint *)(uVar5 * 0x1a0 + 0x2d94 + (longlong)param_1) & 7) - 1 & 0xfffffffd) == 0) ||
     (((*(uint *)(uVar5 * 0x1a0 + 0x2da4 + (longlong)param_1) & 7) - 1 & 0xfffffffd) == 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  if (*(uint *)(param_1 + uVar5 * 0x34 + 0x5b2) < 0xb) {
    bVar4 = (&DAT_1800649a0)[*(uint *)(param_1 + uVar5 * 0x34 + 0x5b2)];
  }
  else {
    bVar4 = 0;
  }
  if (*(uint *)(param_1 + uVar5 * 0x34 + 0x5b4) < 0xb) {
    bVar3 = (&DAT_1800649a0)[*(uint *)(param_1 + uVar5 * 0x34 + 0x5b4)];
  }
  else {
    bVar3 = 0;
  }
  *(byte *)(uVar5 + 0x32f9 + (longlong)param_1) = bVar3 | bVar4 | bVar2;
  FUN_1800284a8((longlong)param_1,(ulonglong)param_2);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

