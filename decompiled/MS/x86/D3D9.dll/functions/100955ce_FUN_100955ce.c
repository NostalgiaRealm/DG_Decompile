/*
 * FUN_100955ce at 100955ce
 * undefined4 __stdcall FUN_100955ce(uint * param_1, uint * param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 100955ce-10095701
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_100955ce(uint *param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint local_8;
  
  uVar5 = param_4;
  puVar8 = param_2;
  puVar1 = param_1;
  uVar2 = 0x8876086c;
  if ((param_2 < (uint *)param_1[0x18]) && ((int)param_2 + param_4 <= param_1[0x18])) {
    if (param_4 != 0) {
      FUN_10003e40((void *)((int)&param_4 + 3),(byte)(param_1[-0x1639] >> 2) & 1);
      if (puVar8 < &DAT_00000010) {
        if (0x10 < (int)puVar8 + uVar5) {
          uVar5 = 0x10 - (int)puVar8;
        }
      }
      else {
        uVar5 = 0;
      }
      if ((char)puVar1[-0x18bc] == '\0') {
        param_2 = &local_8;
        param_1 = (uint *)puVar1[0x16f5];
        puVar6 = param_3;
        iVar3 = FUN_1009c1d2(puVar1 + 0x1e,(uint *)&param_1);
        FUN_100964ab(puVar1 + -0x19ad,iVar3,(uint)puVar8,puVar6,uVar5);
        param_1 = &local_8;
      }
      else {
        puVar6 = param_3;
        puVar7 = (undefined4 *)
                 (*(int *)(puVar1[-0x18c0] + puVar1[-0x18bd] * 4) + ((int)puVar8 + 0x13f2) * 4);
        for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        if (uVar5 != 0) {
          FUN_100cfed0((int *)((int)param_1 + (int)(param_2 + 0x7d)),1,uVar5);
        }
      }
      FUN_10003e89((char *)((int)&param_4 + 3));
    }
    uVar2 = 0;
  }
  return uVar2;
}

