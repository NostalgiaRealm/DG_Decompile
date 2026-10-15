/*
 * FUN_10095497 at 10095497
 * undefined4 __stdcall FUN_10095497(uint * param_1, uint * param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 10095497-100955cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10095497(uint *param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_8;
  
  uVar4 = param_4;
  puVar7 = param_2;
  puVar1 = param_1;
  uVar2 = 0x8876086c;
  if ((param_2 < (uint *)param_1[0x17]) && ((int)param_2 + param_4 <= param_1[0x17])) {
    if (param_4 != 0) {
      FUN_10003e40((void *)((int)&param_4 + 3),(byte)(param_1[-0x1639] >> 2) & 1);
      if (puVar7 < &DAT_00000010) {
        if (0x10 < (int)puVar7 + uVar4) {
          uVar4 = 0x10 - (int)puVar7;
        }
      }
      else {
        uVar4 = 0;
      }
      if ((char)puVar1[-0x18bc] == '\0') {
        param_2 = &local_8;
        param_1 = (uint *)puVar1[0x16f5];
        puVar5 = param_3;
        iVar3 = FUN_1009c1d2(puVar1 + 0x1e,(uint *)&param_1);
        FUN_1009637c(puVar1 + -0x19ad,iVar3,(uint)puVar7,puVar5,uVar4);
        param_1 = &local_8;
      }
      else {
        puVar5 = param_3;
        puVar6 = (undefined4 *)
                 ((int)puVar7 * 0x10 + 0x5008 + *(int *)(puVar1[-0x18c0] + puVar1[-0x18bd] * 4));
        for (iVar3 = uVar4 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        if (uVar4 != 0) {
          FUN_100cfed0((int *)((int)param_1 + (int)(param_2 + 0x81)),1,uVar4);
        }
      }
      FUN_10003e89((char *)((int)&param_4 + 3));
    }
    uVar2 = 0;
  }
  return uVar2;
}

