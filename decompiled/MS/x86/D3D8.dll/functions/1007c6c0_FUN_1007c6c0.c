/*
 * FUN_1007c6c0 at 1007c6c0
 * undefined4 __stdcall FUN_1007c6c0(int param_1, uint param_2)
 * Address ranges: 1007c6c0-1007c71e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c6c0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = param_2;
  puVar3 = (undefined4 *)FUN_100809ad((void *)(iVar1 + 0x2c),&param_2);
  if (puVar3 != (undefined4 *)0x0) {
    uVar4 = 0;
    if (uVar2 == *(uint *)(iVar1 + 0x60)) {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
    FUN_10080163((void *)(iVar1 + 0x18),puVar3);
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar4;
}

