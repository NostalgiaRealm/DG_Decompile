/*
 * FUN_100b1a48 at 100b1a48
 * undefined FUN_100b1a48(void)
 * Address ranges: 100b1a48-100b1bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b1a48(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  float fVar5;
  
  pfVar1 = (float *)(param_1 + (param_2 + 0xa3) * 4);
  if (*pfVar1 != param_3) {
    switch(param_2) {
    case 0x99:
      if ((*(uint *)(param_1 + 0xb0c) >> 7 & 1) != 0) {
        uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar3);
        FUN_100b5780(param_1,0);
        if (*(int *)(&DAT_000057b8 + param_1) != 0) {
          FUN_100bdc38(*(int *)(&DAT_000057b8 + param_1));
          *(undefined4 *)(&DAT_000057b8 + param_1) = 0;
        }
        uVar4 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x57bc + uVar4 * 4);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
            iVar2 = param_1 + uVar4 * 4;
            FUN_100c0378(*(undefined4 *)(iVar2 + 0x57bc));
            *(undefined4 *)(iVar2 + 0x57bc) = 0;
            *(undefined4 *)(iVar2 + 0x57fc) = 0;
            *(undefined4 *)(iVar2 + 0x583c) = 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x10);
        *(undefined8 *)(param_1 + 0x5884) = 0;
        *(undefined8 *)(param_1 + 0x588c) = 0;
        *(undefined4 *)(param_1 + 0x587c) = 0;
        *(undefined8 *)(param_1 + 0x5894) = 0;
        *pfVar1 = param_3;
        FUN_100b1930(param_1);
      }
      break;
    case 0xa4:
      FUN_100b19c0(param_3,param_1);
      *(float *)(param_1 + 0x51c) = param_3;
      break;
    case 0xa6:
      fVar5 = *(float *)(*(int *)(param_1 + 0x58f4) + 0xb0);
      if (fVar5 < param_3) {
        param_3 = fVar5;
      }
    default:
      FUN_1001fcb0(param_1,param_2,param_3);
    }
    *pfVar1 = param_3;
  }
  return;
}

