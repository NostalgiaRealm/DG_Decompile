/*
 * FUN_180034ac8 at 180034ac8
 * undefined __cdecl FUN_180034ac8(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180034ac8-180034b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034ac8(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  LPVOID local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  lVar1 = (param_2 & 0xffffffff) * 0x20;
  uVar7 = param_4[1];
  uVar6 = *param_4;
  uVar5 = 0;
  *(undefined8 *)(*param_1 + lVar1) = param_3;
  lVar4 = *param_1;
  *(undefined8 *)(lVar1 + lVar4 + 0x10) = uVar7;
  *(undefined8 *)(lVar1 + lVar4 + 8) = uVar6;
  pvVar2 = (LPVOID)thunk_FUN_1800609d8((ulonglong)
                                       (uint)(*(int *)((longlong)param_4 + 0xc) *
                                             *(int *)(param_4 + 1)));
  if (pvVar2 != (LPVOID)0x0) {
    local_68 = *(undefined4 *)param_4;
    uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
    local_40 = 0;
    local_80 = 0;
    local_60 = 0x100000001;
    uStack_58 = 0x10000003c;
    local_50 = 0x100000000;
    uStack_48 = 8;
    uStack_70 = 0x100;
    plVar3 = *(longlong **)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0);
    local_78 = pvVar2;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_68,&local_78,&local_80);
    uVar5 = local_80;
    thunk_FUN_180060a18(pvVar2);
  }
  *(undefined8 *)(lVar1 + *param_1 + 0x18) = uVar5;
  return;
}

