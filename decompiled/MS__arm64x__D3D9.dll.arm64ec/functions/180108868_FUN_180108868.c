/*
 * FUN_180108868 at 180108868
 * undefined FUN_180108868(void)
 * Address ranges: 180108868-180108acb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180108868(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 uVar10;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  
  uVar8 = (ulonglong)param_2;
  *(uint *)(param_1 + 0xea8) = param_2;
  iVar5 = -0x7789f796;
  if ((&DAT_18024e840)[uVar8 * 0x4b] == 0) goto LAB_180108aa4;
  *(undefined8 *)(param_1 + 0xe98) = (&DAT_18024e840)[uVar8 * 0x4b];
  local_4c = param_3;
  lVar6 = FUN_18011d6c8();
  *(longlong *)(param_1 + 0xe10) = lVar6;
  if (lVar6 == 0) goto LAB_180108aa4;
  uVar7 = FUN_1801068c8(*(undefined8 *)(param_1 + 0xe28),*(undefined4 *)(param_1 + 0xea8));
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((uVar7 & 1) != 0) {
    iVar5 = -0x7fffbffb;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar4 = (*extraout_x11)();
    if (iVar4 == 0) {
      uVar10 = (&DAT_18024e850)[uVar8 * 0x4b];
      uVar1 = (&DAT_18024e85c)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x96];
      lVar6 = FUN_1802229a8(0x105a8);
      uVar8 = lVar6 + 0x17U & 0xfffffffffffffff0;
      *(longlong *)(uVar8 - 8) = lVar6;
      uVar10 = FUN_1801324d0(uVar8,uVar1,uVar10,0x100);
LAB_18010898c:
      *(undefined8 *)(param_1 + 0x28) = uVar10;
    }
    else if (iVar4 == 1) {
      uVar10 = (&DAT_18024e850)[uVar8 * 0x4b];
      uVar1 = (&DAT_18024e85c)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x96];
      lVar6 = FUN_1802229a8(0x101b8);
      uVar8 = lVar6 + 0x17U & 0xfffffffffffffff0;
      *(longlong *)(uVar8 - 8) = lVar6;
      uVar10 = FUN_180145150(uVar8,uVar1,uVar10,0x100);
      goto LAB_18010898c;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x10) = 0;
      *(undefined1 *)(param_1 + 0xe20) = 0;
      iVar5 = -0x7fffbffb;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xe18) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc) = 0xff000000;
      *(undefined4 *)(param_1 + 0xe1c) = 0xff000000;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x11) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x12) = *(undefined1 *)(DAT_18024d928 + 0x9fa)
      ;
      uVar10 = (*(code *)puVar2)(0x180224000);
      cVar3 = (*extraout_x11_00)(uVar10,param_5);
      if (cVar3 != '\0') {
        uVar10 = (*(code *)puVar2)(0x180224000);
        puVar9 = (undefined2 *)(*extraout_x11_01)(uVar10,auStack_50);
        *(undefined2 *)(param_1 + 0x20) = *puVar9;
        *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(puVar9 + 1);
        iVar5 = FUN_180108628(param_1,local_4c,param_4);
        if (-1 < iVar5) goto LAB_180108aa4;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_02)();
      }
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xe98) = 0;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + 0xe10) + -8));
  *(undefined8 *)(param_1 + 0xe10) = 0;
LAB_180108aa4:
  *(byte *)(param_1 + 0x2d0) = (byte)~(byte)((uint)iVar5 >> 0x18) >> 7;
  return iVar5;
}

