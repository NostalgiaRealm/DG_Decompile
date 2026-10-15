/*
 * FUN_1001d020 at 1001d020
 * undefined FUN_1001d020(void)
 * Address ranges: 1001d020-1001d123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d020(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  uVar1 = FUN_100031e0(uVar4);
  uVar2 = FUN_100032d0(uVar4);
  uVar3 = FUN_10003360(uVar4);
  uVar4 = FUN_100030d0(uVar4);
  FUN_10034d50(param_1,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
               *(undefined4 *)(param_1 + 0x84),uVar4,uVar1,uVar2,uVar3,0);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  uVar4 = FUN_10035090(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x84),uVar4,uVar1,uVar2,uVar3,
                       *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  return;
}

