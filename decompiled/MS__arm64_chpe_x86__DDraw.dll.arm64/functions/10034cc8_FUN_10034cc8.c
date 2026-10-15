/*
 * FUN_10034cc8 at 10034cc8
 * undefined FUN_10034cc8(void)
 * Address ranges: 10034cc8-10034e0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10034cc8(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  if (DAT_100c291c == 0) {
    DAT_100c2918 = (*(code *)PTR_FUN_100ba0f4)(&DAT_100b3a70);
    if (DAT_100c2918 != 0) {
      iVar2 = (*(code *)PTR_FUN_100ba0d0)(DAT_100c2918,s_GetD3DInterface_100b3a80);
      if ((iVar2 != 0) &&
         (iVar2 = (*(code *)PTR_FUN_100ba0d0)(DAT_100c2918,s_GetD3DVersion_100b3a90),
         pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, iVar2 != 0)) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        iVar2 = (*extraout_w11)();
        if (iVar2 == 0x287) {
          (*pcVar1)();
          DAT_100c291c = (*extraout_w11_00)();
          uVar3 = (*pcVar1)();
          (*extraout_w11_01)(uVar3,DAT_100c2958);
          uVar3 = (*pcVar1)();
          (*extraout_w11_02)(uVar3,&DAT_100bd4d0);
          goto LAB_10034ddc;
        }
      }
      (*(code *)PTR_FUN_100ba0a8)(DAT_100c2918);
      DAT_100c2918 = 0;
    }
    uVar4 = 0;
  }
  else {
LAB_10034ddc:
    uVar4 = 1;
  }
  return uVar4;
}

