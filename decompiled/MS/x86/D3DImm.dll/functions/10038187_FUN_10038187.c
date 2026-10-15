/*
 * FUN_10038187 at 10038187
 * undefined __stdcall FUN_10038187(int param_1, byte param_2)
 * Address ranges: 10038187-1003821a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038187(int param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  
  bVar3 = ~param_2;
  pbVar2 = (byte *)(param_1 + 0x189);
  *pbVar2 = *pbVar2 & bVar3;
  iVar1 = param_1 + 0x10;
  if (*pbVar2 == 0) {
    FUN_10056fd9(iVar1,*(uint *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x18a);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_10056fd9(iVar1,*(uint *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x18b);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_10056fd9(iVar1,*(uint *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x18c);
  *pbVar2 = *pbVar2 & bVar3;
  if (*pbVar2 == 0) {
    FUN_10056fd9(iVar1,*(uint *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  return;
}

