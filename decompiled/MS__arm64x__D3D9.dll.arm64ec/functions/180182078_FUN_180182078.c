/*
 * FUN_180182078 at 180182078
 * undefined FUN_180182078(void)
 * Address ranges: 180182078-18018235f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180182078(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uint *)(param_2 + 0x280);
  FUN_18018d4f8();
  if ((*puVar1 & 0x3f00) == 0) {
    FUN_180213800(param_2 + 0x20);
    *puVar1 = 0;
  }
  uVar2 = FUN_180213760(param_2 + 0x20,4,1);
  uVar5 = uVar2 & 0xffffffff;
  uVar3 = FUN_180182360(uVar2,param_2,param_3,uVar5,7,2,3,4,0,1,2,4,0);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x288),uVar5,0,2);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x28c),uVar5,0x55,3);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x290),uVar5,0xaa,4);
  uVar3 = FUN_180182360(uVar3,param_2,param_3,uVar5,0xf,5,6,7,8,8,0x10,0x20,0x40);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x294),uVar5,0,5);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x298),uVar5,0x55,6);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x29c),uVar5,0xaa,7);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2a0),uVar5,0xff,8);
  uVar3 = FUN_180182360(uVar3,param_2,param_3,uVar5,0xf,9,10,0xb,0xc,0x80,0x100,0x200,0x400);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2a4),uVar5,0,9);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2a8),uVar5,0x55,10);
  uVar3 = FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2ac),uVar5,0xaa,0xb);
  FUN_180182438(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2b0),uVar5,0xff,0xc);
  FUN_180213800(param_2 + 0x20,uVar5);
  if ((*(uint *)(param_2 + 0x290) & 0x3f00) == 0) {
    FUN_180213800(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x290) = 0;
  }
  if ((*(uint *)(param_2 + 0x288) & 0x3f00) == 0) {
    FUN_180213800(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x288) = 0;
  }
  if ((*(uint *)(param_2 + 0x28c) & 0x3f00) == 0) {
    FUN_180213800(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x28c) = 0;
  }
  uVar4 = 0;
  do {
    uVar2 = (ulonglong)(uVar4 + 5);
    if ((puVar1[uVar2] & 0x3f00) == 0) {
      FUN_180213800(param_2 + 0x20);
      puVar1[uVar2 & 0xffffffff] = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return;
}

