/*
 * FUN_10054830 at 10054830
 * undefined FUN_10054830(void)
 * Address ranges: 10054830-10054a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_10054830(int param_1,int *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  code *extraout_w11;
  undefined8 local_80;
  int iStack_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  uStack_48 = *(undefined8 *)(param_2 + 2);
  local_50 = *(undefined8 *)param_2;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(param_1);
  local_80 = 0;
  iStack_78 = *(int *)(iVar2 + 0xc);
  iStack_74 = *(int *)(iVar2 + 8);
  (*(code *)PTR_FUN_100ba244)(auStack_40,param_2,&local_80);
  iVar3 = (*(code *)PTR_FUN_100ba1d8)(auStack_40,param_2);
  if ((((iVar3 == 0) && ((*(uint *)(iVar2 + 0x68) & 0x210) != 0)) &&
      ((*(uint *)(*(int *)(param_1 + 0xfc) + 0x104) >> 4 & 1) != 0)) &&
     ((iVar2 = FUN_10038010(*(int *)(param_1 + 0xfc),0), iVar2 != 0 &&
      (iVar2 = (*(code *)PTR_FUN_100ba1ec)(iVar2,&local_60), iVar2 != 0)))) {
    uStack_68 = *(undefined8 *)(param_2 + 2);
    local_70 = *(undefined8 *)param_2;
    (*(code *)PTR_FUN_100ba26c)(&local_70,-*param_2,-param_2[1]);
    iVar2 = (*(code *)PTR_FUN_100ba1d8)(&local_60,&local_70);
    if (iVar2 == 0) {
      uStack_68 = *(undefined8 *)(param_2 + 2);
      local_70 = *(undefined8 *)param_2;
      (*(code *)PTR_FUN_100ba26c)
                (&local_70,-(((local_60 - iStack_78) + local_58) / 2),
                 -(((iStack_5c - iStack_74) + iStack_54) / 2));
      (*(code *)PTR_FUN_100ba244)(auStack_30,&local_80,&local_70);
      iVar2 = (*(code *)PTR_FUN_100ba1d8)(auStack_30,&local_70);
      local_80 = local_70;
      if (iVar2 == 0) goto LAB_100549ec;
    }
    else {
      uStack_68 = CONCAT44(iStack_74,iStack_78);
    }
    local_50 = local_80;
    uStack_48 = uStack_68;
  }
LAB_100549ec:
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}

