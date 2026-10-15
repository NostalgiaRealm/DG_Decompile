/*
 * FUN_10068708 at 10068708
 * undefined FUN_10068708(void)
 * Address ranges: 10068708-10068903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10068708(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,ulonglong param_5)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar6;
  int local_50 [4];
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x84);
  if (*piVar1 == 0) {
    return -0x7789fcfa;
  }
  iVar5 = *(int *)(param_1 + 0x88);
  uVar6 = 0;
  iVar4 = 0;
  if (iVar5 == 0) goto LAB_10068820;
  if ((*(int *)(iVar5 + 200) == 0) || ((param_5 & 1) == 0)) {
    uVar6 = (int)(*(float *)(iVar5 + 0x8c) * 255.0) |
            ((int)(*(float *)(iVar5 + 0x88) * 255.0) |
            ((int)(*(float *)(iVar5 + 0x84) * 255.0) | (int)(*(float *)(iVar5 + 0x90) * 255.0) << 8)
            << 8) << 8;
    goto LAB_10068820;
  }
  iVar4 = FUN_10053b40(*piVar1,*(int *)(iVar5 + 200));
  if (iVar4 == 0) {
LAB_100687c0:
    bVar2 = true;
  }
  else {
    (*pcVar3)();
    iVar5 = (*extraout_w11)(iVar4);
    if ((*(uint *)(iVar5 + 0x68) >> 0xc & 1) != 0) goto LAB_100687c0;
    bVar2 = false;
  }
  if (!bVar2) {
    iVar4 = 0;
  }
LAB_10068820:
  local_50[0] = 0;
  iVar5 = iVar4;
  if (iVar4 != 0) {
    (*pcVar3)();
    (*extraout_w11_00)(iVar4,&DAT_1009c5d0,local_50,0);
    iVar5 = 0;
    if (local_50[0] != 0) {
      iVar5 = iVar4;
    }
  }
  iVar4 = FUN_1005b430(0x3f800000,*piVar1,param_2,param_3,param_4 & 0xfffffffb,uVar6,0,local_50[0],
                       iVar5,param_1 + 0xa4);
  if (iVar4 == -0x7789f7ea) {
    iVar4 = FUN_1005b430(0x3f800000,*piVar1,param_2,param_3,param_4 & 0xfffffff9,uVar6,0,local_50[0]
                         ,iVar5,param_1 + 0xa4);
  }
  return iVar4;
}

