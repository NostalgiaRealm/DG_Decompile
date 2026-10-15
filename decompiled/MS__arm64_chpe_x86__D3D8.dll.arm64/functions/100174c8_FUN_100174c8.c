/*
 * FUN_100174c8 at 100174c8
 * undefined FUN_100174c8(void)
 * Address ranges: 100174c8-100175ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100174c8(int *param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  uint uVar6;
  
  uVar5 = 0x8876086c;
  if (param_4 != (uint *)0x0) {
    uVar2 = param_1[1];
    uVar5 = 0x88760866;
    if (uVar2 != 0) {
      iVar3 = *param_1;
      uVar6 = 0;
      do {
        iVar1 = iVar3 + uVar6 * 0x20;
        iVar4 = FUN_100ff610(iVar1,param_2,0x10);
        if (iVar4 == 0) {
          uVar2 = *(uint *)(iVar1 + 0x14);
          if (uVar2 == 0) {
            if (*param_4 < 4) {
              *param_4 = 4;
              return 0x88760867;
            }
            if (param_3 == (undefined4 *)0x0) {
              return 0x8876086c;
            }
            *param_3 = *(undefined4 *)(iVar1 + 0x10);
            uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar5);
          }
          else {
            if (*param_4 < uVar2) {
              *param_4 = uVar2;
              return 0x88760867;
            }
            if (param_3 == (undefined4 *)0x0) {
              return 0x8876086c;
            }
            FUN_100ff660(param_3,*(undefined4 *)(iVar1 + 0x10));
          }
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  return uVar5;
}

