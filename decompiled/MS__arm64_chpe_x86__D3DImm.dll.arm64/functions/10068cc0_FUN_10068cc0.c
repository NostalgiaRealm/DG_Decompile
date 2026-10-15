/*
 * FUN_10068cc0 at 10068cc0
 * undefined FUN_10068cc0(void)
 * Address ranges: 10068cc0-10068d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068cc0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x80070057;
  if (((param_2 != (int *)0x0) && (*param_2 == 0x2c)) &&
     (uVar1 = 0x88760305, *(char *)(param_1 + 0xd0) != '\0')) {
    uVar4 = *(undefined8 *)(param_1 + 0xa4);
    uVar3 = *(undefined8 *)(param_1 + 0xbc);
    uVar2 = *(undefined8 *)(param_1 + 0xb4);
    uVar1 = 0;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0xac);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_2 + 6) = uVar3;
    *(undefined8 *)(param_2 + 4) = uVar2;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xc4);
    param_2[10] = *(int *)(param_1 + 0xcc);
  }
  return uVar1;
}

