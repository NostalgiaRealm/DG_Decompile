/*
 * FUN_10013079 at 10013079
 * byte __fastcall FUN_10013079(int * param_1, undefined2 param_2, undefined4 param_3, int * param_4, int * param_5)
 * Address ranges: 10013079-10013305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall
FUN_10013079(int *param_1,undefined2 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  char local_50 [4];
  undefined2 *local_4c;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint3 local_28;
  undefined1 uStack_25;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int *local_8;
  
  local_8 = param_1;
  FUN_100ada8e(param_4,0,0x4858);
  iVar1 = *param_1;
  if ((iVar1 == -0x1ff00) || (iVar1 == -0x1feff)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  local_24 = 0xc;
  local_20 = 0x10;
  local_18 = 0;
  local_50[0] = iVar1 == -0x1ff00;
  local_14 = 3;
  local_10 = 2;
  local_c = 8;
  local_4c = &local_24;
  local_3c = (uint *)(local_8 + 1);
  local_48 = 0;
  local_40 = 0;
  local_16 = 1;
  _local_28 = 0;
  *(char *)((int)param_4 + 0x4855) = (char)iVar1;
  *(undefined1 *)(param_4 + 0x1215) = 1;
  local_22 = local_24;
  local_1e = local_20;
  local_12 = local_14;
  local_e = local_10;
  local_a = local_c;
  local_1c = param_2;
  local_1a = param_2;
  piVar8 = param_4;
  local_44 = param_4;
  for (uVar7 = (uint)bVar5; (bVar5 != 0 && ((char)(uVar7 >> 8) == '\0'));
      uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5)) {
    local_38 = *local_3c;
    piVar8[0x1214] = piVar8[0x1214] + 1;
    local_34 = local_38 & 0xffff0000;
    uVar3 = local_38 & 0xffff;
    local_30 = 0;
    local_2c = 1;
    uStack_25 = (undefined1)((uint)_local_28 >> 0x18);
    uVar2 = uStack_25;
    _local_28 = CONCAT13(uStack_25,0x10f0f);
    if (0x4e < uVar3) {
      if (uVar3 == 0x4f) goto switchD_100131a4_caseD_6;
      if (uVar3 == 0xfffe) {
        local_3c = local_3c + (local_38 >> 0x10);
        goto switchD_100131a4_caseD_0;
      }
      if (uVar3 != 0xffff) goto switchD_100131a4_caseD_3;
      uVar7 = (uint)CONCAT11(1,local_34 == 0);
      bVar5 = local_34 == 0;
LAB_1001326b:
      local_3c = local_3c + 1;
      goto LAB_1001328e;
    }
    if (uVar3 == 0x4e) {
switchD_100131a4_caseD_6:
      _local_28 = CONCAT13(uVar2,0x80f);
      goto switchD_100131a4_caseD_1;
    }
    switch(uVar3) {
    case 0:
switchD_100131a4_caseD_0:
      bVar5 = true;
      goto LAB_1001326b;
    case 1:
      goto switchD_100131a4_caseD_1;
    case 2:
    case 5:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      goto switchD_100131a4_caseD_2;
    default:
switchD_100131a4_caseD_3:
      uVar7 = uVar7 & 0xffffff00;
      break;
    case 4:
      local_30 = 3;
      break;
    case 6:
    case 7:
    case 0xe:
    case 0xf:
      goto switchD_100131a4_caseD_6;
    case 8:
      _local_28 = CONCAT13(uVar2,0x70f);
      goto switchD_100131a4_caseD_2;
    case 9:
      _local_28 = CONCAT13(uVar2,0xf0f);
      goto switchD_100131a4_caseD_2;
    case 0x10:
      _local_28 = CONCAT13(uVar2,0xb0f);
      goto switchD_100131a4_caseD_1;
    case 0x11:
      _local_28 = CONCAT13(uVar2,0xe0f);
switchD_100131a4_caseD_2:
      local_30 = 2;
      break;
    case 0x13:
      _local_28 = CONCAT22(stack0xffffffda,0x303);
switchD_100131a4_caseD_1:
      local_30 = 1;
      break;
    case 0x14:
      local_28 = 0xf0f;
      goto LAB_100131f3;
    case 0x15:
      _local_28 = CONCAT31(stack0xffffffd9,7);
      goto LAB_10013207;
    case 0x16:
      local_28 = 0x70f;
LAB_100131f3:
      _local_28 = CONCAT13(uVar2,local_28);
      local_30 = 2;
      local_2c = 4;
      break;
    case 0x17:
      _local_28 = CONCAT22(stack0xffffffda,0x707);
LAB_10013207:
      local_28 = (uint3)(ushort)local_28;
      local_30 = 2;
      local_2c = 3;
      break;
    case 0x18:
      _local_28 = CONCAT13(uVar2,0x703);
      local_30 = 2;
      local_2c = 2;
    }
    uVar4 = FUN_10012caf(local_50);
    bVar5 = (byte)uVar4;
    piVar8 = local_44;
LAB_1001328e:
    bVar5 = (byte)uVar7 & bVar5;
  }
  bVar5 = (byte)uVar7;
  uVar3 = 0;
  if (local_48 == 0) {
    do {
      if (*(char *)((int)param_4 + uVar3 + 0x10) != '\0') {
        *(undefined1 *)((int)param_4 + uVar3) = (&DAT_100b2830)[uVar3];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  else if (bVar5 != 0) {
    do {
      bVar5 = (byte)uVar7;
      if (0xf < uVar3) goto LAB_100132db;
      if ((*(char *)((int)param_4 + uVar3 + 0x10) == '\0') ||
         ((local_48 & 1 << ((byte)uVar3 & 0x1f)) != 0)) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      uVar3 = uVar3 + 1;
      uVar7 = (uint)(bVar5 & bVar6);
    } while ((bVar5 & bVar6) != 0);
    bVar5 = 0;
  }
LAB_100132db:
  bVar6 = 0;
  if ((*(byte *)((int)param_4 + 0x441) & 3) == 3) {
    bVar6 = bVar5;
  }
  if (bVar6 != 0) {
    *param_5 = (int)local_3c - (int)local_8 >> 2;
  }
  return bVar6;
}

