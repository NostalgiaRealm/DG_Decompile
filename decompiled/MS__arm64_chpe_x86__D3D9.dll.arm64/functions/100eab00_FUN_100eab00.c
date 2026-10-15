/*
 * FUN_100eab00 at 100eab00
 * undefined FUN_100eab00(void)
 * Address ranges: 100eab00-100eaca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100eab00(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  uint local_50 [8];
  
  uVar5 = 0x8876086c;
  if ((param_2 < 8) && ((0xcfU >> (ulonglong)(param_2 & 0x1f) & 1) != 0 && param_2 != 0)) {
    uVar5 = 0;
    if (param_2 != *(uint *)(param_1 + 0x60)) {
      local_50[0] = 0;
      local_50[1] = 0x100;
      local_50[2] = 0x200;
      local_50[3] = 0x400;
      local_50[4] = 0x800;
      local_50[5] = 0x1000;
      iVar4 = *(int *)(param_1 + -100);
      uVar5 = 0x8876086c;
      piVar1 = (int *)&DAT_00006704;
      if (iVar4 != 0) {
        piVar1 = (int *)(iVar4 + 0x50);
      }
      if ((*(uint *)(*piVar1 + 0x40) & local_50[param_2]) != 0) {
        puVar2 = (uint *)&DAT_00000dd0;
        if (iVar4 != 0) {
          puVar2 = (uint *)(iVar4 + -0x58e4);
        }
        if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
          bVar3 = false;
          *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
        }
        else {
          bVar3 = true;
          iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
          if (iVar4 == 0) {
            FUN_100071d0(0);
          }
        }
        if (1 < *(int *)(DAT_10170ad0 + 0x7e0) - 2U) {
          uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                            (*(undefined4 *)(param_1 + -0x34),param_2 != 1);
          (*extraout_w11)(uVar5);
        }
        *(uint *)(param_1 + 0x60) = param_2;
        uVar5 = 0;
        if (bVar3) {
          (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
        }
        else {
          *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
        }
      }
    }
  }
  return uVar5;
}

