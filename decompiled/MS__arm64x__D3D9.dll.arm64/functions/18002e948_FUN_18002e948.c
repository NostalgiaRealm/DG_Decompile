/*
 * FUN_18002e948 at 18002e948
 * undefined FUN_18002e948(void)
 * Address ranges: 18002e948-18002e9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e948(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  
  FUN_18002a810(param_1,0,0,0);
  if (param_2 == 0) {
    bVar3 = false;
    *(undefined8 *)(param_1 + 0xf7a8) = 0;
    uVar5 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xf7a8) = param_2;
    bVar3 = *(int *)(param_2 + 0x58) == 0x104;
    uVar5 = (uint)bVar3;
  }
  iVar2 = *(int *)(param_1 + 0x6f2c);
  *(uint *)(param_1 + 0x6f2c) = uVar5;
  *(undefined1 *)(param_1 + 0xf688) = 1;
  *(undefined1 *)(param_1 + 0xf6c2) = 1;
  bVar4 = iVar2 == 0;
  bVar1 = !bVar4;
  if (bVar3) {
    bVar1 = bVar4;
  }
  *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | bVar1;
  return;
}

