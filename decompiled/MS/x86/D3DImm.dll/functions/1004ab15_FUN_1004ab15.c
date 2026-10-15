/*
 * FUN_1004ab15 at 1004ab15
 * undefined4 __stdcall FUN_1004ab15(int param_1, int * param_2)
 * Address ranges: 1004ab15-1004ac27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004ab15(int param_1,int *param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
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
  uVar3 = 0x80070057;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0x50) {
      piVar4 = (int *)(param_1 + 0x4c);
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_2 = *piVar4;
        piVar4 = piVar4 + 1;
        param_2 = param_2 + 1;
      }
    }
    else {
      if (*param_2 != 0x4c) goto LAB_1004abfd;
      *param_2 = 0x4c;
      param_2[1] = *(int *)(param_1 + 0x50);
      param_2[2] = *(int *)(param_1 + 0x54);
      param_2[3] = *(int *)(param_1 + 0x58);
      param_2[4] = *(int *)(param_1 + 0x5c);
      param_2[5] = *(int *)(param_1 + 0x60);
      param_2[6] = *(int *)(param_1 + 100);
      param_2[7] = *(int *)(param_1 + 0x68);
      param_2[8] = *(int *)(param_1 + 0x6c);
      param_2[9] = *(int *)(param_1 + 0x70);
      param_2[10] = *(int *)(param_1 + 0x74);
      param_2[0xb] = *(int *)(param_1 + 0x78);
      param_2[0xc] = *(int *)(param_1 + 0x7c);
      param_2[0xd] = *(int *)(param_1 + 0x80);
      param_2[0xe] = *(int *)(param_1 + 0x84);
      param_2[0xf] = *(int *)(param_1 + 0x88);
      param_2[0x10] = *(int *)(param_1 + 0x8c);
      param_2[0x11] = *(int *)(param_1 + 0x90);
      param_2[0x12] = *(int *)(param_1 + 0x94);
    }
    uVar3 = 0;
  }
LAB_1004abfd:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

