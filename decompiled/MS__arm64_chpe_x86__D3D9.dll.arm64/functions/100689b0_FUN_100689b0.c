/*
 * FUN_100689b0 at 100689b0
 * undefined FUN_100689b0(void)
 * Address ranges: 100689b0-10068a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100689b0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_1005df78(iVar1,0,0,0);
  if (iVar2 == 0) {
    uVar4 = 0;
    *(undefined4 *)(iVar1 + 0xf750) = 0;
  }
  else {
    *(int *)(iVar1 + 0xf750) = iVar2;
    uVar4 = (uint)(*(int *)(iVar2 + 0x48) == 0x104);
  }
  *(undefined1 *)(iVar1 + 0xf668) = 1;
  bVar3 = *(int *)(iVar1 + 0x6f0c) == 0;
  if (uVar4 == 0) {
    bVar3 = !bVar3;
  }
  *(byte *)(iVar1 + 0xf671) = *(byte *)(iVar1 + 0xf671) | bVar3;
  *(uint *)(iVar1 + 0x6f0c) = uVar4;
  *(undefined1 *)(iVar1 + 0xf6a2) = 1;
  return;
}

