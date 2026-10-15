/*
 * FUN_10096242 at 10096242
 * undefined __fastcall FUN_10096242(int param_1, int param_2)
 * Address ranges: 10096242-1009637b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10096242(int param_1,int param_2)

{
  uint *this;
  short sVar1;
  void *pvVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  int unaff_EBP;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  *(int *)(unaff_EBP + -4) = param_1;
  puVar8 = *(undefined4 **)(unaff_EBP + 0x10);
  puVar9 = (undefined4 *)(param_1 + 0x12ac + in_EAX * 0x10);
  for (iVar3 = param_2 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = MXCSR;
  *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + 0xc);
  *(uint *)(unaff_EBP + 0x14) = unaff_EBX + param_2;
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 0xc) = 0x3fc0;
  MXCSR = *(undefined4 *)(unaff_EBP + 0xc);
  puVar8 = *(undefined4 **)(unaff_EBP + 0x10);
  puVar9 = (undefined4 *)((unaff_EBX + 0x6ff) * 0x10 + *(int *)(unaff_EBP + -4));
  for (iVar4 = param_2 << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_EBP + 0x14);
  }
  else {
    iVar4 = 0;
    uVar6 = *(uint *)(unaff_EBP + 0x14);
    sVar1 = *(short *)(iVar3 + 0xc);
    while (*(int *)(unaff_EBP + 0x10) = iVar4, sVar1 != -1) {
      uVar10 = (uint)*(ushort *)(iVar3 + 0xc + iVar4 * 2);
      uVar7 = (uint)*(ushort *)(iVar3 + 0xe + iVar4 * 2);
      if (uVar6 < uVar10) break;
      if (unaff_EBX <= uVar7) {
        if (uVar10 < unaff_EBX) {
          uVar10 = unaff_EBX;
        }
        uVar5 = uVar6;
        if (uVar7 < uVar6) {
          uVar5 = uVar7;
        }
        puVar8 = (undefined4 *)((uVar10 + 0x85) * 0x10 + *(int *)(iVar3 + 8));
        puVar9 = (undefined4 *)((uVar10 + 0x6ff) * 0x10 + *(int *)(unaff_EBP + -4));
        for (iVar4 = (uVar5 - uVar10) * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        iVar4 = *(int *)(unaff_EBP + 0x10);
      }
      iVar4 = iVar4 + 2;
      sVar1 = *(short *)(iVar3 + 0xc + iVar4 * 2);
    }
  }
  pvVar2 = *(void **)(unaff_EBP + -4);
  if ((*(char *)((int)pvVar2 + 0x11) == '\0') ||
     ((iVar3 != 0 && (*(char *)(*(int *)(iVar3 + 8) + 0x44e) != '\0')))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  this = (uint *)((int)pvVar2 + 0x6690);
  if (uVar10 == *(uint *)((int)pvVar2 + 0x6698)) {
    if (*this < *(uint *)((int)pvVar2 + 0x6694)) {
      if ((*(uint *)((int)pvVar2 + 0x6694) < unaff_EBX) || (uVar6 < *this)) {
        uVar10 = *(uint *)((int)pvVar2 + 0x6698);
        goto LAB_10096364;
      }
      if (*this < unaff_EBX) {
        unaff_EBX = *this;
      }
      *this = unaff_EBX;
      if (uVar6 < *(uint *)((int)pvVar2 + 0x6694)) {
        uVar6 = *(uint *)((int)pvVar2 + 0x6694);
      }
    }
    else {
      *this = unaff_EBX;
    }
    *(uint *)((int)pvVar2 + 0x6694) = uVar6;
  }
  else {
LAB_10096364:
    FUN_100980e2(this,unaff_EBX,uVar6,uVar10,pvVar2);
  }
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0xc);
  MXCSR = *(undefined4 *)(unaff_EBP + 8);
  return;
}

