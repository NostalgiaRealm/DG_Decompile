/*
 * FUN_10003490 at 10003490
 * undefined FUN_10003490(void)
 * Address ranges: 10003490-100035e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003490(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulonglong extraout_x1;
  uint uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar6 [16];
  
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  FUN_10081f10(param_1 + 0x290,0,0x264);
  if (*(int *)(param_1 + 4) != 0) {
    uVar5 = 0;
    do {
      iVar1 = uVar5 * 4;
      iVar2 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(param_1 + 0x290 + iVar1) = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 + 4);
    } while (uVar5 < 0x99);
  }
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = 1;
LAB_10003544:
  do {
    if (*(char *)(uVar5 + 0x1009e730) != '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      if (uVar5 == 0x1a) {
        auVar6 = FUN_10001d70(param_1,*(undefined4 *)(param_1 + uVar5 * 4 + 0x290));
        (*pcVar4)(auVar6._0_8_,auVar6._8_8_,auVar6._0_8_ & 0xffffffff);
        (*extraout_w11)(uVar3,0x1a);
        uVar5 = 0x1b;
        goto LAB_10003544;
      }
      (*pcVar4)();
      (*extraout_w11_00)(uVar3,uVar5,extraout_x1 & 0xffffffff);
    }
    uVar5 = uVar5 + 1;
    if (0x98 < uVar5) {
      return 1;
    }
  } while( true );
}

