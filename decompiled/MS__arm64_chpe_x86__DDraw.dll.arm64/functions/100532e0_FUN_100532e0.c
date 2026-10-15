/*
 * FUN_100532e0 at 100532e0
 * undefined FUN_100532e0(void)
 * Address ranges: 100532e0-100533b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100532e0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *extraout_w11;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3);
  if (param_2 == 0) {
LAB_10053398:
    uVar3 = FUN_1004edb0(*param_1,piVar5);
  }
  else {
    iVar1 = *(int *)(*param_1 + 4);
    uVar2 = *(uint *)(iVar1 + 0xb8);
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        piVar5 = (int *)(*(int *)(iVar1 + 0xb4) + uVar4 * 0x18);
        if ((*piVar5 == *param_1) && (piVar5[1] == param_2 || piVar5[1] == -1)) {
          piVar5 = piVar5 + 2;
          if (piVar5 != (int *)0x0) goto LAB_10053398;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    uVar3 = 0x88760248;
  }
  return uVar3;
}

