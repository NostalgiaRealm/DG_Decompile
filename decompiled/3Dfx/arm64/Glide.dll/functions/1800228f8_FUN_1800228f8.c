/*
 * FUN_1800228f8 at 1800228f8
 * undefined8 __cdecl FUN_1800228f8(longlong * param_1)
 * Address ranges: 1800228f8-180022a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800228f8(longlong *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  PVOID pvVar5;
  longlong lVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(*(longlong *)(param_1[1] + 8) + 0x3f);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 6) = iVar1;
  uVar4 = FUN_180022060((longlong)param_1,param_1);
  if ((uVar4 & 1) != 0) {
    lVar6 = param_1[1];
    local_70 = *(undefined4 *)(lVar6 + 0xb0);
    uStack_6c = *(undefined4 *)(lVar6 + 0xb4);
    local_40 = *(undefined8 *)(lVar6 + 0xb0);
    uStack_68 = (undefined4)param_1[6];
    uStack_64 = *(undefined4 *)(lVar6 + 0xa8);
    local_60 = *(undefined4 *)(lVar6 + 0xac);
    if ((*(char *)(lVar6 + 0xec) == '\0') || (local_5c = 0x400, 0x3ff < *(uint *)(lVar6 + 0xa8))) {
      local_5c = *(undefined4 *)(lVar6 + 0xa8);
    }
    local_58 = 0;
    local_50 = 6;
    uStack_38 = CONCAT44(uStack_64,uStack_68);
    uStack_30 = CONCAT44(local_5c,local_60);
    uStack_28 = 0;
    local_48 = CONCAT31(local_48._1_3_,*(undefined1 *)(*(longlong *)(lVar6 + 8) + 0x54));
    local_18 = local_48;
    uStack_24 = 7;
    local_20 = 9;
    uStack_1c = 7;
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_70,&local_40);
    lVar6 = param_1[1];
    if (cVar2 != '\0') {
      FUN_180023680(param_1,lVar6 + 0x1170,'\x01');
      bVar3 = FUN_1800541a0(*(longlong *)(param_1[1] + 0x2978),param_1[2]);
      *(undefined4 *)(param_1 + 0x25) = 0;
      param_1[0x26] = -1;
      DAT_18006c8d0 = param_1;
      *(bool *)((longlong)param_1 + 0x12e) = bVar3;
      *(undefined2 *)((longlong)param_1 + 300) = 0;
      pvVar5 = AddVectoredExceptionHandler(1,FUN_180022658);
      param_1[0x27] = (longlong)pvVar5;
      FUN_1800532c0(*(longlong *)(param_1[1] + 0x2978),(longlong)param_1);
      return 1;
    }
    FUN_180053f28(*(longlong **)(lVar6 + 0x2978),*(longlong *)(lVar6 + 0xa0),(longlong)param_1);
    param_1[2] = 0;
  }
  return 0;
}

