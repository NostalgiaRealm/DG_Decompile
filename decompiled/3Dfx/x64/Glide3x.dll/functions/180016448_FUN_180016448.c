/*
 * FUN_180016448 at 180016448
 * undefined __fastcall FUN_180016448(longlong param_1, float * param_2, float * param_3, undefined8 param_4, ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8, ulonglong param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18, uint param_19, uint param_20, byte param_21)
 * Address ranges: 180016448-1800168d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016448(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  ulonglong param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,uint param_14,uint param_15,uint param_16,uint param_17,
                  uint param_18,uint param_19,uint param_20,byte param_21)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined7 uVar13;
  undefined8 uVar12;
  uint uVar14;
  int local_res8 [2];
  float *local_res10;
  float *local_res18;
  undefined4 uVar15;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined8 local_50 [3];
  
  local_res8[0] = (param_6 != 0) + 1;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
  local_res10 = param_2;
  local_res18 = param_3;
  cVar8 = FUN_180048890(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3348),local_res8[0],
                        *(undefined8 *)(*(longlong *)(lVar3 + 0x1500) + 0x18),
                        *(undefined8 *)(*(longlong *)(lVar3 + 0x1508) + 0xb78),&local_60);
  if (cVar8 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
    puVar10 = FUN_18004328c((longlong *)(lVar3 + 0x19c0),(byte *)&PTR_s_POSITION_18006d668,1);
    FUN_18000c6e8(*(longlong *)(param_1 + 0x140),5,puVar10,
                  *(undefined8 *)(param_1 + 0xc10 + (ulonglong)param_21 * 0x10),param_4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3414) = param_10;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3418) = param_11;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3434) = param_12;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3438) = param_13;
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x343c) = 0;
    plVar11 = FUN_1800493ac(*(longlong *)(lVar3 + 0x1938),&local_90,param_16,0);
    local_80 = *plVar11;
    if (param_7 != 0) {
      FUN_18004a068(*(longlong *)(lVar3 + 0x1508),param_7,0,0,4);
    }
    uVar6 = param_8;
    if (param_8 != 0) {
      plVar11 = FUN_1800493ac(*(longlong *)(lVar3 + 0x1938),&local_90,param_17,0);
      local_78 = *plVar11;
      FUN_18004a068(*(longlong *)(lVar3 + 0x1508),uVar6,0,0,4);
    }
    uVar7 = param_9;
    if (param_9 != 0) {
      plVar11 = FUN_1800493ac(*(longlong *)(lVar3 + 0x1940),&local_90,param_18,0);
      uVar9 = param_20;
      uVar14 = 0;
      local_98 = *plVar11;
      param_3 = local_res18;
      if (param_20 != 0) {
        do {
          FUN_18004a068(*(longlong *)(lVar3 + 0x1508),uVar7,(ulonglong)uVar14,0,0x10);
          uVar14 = uVar14 + 1;
          param_3 = local_res18;
        } while (uVar14 < uVar9);
      }
    }
    plVar11 = (longlong *)(-(ulonglong)(uVar7 != 0) & (ulonglong)&local_98);
    FUN_18004abfc(*(longlong *)(lVar3 + 0x1508),(uVar6 != 0) + 1,&local_80,0,plVar11);
    uVar15 = (undefined4)((ulonglong)plVar11 >> 0x20);
    FUN_18004a4e8(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),1,
                  local_50);
    lVar4 = *(longlong *)(param_1 + 0x140);
    uVar9 = *(uint *)(lVar4 + 0x3338);
    lVar5 = *(longlong *)(lVar4 + 0x3330);
    plVar11 = FUN_1800493ac(*(longlong *)(*(longlong *)(lVar4 + 0x3340) + 0x1930),&local_90,param_14
                            ,0);
    local_70 = *plVar11;
    FUN_18004a068(*(longlong *)(lVar3 + 0x1508),param_5,0,0,0x80);
    if (param_6 != 0) {
      plVar11 = FUN_1800493ac(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1930),
                              &local_90,param_15,0);
      local_68 = *plVar11;
      FUN_18004a068(*(longlong *)(lVar3 + 0x1508),param_6,(ulonglong)param_19,0,0x80);
    }
    plVar11 = *(longlong **)((ulonglong)uVar9 * 0x20 + 0x6d0 + lVar5);
    (**(code **)(*plVar11 + 0xb8))
              (plVar11,1,local_58,local_res8,CONCAT44(uVar15,local_res8[0]),&local_70,&DAT_1800647d0
               ,0);
    uVar12 = 0;
    FUN_18004a7e4(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),2,
                  local_60);
    uVar13 = (undefined7)((ulonglong)uVar12 >> 8);
    FUN_18000d1c4(*(longlong *)(param_1 + 0x140),*(char *)(*(longlong *)(param_1 + 0x140) + 0x3458))
    ;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x140) + 0x44f8);
    *pbVar1 = *pbVar1 | *(byte *)(*(longlong *)(param_1 + 0x140) + 0x32f0);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x140) + 0x3458);
    uVar12 = CONCAT71(uVar13,bVar2);
    FUN_18000ca68(*(longlong *)(param_1 + 0x140),bVar2,'\0');
    param_6 = 0;
    uVar9 = FUN_1800163a4(param_1,uVar12,(longlong *)&param_6);
    if (param_6 != 0) {
      FUN_180013608(param_1,local_res10,param_3,(float *)((ulonglong)uVar9 * 0x10 + param_6),
                    param_21);
      if (*(int *)(*(longlong *)(param_1 + 0xc28) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xc28) + 0x34) = 0;
      }
    }
    local_84 = 0x10;
    local_90 = *(longlong *)(*(longlong *)(param_1 + 0xc28) + 0x80);
    local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0xc28) + 0x30);
    FUN_18004a9cc(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),0,1
                  ,(longlong)&local_90);
    FUN_18004b1c0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508),4,1
                  ,uVar9,0);
  }
  return;
}

