/*
 * FUN_10095992 at 10095992
 * undefined4 __stdcall FUN_10095992(int param_1, uint * param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 10095992-10095aae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10095992(int param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_8;
  
  puVar7 = param_4;
  puVar6 = param_2;
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  if ((param_2 < &DAT_00000010) && ((uint)((int)param_2 + (int)param_4) < 0x11)) {
    if (param_4 != (uint *)0x0) {
      FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
      if (*(char *)(iVar1 + -0x62f0) == '\0') {
        param_2 = &local_8;
        param_4 = *(uint **)(iVar1 + 0x5bd0);
        puVar4 = param_3;
        iVar3 = FUN_1009c076((void *)(iVar1 + 0xb0),(uint *)&param_4);
        FUN_100966ca((void *)(iVar1 + -0x66b4),iVar3,(uint)puVar6,puVar4,(int)puVar7);
        param_4 = &local_8;
      }
      else {
        puVar4 = param_3;
        puVar5 = (undefined4 *)
                 ((int)puVar6 * 0x10 +
                 *(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4) + 0x5148);
        for (iVar3 = (int)puVar7 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_100cfed0((int *)((int)param_2 + iVar1 + 0x224),1,(uint)param_4);
      }
      FUN_10003e89((char *)((int)&param_1 + 3));
    }
    uVar2 = 0;
  }
  return uVar2;
}

