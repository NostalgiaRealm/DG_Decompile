/*
 * FUN_10055000 at 10055000
 * undefined FUN_10055000(void)
 * Address ranges: 10055000-10055227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10055000(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auStack_b0 [8];
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  uVar7 = FUN_10037888(auStack_b0);
  local_a8[0] = *(int *)(param_1 + 0xfc);
  if ((local_a8[0] == 0) ||
     (piVar4 = (int *)FUN_10055228(uVar7,local_a8),
     pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, piVar4 == (int *)0x0)) {
    uVar7 = 0;
  }
  else {
    puVar1 = (undefined4 *)*piVar4;
    if ((*(char *)(puVar1 + 4) != '\0') && (param_3 != 0)) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(param_1);
      if ((*(uint *)(iVar5 + 0x68) >> 9 & 1) != 0) {
        if (*(char *)((int)puVar1 + 0x11) != '\0') {
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_58 = 0;
          local_60 = 0;
          uStack_48 = 0;
          local_a0 = 100;
          local_50 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          local_40 = 0;
          FUN_1004b060(param_1,0,0,0,0x400,&local_a0);
          *(char *)((int)puVar1 + 0x11) = '\0';
        }
        (*pcVar3)();
        iVar5 = (*extraout_w11_00)(param_3);
        if (((*(uint *)(iVar5 + 0x68) ^ 0xffffffff) & 0x4040) == 0) {
          if ((puVar1[2] != 0) && (puVar1[3] == 0)) {
            FUN_1003c490(*puVar1,0,8,0);
            piVar4 = (int *)FUN_10054a08(puVar1,local_a8);
            puVar1[3] = *piVar4;
          }
          if (puVar1[3] != 0) {
            (*pcVar3)();
            (*extraout_w11_01)(param_3);
            iVar2 = puVar1[3];
            iVar5 = 0;
            if (*(int *)(param_3 + 4) != 0) {
              iVar5 = *(int *)(param_3 + 4) + 0x4c;
            }
            uVar6 = (*pcVar3)();
            uVar8 = (*extraout_w11_02)(uVar6);
            (*pcVar3)(uVar8,uVar8 & 0xffffffff);
            (*extraout_w11_03)(iVar2,extraout_x1,iVar5);
            uVar7 = 1;
            goto LAB_10055208;
          }
        }
      }
    }
    uVar7 = 0;
  }
LAB_10055208:
  FUN_10037900(auStack_b0);
  return uVar7;
}

