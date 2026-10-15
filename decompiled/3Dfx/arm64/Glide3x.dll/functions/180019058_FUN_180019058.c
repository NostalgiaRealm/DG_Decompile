/*
 * FUN_180019058 at 180019058
 * undefined __cdecl FUN_180019058(longlong param_1, float * param_2, float * param_3, undefined8 param_4, ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8, ulonglong param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18, uint param_19, uint param_20, byte param_21)
 * Address ranges: 180019058-180019437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019058(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  ulonglong param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,uint param_14,uint param_15,uint param_16,uint param_17,
                  uint param_18,uint param_19,uint param_20,byte param_21)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 extraout_x1;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_b0 [2];
  float *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  local_b0[0] = 1;
  if (param_6 != 0) {
    local_b0[0] = 2;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
  uVar3 = FUN_18004d178(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3348),local_b0[0],
                        *(longlong *)(*(longlong *)(lVar6 + 0x1500) + 0x18),
                        *(longlong *)(*(longlong *)(lVar6 + 0x1508) + 0xb78),&local_70);
  if ((uVar3 & 1) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
    puVar4 = FUN_180047a18((longlong *)(lVar9 + 0x19c0),(byte *)&PTR_s_POSITION_18006f668,1);
    lVar6 = *(longlong *)(param_1 + 0x140);
    uVar7 = *(undefined8 *)(param_1 + (ulonglong)param_21 * 0x10 + 0xc10);
    *(undefined8 **)(lVar6 + 0x3400) = puVar4;
    *(undefined8 *)(lVar6 + 0x33b0) = uVar7;
    *(undefined8 *)(lVar6 + 0x33b8) = param_4;
    *(undefined4 *)(lVar6 + 0x340c) = 3;
    *(undefined1 *)(lVar6 + 0x345a) = 1;
    FUN_18004f208(*(longlong *)(*(longlong *)(lVar6 + 0x3340) + 0x1508),5);
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3414) = param_10;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3418) = param_11;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3434) = param_12;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3438) = param_13;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x343c) = 0;
    plVar5 = FUN_18004df88(*(longlong *)(lVar9 + 0x1938),(longlong *)&local_a8,param_16,0);
    local_90 = *plVar5;
    if (param_7 != 0) {
      FUN_18004ec28(*(ulonglong *)(lVar9 + 0x1508),param_7,0,0,4);
    }
    if (param_8 != 0) {
      plVar5 = FUN_18004df88(*(longlong *)(lVar9 + 0x1938),(longlong *)&local_a8,param_17,0);
      local_88 = *plVar5;
      FUN_18004ec28(*(ulonglong *)(lVar9 + 0x1508),param_8,0,0,4);
    }
    if (param_9 != 0) {
      plVar5 = FUN_18004df88(*(longlong *)(lVar9 + 0x1940),(longlong *)&local_a8,param_18,0);
      uVar2 = 0;
      local_98 = *plVar5;
      pfVar1 = param_2;
      if (param_20 != 0) {
        do {
          local_a8 = pfVar1;
          FUN_18004ec28(*(ulonglong *)(lVar9 + 0x1508),param_9,uVar2,0,0x10);
          uVar2 = uVar2 + 1;
          param_2 = local_a8;
          pfVar1 = local_a8;
        } while (uVar2 < param_20);
      }
    }
    plVar5 = &local_98;
    if (param_9 == 0) {
      plVar5 = (longlong *)0x0;
    }
    uVar2 = 1;
    if (param_8 != 0) {
      uVar2 = 2;
    }
    FUN_18004f918(*(longlong *)(lVar9 + 0x1508),uVar2,&local_90,0,plVar5);
    FUN_18004f018(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),1,
                  auStack_60);
    lVar8 = *(longlong *)(param_1 + 0x140);
    lVar6 = *(longlong *)(lVar8 + 0x3330);
    uVar2 = *(uint *)(lVar8 + 0x3338);
    plVar5 = FUN_18004df88(*(longlong *)(*(longlong *)(lVar8 + 0x3340) + 0x1930),
                           (longlong *)&local_a8,param_14,0);
    local_80 = *plVar5;
    FUN_18004ec28(*(ulonglong *)(lVar9 + 0x1508),param_5,0,0,0x80);
    if (param_6 != 0) {
      plVar5 = FUN_18004df88(*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1930),
                             (longlong *)&local_a8,param_15,0);
      local_78 = *plVar5;
      FUN_18004ec28(*(ulonglong *)(lVar9 + 0x1508),param_6,param_19,0,0x80);
    }
    plVar5 = *(longlong **)(lVar6 + (ulonglong)uVar2 * 0x20 + 0x6d0);
    (**(code **)(*plVar5 + 0xb8))
              (plVar5,1,auStack_68,local_b0,local_b0[0],&local_80,&DAT_180067750,0);
    FUN_18004f410(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),2,
                  local_70);
    FUN_18000e660(*(longlong *)(param_1 + 0x140),*(byte *)(*(longlong *)(param_1 + 0x140) + 0x3458))
    ;
    lVar6 = *(longlong *)(param_1 + 0x140);
    *(byte *)(lVar6 + 0x44f8) = *(byte *)(lVar6 + 0x44f8) | *(byte *)(lVar6 + 0x32f0);
    FUN_18000dea8(*(longlong *)(param_1 + 0x140),*(byte *)(*(longlong *)(param_1 + 0x140) + 0x3458),
                  0);
    local_a8 = (float *)0x0;
    uVar2 = FUN_180018fd0(param_1,extraout_x1,(longlong *)&local_a8);
    if (local_a8 != (float *)0x0) {
      FUN_180015878(param_1,param_2,param_3,local_a8 + (ulonglong)uVar2 * 4,(uint)param_21);
      if (*(int *)(*(longlong *)(param_1 + 0xc28) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xc28) + 0x34) = 0;
      }
    }
    local_a8 = *(float **)(*(longlong *)(param_1 + 0xc28) + 0x80);
    local_a0 = *(undefined4 *)(*(longlong *)(param_1 + 0xc28) + 0x30);
    uStack_9c = 0x10;
    FUN_18004f6b8(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),0,1
                  ,(longlong)&local_a8);
    FUN_18004ffc0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),4,1
                  ,uVar2,0);
  }
  return;
}

