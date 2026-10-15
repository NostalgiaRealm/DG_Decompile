/*
 * FUN_1006b6d0 at 1006b6d0
 * undefined FUN_1006b6d0(void)
 * Address ranges: 1006b6d0-1006b707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b6d0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0x80070057;
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 0;
    uVar5 = *(undefined8 *)(iVar1 + 0x5c);
    uVar4 = *(undefined8 *)(iVar1 + 0x74);
    uVar3 = *(undefined8 *)(iVar1 + 0x6c);
    param_2[1] = *(undefined8 *)(iVar1 + 100);
    *param_2 = uVar5;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    uVar3 = *(undefined8 *)(iVar1 + 0x7c);
    param_2[5] = *(undefined8 *)(iVar1 + 0x84);
    param_2[4] = uVar3;
  }
  return uVar2;
}

