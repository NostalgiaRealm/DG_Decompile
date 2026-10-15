/*
 * FUN_10095aaf at 10095aaf
 * undefined4 __stdcall FUN_10095aaf(int param_1, uint * param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 10095aaf-10095bc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10095aaf(int param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_8;
  
  puVar4 = param_4;
  puVar7 = param_2;
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if ((param_2 < &DAT_00000010) && ((uint)((int)param_2 + (int)param_4) < 0x11)) {
    if (param_4 != (uint *)0x0) {
      FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
      if (*(char *)(iVar1 + -0x62f0) == '\0') {
        param_2 = &local_8;
        param_4 = *(uint **)(iVar1 + 0x5bd0);
        puVar5 = param_3;
        iVar2 = FUN_1009c076((void *)(iVar1 + 0xb0),(uint *)&param_4);
        FUN_100967ea((void *)(iVar1 + -0x66b4),iVar2,(uint)puVar7,puVar5,(int)puVar4);
        param_4 = &local_8;
      }
      else {
        puVar5 = param_3;
        puVar6 = (undefined4 *)
                 (*(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4) +
                 ((int)puVar7 + 0x1442) * 4);
        for (puVar4 = param_4; puVar4 != (uint *)0x0; puVar4 = (uint *)((int)puVar4 + -1)) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_100cfed0((int *)((int)param_2 + iVar1 + 0x214),1,(uint)param_4);
      }
      FUN_10003e89((char *)((int)&param_1 + 3));
    }
    uVar3 = 0;
  }
  return uVar3;
}

