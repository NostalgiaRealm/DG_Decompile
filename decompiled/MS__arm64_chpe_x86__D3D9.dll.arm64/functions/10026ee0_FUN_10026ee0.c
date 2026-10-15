/*
 * FUN_10026ee0 at 10026ee0
 * undefined FUN_10026ee0(void)
 * Address ranges: 10026ee0-1002707b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10026ee0(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  FUN_101325d0(param_1 + 0x430,0,0x348);
  if (*(int *)(param_1 + 4) != 0) {
    uVar7 = 0;
    do {
      iVar1 = uVar7 * 4;
      iVar2 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(param_1 + 0x430 + iVar1) = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 + 4);
    } while (uVar7 < 0xd2);
  }
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = 1;
  uVar5 = extraout_x1;
LAB_10026f9c:
  do {
    if (*(char *)(uVar7 + 0x10163100) != '\0') {
      if (uVar7 == 0x1a) {
        iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x933);
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        else if ((iVar1 == 1) && (*(int *)(*(int *)(param_1 + 0xc) + 0x92f) != 0)) {
          uVar6 = (ulonglong)*(uint *)(param_1 + (uVar7 + 0x10c) * 4);
        }
        else {
          uVar6 = 1;
        }
        uVar4 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),uVar5,uVar6);
        (*extraout_w11)(uVar4,0x1a,uVar6 & 0xffffffff);
        uVar7 = 0x1b;
        uVar5 = extraout_x1_00;
        goto LAB_10026f9c;
      }
      uVar4 = (*pcVar3)();
      (*extraout_w11_00)(uVar4,uVar7,*extraout_w8);
      uVar5 = extraout_x1_01;
    }
    uVar7 = uVar7 + 1;
    if (0xd1 < uVar7) {
      return 1;
    }
  } while( true );
}

