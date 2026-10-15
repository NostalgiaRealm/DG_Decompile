/*
 * FUN_1007db85 at 1007db85
 * undefined4 __stdcall FUN_1007db85(int param_1, uint param_2, uint * param_3, uint param_4)
 * Address ranges: 1007db85-1007dc91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1007db85(int param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  ushort in_FPUControlWord;
  uint local_8;
  
  uVar2 = param_4;
  uVar1 = param_2;
  uVar4 = 0x8876086c;
  if (((param_3 != (uint *)0x0) && (param_2 < 8)) && (param_2 + param_4 < 9)) {
    FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    if (*(char *)(param_1 + -0x56c0) == '\0') {
      param_4 = CONCAT22(param_4._2_2_,in_FPUControlWord);
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        param_4 = in_FPUControlWord & 0xf0ff | 0x23f;
      }
      FUN_1007cd81((void *)(param_1 + -0x58e0),uVar1,param_3,uVar2);
      param_3 = &local_8;
    }
    else {
      puVar5 = param_3;
      puVar6 = (uint *)(uVar1 * 0x10 +
                       *(int *)(*(int *)(param_1 + -0x56d0) + *(int *)(param_1 + -0x56c4) * 4) +
                       0x49d4);
      for (iVar3 = uVar2 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      if (param_4 != 0) {
        FUN_100ada8e((int *)(param_1 + -0x130 + uVar1),1,param_4);
      }
    }
    uVar4 = 0;
    FUN_10003881((char *)((int)&param_2 + 3));
  }
  return uVar4;
}

