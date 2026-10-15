/*
 * FUN_1000f400 at 1000f400
 * undefined FUN_1000f400(void)
 * Address ranges: 1000f400-1000f6fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000f400(int param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte local_4c;
  int local_48;
  
  uVar14 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
  uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  lVar15 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
  uVar14 = (uint)lVar15;
  iVar7 = 1;
  iVar9 = iVar7;
  if ((1 - (uVar14 >> 5) & 0xff) != 0) {
    pbVar5 = (byte *)((int)&local_5c + ((int)uVar14 >> 3));
    *pbVar5 = *pbVar5 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_5c = param_2;
    local_54 = param_3;
    local_50 = param_4;
    while (iVar9 = 0, iVar7 != 0) {
      iVar9 = param_1 + (int)lVar15 * 4;
      iVar3 = *(int *)(iVar9 + 0x57bc);
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x48) == 0) {
          auVar16 = (*pcVar6)(*(undefined4 *)(iVar3 + 0x54),*(int *)(iVar3 + 0x10) + 0x1000);
          iVar7 = (*extraout_w11)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,1);
          *(int *)(iVar3 + 0x48) = iVar7;
          if (iVar7 != 0) {
            puVar10 = (undefined4 *)(iVar9 + 0x57fc);
            puVar11 = (undefined4 *)(iVar9 + 0x583c);
            puVar12 = (undefined4 *)(*(int *)(iVar9 + 0x57bc) + 0x48);
            uVar8 = (*pcVar6)();
            (*extraout_w11_00)(uVar8,lVar15,*puVar12,*puVar11,*puVar10);
          }
        }
        iVar3 = *(int *)(iVar9 + 0x57bc);
        iVar7 = 0;
        if (*(int *)(iVar3 + 0x48) != 0) {
          uVar14 = *(int *)(iVar9 + 0x583c) + *(int *)(iVar9 + 0x57fc) * local_54;
          if (uVar14 < *(uint *)(iVar3 + 0x10)) {
            local_48 = *(int *)(iVar9 + 0x57fc) * local_50;
            uVar2 = local_48 + uVar14;
            if (uVar2 <= *(uint *)(iVar3 + 0x10)) {
              puVar1 = (uint *)(iVar3 + 0x4c);
              uVar4 = *puVar1;
              if ((uVar14 < uVar4) && (uVar2 <= uVar4)) {
                uVar13 = *(uint *)(iVar3 + 0x50);
LAB_1000f5cc:
                local_4c = 1;
              }
              else {
                uVar13 = *(uint *)(iVar3 + 0x50);
                if ((uVar13 <= uVar14) && (uVar13 < uVar2)) goto LAB_1000f5cc;
                local_4c = 0;
              }
              local_58 = 0;
              if (uVar4 == uVar13) {
                local_4c = 0;
              }
              auVar16 = (*pcVar6)(*(int *)(iVar3 + 0x48),local_4c ^ 1);
              iVar9 = (*extraout_w11_01)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,1,&local_58);
              if (iVar9 == 0) {
                FUN_100ff660(uVar14 + local_58,*(int *)(iVar3 + 4) + uVar14,local_48);
                uVar8 = (*pcVar6)();
                (*extraout_w11_02)(uVar8);
                iVar7 = 1;
                if (local_4c == 0) {
                  *(uint *)(iVar3 + 0x50) = uVar2;
                }
                else if (*puVar1 <= uVar14) {
                  *(uint *)(iVar3 + 0x50) = uVar2;
                  goto LAB_1000f698;
                }
                *puVar1 = uVar14;
              }
            }
          }
        }
      }
LAB_1000f698:
      uVar14 = (local_5c & 0xaaaaaaaa) >> 1 | (local_5c & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      lVar15 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
      uVar14 = (uint)lVar15;
      if ((1 - (uVar14 >> 5) & 0xff) == 0) {
        return iVar7;
      }
      pbVar5 = (byte *)((int)&local_5c + ((int)uVar14 >> 3));
      *pbVar5 = *pbVar5 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
    }
  }
  return iVar9;
}

