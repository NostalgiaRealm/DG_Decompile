/*
 * FUN_18018dc88 at 18018dc88
 * undefined FUN_18018dc88(void)
 * Address ranges: 18018dc88-18018dcf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018dc88(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = (uint)LZCOUNT(*(uint *)(param_2 + 0x34) | *(uint *)(param_2 + 0x30));
    iVar1 = 0;
    if ((1 - (uVar2 >> 5) & 0xff) != 0) {
      iVar1 = 0x20 - uVar2;
    }
    *(int *)(param_2 + 0x38) = iVar1;
    uVar2 = (uint)LZCOUNT(*(uint *)(param_2 + 0x44) | *(uint *)(param_2 + 0x40) |
                          *(uint *)(param_2 + 0x3c));
    iVar1 = 0;
    if ((1 - (uVar2 >> 5) & 0xff) != 0) {
      iVar1 = 0x20 - uVar2;
    }
    *(int *)(param_2 + 0x48) = iVar1;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    param_3[1] = *(undefined8 *)(param_2 + 0x30);
    *param_3 = uVar3;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
    param_3[4] = *(undefined8 *)(param_2 + 0x48);
  }
  return;
}

