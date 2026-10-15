/*
 * FUN_1009585e at 1009585e
 * undefined4 __stdcall FUN_1009585e(int param_1, uint * param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 1009585e-10095991
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1009585e(int param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort in_FPUControlWord;
  uint local_8;
  
  puVar4 = param_4;
  puVar3 = param_2;
  iVar2 = param_1;
  uVar5 = 0x8876086c;
  puVar1 = *(uint **)(*(int *)(param_1 + 0x50) + 200);
  if ((param_2 < puVar1) && ((uint *)((int)param_2 + (int)param_4) <= puVar1)) {
    if (param_4 != (uint *)0x0) {
      FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
      if (*(char *)(iVar2 + -0x62f0) == '\0') {
        param_2 = &local_8;
        param_4 = (uint *)CONCAT22(param_4._2_2_,in_FPUControlWord);
        if ((in_FPUControlWord & 0xf3f) != 0x23f) {
          param_4 = (uint *)(in_FPUControlWord & 0xf0ff | 0x23f);
        }
        if (*(char *)(iVar2 + -0x66a3) == '\0') {
          param_4 = *(uint **)(iVar2 + 0x5bd0);
          iVar6 = FUN_1009c076((void *)(iVar2 + 0xb0),(uint *)&param_4);
        }
        else {
          iVar6 = 0;
        }
        FUN_100965aa((void *)(iVar2 + -0x66b4),iVar6,(uint)puVar3,param_3,(int)puVar4);
        param_4 = &local_8;
      }
      else {
        puVar7 = param_3;
        puVar8 = (undefined4 *)
                 ((int)puVar3 * 0x10 +
                 *(int *)(*(int *)(iVar2 + -0x6300) + *(int *)(iVar2 + -0x62f4) * 4) + 0x5318);
        for (iVar6 = (int)puVar4 << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_100cfed0((int *)((int)param_2 + iVar2 + -0x208),1,(uint)param_4);
      }
      FUN_10003e89((char *)((int)&param_1 + 3));
    }
    uVar5 = 0;
  }
  return uVar5;
}

