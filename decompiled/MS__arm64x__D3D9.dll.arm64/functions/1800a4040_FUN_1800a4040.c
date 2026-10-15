/*
 * FUN_1800a4040 at 1800a4040
 * undefined FUN_1800a4040(void)
 * Address ranges: 1800a4040-1800a433f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a4040(longlong param_1,uint param_2,ulonglong param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(uint *)(param_1 + -0x30) <= param_2) {
    return 0x8876086c;
  }
  if ((param_3 & 0xfffffffd) != 0) {
    return 0x8876086c;
  }
  if (param_4 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4);
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  param_4[0xd] = 0;
  param_4[0xc] = 0;
  param_4[0xf] = 0;
  param_4[0xe] = 0;
  param_4[0x11] = 0;
  param_4[0x10] = 0;
  param_4[0x13] = 0;
  param_4[0x12] = 0;
  param_4[0x15] = 0;
  param_4[0x14] = 0;
  param_4[0x17] = 0;
  param_4[0x16] = 0;
  param_4[0x19] = 0;
  param_4[0x18] = 0;
  param_4[0x1b] = 0;
  param_4[0x1a] = 0;
  param_4[0x1d] = 0;
  param_4[0x1c] = 0;
  param_4[0x1f] = 0;
  param_4[0x1e] = 0;
  param_4[0x21] = 0;
  param_4[0x20] = 0;
  param_4[0x23] = 0;
  param_4[0x22] = 0;
  param_4[0x25] = 0;
  param_4[0x24] = 0;
  param_4[0x27] = 0;
  param_4[0x26] = 0;
  param_4[0x29] = 0;
  param_4[0x28] = 0;
  param_4[0x2b] = 0;
  param_4[0x2a] = 0;
  param_4[0x2d] = 0;
  param_4[0x2c] = 0;
  param_4[0x2f] = 0;
  param_4[0x2e] = 0;
  param_4[0x31] = 0;
  param_4[0x30] = 0;
  param_4[0x33] = 0;
  param_4[0x32] = 0;
  param_4[0x35] = 0;
  param_4[0x34] = 0;
  param_4[0x37] = 0;
  param_4[0x36] = 0;
  param_4[0x39] = 0;
  param_4[0x38] = 0;
  param_4[0x3b] = 0;
  param_4[0x3a] = 0;
  param_4[0x3d] = 0;
  param_4[0x3c] = 0;
  param_4[0x3f] = 0;
  param_4[0x3e] = 0;
  param_4[0x41] = 0;
  param_4[0x40] = 0;
  param_4[0x43] = 0;
  param_4[0x42] = 0;
  param_4[0x45] = 0;
  param_4[0x44] = 0;
  param_4[0x47] = 0;
  param_4[0x46] = 0;
  param_4[0x49] = 0;
  param_4[0x48] = 0;
  param_4[0x4b] = 0;
  param_4[0x4a] = 0;
  param_4[0x4d] = 0;
  param_4[0x4c] = 0;
  param_4[0x4f] = 0;
  param_4[0x4e] = 0;
  param_4[0x51] = 0;
  param_4[0x50] = 0;
  param_4[0x53] = 0;
  param_4[0x52] = 0;
  param_4[0x55] = 0;
  param_4[0x54] = 0;
  param_4[0x57] = 0;
  param_4[0x56] = 0;
  param_4[0x59] = 0;
  param_4[0x58] = 0;
  param_4[0x5b] = 0;
  param_4[0x5a] = 0;
  param_4[0x5d] = 0;
  param_4[0x5c] = 0;
  param_4[0x5f] = 0;
  param_4[0x5e] = 0;
  param_4[0x61] = 0;
  param_4[0x60] = 0;
  param_4[99] = 0;
  param_4[0x62] = 0;
  param_4[0x65] = 0;
  param_4[100] = 0;
  param_4[0x67] = 0;
  param_4[0x66] = 0;
  param_4[0x69] = 0;
  param_4[0x68] = 0;
  param_4[0x6b] = 0;
  param_4[0x6a] = 0;
  param_4[0x6d] = 0;
  param_4[0x6c] = 0;
  param_4[0x6f] = 0;
  param_4[0x6e] = 0;
  param_4[0x71] = 0;
  param_4[0x70] = 0;
  param_4[0x73] = 0;
  param_4[0x72] = 0;
  param_4[0x75] = 0;
  param_4[0x74] = 0;
  param_4[0x77] = 0;
  param_4[0x76] = 0;
  param_4[0x79] = 0;
  param_4[0x78] = 0;
  param_4[0x7b] = 0;
  param_4[0x7a] = 0;
  param_4[0x7d] = 0;
  param_4[0x7c] = 0;
  param_4[0x7f] = 0;
  param_4[0x7e] = 0;
  lVar7 = (ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0;
  iVar14 = *(int *)(&DAT_180248eac + lVar7);
  iVar15 = *(int *)(&DAT_180248ea8 + lVar7);
  uStack_58 = *(undefined8 *)(lVar7 + 0x180248ed0);
  local_60 = *(undefined8 *)(&DAT_180248ec8 + lVar7);
  pcVar5 = (&PTR_s_dgvdsvga_dll_180248ec0)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36];
  iVar13 = *(int *)(&DAT_180248eb0 + lVar7);
  iVar11 = *(int *)(&DAT_180248eb4 + lVar7);
  uVar9 = *(undefined4 *)(&DAT_180248eb8 + lVar7);
  uVar10 = *(undefined4 *)(&DAT_180248ebc + lVar7);
  uVar8 = (uint)(byte)(&DAT_180248ed8)[lVar7];
  iVar12 = iVar11;
  if (1 < *(uint *)(DAT_18024de60 + 0x858)) goto LAB_1800a4250;
  iVar12 = *(int *)(DAT_18024de60 + 0x8f7);
  if (iVar12 == 1) {
    pcVar5 = s_nvldumd_dll_1802338b0;
    puVar6 = (undefined8 *)&DAT_18022a7b0;
    iVar15 = 0x10de;
    iVar14 = 0x1c03;
    iVar13 = 0x371a1458;
    iVar11 = 0xa1;
    uVar10 = 0x190015;
    uVar9 = 0xe06c7;
LAB_1800a4204:
    uStack_58 = puVar6[1];
    local_60 = *puVar6;
    uVar8 = 1;
  }
  else {
    if (iVar12 == 2) {
      pcVar5 = s_atiumdag_dll_1802338a0;
      puVar6 = (undefined8 *)&DAT_18022a7f8;
      iVar15 = 0x1002;
      iVar14 = 0x67df;
      iVar13 = 0x1002e366;
      iVar11 = 0xe7;
      uVar10 = 0x180121;
      uVar9 = 0xe04e0;
      goto LAB_1800a4204;
    }
    uVar8 = (uint)(byte)(&DAT_180248ed8)[lVar7];
    if (iVar12 == 3) {
      pcVar5 = s_igdumdim32_dll_1802338d0;
      puVar6 = (undefined8 *)&DAT_18022a7c0;
      iVar15 = 0x8086;
      iVar14 = 0x1912;
      iVar13 = 0x79771462;
      iVar11 = 6;
      uVar10 = 0x180014;
      uVar9 = 0x64188e;
      goto LAB_1800a4204;
    }
  }
  if (*(int *)(DAT_18024de60 + 0x8fb) != -1) {
    iVar15 = *(int *)(DAT_18024de60 + 0x8fb);
  }
  if (*(int *)(DAT_18024de60 + 0x8ff) != -1) {
    iVar14 = *(int *)(DAT_18024de60 + 0x8ff);
  }
  if (*(int *)(DAT_18024de60 + 0x903) != -1) {
    iVar13 = *(int *)(DAT_18024de60 + 0x903);
  }
  iVar12 = *(int *)(DAT_18024de60 + 0x907);
  if (*(int *)(DAT_18024de60 + 0x907) == -1) {
    iVar12 = iVar11;
  }
LAB_1800a4250:
  func_0x000180222cf8(param_4,pcVar5);
  uVar4 = (*__imp_KERNEL32_dll_WideCharToMultiByte)
                    (0xfde9,0,(ulonglong)uVar1 * 600 + 0x180253878,0xffffffff,param_4 + 0x40,0x200,0
                     ,0);
  uVar3 = s__dgVoodoo_DX_API_Layer__180233600._16_8_;
  uVar2 = s__dgVoodoo_DX_API_Layer__180233600._0_8_;
  if (0x18 < 0x1ff - uVar4) {
    *(undefined8 *)((longlong)param_4 + (ulonglong)uVar4 + 0x207) =
         s__dgVoodoo_DX_API_Layer__180233600._8_8_;
    *(undefined8 *)((longlong)param_4 + (ulonglong)uVar4 + 0x1ff) = uVar2;
    *(undefined8 *)((longlong)param_4 + (ulonglong)uVar4 + 0x20f) = uVar3;
    *(char *)((longlong)param_4 + (ulonglong)uVar4 + 0x217) =
         s__dgVoodoo_DX_API_Layer__180233600[0x18];
  }
  (*__imp_KERNEL32_dll_WideCharToMultiByte)
            (0xfde9,0,(ulonglong)uVar1 * 600 + 0x1802538b8,0xffffffff,param_4 + 0x80,0x200,0,0);
  *(int *)(param_4 + 0x85) = iVar15;
  *(int *)((longlong)param_4 + 0x42c) = iVar14;
  *(int *)(param_4 + 0x86) = iVar13;
  *(int *)((longlong)param_4 + 0x434) = iVar12;
  *(undefined4 *)(param_4 + 0x84) = uVar9;
  *(undefined4 *)((longlong)param_4 + 0x424) = uVar10;
  param_4[0x88] = uStack_58;
  param_4[0x87] = local_60;
  *(uint *)(param_4 + 0x89) = uVar8;
  return 0;
}

