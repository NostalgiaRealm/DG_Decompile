/*
 * FUN_1005ee5f at 1005ee5f
 * char __stdcall FUN_1005ee5f(float * param_1, int param_2, int param_3)
 * Address ranges: 1005ee5f-1005ef3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1005ee5f(float *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  undefined1 local_38 [20];
  int local_24;
  void *local_c;
  char local_5;
  
  local_5 = '\x01';
  piVar2 = *(int **)(param_3 + 0x58);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(param_3 + 0x54);
  }
  (**(code **)(*piVar2 + 0x28))(piVar2,local_38);
  uVar6 = 0xf;
  cVar1 = local_5;
  if (local_24 != 1) {
    if (local_24 == 2) {
      uVar6 = 0x10;
    }
    else if (local_24 == 4) {
      uVar6 = 0x11;
    }
    else if (local_24 == 8) {
      uVar6 = 0x12;
    }
    else if (local_24 == 0x10) {
      uVar6 = 0x13;
    }
    else {
      cVar1 = '\0';
    }
  }
  cVar3 = '\0';
  if (*(int *)(param_3 + 0x5c) != 0) {
    cVar3 = cVar1;
  }
  if (cVar3 != '\0') {
    fVar5 = *(float *)(param_2 + 0x58);
    if (fVar5 == 0.0) {
      fVar5 = *(float *)(param_2 + 0x54);
    }
    iVar4 = ((int)param_1[9] * *(int *)(param_2 + 0x2c) + (int)param_1[8]) * 0x1c;
    if (*(int *)(iVar4 + 4 + *(int *)(param_2 + 0x60)) == 0) {
      cVar3 = '\0';
    }
    else {
      param_1[0x12] = fVar5;
      param_1[0x13] = *(float *)(iVar4 + 4 + *(int *)(param_2 + 0x60));
      param_1[0x10] = *(float *)(param_3 + 0x5c);
      FUN_1005ea71(local_c,param_1,*(int *)(param_2 + 0x1c),*(uint *)(param_3 + 0x1c),uVar6,'\0',
                   (float *)0x0);
    }
  }
  return cVar3;
}

