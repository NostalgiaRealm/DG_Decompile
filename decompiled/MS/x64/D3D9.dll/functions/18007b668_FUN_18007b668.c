/*
 * FUN_18007b668 at 18007b668
 * undefined __fastcall FUN_18007b668(undefined8 param_1, longlong param_2, longlong * param_3)
 * Address ranges: 18007b668-18007b9cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b668(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_180087910(param_1,param_2,param_3,*(uint *)(param_2 + 0x280));
  lVar1 = param_2 + 0x20;
  if ((*(uint *)(param_2 + 0x280) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x280));
    *(undefined4 *)(param_2 + 0x280) = 0;
  }
  lVar4 = lVar1;
  uVar3 = FUN_1800ec8c0(lVar1,4,'\x01');
  FUN_18007b9d0(lVar4,param_2,param_3,(ulonglong)uVar3,7,2,3,4,0);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x288),uVar3,0,2);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x28c),uVar3,0x55,3);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x290),uVar3,0xaa,4);
  FUN_18007b9d0(lVar4,param_2,param_3,(ulonglong)uVar3,0xf,5,6,7,8);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x294),uVar3,0,5);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x298),uVar3,0x55,6);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x29c),uVar3,0xaa,7);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x2a0),uVar3,0xff,8);
  FUN_18007b9d0(lVar4,param_2,param_3,(ulonglong)uVar3,0xf,9,10,0xb,0xc);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x2a4),uVar3,0,9);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x2a8),uVar3,0x55,10);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x2ac),uVar3,0xaa,0xb);
  FUN_18007bac0(lVar4,param_2,param_3,*(uint *)(param_2 + 0x2b0),uVar3,0xff,0xc);
  FUN_1800ec960(lVar1,uVar3);
  if ((*(uint *)(param_2 + 0x290) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x290));
    *(undefined4 *)(param_2 + 0x290) = 0;
  }
  if ((*(uint *)(param_2 + 0x288) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x288));
    *(undefined4 *)(param_2 + 0x288) = 0;
  }
  if ((*(uint *)(param_2 + 0x28c) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x28c));
    *(undefined4 *)(param_2 + 0x28c) = 0;
  }
  uVar3 = 0;
  do {
    uVar2 = *(uint *)(param_2 + 0x280 + (ulonglong)(uVar3 + 5) * 4);
    uVar5 = (ulonglong)(uVar3 + 5);
    if ((uVar2 & 0x3f00) == 0) {
      FUN_1800ec960(lVar1,uVar2);
      *(undefined4 *)(param_2 + 0x280 + uVar5 * 4) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

