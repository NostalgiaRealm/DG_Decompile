/*
 * FUN_100ed350 at 100ed350
 * undefined FUN_100ed350(void)
 * Address ranges: 100ed350-100ed3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ed350(int param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(ushort *)(param_1 + -0x98)) && (param_3 != (undefined8 *)0x0)) {
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + param_2 * 4 + -0x90);
    uVar3 = *(undefined8 *)(iVar1 + 0x68);
    param_3[1] = *(undefined8 *)(iVar1 + 0x70);
    *param_3 = uVar3;
    param_3[2] = *(undefined8 *)(iVar1 + 0x78);
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(iVar1 + 0x80);
  }
  return uVar2;
}

