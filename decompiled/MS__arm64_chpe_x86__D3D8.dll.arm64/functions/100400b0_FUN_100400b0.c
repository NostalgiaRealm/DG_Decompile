/*
 * FUN_100400b0 at 100400b0
 * undefined FUN_100400b0(void)
 * Address ranges: 100400b0-10040147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100400b0(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  FUN_1003c678(param_1,0,0,0);
  if (param_2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0xda2c) = 0;
  }
  else {
    *(int *)(param_1 + 0xda2c) = param_2;
    uVar2 = (uint)(*(int *)(param_2 + 0x40) == 0x104);
  }
  *(undefined1 *)(param_1 + 0xd978) = 1;
  bVar1 = *(int *)(param_1 + 0x529c) == 0;
  if (uVar2 == 0) {
    bVar1 = !bVar1;
  }
  *(byte *)(param_1 + 0xd981) = *(byte *)(param_1 + 0xd981) | bVar1;
  *(uint *)(param_1 + 0x529c) = uVar2;
  return;
}

