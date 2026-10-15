/*
 * FUN_10050030 at 10050030
 * undefined FUN_10050030(void)
 * Address ranges: 10050030-100501c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050030(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *extraout_w11;
  byte abStack_810 [1024];
  uint auStack_410 [256];
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    iVar4 = *(int *)(param_1 + 0x108);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar4 == 0) {
      if ((*(int *)(iVar3 + 0x6c) != 0) || (*(int *)(iVar3 + 0x70) != 0)) goto LAB_100501a0;
      iVar4 = *(int *)(*(int *)(param_1 + 0xfc) + 0xf4);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x108);
      }
      uVar6 = 1;
    }
    else {
      uVar6 = *(uint *)(iVar3 + 200) >> 2 & 1;
    }
    if (uVar6 != 0) {
      if (iVar4 == 0) {
        FUN_100917d0(abStack_810,0,0x400);
        iVar4 = (*(code *)PTR_FUN_100ba048)(0,0,0x100,abStack_810);
        if (iVar4 == 0x100) {
          uVar6 = 0;
          do {
            iVar4 = uVar6 * 4;
            iVar3 = uVar6 * 4;
            iVar1 = uVar6 * 4;
            puVar2 = auStack_410 + uVar6;
            uVar6 = uVar6 + 1;
            *puVar2 = (uint)abStack_810[iVar1 + 2] |
                      ((uint)abStack_810[iVar3 + 1] | (abStack_810[iVar4] | 0xff00) << 8) << 8;
          } while (uVar6 < 0x100);
        }
        else {
          FUN_100917d0(auStack_410,0,0x400);
        }
      }
      else {
        FUN_10041540(iVar4,auStack_410);
      }
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,auStack_410);
    }
  }
LAB_100501a0:
  puVar2 = (uint *)(*(int *)(param_1 + 4) + 200);
  *puVar2 = *puVar2 & 0xfffffffb;
  return;
}

