/*
 * FUN_180012680 at 180012680
 * undefined FUN_180012680(void)
 * Address ranges: 180012680-18001278f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012680(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    lVar1 = param_1 + uVar5 * 0x84;
    uVar2 = *(uint *)(lVar1 + 0x7c4) & 0x1f;
    if (uVar2 == 1) break;
    lVar3 = (ulonglong)uVar2 * 3;
    if ((&DAT_1802308f0)[lVar3] != '\0') {
      uVar4 = *(uint *)(&DAT_18022a490 +
                       (uVar5 + ((ulonglong)*(uint *)(lVar1 + 0x7c8) & 0xf) * 8) * 4) | uVar4;
    }
    if ((&DAT_1802308f1)[lVar3] != '\0') {
      uVar4 = *(uint *)(&DAT_18022a490 +
                       (uVar5 + ((ulonglong)*(uint *)(lVar1 + 0x7cc) & 0xf) * 8) * 4) | uVar4;
    }
    if ((&DAT_1802308f2)[lVar3] != '\0') {
      uVar4 = *(uint *)(&DAT_18022a490 +
                       (uVar5 + ((ulonglong)*(uint *)(lVar1 + 0x828) & 0xf) * 8) * 4) | uVar4;
    }
    lVar3 = ((ulonglong)*(uint *)(lVar1 + 2000) & 0x1f) * 3;
    if ((&DAT_1802308f0)[lVar3] != '\0') {
      uVar4 = *(uint *)(&DAT_18022a490 +
                       (uVar5 + ((ulonglong)*(uint *)(lVar1 + 0x7d4) & 0xf) * 8) * 4) | uVar4;
    }
    if ((&DAT_1802308f1)[lVar3] != '\0') {
      uVar4 = *(uint *)(&DAT_18022a490 +
                       (uVar5 + ((ulonglong)*(uint *)(lVar1 + 0x7d8) & 0xf) * 8) * 4) | uVar4;
    }
    if ((&DAT_1802308f2)[lVar3] != '\0') {
      uVar4 = *(uint *)(&DAT_18022a490 +
                       (uVar5 + ((ulonglong)*(uint *)(lVar1 + 0x82c) & 0xf) * 8) * 4) | uVar4;
    }
    uVar2 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar2;
  } while (uVar2 < 8);
  if (uVar4 == 0) {
    uVar4 = 2;
  }
  FUN_180012580(param_1,param_2,uVar4);
  return;
}

