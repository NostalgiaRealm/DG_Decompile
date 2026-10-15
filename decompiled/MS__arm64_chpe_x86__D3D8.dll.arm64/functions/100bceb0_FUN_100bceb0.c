/*
 * FUN_100bceb0 at 100bceb0
 * undefined FUN_100bceb0(void)
 * Address ranges: 100bceb0-100bcf4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100bceb0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_20 [4];
  
  local_20[0] = param_2;
  piVar3 = (int *)FUN_1000eba0(param_1 + -0x4d5c,local_20);
  if (piVar3 == (int *)0x0) {
    param_1 = param_1 + -0x4d4c;
  }
  else {
    param_1 = *piVar3;
  }
  uVar4 = 0;
  do {
    uVar2 = *(undefined4 *)(param_1 + uVar4 * 4);
    *(char *)(param_3 + uVar4 * 4) = (char)((uint)uVar2 >> 0x10);
    *(char *)(param_3 + 1 + uVar4 * 4) = (char)((uint)uVar2 >> 8);
    *(char *)(param_3 + 2 + uVar4 * 4) = (char)uVar2;
    iVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(char *)(param_3 + 3 + iVar1) = (char)((uint)uVar2 >> 0x18);
  } while (uVar4 < 0x100);
  return 0;
}

