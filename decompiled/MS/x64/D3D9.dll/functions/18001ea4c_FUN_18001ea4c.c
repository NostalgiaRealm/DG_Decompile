/*
 * FUN_18001ea4c at 18001ea4c
 * undefined __fastcall FUN_18001ea4c(longlong param_1, longlong param_2)
 * Address ranges: 18001ea4c-18001eb82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ea4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    lVar3 = uVar5 * 0x84;
    uVar2 = *(uint *)(param_1 + 0x7c4 + lVar3) & 0x1f;
    if (uVar2 == 1) break;
    lVar1 = (ulonglong)uVar2 * 3;
    if ((&DAT_1800fdea0)[lVar1] != '\0') {
      uVar4 = uVar4 | *(uint *)(&DAT_1801012d0 +
                               (uVar5 + (ulonglong)(*(uint *)(param_1 + 0x7c8 + lVar3) & 0xf) * 8) *
                               4);
    }
    if ((&DAT_1800fdea1)[lVar1] != '\0') {
      uVar4 = uVar4 | *(uint *)(&DAT_1801012d0 +
                               (uVar5 + (ulonglong)(*(uint *)(param_1 + 0x7cc + lVar3) & 0xf) * 8) *
                               4);
    }
    if ((&DAT_1800fdea2)[lVar1] != '\0') {
      uVar4 = uVar4 | *(uint *)(&DAT_1801012d0 +
                               (uVar5 + (ulonglong)(*(uint *)(param_1 + 0x828 + lVar3) & 0xf) * 8) *
                               4);
    }
    lVar1 = (ulonglong)(*(uint *)(param_1 + 2000 + lVar3) & 0x1f) * 3;
    if ((&DAT_1800fdea0)[lVar1] != '\0') {
      uVar4 = uVar4 | *(uint *)(&DAT_1801012d0 +
                               (uVar5 + (ulonglong)(*(uint *)(param_1 + 0x7d4 + lVar3) & 0xf) * 8) *
                               4);
    }
    if ((&DAT_1800fdea1)[lVar1] != '\0') {
      uVar4 = uVar4 | *(uint *)(&DAT_1801012d0 +
                               (uVar5 + (ulonglong)(*(uint *)(param_1 + 0x7d8 + lVar3) & 0xf) * 8) *
                               4);
    }
    if ((&DAT_1800fdea2)[lVar1] != '\0') {
      uVar4 = uVar4 | *(uint *)(&DAT_1801012d0 +
                               (uVar5 + (ulonglong)(*(uint *)(param_1 + 0x82c + lVar3) & 0xf) * 8) *
                               4);
    }
    uVar2 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar2;
  } while (uVar2 < 8);
  if (uVar4 == 0) {
    uVar4 = 2;
  }
  FUN_18001e950(param_1,param_2,uVar4);
  return;
}

