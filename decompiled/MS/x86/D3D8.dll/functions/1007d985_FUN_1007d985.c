/*
 * FUN_1007d985 at 1007d985
 * undefined4 __stdcall FUN_1007d985(int param_1, uint * param_2)
 * Address ranges: 1007d985-1007da73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007d985(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  iVar1 = param_1;
  uVar5 = 0x8876086c;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  puVar2 = param_2;
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar4 = 0;
  if (param_2 != (uint *)0x0) {
    iVar4 = FUN_10080572((void *)(iVar1 + 0x3c),(uint)param_2);
  }
  if (*(char *)(iVar1 + -0x56c0) == '\0') {
    cVar3 = FUN_1007d0ce((void *)(iVar1 + -0x58e0),(uint)puVar2);
    uVar5 = 0;
    if (cVar3 == '\0') {
      uVar5 = 0x8876086c;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + -0x56d0) + *(int *)(iVar1 + -0x56c4) * 4);
    if (puVar2 == (uint *)0x0) {
      *(undefined4 *)(iVar1 + 0x49ac) = 0;
    }
    else {
      if (iVar4 == 0) goto LAB_1007da4b;
      *(uint **)(iVar1 + 0x49ac) = puVar2;
    }
    *(undefined1 *)(iVar1 + 0x93a0) = 1;
    uVar5 = 0;
  }
LAB_1007da4b:
  param_2 = &local_10;
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar5;
}

