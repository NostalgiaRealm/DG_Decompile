/*
 * FUN_1800aee98 at 1800aee98
 * undefined FUN_1800aee98(void)
 * Address ranges: 1800aee98-1800af043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800aee98(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  lVar8 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar8 = DAT_18024e310;
    if (iVar7 == 0) {
      FUN_180003398();
      lVar8 = DAT_18024e310;
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    *(uint *)(param_1 + -0x67e0) = *param_2;
    *(uint *)(param_1 + -0x67dc) = param_2[1];
    *(uint *)(param_1 + -0x67d8) = param_2[2];
    *(uint *)(param_1 + -0x67d4) = param_2[3];
    *(uint *)(param_1 + -0x67d0) = param_2[4];
    *(uint *)(param_1 + -0x67cc) = param_2[5];
    *(undefined1 *)(param_1 + 0x5cd3) = 1;
  }
  else {
    uVar10 = 0x8876086c;
    if ((param_2 == (uint *)0x0) || (*(longlong *)(param_1 + -0x6808) == 0)) goto LAB_1800af014;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + -0x6808) + 8);
    uVar1 = *param_2;
    uVar2 = *(uint *)(lVar9 + 0x8c);
    if ((uVar2 <= uVar1) || (uVar3 = param_2[2], uVar2 < uVar1 + uVar3)) goto LAB_1800af014;
    uVar2 = *(uint *)(lVar9 + 0x90);
    uVar4 = param_2[1];
    if ((uVar2 <= uVar4) || (uVar5 = param_2[3], uVar2 < uVar4 + uVar5)) goto LAB_1800af014;
    fVar12 = (float)param_2[4];
    fVar11 = (float)param_2[5];
    if ((float)param_2[5] <= fVar12) {
      fVar11 = 1.0;
      if (fVar12 + 0.001 <= 1.0) {
        fVar11 = fVar12 + 0.001;
      }
    }
    lVar9 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(float *)(lVar9 + 0x4a4c) = fVar12;
    *(float *)(lVar9 + 0x4a50) = fVar11;
    *(uint *)(lVar9 + 0x4a3c) = uVar1;
    *(uint *)(lVar9 + 0x4a40) = uVar4;
    *(uint *)(lVar9 + 0x4a44) = uVar3;
    *(uint *)(lVar9 + 0x4a48) = uVar5;
    *(undefined1 *)(lVar9 + 0xace8) = 1;
  }
  uVar10 = 0;
LAB_1800af014:
  if (bVar6) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar8 + 0x2c) = 0;
  }
  return uVar10;
}

