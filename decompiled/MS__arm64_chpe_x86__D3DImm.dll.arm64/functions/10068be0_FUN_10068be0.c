/*
 * FUN_10068be0 at 10068be0
 * undefined FUN_10068be0(void)
 * Address ranges: 10068be0-10068cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068be0(int param_1,int *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0x80070057;
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x2c)) && ((float)param_2[7] != 0.0)) &&
     (((float)param_2[8] != 0.0 && ((float)param_2[10] - (float)param_2[9] != 0.0)))) {
    uVar2 = 0x88760306;
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar2 = 0x80070057;
      uVar1 = FUN_10056170(*(int *)(param_1 + 0x84),param_2);
      if ((uVar1 & 1) != 0) {
        uVar5 = *(undefined8 *)param_2;
        uVar4 = *(undefined8 *)(param_2 + 6);
        uVar3 = *(undefined8 *)(param_2 + 4);
        uVar2 = 0;
        *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_1 + 0xa4) = uVar5;
        *(undefined8 *)(param_1 + 0xbc) = uVar4;
        *(undefined8 *)(param_1 + 0xb4) = uVar3;
        *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 8);
        *(int *)(param_1 + 0xcc) = param_2[10];
      }
      *(undefined1 *)(param_1 + 0xd2) = 1;
      *(undefined1 *)(param_1 + 0xd0) = 1;
    }
  }
  return uVar2;
}

