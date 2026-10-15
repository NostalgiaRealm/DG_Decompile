/*
 * FUN_180033de8 at 180033de8
 * undefined __cdecl FUN_180033de8(longlong param_1, float * param_2, float * param_3, longlong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, longlong param_9, byte param_10)
 * Address ranges: 180033de8-180033f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033de8(longlong param_1,float *param_2,float *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  longlong param_9,byte param_10)

{
  int iVar1;
  longlong *plVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float *local_50 [2];
  
  lVar5 = param_1 + (ulonglong)param_10 * 0x10;
  FUN_18001c268(*(longlong *)(param_1 + 0x140),5,*(longlong *)(lVar5 + 0x698),
                *(longlong *)(lVar5 + 0x680),param_4);
  local_70 = param_7;
  uStack_68 = param_8;
  FUN_180050930(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),2,(longlong)&local_70,
                param_9);
  local_60 = param_5;
  uStack_58 = param_6;
  FUN_1800506c8(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),0,2,
                (longlong)&local_60);
  pfVar4 = (float *)&DAT_00000004;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(param_1 + 0x6b0),0,4,0,local_50);
  if (-1 < iVar1) {
    FUN_180021598(param_1,param_2,param_3,local_50[0],(uint)param_10);
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
    (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x6b0),0);
    pfVar4 = local_50[0];
  }
  lVar5 = *(longlong *)(param_1 + 0x140);
  *(byte *)(lVar5 + 0x3b18) = *(byte *)(lVar5 + 0x3b18) | *(byte *)(lVar5 + 0x3170);
  FUN_18001bc28(*(longlong *)(param_1 + 0x140));
  uVar3 = 0;
  FUN_180050680(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                *(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),0,pfVar4,
                (longlong *)(param_1 + 0x6b8));
  FUN_180033d58(*(longlong *)(param_1 + 0x140) + 0x3ae0,extraout_x1,uVar3,pfVar4);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  (**(code **)(*plVar2 + 0x68))(plVar2,4,0);
  local_60 = 0;
  uStack_58 = 0;
  FUN_1800506c8(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),0,2,
                (longlong)&local_60);
  return;
}

