/*
 * FUN_10054a08 at 10054a08
 * undefined FUN_10054a08(void)
 * Address ranges: 10054a08-10054b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10054a08(undefined8 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar8;
  
  param_2[0] = 0;
  param_2[1] = 0;
  uVar3 = FUN_1008cfc8();
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (uVar3 != 0) {
    uVar8 = 0;
    if (*(uint *)(uVar3 + 0x58) != 0) {
      pcVar7 = FUN_100a8e78;
      uVar4 = uVar3;
      do {
        iVar1 = *(int *)(*(int *)(uVar3 + 0x54) + uVar8 * 4);
        if (iVar1 != 0) {
          (*pcVar2)(uVar4,pcVar7);
          uVar4 = (*extraout_w11)(iVar1);
          pcVar7 = (code *)0x0;
          if (uVar4 == 1) {
            uVar5 = (*pcVar2)();
            iVar6 = (*extraout_w11_00)(uVar5);
            (*pcVar2)();
            uVar4 = (*extraout_w11_01)(iVar1,iVar6);
            pcVar7 = (code *)0x0;
            if ((uVar4 & 0xff) != 0) {
              param_2[1] = iVar6;
              *param_2 = iVar1;
              break;
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(uVar3 + 0x58));
    }
    FUN_1008d9d0(uVar3);
  }
  return param_2;
}

