/*
 * FUN_100c1a30 at 100c1a30
 * undefined FUN_100c1a30(void)
 * Address ranges: 100c1a30-100c1a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c1a30(int param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(ushort *)(param_1 + -0x98)) && (param_3 != (undefined8 *)0x0)) {
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + param_2 * 4 + -0x90);
    uVar5 = *(undefined8 *)(iVar1 + 0x68);
    uVar4 = *(undefined8 *)(iVar1 + 0x80);
    uVar3 = *(undefined8 *)(iVar1 + 0x78);
    param_3[1] = *(undefined8 *)(iVar1 + 0x70);
    *param_3 = uVar5;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
  }
  return uVar2;
}

