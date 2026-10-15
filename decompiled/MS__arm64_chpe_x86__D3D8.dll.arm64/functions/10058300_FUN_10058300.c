/*
 * FUN_10058300 at 10058300
 * undefined FUN_10058300(void)
 * Address ranges: 10058300-100583a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058300(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_1004e440(iVar1,0,0,0);
  if (iVar2 == 0) {
    uVar4 = 0;
    *(undefined4 *)(iVar1 + 0xda50) = 0;
  }
  else {
    *(int *)(iVar1 + 0xda50) = iVar2;
    uVar4 = (uint)(*(int *)(iVar2 + 0x48) == 0x104);
  }
  *(undefined1 *)(iVar1 + 0xd978) = 1;
  bVar3 = *(int *)(iVar1 + 0x529c) == 0;
  if (uVar4 == 0) {
    bVar3 = !bVar3;
  }
  *(byte *)(iVar1 + 0xd981) = *(byte *)(iVar1 + 0xd981) | bVar3;
  *(uint *)(iVar1 + 0x529c) = uVar4;
  return;
}

