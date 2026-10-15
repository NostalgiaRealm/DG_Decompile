/*
 * FUN_100291d0 at 100291d0
 * undefined FUN_100291d0(void)
 * Address ranges: 100291d0-10029393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100291d0(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,char param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  byte bVar4;
  
  FUN_1002bd00(*(undefined4 *)(param_1 + 0x315c),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(*(int *)(param_1 + 0x3160) + 0x30) != 4) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x3160) + 0x30) = 4;
  }
  if (param_5 == '\0') {
    param_5 = '\0';
  }
  else {
    uVar3 = *param_3;
    uVar1 = *param_2;
    bVar4 = (byte)((ulonglong)_DAT_10096de0 >> 0x20);
    if ((((-(1e+06 < *param_4) & bVar4 | -(1e+06 < param_4[1]) & (byte)_DAT_10096de0) & 3 |
          -(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar1 >> 0x18),
                                         CONCAT16((char)((uint)uVar1 >> 0x10),
                                                  CONCAT15((char)((uint)uVar1 >> 8),
                                                           CONCAT14((char)uVar1,param_2[1])))) >>
                               0x20))) & (byte)((ulonglong)uRam10096de8 >> 0x20) |
          -(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar3 >> 0x18),
                                         CONCAT16((char)((uint)uVar3 >> 0x10),
                                                  CONCAT15((char)((uint)uVar3 >> 8),
                                                           CONCAT14((char)uVar3,param_3[1])))) >>
                               0x20))) & bVar4 |
         -(1e+06 < ABS((float)param_2[1])) & (byte)uRam10096de8 |
         -(1e+06 < ABS((float)param_3[1])) & (byte)_DAT_10096de0) & 0xf) != 0) {
      FUN_10028030();
      goto LAB_10029348;
    }
  }
  FUN_10028a40(param_1,param_2,param_3,param_4,param_5);
LAB_10029348:
  FUN_1002ec40(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}

