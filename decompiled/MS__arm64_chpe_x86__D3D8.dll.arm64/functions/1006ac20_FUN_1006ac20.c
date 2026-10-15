/*
 * FUN_1006ac20 at 1006ac20
 * undefined FUN_1006ac20(void)
 * Address ranges: 1006ac20-1006acc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ac20(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar3 = (uint)*(byte *)(param_2 + 0x11) | *(uint *)(param_2 + 0x14);
    *(uint *)(param_2 + 0x14) = uVar3;
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = uVar2;
    uVar3 = (uint)LZCOUNT(uVar2 | uVar3);
    iVar1 = 0x20 - uVar3;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) {
      iVar1 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar1;
    uVar3 = (uint)LZCOUNT(*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20) |
                          *(uint *)(param_2 + 0x1c));
    iVar1 = 0x20 - uVar3;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) {
      iVar1 = 0;
    }
    *(int *)(param_2 + 0x28) = iVar1;
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    param_3[1] = *(undefined8 *)(param_2 + 0x10);
    *param_3 = uVar6;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
    param_3[4] = *(undefined8 *)(param_2 + 0x28);
  }
  return;
}

