/*
 * FUN_180099f68 at 180099f68
 * undefined FUN_180099f68(void)
 * Address ranges: 180099f68-180099f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099f68(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  lVar3 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar4 = param_1[2];
  *(undefined4 *)(lVar3 + 0xc40) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(lVar3 + 0xc44) = uVar1;
  FUN_1800e6028(uVar2,uVar4,0);
  return;
}

