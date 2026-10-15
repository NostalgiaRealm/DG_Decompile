/*
 * FUN_1801a4380 at 1801a4380
 * undefined FUN_1801a4380(void)
 * Address ranges: 1801a4380-1801a44fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a4380(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *extraout_x11;
  longlong extraout_x15;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auVar11 [12];
  
  auVar11 = FUN_180104f10();
  lVar6 = auVar11._0_8_;
  lVar4 = extraout_x15 * -0x10;
  if (param_3 == 0) {
    FUN_180222c50(&stack0x00000000 + lVar4,0,0x1000);
  }
  else {
    uVar7 = 0;
    do {
      lVar10 = uVar7 * 4;
      uVar3 = (int)uVar7 * 4;
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      bVar2 = *(byte *)(param_3 + 1 + lVar10);
      *(float *)(&stack0x00000000 + (ulonglong)uVar3 * 4 + lVar4) =
           (float)*(byte *)(param_3 + 2 + lVar10);
      *(float *)(&stack0x00000000 + (ulonglong)(uVar3 + 1) * 4 + lVar4) = (float)bVar2;
      *(float *)(&stack0x00000000 + (ulonglong)(uVar3 + 2) * 4 + lVar4) =
           (float)*(byte *)(param_3 + lVar10);
      *(float *)(&stack0x00000000 + (ulonglong)(uVar3 + 3) * 4 + lVar4) =
           (float)*(byte *)(param_3 + 3 + lVar10);
    } while (uVar1 < 0x100);
  }
  uVar9 = *(undefined8 *)(lVar6 + 0x1cf20);
  lVar10 = *(longlong *)(lVar6 + 0x1cf18);
  uVar8 = *(undefined8 *)(lVar10 + 0x1508);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar5 = (*extraout_x11)(uVar9,&stack0xffffffffffffffe8 + lVar4,&stack0xffffffffffffffb0 + lVar4);
  if ((-1 < iVar5) &&
     (FUN_18020af80(uVar8,&stack0xffffffffffffffb8 + lVar4,lVar10 + 0x16d0,0x1000,
                    &stack0x00000000 + lVar4), *(longlong *)(&stack0xffffffffffffffc0 + lVar4) != 0)
     ) {
    FUN_18020aff8(uVar8,uVar9,lVar10 + 0x16d0,&stack0xffffffffffffffb8 + lVar4,auVar11._8_4_ << 0xc)
    ;
  }
  if (*(int *)(*(longlong *)(lVar6 + 0x1cf18) + 4) == 0x10de) {
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar6 + 0x1cf18) + 0x1508),
                  *(undefined8 *)(lVar6 + 0x1cf20),0,1,0);
  }
  return;
}

