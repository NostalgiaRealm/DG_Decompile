/*
 * FUN_10029110 at 10029110
 * undefined FUN_10029110(void)
 * Address ranges: 10029110-1002933b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029110(int param_1,uint param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  byte bVar7;
  
  FUN_1002b880(*(undefined4 *)(param_1 + 0x315c),0,2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(*(int *)(param_1 + 0x3160) + 0x30) != 4) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x3160) + 0x30) = 4;
  }
  if (param_4 == '\0') {
    param_4 = '\0';
  }
  else {
    bVar6 = 0;
    iVar5 = 0;
    bVar7 = (byte)((ulonglong)_DAT_10096db0 >> 0x20);
    if (0 < (int)param_2 / 2) {
      do {
        if (bVar6 != 0) break;
        puVar1 = (undefined4 *)(param_3 + iVar5 * 0x78);
        iVar5 = iVar5 + 1;
        uVar4 = puVar1[0xf];
        uVar2 = *puVar1;
        bVar6 = (-(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar2 >> 0x18),
                                                CONCAT16((char)((uint)uVar2 >> 0x10),
                                                         CONCAT15((char)((uint)uVar2 >> 8),
                                                                  CONCAT14((char)uVar2,puVar1[1]))))
                                      >> 0x20))) & (byte)((ulonglong)uRam10096db8 >> 0x20) |
                 -(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar4 >> 0x18),
                                                CONCAT16((char)((uint)uVar4 >> 0x10),
                                                         CONCAT15((char)((uint)uVar4 >> 8),
                                                                  CONCAT14((char)uVar4,puVar1[0x10])
                                                                 ))) >> 0x20))) & bVar7 |
                -(1e+06 < ABS((float)puVar1[1])) & (byte)uRam10096db8 |
                -(1e+06 < ABS((float)puVar1[0x10])) & (byte)_DAT_10096db0) & 0xf;
      } while (iVar5 < (int)param_2 / 2);
    }
    if ((param_2 & 1) != 0) {
      iVar5 = param_3 + param_2 * 0x3c;
      bVar6 = (-(1e+06 < ABS(*(float *)(iVar5 + -0x3c))) & bVar7 |
              -(1e+06 < ABS(*(float *)(iVar5 + -0x38))) & (byte)_DAT_10096db0) & 3 | bVar6;
    }
    if (bVar6 != 0) {
      iVar5 = 1;
      if (1 < (int)(param_2 - 1)) {
        do {
          FUN_10027bb0(param_1,param_3,param_3 + iVar5 * 0x3c,param_3 + 0x3c + iVar5 * 0x3c);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(param_2 - 1));
      }
      goto LAB_100292f4;
    }
  }
  FUN_100286c0(param_1,param_2,param_3,param_4);
LAB_100292f4:
  FUN_1002e7c0(param_1);
  uVar4 = (*pcVar3)();
  (*extraout_w11_00)(uVar4);
  return;
}

