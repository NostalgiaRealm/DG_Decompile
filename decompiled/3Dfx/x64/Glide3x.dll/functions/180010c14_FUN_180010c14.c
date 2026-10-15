/*
 * FUN_180010c14 at 180010c14
 * undefined __fastcall FUN_180010c14(longlong param_1, char param_2, char param_3, uint param_4)
 * Address ranges: 180010c14-180010c8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010c14(longlong param_1,char param_2,char param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  RECT local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  RECT local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = plVar1[0x14];
  cVar3 = (**(code **)(*plVar1 + 0x70))(plVar1,&local_88);
  if (cVar3 != '\0') {
    local_58.left = local_88.left;
    local_58.top = local_88.top;
    local_58.right = local_88.right;
    local_58.bottom = local_88.bottom;
    local_48 = local_78;
    uStack_40 = uStack_70;
    local_38 = local_68;
    uStack_30 = uStack_60;
    FUN_180005630(*(longlong *)(param_1 + 0x30),lVar2,&local_58,param_4,param_3,param_2);
  }
  return;
}

