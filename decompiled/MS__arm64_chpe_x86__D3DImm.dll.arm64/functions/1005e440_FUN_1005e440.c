/*
 * FUN_1005e440 at 1005e440
 * undefined FUN_1005e440(void)
 * Address ranges: 1005e440-1005e4b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e440(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x9cc);
  if (*(int *)((int)puVar2 + 0x944) == param_2) {
    puVar2 = puVar2 + 0x50;
    uVar1 = 10;
  }
  else if (*(int *)(puVar2 + 0x129) == param_2) {
    uVar1 = 0;
  }
  else {
    if (*(int *)((int)puVar2 + 0x94c) != param_2) {
      return;
    }
    puVar2 = puVar2 + 8;
    uVar1 = 1;
  }
  uVar5 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  puVar2[1] = param_3[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  uVar5 = param_3[4];
  uVar4 = param_3[7];
  uVar3 = param_3[6];
  puVar2[5] = param_3[5];
  puVar2[4] = uVar5;
  puVar2[7] = uVar4;
  puVar2[6] = uVar3;
  FUN_10004f00(param_1,uVar1);
  return;
}

