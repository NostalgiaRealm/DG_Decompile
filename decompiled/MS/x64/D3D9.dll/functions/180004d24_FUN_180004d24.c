/*
 * FUN_180004d24 at 180004d24
 * ulonglong __fastcall FUN_180004d24(longlong * param_1, uint param_2, uint param_3, longlong param_4, undefined8 param_5)
 * Address ranges: 180004d24-180004f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180004d24(longlong *param_1,uint param_2,uint param_3,longlong param_4,
                       undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  
  uVar9 = (ulonglong)param_2;
  *(uint *)(param_1 + 0x1d5) = param_2;
  uVar12 = 0x8876086a;
  if ((&DAT_1801128e0)[uVar9 * 0x4b] == 0) goto LAB_180004f60;
  param_1[0x1d3] = (&DAT_1801128e0)[uVar9 * 0x4b];
  FUN_1800fa780(local_res8);
  lVar6 = FUN_1800fbccc(0x87c8);
  puVar11 = (undefined4 *)(lVar6 + 0x17U & 0xfffffffffffffff0);
  *(longlong *)(puVar11 + -2) = lVar6;
  FUN_1800fbea0((undefined1 *)puVar11,0,0x87b0);
  puVar11 = FUN_18001dc54(puVar11);
  param_1[0x1c2] = (longlong)puVar11;
  if (puVar11 != (undefined4 *)0x0) {
    bVar3 = FUN_180002178(param_1[0x1c5],(ulonglong)*(uint *)(param_1 + 0x1d5));
    if (bVar3) {
      uVar12 = 0x80004005;
      iVar5 = (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar9 * 0x4b] + 0x38))();
      if (iVar5 == 0) {
        lVar6 = *(longlong *)(&DAT_1801128f0 + uVar9 * 600);
        uVar1 = (&DAT_1801128fc)[(ulonglong)*(uint *)(param_1 + 0x1d5) * 0x96];
        lVar7 = FUN_1800fbccc(0x105a8);
        puVar10 = (undefined8 *)(lVar7 + 0x17U & 0xfffffffffffffff0);
        puVar10[-1] = lVar7;
        puVar10 = FUN_180033f10(puVar10,uVar1,lVar6,0x100);
LAB_180004e6c:
        param_1[5] = (longlong)puVar10;
      }
      else if (iVar5 == 1) {
        uVar2 = *(undefined8 *)(&DAT_1801128f0 + uVar9 * 600);
        uVar1 = (&DAT_1801128fc)[(ulonglong)*(uint *)(param_1 + 0x1d5) * 0x96];
        lVar6 = FUN_1800fbccc(0x101b8);
        puVar10 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff0);
        puVar10[-1] = lVar6;
        puVar10 = FUN_180041800(puVar10,uVar1,uVar2,0x100);
        goto LAB_180004e6c;
      }
      if (param_1[5] != 0) {
        *(undefined1 *)(param_1[5] + 0x10) = 0;
        *(undefined1 *)(param_1 + 0x1c4) = 0;
        *(undefined4 *)(param_1[5] + 8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x1c3) = 0xffffffff;
        *(undefined4 *)(param_1[5] + 0xc) = 0xff000000;
        *(undefined4 *)((longlong)param_1 + 0xe1c) = 0xff000000;
        *(undefined1 *)(param_1[5] + 0x11) = 0;
        *(undefined1 *)(param_1[5] + 0x12) = *(undefined1 *)(DAT_180111f20 + 0x9fa);
        cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],param_5);
        if (cVar4 != '\0') {
          puVar8 = (undefined2 *)
                   (**(code **)(*(longlong *)param_1[5] + 0x20))((longlong *)param_1[5],local_res10)
          ;
          *(undefined2 *)(param_1 + 4) = *puVar8;
          *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(puVar8 + 1);
          uVar9 = FUN_180004a58(param_1,param_3,param_4);
          uVar12 = uVar9 & 0xffffffff;
          if (-1 < (int)uVar9) goto LAB_180004f56;
          (**(code **)(*(longlong *)param_1[5] + 0x18))();
        }
        (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = 0;
      }
    }
    param_1[0x1d3] = 0;
    param_1[0x1d4] = 0;
    FUN_1800fbdd4(*(LPVOID *)(param_1[0x1c2] + -8));
    param_1[0x1c2] = 0;
  }
LAB_180004f56:
  FUN_1800fa7bc();
LAB_180004f60:
  *(byte *)(param_1 + 0x5a) = (byte)(uVar12 >> 0x1f) ^ 1;
  return uVar12;
}

