/*
 * FUN_100819e0 at 100819e0
 * undefined FUN_100819e0(void)
 * Address ranges: 100819e0-10081a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100819e0(undefined8 param_1,int param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = *(ushort *)(param_2 + 0x12);
    *(ushort *)(param_2 + 0x12) = 0;
    uVar3 = (uint)uVar1 | *(uint *)(param_2 + 0x14);
    *(uint *)(param_2 + 0x14) = uVar3;
    uVar3 = (uint)LZCOUNT(*(uint *)(param_2 + 0x10) | uVar3);
    iVar2 = 0x20 - uVar3;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) {
      iVar2 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar2;
    uVar3 = (uint)LZCOUNT(*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20) |
                          *(uint *)(param_2 + 0x1c));
    iVar2 = 0x20 - uVar3;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) {
      iVar2 = 0;
    }
    *(int *)(param_2 + 0x28) = iVar2;
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

