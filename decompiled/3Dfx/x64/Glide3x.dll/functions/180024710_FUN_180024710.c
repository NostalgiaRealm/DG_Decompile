/*
 * FUN_180024710 at 180024710
 * undefined __fastcall FUN_180024710(longlong param_1, float * param_2, float * param_3, longlong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, longlong param_9, byte param_10)
 * Address ranges: 180024710-180024915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024710(longlong param_1,float *param_2,float *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  longlong param_9,byte param_10)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float *local_38 [3];
  
  FUN_18000ef08(*(longlong *)(param_1 + 0x140),5,
                *(longlong *)(param_1 + 0xc98 + (ulonglong)param_10 * 0x10),
                *(longlong *)(param_1 + 0xc80 + (ulonglong)param_10 * 0x10),param_4);
  local_58 = param_7;
  local_50 = param_8;
  FUN_18004fa04(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),2,(longlong)&local_58,
                param_9);
  local_48 = param_5;
  uStack_40 = param_6;
  puVar7 = &local_48;
  FUN_18004f74c(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),0,2,(longlong)puVar7);
  pfVar6 = (float *)&DAT_00000004;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
  iVar3 = (**(code **)(*plVar2 + 0x70))
                    (plVar2,*(undefined8 *)(param_1 + 0xcb0),0,4,
                     (ulonglong)puVar7 & 0xffffffff00000000,local_38);
  if (-1 < iVar3) {
    FUN_180013608(param_1,param_2,param_3,local_38[0],param_10);
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0xcb0));
    pfVar6 = local_38[0];
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x140) + 0x44b8);
  *pbVar1 = *pbVar1 | *(byte *)(*(longlong *)(param_1 + 0x140) + 0x32f0);
  FUN_18000ea30(*(longlong *)(param_1 + 0x140));
  uVar5 = 0;
  uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338);
  FUN_18004f6f8(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),uVar4,0,pfVar6,
                (longlong *)(param_1 + 0xcb8));
  FUN_1800243dc(*(longlong *)(param_1 + 0x140) + 0x4260,uVar4,uVar5,pfVar6);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
  (**(code **)(*plVar2 + 0x68))(plVar2,4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_18004f74c(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),0,2,
                (longlong)&local_48);
  return;
}

