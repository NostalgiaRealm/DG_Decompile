/*
 * FUN_1801a99d0 at 1801a99d0
 * undefined FUN_1801a99d0(void)
 * Address ranges: 1801a99d0-1801a9f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801a99d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,int *param_6,longlong param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int extraout_w10;
  code *extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong extraout_x11_01;
  uint extraout_w15;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_170;
  longlong lStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  undefined4 local_c0;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [56];
  
  lVar13 = *(longlong *)(param_1 + 0x58);
  FUN_18020b310(param_2,&local_170,param_3,param_5,param_6,param_7,param_8,0);
  if (lStack_168 == 0) {
    FUN_180221ec0(lVar13 + 0x12c0);
    uVar14 = *(undefined8 *)(param_2 + 0xb78);
    FUN_180207560(param_2 + 8,0);
    FUN_18020c3b0(*(undefined8 *)(param_2 + 0xb10),uVar14);
    puVar8 = (undefined8 *)
             FUN_18020b310(param_2,auStack_a8,param_3,param_5,param_6,param_7,param_8,0);
    lStack_168 = puVar8[1];
    local_170 = *puVar8;
    uStack_158 = puVar8[3];
    local_160 = puVar8[2];
    uStack_148 = puVar8[5];
    local_150 = puVar8[4];
  }
  if (lStack_168 == 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_3,auStack_e0);
    FUN_18020d2b0(local_c0);
    FUN_18020d308(extraout_x11_00 & 0xffffffff);
    iVar7 = FUN_18020d208(extraout_x11_01 & 0xffffffff);
    uVar10 = param_6[1];
    uVar11 = param_6[4];
    iVar1 = extraout_w10;
    if (extraout_w10 == 0) {
      iVar1 = iVar7;
    }
    if (uVar11 <= uVar10) {
      return 1;
    }
    if (extraout_w15 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801a9c88);
      (*pcVar5)();
    }
    uVar2 = 0;
    if (extraout_w15 != 0) {
      uVar2 = (uint)(iVar1 * (param_6[3] - *param_6)) / extraout_w15;
    }
    uVar2 = uVar2 + 0xff & 0xffffff00;
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = 0x1000000 / uVar2;
      }
      do {
        local_170 = CONCAT44(uVar10,*param_6);
        lStack_168 = *(longlong *)(param_6 + 2);
        uVar10 = uVar10 + uVar3;
        uVar2 = uVar10;
        if (uVar11 <= uVar10) {
          uVar2 = uVar11;
        }
        local_160 = CONCAT44(param_6[5],uVar2);
        lVar13 = *(longlong *)(param_1 + 0x58);
        FUN_18020b310(param_2,&local_140,param_3,param_5,&local_170,param_7,param_8,0);
        if (lStack_138 == 0) {
          FUN_180221ec0(lVar13 + 0x12c0);
          uVar14 = *(undefined8 *)(param_2 + 0xb78);
          FUN_180207560(param_2 + 8,0);
          FUN_18020c3b0(*(undefined8 *)(param_2 + 0xb10),uVar14);
          puVar8 = (undefined8 *)
                   FUN_18020b310(param_2,auStack_78,param_3,param_5,&local_170,param_7,param_8,0);
          lStack_138 = puVar8[1];
          local_140 = *puVar8;
          uStack_128 = puVar8[3];
          uStack_130 = puVar8[2];
          uStack_118 = puVar8[5];
          local_120 = puVar8[4];
          if (lStack_138 == 0) {
            FUN_1801ed3b8(s__dgVoodoo__D3D12_Core__FATAL_ERR_180238ff0,
                          s_an_upload_heap_buffer_18022b8d0);
            thunk_FUN_180223720();
            return 0;
          }
        }
        lStack_168 = *(longlong *)(param_6 + 2);
        local_170 = *(undefined8 *)param_6;
        uVar14 = *(undefined8 *)(param_6 + 4);
        lVar13 = *(longlong *)(param_1 + 0x58);
        lStack_108 = lStack_138;
        local_110 = local_140;
        uStack_f8 = uStack_128;
        uStack_100 = uStack_130;
        uStack_e8 = uStack_118;
        local_f0 = local_120;
        FUN_180221850(lVar13 + 0x12c0);
        bVar4 = true;
        bVar6 = *(char *)(lVar13 + 0x14c4) == '\0';
        if (*(char *)(lVar13 + 0x14c4) != '\0') {
          puVar8 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,0x68);
          if (puVar8 == (undefined8 *)0x0) {
            FUN_180221bb0(lVar13 + 0x12c0);
            thunk_FUN_1802237c0(100);
            FUN_180221850(lVar13 + 0x12c0);
            bVar6 = true;
          }
          else {
            FUN_1801042e0(lVar13 + 0x14c0);
            puVar8[1] = 0x68;
            puVar8[2] = param_2;
            puVar8[3] = param_3;
            *(undefined4 *)(puVar8 + 4) = param_4;
            *(undefined8 *)((longlong)puVar8 + 0x24) = param_5;
            *(longlong *)((longlong)puVar8 + 0x34) = lStack_108;
            *(undefined8 *)((longlong)puVar8 + 0x2c) = local_110;
            *(undefined8 *)((longlong)puVar8 + 0x44) = uStack_f8;
            *(undefined8 *)((longlong)puVar8 + 0x3c) = uStack_100;
            *(undefined8 *)((longlong)puVar8 + 0x54) = uStack_e8;
            *(undefined8 *)((longlong)puVar8 + 0x4c) = local_f0;
            puVar12 = (undefined8 *)((longlong)puVar8 + 0x7bU & 0xfffffffffffffff8);
            *(longlong *)((longlong)puVar8 + 100) = lStack_168;
            *(undefined8 *)((longlong)puVar8 + 0x5c) = local_170;
            *(undefined8 *)((longlong)puVar8 + 0x6c) = uVar14;
            DataMemoryBarrier(2,3);
            *puVar12 = 0;
            *puVar8 = FUN_1801a9f90;
            *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) =
                 puVar12;
            if (*(char *)(lVar13 + 0x14c5) != '\0') {
              FUN_180221bb0(lVar13 + 0x12c0);
              bVar4 = false;
              thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1340));
            }
          }
        }
        if (bVar6) {
          plVar9 = *(longlong **)(lVar13 + 0x14a0);
          *plVar9 = param_2;
          plVar9[1] = param_3;
          *(undefined4 *)(plVar9 + 2) = param_4;
          *(undefined8 *)((longlong)plVar9 + 0x14) = param_5;
          *(longlong *)((longlong)plVar9 + 0x24) = lStack_108;
          *(undefined8 *)((longlong)plVar9 + 0x1c) = local_110;
          *(undefined8 *)((longlong)plVar9 + 0x34) = uStack_f8;
          *(undefined8 *)((longlong)plVar9 + 0x2c) = uStack_100;
          *(undefined8 *)((longlong)plVar9 + 0x44) = uStack_e8;
          *(undefined8 *)((longlong)plVar9 + 0x3c) = local_f0;
          *(longlong *)((longlong)plVar9 + 0x54) = lStack_168;
          *(undefined8 *)((longlong)plVar9 + 0x4c) = local_170;
          *(undefined8 *)((longlong)plVar9 + 0x5c) = uVar14;
          FUN_1801a9f90();
        }
        if (bVar4) {
          FUN_180221bb0(lVar13 + 0x12c0);
        }
        param_7 = param_7 + (ulonglong)(uVar3 * param_8);
        uVar11 = param_6[4];
      } while (uVar10 < uVar11);
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801a9ca0);
    (*pcVar5)();
  }
  uVar16 = *(undefined8 *)(param_6 + 2);
  uVar15 = *(undefined8 *)param_6;
  uVar14 = *(undefined8 *)(param_6 + 4);
  lVar13 = *(longlong *)(param_1 + 0x58);
  lStack_138 = lStack_168;
  local_140 = local_170;
  uStack_128 = uStack_158;
  uStack_130 = local_160;
  uStack_118 = uStack_148;
  local_120 = local_150;
  FUN_180221850(lVar13 + 0x12c0);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    puVar8 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,0x68);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar13 + 0x14c0);
      puVar8[1] = 0x68;
      puVar8[2] = param_2;
      puVar8[3] = param_3;
      *(undefined4 *)(puVar8 + 4) = param_4;
      *(undefined8 *)((longlong)puVar8 + 0x24) = param_5;
      *(longlong *)((longlong)puVar8 + 0x34) = lStack_138;
      *(undefined8 *)((longlong)puVar8 + 0x2c) = local_140;
      *(undefined8 *)((longlong)puVar8 + 0x44) = uStack_128;
      *(undefined8 *)((longlong)puVar8 + 0x3c) = uStack_130;
      *(undefined8 *)((longlong)puVar8 + 0x54) = uStack_118;
      *(undefined8 *)((longlong)puVar8 + 0x4c) = local_120;
      puVar12 = (undefined8 *)((longlong)puVar8 + 0x7bU & 0xfffffffffffffff8);
      *(undefined8 *)((longlong)puVar8 + 100) = uVar16;
      *(undefined8 *)((longlong)puVar8 + 0x5c) = uVar15;
      *(undefined8 *)((longlong)puVar8 + 0x6c) = uVar14;
      DataMemoryBarrier(2,3);
      *puVar12 = 0;
      *puVar8 = FUN_1801a9f90;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar12;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar13 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1340));
        return 1;
      }
      goto LAB_1801a9bfc;
    }
    FUN_180221bb0(lVar13 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar13 + 0x12c0);
  }
  plVar9 = *(longlong **)(lVar13 + 0x14a0);
  *plVar9 = param_2;
  plVar9[1] = param_3;
  *(undefined4 *)(plVar9 + 2) = param_4;
  *(undefined8 *)((longlong)plVar9 + 0x14) = param_5;
  *(longlong *)((longlong)plVar9 + 0x24) = lStack_138;
  *(undefined8 *)((longlong)plVar9 + 0x1c) = local_140;
  *(undefined8 *)((longlong)plVar9 + 0x34) = uStack_128;
  *(undefined8 *)((longlong)plVar9 + 0x2c) = uStack_130;
  *(undefined8 *)((longlong)plVar9 + 0x44) = uStack_118;
  *(undefined8 *)((longlong)plVar9 + 0x3c) = local_120;
  *(undefined8 *)((longlong)plVar9 + 0x54) = uVar16;
  *(undefined8 *)((longlong)plVar9 + 0x4c) = uVar15;
  *(undefined8 *)((longlong)plVar9 + 0x5c) = uVar14;
  FUN_1801a9f90();
LAB_1801a9bfc:
  FUN_180221bb0(lVar13 + 0x12c0);
  return 1;
}

