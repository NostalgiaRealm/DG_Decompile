/*
 * FUN_1801058c8 at 1801058c8
 * undefined FUN_1801058c8(void)
 * Address ranges: 1801058c8-180105a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1801058c8(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  byte bVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  
  uVar6 = DAT_18024d928;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x6820;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar5 = (*extraout_x11)(uVar6,&DAT_1802290d0);
  uVar7 = 0x180224000;
  uVar9 = 0;
  local_58 = param_1 + 0x4000;
  lStack_50 = lVar1;
  while( true ) {
    lVar3 = lStack_50;
    lVar1 = local_58;
    if (uVar5 <= uVar9) {
      uVar9 = 0;
      bVar8 = 1;
      while( true ) {
        if (*(uint *)(lVar1 + 0x2830) <= uVar9) {
          return bVar8;
        }
        uVar6 = (*(code *)puVar2)(*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x6828) + (ulonglong)uVar9 * 8),uVar7);
        bVar4 = (*extraout_x11_01)(uVar6,lVar3);
        bVar8 = bVar4 & bVar8;
        if (bVar8 == 0) break;
        uVar9 = uVar9 + 1;
        uVar7 = extraout_x1;
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar6 = (*(code *)puVar2)();
        (*extraout_x11_02)(uVar6,lVar3);
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + 0x6828));
      *(undefined8 *)(param_1 + 0x6828) = 0;
      *(undefined8 *)(lVar1 + 0x2830) = 0;
      return 0;
    }
    (*(code *)puVar2)();
    local_60 = (*extraout_x11_00)(uVar6,&DAT_1802290d0,uVar9);
    if (local_60 == 0) break;
    auVar10 = FUN_18010be98(param_1 + 0x6828,&local_60);
    uVar7 = auVar10._8_8_;
    if ((auVar10._0_8_ & 1) == 0) {
      return 0;
    }
    uVar9 = uVar9 + 1;
  }
  return 0;
}

