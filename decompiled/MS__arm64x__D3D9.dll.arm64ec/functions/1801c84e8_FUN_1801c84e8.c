/*
 * FUN_1801c84e8 at 1801c84e8
 * undefined FUN_1801c84e8(void)
 * Address ranges: 1801c84e8-1801c868f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c84e8(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar6 = thunk_FUN_1802236e4(DAT_180258900);
    lVar7 = DAT_180258900;
    if (iVar6 == 0) {
      FUN_1801085c8();
      lVar7 = DAT_180258900;
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
    uVar9 = 0x8876086c;
    if ((param_2 == (uint *)0x0) || (*(longlong *)(param_1 + -0x6808) == 0)) goto LAB_1801c8664;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + -0x6808) + 8);
    uVar1 = *param_2;
    uVar2 = *(uint *)(lVar8 + 0x8c);
    if ((uVar2 <= uVar1) || (uVar2 < uVar1 + param_2[2])) goto LAB_1801c8664;
    uVar2 = *(uint *)(lVar8 + 0x90);
    uVar3 = param_2[1];
    if ((uVar2 <= uVar3) || (uVar4 = param_2[3], uVar2 < uVar3 + uVar4)) goto LAB_1801c8664;
    fVar10 = (float)param_2[4];
    fVar11 = (float)param_2[5];
    if ((float)param_2[5] <= fVar10) {
      fVar11 = 1.0;
      if (fVar10 + 0.001 <= 1.0) {
        fVar11 = fVar10 + 0.001;
      }
    }
    lVar8 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(uint *)(lVar8 + 0x4a44) = param_2[2];
    *(uint *)(lVar8 + 0x4a48) = uVar4;
    *(float *)(lVar8 + 0x4a4c) = fVar10;
    *(float *)(lVar8 + 0x4a50) = fVar11;
    *(undefined1 *)(lVar8 + 0xace8) = 1;
    *(uint *)(lVar8 + 0x4a3c) = uVar1;
    *(uint *)(lVar8 + 0x4a40) = uVar3;
  }
  uVar9 = 0;
LAB_1801c8664:
  if (bVar5) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar7 + 0x2c) = 0;
  }
  return uVar9;
}

