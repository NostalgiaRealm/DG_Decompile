/*
 * FUN_10044250 at 10044250
 * undefined FUN_10044250(void)
 * Address ranges: 10044250-100442d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044250(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x20)) {
    uVar5 = *(undefined8 *)(param_1 + 0x198);
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    uVar2 = 0;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_2 + 6) = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar3;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

