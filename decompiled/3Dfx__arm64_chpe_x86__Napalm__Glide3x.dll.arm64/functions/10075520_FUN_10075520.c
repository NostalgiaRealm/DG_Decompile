/*
 * FUN_10075520 at 10075520
 * undefined FUN_10075520(void)
 * Address ranges: 10075520-100757db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075520(int param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 extraout_x1;
  ulonglong uVar10;
  ulonglong uVar11;
  code *extraout_w11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [4];
  undefined8 *local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_58 = 0;
  local_48 = 0;
  iVar5 = *(int *)(param_5 + 0x10);
  uVar11 = param_3 >> 1 & 0x7fffffff;
  local_68 = 0;
  uVar10 = param_4 >> 1 & 0x7fffffff;
  local_50 = (float)uVar11;
  fStack_4c = (float)uVar10;
  piVar1 = (int *)(param_5 + 0xc);
  local_60 = (undefined4)uVar11;
  uStack_5c = (undefined4)uVar10;
  local_44 = 0x3f800000;
  local_6c = param_2;
  FUN_1006ae10(*(undefined4 *)(*piVar1 + 0x1304),1,&local_58);
  FUN_1006ace0(*(undefined4 *)(*piVar1 + 0x1304),1,&local_68);
  piVar2 = (int *)(param_5 + 0x24);
  iVar6 = *(int *)(param_5 + 4);
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + *(int *)(iVar5 + 8) * 0x18 + 0x520),extraout_x1,
                     *(int *)(iVar6 + 8) +
                     (*(int *)(param_5 + 0x1c) + *piVar2) * *(int *)(iVar6 + 0x10));
  (*extraout_w11)(uVar8,1);
  plVar7 = *(longlong **)(param_5 + 4);
  FUN_1006a250(*(undefined4 *)(*piVar1 + 0x1304),1,
               *plVar7 + (ulonglong)(uint)((*(int *)(param_5 + 0x1c) + *piVar2) * (int)plVar7[2]));
  puVar3 = (uint *)(param_5 + 0x20);
  FUN_10068230(*(undefined4 *)(*piVar1 + 0x15dc),auStack_70,*(undefined4 *)(iVar5 + 0xd88),*puVar3);
  FUN_1006a9d0(*(undefined4 *)(*piVar1 + 0x1304),1,auStack_70,0,0);
  uVar14 = *local_6c;
  uVar13 = local_6c[3];
  uVar12 = local_6c[2];
  puVar4 = (undefined8 *)(*(int *)(*(int *)(param_5 + 8) + 8) + (*piVar2 + 3) * 0x40);
  puVar4[1] = local_6c[1];
  *puVar4 = uVar14;
  puVar4[3] = uVar13;
  puVar4[2] = uVar12;
  uVar14 = local_6c[4];
  uVar13 = local_6c[7];
  uVar12 = local_6c[6];
  puVar4[5] = local_6c[5];
  puVar4[4] = uVar14;
  puVar4[7] = uVar13;
  puVar4[6] = uVar12;
  FUN_100694c8(*(undefined4 *)(*piVar1 + 0x1304),*(undefined4 *)(iVar5 + *puVar3 * 4 + 0xd7c),0,0,4)
  ;
  FUN_100694c8(*(undefined4 *)(*piVar1 + 0x1304),*(undefined4 *)(param_5 + 0x14),0,0,0x80);
  FUN_1006b340(*(undefined4 *)(*piVar1 + 0x1304),4,1,(*piVar2 + 3) * 4,0);
  puVar9 = (undefined4 *)
           FUN_10068230(*(undefined4 *)(*piVar1 + 0x15d8),&local_6c,
                        *(int *)(iVar5 + 0xd84) + *puVar3,0);
  *(undefined4 *)(param_5 + 0x18) = *puVar9;
  *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)(iVar5 + *puVar3 * 4 + 0xd7c);
  *puVar3 = *puVar3 - 1 & 1;
  *piVar2 = *piVar2 + 1;
  return;
}

