/*
 * FUN_10056862 at 10056862
 * undefined __stdcall FUN_10056862(int param_1, byte param_2)
 * Address ranges: 10056862-100568f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056862(int param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  
  bVar3 = ~param_2;
  pbVar2 = (byte *)(param_1 + 0x1a5);
  *pbVar2 = *pbVar2 & bVar3;
  iVar1 = param_1 + 0x18;
  if (*pbVar2 == 0) {
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x14c));
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x1a6);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x1a7);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x154));
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x1a8);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x158));
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}

