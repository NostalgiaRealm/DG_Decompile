/*
 * FUN_1000fe22 at 1000fe22
 * undefined __thiscall FUN_1000fe22(void * this, undefined4 * param_1, undefined4 param_2)
 * Address ranges: 1000fe22-100101a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000fe22(void *this,undefined4 *param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 local_b8 [16];
  uint local_a8;
  uint local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18 [2];
  int local_10;
  undefined4 local_c;
  
  *(undefined4 *)((int)this + 0xcf14) = param_2;
  *(undefined4 *)((int)this + 0xcf10) = *(undefined4 *)((int)this + 0xd024);
  *(undefined4 *)((int)this + 0xcf38) = *(undefined4 *)((int)this + 0xd028);
  piVar4 = (int *)param_1[0xe];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)param_1[0x16];
  }
  (**(code **)(*piVar4 + 0x28))(piVar4,local_b8);
  *(undefined4 *)((int)this + 0xcf70) = local_90;
  *(undefined4 *)((int)this + 0xcf6c) = local_94;
  iVar5 = FUN_1004e884((void *)(*(int *)((int)this + 0xcf04) + 0x1640),(uint *)((int)this + 0xcf0c))
  ;
  FUN_10052baa(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),iVar5);
  FUN_1005326f(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),iVar5);
  FUN_100532aa(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),5);
  local_20 = local_a8 >> ((byte)param_1[8] & 0x1f);
  local_1c = local_a0 >> ((byte)param_1[8] & 0x1f);
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  if (local_20 == 0) {
    local_20 = 1;
  }
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  if (local_1c == 0) {
    local_1c = 1;
  }
  dVar9 = (double)(int)local_20;
  dVar1 = (double)(&DAT_10066fd0)[-((int)local_20 >> 0x1f)];
  dVar10 = (double)(int)local_1c;
  dVar2 = (double)(&DAT_10066fd0)[-((int)local_1c >> 0x1f)];
  local_38 = (float)(dVar9 + dVar1);
  local_34 = (float)(dVar10 + dVar2);
  FUN_10053b2e(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),1,(int)&local_40);
  FUN_10053aa3(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),1,(int)&local_28);
  *(float *)((int)this + 0xce30) = (float)(dVar9 + dVar1);
  *(float *)((int)this + 0xce34) = (float)(dVar10 + dVar2);
  *(undefined4 *)((int)this + 0xce90) = param_1[0xb];
  *(undefined4 *)((int)this + 0xce94) = param_1[0xc];
  *(float *)((int)this + 0xcee0) =
       (float)((double)(int)param_1[0xb] + (double)(&DAT_10066fd0)[-((int)param_1[0xb] >> 0x1f)]);
  *(float *)((int)this + 0xcee4) =
       (float)((double)(int)param_1[0xc] + (double)(&DAT_10066fd0)[-((int)param_1[0xc] >> 0x1f)]);
  fVar8 = (float)param_1[6];
  if (fVar8 < (float)param_1[4] || fVar8 == (float)param_1[4]) {
    fVar8 = (float)param_1[4];
  }
  else {
    fVar8 = fVar8 - 0.495;
  }
  *(float *)((int)this + 0xce98) = fVar8;
  fVar8 = (float)param_1[7];
  if (fVar8 < (float)param_1[5] || fVar8 == (float)param_1[5]) {
    fVar8 = (float)param_1[5];
  }
  else {
    fVar8 = fVar8 - 0.495;
  }
  *(float *)((int)this + 0xce9c) = fVar8;
  FUN_1000fcf3((int)this);
  local_80[1] = param_1[1];
  local_80[3] = param_1[5];
  iVar5 = 1;
  local_80[0] = *param_1;
  local_80[2] = param_1[4];
  local_70 = param_1[2];
  local_68 = param_1[6];
  local_5c = param_1[3];
  local_54 = param_1[7];
  if (*(int *)((int)this + 0xcef0) == 0x100) {
    *(undefined4 *)((int)this + 0xcef0) = 0;
    iVar5 = 2;
  }
  iVar3 = *(int *)(*(int *)((int)this + 0xcf04) + 0x1304);
  local_6c = local_80[1];
  local_64 = local_80[3];
  local_60 = local_80[0];
  local_58 = local_80[2];
  local_50 = local_70;
  local_4c = local_5c;
  local_48 = local_68;
  local_44 = local_54;
  FUN_1004f537((void *)(*(int *)((int)this + 0xcf7c) + 0x38),local_18,iVar5,
               *(int *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1300) + 0xc),
               *(undefined4 *)(iVar3 + 0x938),*(undefined4 *)(iVar3 + 0x93c));
  if (local_10 != 0) {
    puVar6 = local_80;
    puVar7 = (undefined4 *)(*(int *)((int)this + 0xcef0) * 0x40 + local_10);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_1004f581(*(int *)((int)this + 0xcf7c) + 0x38);
  }
  local_10 = 0x4000;
  local_c = 0x10;
  FUN_10053615(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),0,1,(int)local_18);
  FUN_10053d59(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),4,1,*(int *)((int)this + 0xcef0) << 2
               ,0);
  *(int *)((int)this + 0xcef0) = *(int *)((int)this + 0xcef0) + 1;
  return;
}

