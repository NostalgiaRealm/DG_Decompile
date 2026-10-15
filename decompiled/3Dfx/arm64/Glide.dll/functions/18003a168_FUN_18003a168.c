/*
 * FUN_18003a168 at 18003a168
 * undefined __cdecl FUN_18003a168(longlong * param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 18003a168-18003a36f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a168(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  byte bVar10;
  
  uVar2 = (ulonglong)param_2;
  (**(code **)(*param_1 + 0x2a0))();
  lVar9 = (longlong)(int)param_2;
  *(undefined4 *)(param_1 + lVar9 * 0x30 + 0x59f) = param_7;
  *(undefined4 *)(param_1 + lVar9 * 0x30 + 0x59e) = param_3;
  *(undefined4 *)((longlong)param_1 + lVar9 * 0x180 + 0x2cf4) = param_4;
  *(undefined4 *)((longlong)param_1 + lVar9 * 0x180 + 0x2d04) = param_6;
  *(undefined4 *)(param_1 + lVar9 * 0x30 + 0x5a1) = param_8;
  *(undefined4 *)(param_1 + (lVar9 + 0x1e) * 0x30) = param_5;
  if ((((*(uint *)((longlong)param_1 + uVar2 * 0x180 + 0x2cf4) & 7) - 1 & 0xfffffffd) == 0) ||
     (bVar10 = 0,
     ((*(uint *)((longlong)param_1 + uVar2 * 0x180 + 0x2d04) & 7) - 1 & 0xfffffffd) == 0)) {
    bVar10 = 1;
  }
  if (*(uint *)(param_1 + uVar2 * 0x30 + 0x59e) < 0xb) {
    bVar7 = (&DAT_180065af0)[*(uint *)(param_1 + uVar2 * 0x30 + 0x59e)];
  }
  else {
    bVar7 = 0;
  }
  if (*(uint *)(param_1 + (uVar2 + 0x1e) * 0x30) < 0xb) {
    bVar8 = (&DAT_180065af0)[*(uint *)(param_1 + (uVar2 + 0x1e) * 0x30)];
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)param_1 + uVar2 + 0x3179) = bVar7 | bVar10 | bVar8;
  uVar3 = *(uint *)(param_1 + uVar2 * 0x30 + 0x5a7);
  if (((uVar3 >> 2 & 1) != 0) && ((uVar3 & 1) == 0)) {
    *(uint *)(param_1 + uVar2 * 0x30 + 0x5a7) = uVar3 & 0xfffffffd;
    if ((*(int *)((longlong)param_1 + uVar2 * 0x180 + 0x2cf4) == 0xd) ||
       (*(int *)((longlong)param_1 + uVar2 * 0x180 + 0x2d04) == 0xd)) {
      *(uint *)(param_1 + uVar2 * 0x30 + 0x5a7) = uVar3 & 0xfffffffd | 2;
    }
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x29b4);
  uVar3 = 0x30;
  if (*(char *)((longlong)param_1 + 0x317b) == '\0') {
    uVar3 = 0;
  }
  uVar4 = 0xc;
  if (*(char *)((longlong)param_1 + 0x317a) == '\0') {
    uVar4 = 0;
  }
  uVar5 = 3;
  if (*(char *)((longlong)param_1 + 0x3179) == '\0') {
    uVar5 = 0;
  }
  uVar6 = uVar3 | uVar4 | uVar5;
  if (((uVar6 & 5) == 5) && ((uVar1 & 0x10) == 0)) {
    uVar6 = uVar3 | uVar4 & 0xfffffffb | uVar5;
  }
  if ((((uVar6 & 5) != 0) && ((uVar6 >> 4 & 1) != 0)) && ((uVar1 >> 6 & 1) == 0)) {
    uVar6 = uVar6 & 0xffffffef;
  }
  if (((uVar6 >> 1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    uVar6 = uVar6 & 0xfffffffd;
  }
  if (((uVar6 >> 3 & 1) != 0) && ((uVar1 & 8) == 0)) {
    uVar6 = uVar6 & 0xfffffff7;
  }
  if ((uVar6 >> 5 != 0) && ((uVar1 & 0x20) == 0)) {
    uVar6 = uVar6 & 0xffffffdf;
  }
  *(uint *)((longlong)param_1 + 0x2bfc) = uVar6;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

