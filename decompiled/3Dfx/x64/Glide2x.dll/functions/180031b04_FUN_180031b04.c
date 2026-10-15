/*
 * FUN_180031b04 at 180031b04
 * undefined __fastcall FUN_180031b04(longlong param_1, float * param_2, float * param_3, longlong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, longlong param_9, byte param_10)
 * Address ranges: 180031b04-180031d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031b04(longlong param_1,float *param_2,float *param_3,longlong param_4,
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
  
  FUN_18001c07c(*(longlong *)(param_1 + 0x140),5,
                *(longlong *)(param_1 + 0x698 + (ulonglong)param_10 * 0x10),
                *(longlong *)(param_1 + 0x680 + (ulonglong)param_10 * 0x10),param_4);
  local_58 = param_7;
  local_50 = param_8;
  FUN_18004d3f8(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),2,(longlong)&local_58,
                param_9);
  local_48 = param_5;
  uStack_40 = param_6;
  puVar7 = &local_48;
  FUN_18004d140(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),0,2,(longlong)puVar7);
  pfVar6 = (float *)&DAT_00000004;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  iVar3 = (**(code **)(*plVar2 + 0x70))
                    (plVar2,*(undefined8 *)(param_1 + 0x6b0),0,4,
                     (ulonglong)puVar7 & 0xffffffff00000000,local_38);
  if (-1 < iVar3) {
    FUN_1800201c4(param_1,param_2,param_3,local_38[0],param_10);
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
    (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x6b0));
    pfVar6 = local_38[0];
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x140) + 0x3b18);
  *pbVar1 = *pbVar1 | *(byte *)(*(longlong *)(param_1 + 0x140) + 0x3170);
  FUN_18001bbb0(*(longlong *)(param_1 + 0x140));
  uVar5 = 0;
  uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8);
  FUN_18004d0ec(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),uVar4,0,pfVar6,
                (longlong *)(param_1 + 0x6b8));
  FUN_180031918(*(longlong *)(param_1 + 0x140) + 0x3ae0,uVar4,uVar5,pfVar6);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  (**(code **)(*plVar2 + 0x68))(plVar2,4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_18004d140(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),0,2,
                (longlong)&local_48);
  return;
}

