/*
 * FUN_1800568a4 at 1800568a4
 * longlong __fastcall FUN_1800568a4(longlong * param_1, uint param_2)
 * Address ranges: 1800568a4-180056b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800568a4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong local_res8 [4];
  undefined8 in_stack_fffffffffffffef8;
  undefined8 in_stack_ffffffffffffff00;
  int local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_dc;
  longlong *local_d0;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar7 = *(uint *)((longlong)param_1 + 0x44);
  puVar1 = (uint *)(param_1 + 9);
  if (uVar7 < param_2 * 2) {
    uVar11 = *puVar1;
    uVar7 = (3 - (uint)(uVar7 * 3 < param_2)) * param_2;
    if (((uVar11 != 0) && (uVar11 < *(int *)((longlong)param_1 + 0x4c) + uVar7)) &&
       (param_2 <= uVar11 - *(int *)((longlong)param_1 + 0x4c))) {
      uVar7 = param_2;
    }
  }
  uVar11 = *(uint *)(param_1 + 8);
  uVar7 = (uVar11 - 1) + uVar7 & -uVar11;
  if ((*puVar1 == 0) || (*(int *)((longlong)param_1 + 0x4c) + uVar7 <= *puVar1)) {
    uVar2 = (ulonglong)uVar7 / (ulonglong)uVar11;
    uVar8 = (int)uVar2 + 0x3f;
    uVar10 = (uVar8 & 0xffffffc0) >> 3;
    uVar9 = uVar8 >> 6 & 0x3f;
    uVar11 = (uVar8 >> 6) + 0x3f;
    uVar12 = uVar11 >> 3 & 0x1ffffff8;
    local_c0 = (ulonglong)uVar7;
    local_b8 = (undefined1 *)thunk_FUN_18005db9c((ulonglong)uVar10);
    local_b0 = (undefined1 *)thunk_FUN_18005db9c((ulonglong)uVar12);
    local_a0 = 0;
    local_a8 = uVar10;
    local_a4 = uVar12;
    if ((local_b8 != (undefined1 *)0x0) && (local_b0 != (undefined1 *)0x0)) {
      FUN_18005f814(local_b8,0,(ulonglong)uVar10);
      FUN_18005f814(local_b0,0,(ulonglong)uVar12);
      *(ulonglong *)(local_b8 + (ulonglong)(uVar8 >> 6) * 8 + -8) =
           -(ulonglong)((uVar2 & 0x3f) != 0) & -1L << ((byte)uVar2 & 0x3f);
      *(ulonglong *)(local_b0 + (ulonglong)(uVar11 >> 6) * 8 + -8) =
           -(ulonglong)(uVar9 != 0) & -1L << (sbyte)uVar9;
      iVar5 = *(int *)((longlong)param_1 + 0xc);
      if (iVar5 == 0) {
        local_e8 = (-(uint)((char)param_1[0x11] != '\0') & 3) + 2;
      }
      else {
        local_e8 = 4;
      }
      local_dc = 0;
      local_98[0] = 1;
      local_80 = 1;
      uVar11 = 0;
      local_74 = 1;
      local_6c = 1;
      local_e4 = -(uint)(iVar5 != 0) & 3;
      local_90 = 0x10000;
      local_7c = 0x10001;
      local_e0 = (uint)(iVar5 != 0);
      uVar4 = 0xac3;
      if (iVar5 == 1) {
        uVar4 = 0x400;
      }
      local_88 = (ulonglong)uVar7;
      bVar3 = FUN_180046244(*param_1,(ulonglong)*(uint *)(param_1 + 1),&local_e8,0,local_98,uVar4,
                            in_stack_fffffffffffffef8,in_stack_ffffffffffffff00,&local_d0);
      if (bVar3 != 0) {
        local_60 = 0;
        local_58 = 0;
        iVar5 = (**(code **)(*local_d0 + 0x40))(local_d0,0,&local_60,local_c8);
        if (-1 < iVar5) {
          local_res8[0] = (**(code **)(*local_d0 + 0x58))();
          FUN_1800575f8(param_1 + 0xb,local_res8,&local_d0);
          uVar8 = *(uint *)(param_1 + 0xd);
          if (uVar8 != 0) {
            lVar6 = param_1[0xc];
            uVar9 = uVar8;
            do {
              uVar12 = uVar9 + uVar11 >> 1;
              uVar2 = *(ulonglong *)(lVar6 + (ulonglong)uVar12 * 0x48);
              uVar10 = uVar12;
              if (uVar2 <= local_res8[0]) {
                if (local_res8[0] <= uVar2) break;
                uVar11 = uVar12 + 1;
                uVar10 = uVar9;
                uVar12 = uVar11;
              }
              uVar9 = uVar10;
            } while (uVar9 != uVar11);
            if (((uVar12 != uVar8) &&
                (*(ulonglong *)(lVar6 + (ulonglong)uVar12 * 0x48) == local_res8[0])) &&
               (lVar6 = lVar6 + (ulonglong)uVar12 * 0x48 + 0x10, lVar6 != 0)) {
              *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar7;
              return lVar6;
            }
          }
        }
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    FUN_18005dbc0(local_b8);
    FUN_18005dbc0(local_b0);
  }
  return 0;
}

