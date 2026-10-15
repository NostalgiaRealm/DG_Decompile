/*
 * FUN_1800daf98 at 1800daf98
 * undefined __fastcall FUN_1800daf98(longlong param_1, uint param_2, undefined8 param_3, uint param_4, uint param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)
 * Address ranges: 1800daf98-1800db222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800daf98(longlong param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 local_a8 [2];
  longlong local_a0 [2];
  float local_90 [3];
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  fVar2 = param_11;
  fVar1 = param_10;
  uVar6 = (ulonglong)param_2;
  if ((param_10 != 0.0) && (param_11 != 0.0)) {
    local_90[0] = 0.0;
    local_90[1] = 0.0;
    local_90[2] = (float)param_4;
    local_80 = 0;
    local_7c = 0x3f800000;
    lVar7 = uVar6 * 0x18c0;
    local_84 = (float)param_5;
    FUN_1800dc004(param_1,uVar6,local_90);
    FUN_1800dbc90(param_1,(ulonglong)param_2,(int *)&DAT_180100350,0);
    FUN_1800dbbbc(param_1,uVar6,(int *)&DAT_1801001b0,(int *)0x0,-1,'\0');
    FUN_1800dbe08(param_1,(ulonglong)param_2,(uint *)&DAT_180100328);
    FUN_1800dc3ec(param_1,(ulonglong)param_2,5,*(longlong *)(lVar7 + 0xe88 + param_1),
                  *(longlong *)(lVar7 + 0xe78 + param_1),*(longlong *)(lVar7 + 0xe60 + param_1),0);
    local_60 = 0;
    uVar8 = 4;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = param_3;
    FUN_1800dc4ec(param_1,(ulonglong)param_2,4,(longlong)&local_78,0);
    local_a8[0] = 0x10;
    param_10 = 0.0;
    puVar9 = (undefined8 *)(param_1 + 0xe98 + lVar7);
    puVar10 = puVar9;
    FUN_1800dc288(param_1,uVar6,uVar8,1,(longlong)puVar9,(longlong)local_a8,(longlong)&param_10);
    FUN_1800dc380(param_1,(ulonglong)param_2,0,0);
    uVar5 = *(uint *)(lVar7 + 0xea0 + param_1);
    plVar4 = *(longlong **)(lVar7 + 0x6b8 + param_1);
    if (0x400 < uVar5 + 10) {
      uVar5 = 0;
    }
    *(uint *)(lVar7 + 0xea0 + param_1) = uVar5 + 10;
    iVar3 = (**(code **)(*plVar4 + 0x70))
                      (plVar4,*puVar9,0,(uVar5 != 0) + '\x04',
                       (ulonglong)puVar10 & 0xffffffff00000000,local_a0);
    if (-1 < iVar3) {
      FUN_1800dfafc(plVar4,(undefined8 *)((ulonglong)uVar5 * 0x10 + local_a0[0]),param_4,param_5,
                    param_6,param_7,param_8,param_9,fVar1,fVar2);
      plVar4 = *(longlong **)(lVar7 + 0x6b8 + param_1);
      (**(code **)(*plVar4 + 0x78))(plVar4,*puVar9,0);
      plVar4 = *(longlong **)(lVar7 + 0x6b8 + param_1);
      (**(code **)(*plVar4 + 0x68))(plVar4,10,uVar5);
    }
  }
  return;
}

