/*
 * FUN_1004ccc0 at 1004ccc0
 * undefined FUN_1004ccc0(void)
 * Address ranges: 1004ccc0-1004cd5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ccc0(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  FUN_10047f98(param_1,0,0,0);
  if (param_2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0xf72c) = 0;
  }
  else {
    *(int *)(param_1 + 0xf72c) = param_2;
    uVar2 = (uint)(*(int *)(param_2 + 0x40) == 0x104);
  }
  *(undefined1 *)(param_1 + 0xf668) = 1;
  bVar1 = *(int *)(param_1 + 0x6f0c) == 0;
  if (uVar2 == 0) {
    bVar1 = !bVar1;
  }
  *(byte *)(param_1 + 0xf671) = *(byte *)(param_1 + 0xf671) | bVar1;
  *(uint *)(param_1 + 0x6f0c) = uVar2;
  *(undefined1 *)(param_1 + 0xf6a2) = 1;
  return;
}

