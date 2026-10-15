/*
 * FUN_1004a9cb at 1004a9cb
 * int __stdcall FUN_1004a9cb(int param_1, int * param_2)
 * Address ranges: 1004a9cb-1004ab14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004a9cb(int param_1,int *param_2)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar3 = -0x7ff8ffa9;
  if (param_2 == (int *)0x0) goto LAB_1004aaea;
  if (*param_2 == 0x50) {
    piVar2 = param_2;
    piVar4 = (int *)(param_1 + 0x4c);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    *(undefined1 *)(param_1 + 0xa0) = 1;
LAB_1004aac9:
    iVar3 = FUN_1004a99e((int)param_2);
  }
  else {
    iVar3 = -0x7ff8ffa9;
    if (*param_2 == 0x4c) {
      *(undefined4 *)(param_1 + 0x4c) = 0x50;
      *(int *)(param_1 + 0x50) = param_2[1];
      *(int *)(param_1 + 0x54) = param_2[2];
      *(int *)(param_1 + 0x58) = param_2[3];
      *(int *)(param_1 + 0x5c) = param_2[4];
      *(int *)(param_1 + 0x60) = param_2[5];
      *(int *)(param_1 + 100) = param_2[6];
      *(int *)(param_1 + 0x68) = param_2[7];
      *(int *)(param_1 + 0x6c) = param_2[8];
      *(int *)(param_1 + 0x70) = param_2[9];
      *(int *)(param_1 + 0x74) = param_2[10];
      *(int *)(param_1 + 0x78) = param_2[0xb];
      *(int *)(param_1 + 0x7c) = param_2[0xc];
      *(int *)(param_1 + 0x80) = param_2[0xd];
      *(int *)(param_1 + 0x84) = param_2[0xe];
      *(int *)(param_1 + 0x88) = param_2[0xf];
      *(int *)(param_1 + 0x8c) = param_2[0x10];
      *(int *)(param_1 + 0x90) = param_2[0x11];
      *(int *)(param_1 + 0x94) = param_2[0x12];
      *(undefined4 *)(param_1 + 0x98) = 1;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      goto LAB_1004aac9;
    }
  }
  if ((-1 < iVar3) && (*(void **)(param_1 + 0x9c) != (void *)0x0)) {
    FUN_1004c26f(*(void **)(param_1 + 0x9c),param_1);
  }
LAB_1004aaea:
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar3;
}

