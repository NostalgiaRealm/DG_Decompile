/*
 * FUN_1009535d at 1009535d
 * undefined4 __stdcall FUN_1009535d(uint * param_1, uint * param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 1009535d-10095496
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1009535d(uint *param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint local_8;
  
  uVar5 = param_4;
  puVar8 = param_2;
  puVar2 = param_1;
  uVar3 = 0x8876086c;
  if ((param_2 < (uint *)param_1[0x16]) && ((int)param_2 + param_4 <= param_1[0x16])) {
    if (param_4 != 0) {
      FUN_10003e40((void *)((int)&param_4 + 3),(byte)(param_1[-0x1639] >> 2) & 1);
      puVar1 = (uint *)puVar2[-0x1638];
      if (puVar8 < puVar1) {
        if (puVar1 < (uint *)((int)puVar8 + uVar5)) {
          uVar5 = (int)puVar1 - (int)puVar8;
        }
      }
      else {
        uVar5 = 0;
      }
      if ((char)puVar2[-0x18bc] == '\0') {
        param_2 = &local_8;
        param_1 = (uint *)puVar2[0x16f5];
        puVar6 = param_3;
        iVar4 = FUN_1009c1d2(puVar2 + 0x1e,(uint *)&param_1);
        FUN_10096233(puVar2 + -0x19ad,iVar4,(uint)puVar8,puVar6,uVar5);
        param_1 = &local_8;
      }
      else {
        puVar6 = param_3;
        puVar7 = (undefined4 *)
                 ((int)puVar8 * 0x10 + 0x6118 + *(int *)(puVar2[-0x18c0] + puVar2[-0x18bd] * 4));
        for (iVar4 = uVar5 << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        if (uVar5 != 0) {
          FUN_100cfed0((int *)((int)param_1 + (int)(param_2 + -0x182)),1,uVar5);
        }
      }
      FUN_10003e89((char *)((int)&param_4 + 3));
    }
    uVar3 = 0;
  }
  return uVar3;
}

