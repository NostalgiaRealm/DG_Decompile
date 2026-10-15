/*
 * FUN_180020630 at 180020630
 * undefined8 __fastcall FUN_180020630(longlong * param_1)
 * Address ranges: 180020630-1800207d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180020630(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined7 extraout_var;
  ulonglong uVar6;
  PVOID pvVar7;
  undefined8 uVar8;
  undefined4 extraout_var_00;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  iVar4 = *(int *)(*(longlong *)(param_1[1] + 8) + 0x3f);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 6) = iVar4;
  bVar2 = FUN_18001fb9c((longlong)param_1,param_1);
  uVar6 = CONCAT71(extraout_var,bVar2);
  if (bVar2) {
    lVar1 = param_1[1];
    local_68 = *(undefined4 *)(lVar1 + 0xb0);
    uStack_64 = *(undefined4 *)(lVar1 + 0xb4);
    local_38 = *(undefined8 *)(lVar1 + 0xb0);
    uStack_60 = (undefined4)param_1[6];
    uStack_5c = *(undefined4 *)(lVar1 + 0xa8);
    local_58 = *(undefined4 *)(lVar1 + 0xac);
    if ((*(char *)(lVar1 + 0xec) == '\0') || (uStack_54 = 0x400, 0x3ff < *(uint *)(lVar1 + 0xa8))) {
      uStack_54 = *(undefined4 *)(lVar1 + 0xa8);
    }
    uStack_30 = CONCAT44(uStack_5c,uStack_60);
    uStack_50 = 0;
    local_48 = 6;
    local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x54));
    uStack_20 = 0;
    uStack_10 = local_40;
    uStack_1c = 7;
    local_14 = 7;
    local_18 = 9;
    local_28 = local_58;
    uStack_24 = uStack_54;
    cVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_68,&local_38);
    lVar1 = param_1[1];
    if (cVar3 != '\0') {
      FUN_180020fb8(param_1,lVar1 + 0x1170,'\x01');
      uVar6 = FUN_180050234(*(longlong *)(param_1[1] + 0x2978),param_1[2]);
      *(char *)((longlong)param_1 + 0x12e) = (char)uVar6;
      *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x25) = 0;
      *(undefined2 *)((longlong)param_1 + 300) = 0;
      DAT_18006c888 = param_1;
      pvVar7 = AddVectoredExceptionHandler(1,FUN_1800203b0);
      param_1[0x27] = (longlong)pvVar7;
      uVar8 = FUN_18004f8e4(*(longlong *)(param_1[1] + 0x2978),(longlong)param_1);
      return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
    uVar5 = FUN_1800500ec(*(longlong **)(lVar1 + 0x2978),*(longlong *)(lVar1 + 0xa0),
                          (longlong)param_1);
    uVar6 = CONCAT44(extraout_var_00,uVar5);
    param_1[2] = 0;
  }
  return uVar6 & 0xffffffffffffff00;
}

