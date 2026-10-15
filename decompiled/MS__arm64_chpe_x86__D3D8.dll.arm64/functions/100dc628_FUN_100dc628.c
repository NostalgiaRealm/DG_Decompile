/*
 * FUN_100dc628 at 100dc628
 * undefined FUN_100dc628(void)
 * Address ranges: 100dc628-100dc86f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dc628(undefined8 param_1,undefined4 *param_2,int *param_3,char param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined4 local_110 [2];
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_98;
  undefined1 auStack_90 [88];
  undefined4 local_38;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_4 == '\0') {
    (*(code *)PTR_FUN_101341f8)(*param_2,&local_108);
    (*(code *)PTR_FUN_101341b8)(*param_2,&local_f8);
    (*(code *)PTR_FUN_10134280)
              (*param_2,0,0,0,((*param_3 - local_108) - local_f0) + local_100 + local_f8,
               ((iStack_fc - iStack_104) - iStack_ec) + iStack_f4 + param_3[1],0x216);
  }
  else {
    local_110[0] = 0;
    local_a0 = *(undefined8 *)(param_3 + 4);
    uStack_a8 = *(undefined8 *)(param_3 + 2);
    local_b0 = *(undefined8 *)param_3;
    local_98 = param_3[6];
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(uVar2,local_110);
    if (-1 < iVar3) {
      uVar2 = (*pcVar1)();
      iVar3 = (*extraout_w11_00)(uVar2,auStack_90);
      if (-1 < iVar3) {
        uStack_d8 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        local_e0 = 0x28;
        local_c0 = 0;
        iVar3 = (*(code *)PTR_FUN_101341d8)(local_38,&local_e0);
        if (iVar3 != 0) {
          local_b0 = CONCAT44((int)uStack_d0 - (int)uStack_d8,uStack_d8._4_4_ - local_e0._4_4_);
        }
      }
      uVar2 = (*pcVar1)();
      (*extraout_w11_01)(uVar2);
    }
    uVar2 = (*pcVar1)();
    (*extraout_w11_02)(uVar2,&local_b0);
  }
  piVar4 = param_3 + 4;
  uVar2 = (*pcVar1)();
  (*extraout_w11_03)(uVar2,2,*param_3,param_3[1],*piVar4);
  return;
}

