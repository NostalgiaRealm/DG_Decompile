/*
 * FUN_180003678 at 180003678
 * undefined FUN_180003678(void)
 * Address ranges: 180003678-180003897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180003678(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [16];
  
  uVar7 = (ulonglong)param_2;
  *(uint *)(param_1 + 0xea8) = param_2;
  iVar4 = -0x7789f796;
  if ((&DAT_180253850)[uVar7 * 0x4b] == 0) goto LAB_18000386c;
  *(undefined8 *)(param_1 + 0xe98) = (&DAT_180253850)[uVar7 * 0x4b];
  lVar5 = FUN_1800118e0();
  *(longlong *)(param_1 + 0xe10) = lVar5;
  if (lVar5 == 0) goto LAB_18000386c;
  uVar6 = FUN_180001fe0(*(undefined8 *)(param_1 + 0xe28),*(undefined4 *)(param_1 + 0xea8));
  if ((uVar6 & 1) != 0) {
    iVar4 = -0x7fffbffb;
    iVar3 = (**(code **)(*(longlong *)(&DAT_180253850)[uVar7 * 0x4b] + 0x38))();
    if (iVar3 == 0) {
      uVar9 = (&DAT_180253860)[uVar7 * 0x4b];
      uVar1 = (&DAT_18025386c)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x96];
      lVar5 = FUN_180102f80(0x105a8);
      uVar7 = lVar5 + 0x17U & 0xfffffffffffffff0;
      *(longlong *)(uVar7 - 8) = lVar5;
      uVar9 = FUN_180025a10(uVar7,uVar1,uVar9,0x100);
LAB_180003784:
      *(undefined8 *)(param_1 + 0x28) = uVar9;
    }
    else if (iVar3 == 1) {
      uVar9 = (&DAT_180253860)[uVar7 * 0x4b];
      uVar1 = (&DAT_18025386c)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x96];
      lVar5 = FUN_180102f80(0x101b8);
      uVar7 = lVar5 + 0x17U & 0xfffffffffffffff0;
      *(longlong *)(uVar7 - 8) = lVar5;
      uVar9 = FUN_180036e30(uVar7,uVar1,uVar9,0x100);
      goto LAB_180003784;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x10) = 0;
      *(undefined1 *)(param_1 + 0xe20) = 0;
      iVar4 = -0x7fffbffb;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xe18) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc) = 0xff000000;
      *(undefined4 *)(param_1 + 0xe1c) = 0xff000000;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x11) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x12) = *(undefined1 *)(DAT_18024de60 + 0x9fa)
      ;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                        (*(longlong **)(param_1 + 0x28),param_5);
      if (cVar2 != '\0') {
        puVar8 = (undefined2 *)
                 (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                           (*(longlong **)(param_1 + 0x28),auStack_60);
        *(undefined2 *)(param_1 + 0x20) = *puVar8;
        *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(puVar8 + 1);
        iVar4 = FUN_180003428(param_1,param_3,param_4);
        if (-1 < iVar4) goto LAB_18000386c;
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xe98) = 0;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  FUN_180103118(*(undefined8 *)(*(longlong *)(param_1 + 0xe10) + -8));
  *(undefined8 *)(param_1 + 0xe10) = 0;
LAB_18000386c:
  *(byte *)(param_1 + 0x2d0) = (byte)~(byte)((uint)iVar4 >> 0x18) >> 7;
  return iVar4;
}

