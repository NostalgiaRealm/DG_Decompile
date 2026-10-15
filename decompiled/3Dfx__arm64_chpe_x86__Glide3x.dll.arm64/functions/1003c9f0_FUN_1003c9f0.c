/*
 * FUN_1003c9f0 at 1003c9f0
 * undefined FUN_1003c9f0(void)
 * Address ranges: 1003c9f0-1003ca77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c9f0(int param_1,undefined8 param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 & 0xf0) == 0x80) {
    *(undefined4 *)(param_1 + 0x154) = 2;
    iVar1 = ((param_3 & 0xf) + 0x24) * 4;
  }
  else {
    if ((param_3 & 0xf0) != 0xf0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x154) = 2;
    iVar1 = 0xa0;
  }
  uVar2 = FUN_10072f50(*(undefined4 *)(param_1 + iVar1),param_4,1,4,0,0);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(uint *)(param_1 + 0x15c) = (uint)*(byte *)(param_1 + iVar1);
  return;
}

