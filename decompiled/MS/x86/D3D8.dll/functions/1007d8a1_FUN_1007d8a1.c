/*
 * FUN_1007d8a1 at 1007d8a1
 * undefined4 __stdcall FUN_1007d8a1(int param_1, uint * param_2)
 * Address ranges: 1007d8a1-1007d984
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007d8a1(int param_1,uint *param_2)

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
  
  iVar4 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  puVar2 = param_2;
  if (*(char *)(iVar4 + -0x56c0) == '\0') {
    local_c = &local_10;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    cVar3 = FUN_1007ced5((void *)(iVar4 + -0x58e0),param_2);
    uVar5 = 0x8876086c;
    param_2 = &local_10;
    if (cVar3 != '\0') {
      uVar5 = 0;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar4 + -0x56d0) + *(int *)(iVar4 + -0x56c4) * 4);
    if ((((uint)param_2 & 1) == 0) ||
       (iVar4 = FUN_100809ad((void *)(iVar4 + 0x2c),(uint *)&param_2), iVar4 != 0)) {
      *(uint **)(iVar1 + 0x49b0) = puVar2;
      *(undefined1 *)(iVar1 + 0x93a1) = 1;
    }
    uVar5 = 0;
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar5;
}

