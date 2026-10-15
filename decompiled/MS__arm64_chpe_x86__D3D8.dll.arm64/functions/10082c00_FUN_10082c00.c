/*
 * FUN_10082c00 at 10082c00
 * undefined FUN_10082c00(void)
 * Address ranges: 10082c00-10082c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082c00(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = (uint)LZCOUNT(*(uint *)(param_2 + 0x2c) | *(uint *)(param_2 + 0x28));
    iVar1 = 0x20 - uVar2;
    if ((1 - (uVar2 >> 5) & 0xff) == 0) {
      iVar1 = 0;
    }
    *(int *)(param_2 + 0x30) = iVar1;
    uVar2 = (uint)LZCOUNT(*(uint *)(param_2 + 0x3c) | *(uint *)(param_2 + 0x38) |
                          *(uint *)(param_2 + 0x34));
    iVar1 = 0x20 - uVar2;
    if ((1 - (uVar2 >> 5) & 0xff) == 0) {
      iVar1 = 0;
    }
    *(int *)(param_2 + 0x40) = iVar1;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    param_3[1] = *(undefined8 *)(param_2 + 0x28);
    *param_3 = uVar5;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
    param_3[4] = *(undefined8 *)(param_2 + 0x40);
  }
  return;
}

