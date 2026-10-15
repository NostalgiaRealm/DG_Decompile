/*
 * FUN_18005e480 at 18005e480
 * undefined FUN_18005e480(void)
 * Address ranges: 18005e480-18005e4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e480(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = *(ushort *)(param_2 + 0x12);
    *(undefined2 *)(param_2 + 0x12) = 0;
    uVar4 = (uint)uVar2 | *(uint *)(param_2 + 0x14);
    uVar3 = (uint)LZCOUNT(*(uint *)(param_2 + 0x10) | uVar4);
    iVar1 = 0;
    if ((1 - (uVar3 >> 5) & 0xff) != 0) {
      iVar1 = 0x20 - uVar3;
    }
    *(uint *)(param_2 + 0x14) = uVar4;
    *(int *)(param_2 + 0x18) = iVar1;
    uVar4 = (uint)LZCOUNT(*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20) |
                          *(uint *)(param_2 + 0x1c));
    iVar1 = 0;
    if ((1 - (uVar4 >> 5) & 0xff) != 0) {
      iVar1 = 0x20 - uVar4;
    }
    *(int *)(param_2 + 0x28) = iVar1;
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_3[1] = *(undefined8 *)(param_2 + 0x10);
    *param_3 = uVar7;
    param_3[3] = uVar6;
    param_3[2] = uVar5;
    param_3[4] = *(undefined8 *)(param_2 + 0x28);
  }
  return;
}

