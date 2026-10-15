/*
 * FUN_1800a0e68 at 1800a0e68
 * undefined __fastcall FUN_1800a0e68(longlong * param_1, int param_2, int param_3)
 * Address ranges: 1800a0e68-1800a118e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0e68(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  uint in_stack_fffffffffffffe90;
  float local_138 [3];
  float local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  int local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88 [9];
  
  iVar10 = param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2;
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    FUN_1800976c4(param_1[0x26],2,param_1[2]);
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x2c);
  uVar4 = 0x16;
  if (uVar5 != 0) {
    uVar4 = 6;
    if (*(char *)((longlong)param_1 + 0x24c) == '\0') {
      uVar4 = *(uint *)(&DAT_1800ff0e0 + (ulonglong)uVar5 * 4);
    }
    uVar4 = (*(uint *)(&DAT_1800feb70 + (ulonglong)uVar5 * 4) & 7 | 0xf8000020) << 4 | uVar4 & 0xf;
  }
  uVar5 = FUN_1800a20a8(param_1,'\0');
  fVar11 = (float)(uint)(1 << ((byte)param_2 & 0x1f));
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x23c);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1ec);
  plVar6 = FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1930),&local_98,uVar5,0);
  plVar7 = FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1938),&local_90,
                         *(uint *)((longlong)param_1 + 0x224),iVar10);
  plVar8 = FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1938),local_88,
                         *(uint *)((longlong)param_1 + 0x1d4),iVar10);
  uVar5 = *(uint *)((longlong)param_1 + 0x2c);
  local_e0 = *(undefined8 *)((longlong)param_1 + 0x74);
  local_f8 = param_1[0x41];
  local_100 = param_1[0x37];
  lVar3 = param_1[0x26];
  cVar9 = '\0';
  local_12c = (float)*(uint *)(param_1 + 5) / fVar11;
  local_11c = (float)*(uint *)((longlong)param_1 + 0x19c) / fVar11;
  local_120 = (float)*(uint *)(param_1 + 0x33) / fVar11;
  local_138[2] = (float)*(uint *)((longlong)param_1 + 0x24) / fVar11;
  if (uVar4 < 0x24) {
    if (((uVar4 == 4) || (uVar4 == 5)) || ((uVar4 == 6 || (uVar4 == 7)))) goto LAB_1800a1087;
    cVar9 = '\0';
    if (uVar4 == 0x22) goto LAB_1800a104f;
  }
  else if ((((uVar4 == 0x24) || (uVar4 == 0x25)) || (uVar4 == 0x26)) ||
          (cVar9 = '\0', uVar4 == 0x27)) {
LAB_1800a104f:
    cVar9 = '\x01';
  }
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffff00;
  FUN_1800aa2e0(lVar3,uVar5,0,0,0,0,'\0','\0',0);
LAB_1800a1087:
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_128 = 0;
  local_114 = 0xffffffff;
  local_d8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  if (plVar8 == (longlong *)0x0) {
    local_f0 = 0;
  }
  else {
    local_f0 = *plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    local_e8 = 0;
  }
  else {
    local_e8 = *plVar7;
  }
  if (plVar6 == (longlong *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = *plVar6;
  }
  local_c8 = 0;
  local_b8 = 0;
  local_118 = param_2;
  local_110 = iVar10;
  local_10c = param_2;
  local_108 = param_3;
  local_104 = iVar10;
  local_b0 = uVar2;
  local_ac = uVar1;
  FUN_180094c50(lVar3,local_138,uVar5,uVar5,uVar4,cVar9,'\0',in_stack_fffffffffffffe90 & 0xffffff00)
  ;
  return;
}

