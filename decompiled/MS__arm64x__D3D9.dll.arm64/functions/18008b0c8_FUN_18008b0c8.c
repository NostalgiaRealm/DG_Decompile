/*
 * FUN_18008b0c8 at 18008b0c8
 * undefined FUN_18008b0c8(void)
 * Address ranges: 18008b0c8-18008b30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_18008b0c8(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,uint param_5,
             undefined8 param_6,uint param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [16];
  uint local_90;
  uint local_88;
  short local_84;
  short local_82;
  undefined4 local_7c;
  undefined1 auStack_68 [16];
  uint local_58;
  uint local_50;
  short local_4c;
  short local_4a;
  undefined4 local_44;
  
  *param_2 = (longlong)(param_4 + 0xc);
  param_2[1] = (longlong)(param_3 + 0xc);
  lVar8 = *(longlong *)((longlong)param_4 + 0x7c);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)((longlong)param_4 + 0x74);
  }
  param_2[2] = lVar8;
  plVar3 = *(longlong **)((longlong)param_3 + 0x7c);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_3 + 0x74);
  }
  param_2[3] = (longlong)plVar3;
  lVar8 = (**(code **)(*plVar3 + 0x50))(plVar3,auStack_a0);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar8 + 0x20);
  uVar4 = (**(code **)(*(longlong *)param_2[2] + 0x50))((longlong *)param_2[2],auStack_a0);
  uVar6 = *(undefined4 *)(uVar4 + 0x20);
  *(undefined4 *)(param_2 + 4) = 3;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
  if ((*(int *)((longlong)param_4 + 0x2c) != 0) || (*(int *)((longlong)param_3 + 0x2c) != 0)) {
    uVar7 = 0;
    uVar6 = 3;
    goto LAB_18008b1ac;
  }
  uVar4 = (**(code **)(*param_4 + 0xa8))(param_4);
  if ((uVar4 & 0xff) == 0) {
    uVar4 = (**(code **)(*param_3 + 0xa8))(param_3);
    uVar7 = (undefined1)uVar4;
    if ((uVar4 & 0xff) != 0) goto LAB_18008b198;
  }
  else {
LAB_18008b198:
    uVar7 = 1;
  }
  uVar6 = (undefined4)param_2[4];
LAB_18008b1ac:
  *(undefined1 *)(param_2 + 0xb) = uVar7;
  *(bool *)((longlong)param_2 + 0x5b) = *(int *)((longlong)param_4 + 0x44) - 3U < 3;
  puVar5 = (undefined8 *)FUN_1800a0ee0(uVar4,auStack_68,param_3,param_4,param_9,param_10,uVar6);
  uVar11 = *puVar5;
  uVar10 = puVar5[3];
  uVar9 = puVar5[2];
  *(undefined8 *)((longlong)param_2 + 0x3c) = puVar5[1];
  *(undefined8 *)((longlong)param_2 + 0x34) = uVar11;
  *(undefined8 *)((longlong)param_2 + 0x4c) = uVar10;
  *(undefined8 *)((longlong)param_2 + 0x44) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(puVar5 + 4);
  (**(code **)(*(longlong *)param_2[3] + 0x50))((longlong *)param_2[3],auStack_a0);
  (**(code **)(*(longlong *)param_2[2] + 0x50))((longlong *)param_2[2],auStack_68);
  if ((((*(int *)((longlong)param_2 + 0x34) != 0) || ((int)param_2[7] != 0)) ||
      (*(uint *)((longlong)param_2 + 0x3c) != local_90 >> (ulonglong)(param_5 & 0x1f))) ||
     (bVar2 = true, *(uint *)(param_2 + 8) != local_88 >> (ulonglong)(param_5 & 0x1f))) {
    bVar2 = false;
  }
  if (((*(int *)((longlong)param_2 + 0x44) != 0) || ((int)param_2[9] != 0)) ||
     ((*(uint *)((longlong)param_2 + 0x4c) != local_58 >> (ulonglong)(param_7 & 0x1f) ||
      (bVar1 = true, *(uint *)(param_2 + 10) != local_50 >> (ulonglong)(param_7 & 0x1f))))) {
    bVar1 = false;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_44;
  *(undefined4 *)(param_2 + 6) = local_7c;
  *(bool *)((longlong)param_2 + 0x5a) = bVar1 && bVar2;
  if (((!bVar1) || (!bVar2)) ||
     ((local_4a != 1 || (((local_82 != 1 || (local_4c != 1)) || (uVar7 = 1, local_84 != 1)))))) {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x59) = uVar7;
  return param_2;
}

