/*
 * FUN_1003f800 at 1003f800
 * undefined FUN_1003f800(void)
 * Address ranges: 1003f800-1003f99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003f800(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_2 == 0) {
    for (; DAT_100c2940 != 0; DAT_100c2940 = DAT_100c2940 + -1) {
      if (DAT_100c2940 == 1) {
        iVar1 = *DAT_100c2950;
        FUN_10003b78();
        FUN_10003cd0();
        FUN_100418e0(1);
        if (DAT_100c291c != 0) {
          DAT_100c291c = 0;
          (*(code *)PTR_FUN_100ba0a8)(DAT_100c2918);
          DAT_100c2918 = 0;
        }
        if (*(int *)(iVar1 + 0x118) != 0) {
          uVar3 = (*pcVar2)();
          (*extraout_w11)(uVar3);
        }
        iVar1 = DAT_100be0c0;
        if (DAT_100be0c0 != 0) {
          FUN_1008e1f8(DAT_100be0c0,0);
          (*(code *)PTR_FUN_100ba14c)(*(undefined4 *)(iVar1 + 0x310),0);
          FUN_1008cdc0(iVar1);
        }
      }
    }
    DAT_100c2940 = 0;
    (*(code *)PTR_FUN_100ba094)(DAT_100c2958);
    DAT_100c2958 = (undefined *)0x0;
  }
  else if (param_2 == 1) {
    DAT_100c2958 = &DAT_100be118;
    DAT_100c2954 = param_1;
    DAT_100c2a7c = param_1;
    (*(code *)PTR_FUN_100ba0ec)(&DAT_100be118);
    DAT_100be0e4 = &DAT_100be118;
    DAT_100be130 = 0;
    DAT_100bd4d0 = 0x100000001;
    DAT_100bd4d8 = 1;
    PTR_DAT_100bd4dc = s__dgVoodoo__100b3a60;
    DAT_100bd4e0 = 1;
  }
  return 1;
}

