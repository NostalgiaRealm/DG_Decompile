/*
 * FUN_1007da74 at 1007da74
 * undefined4 __stdcall FUN_1007da74(int param_1, uint * param_2, uint * param_3, uint param_4)
 * Address ranges: 1007da74-1007db84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1007da74(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  ushort in_FPUControlWord;
  uint local_8;
  
  uVar2 = param_4;
  puVar6 = param_2;
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if (((param_3 != (uint *)0x0) && (param_2 < *(uint **)(param_1 + -0x4dd0))) &&
     ((uint *)((int)param_2 + param_4) <= *(uint **)(param_1 + -0x4dd0))) {
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    if (*(char *)(iVar1 + -0x56c0) == '\0') {
      param_2 = &local_8;
      param_4 = CONCAT22(param_4._2_2_,in_FPUControlWord);
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        param_4 = in_FPUControlWord & 0xf0ff | 0x23f;
      }
      FUN_1007cde1((void *)(iVar1 + -0x58e0),(uint)puVar6,param_3,uVar2);
      param_3 = &local_8;
    }
    else {
      puVar5 = param_3;
      puVar6 = (uint *)((int)puVar6 * 0x10 +
                       *(int *)(*(int *)(iVar1 + -0x56d0) + *(int *)(iVar1 + -0x56c4) * 4) + 0x4a54)
      ;
      for (iVar4 = uVar2 << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      if (param_4 != 0) {
        FUN_100ada8e((int *)((int)param_2 + iVar1 + -0x530),1,param_4);
      }
    }
    FUN_10003881((char *)((int)&param_1 + 3));
    uVar3 = 0;
  }
  return uVar3;
}

