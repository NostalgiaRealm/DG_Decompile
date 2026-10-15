/*
 * FUN_180055780 at 180055780
 * undefined __fastcall FUN_180055780(longlong * param_1)
 * Address ranges: 180055780-1800557e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055780(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  lVar4 = param_1[3];
  lVar5 = param_1[4];
  FUN_180049b30(lVar2,0,0,0);
  if ((uVar1 & 2) == 0) {
    FUN_1800574a8(lVar2 + 0xf808,uVar3,lVar4,0);
  }
  else {
    FUN_1800573dc(lVar2 + 0xf808,uVar3,lVar4);
  }
  if ((char)lVar5 != '\0') {
    FUN_18004ddac(lVar2,uVar3);
  }
  return;
}

