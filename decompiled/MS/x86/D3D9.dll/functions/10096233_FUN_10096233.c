/*
 * FUN_10096233 at 10096233
 * undefined __thiscall FUN_10096233(void * this, int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 10096233-10096241
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10096233(void *this,int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint *this_00;
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  uVar2 = MXCSR;
  uVar6 = param_2 + param_4;
  puVar8 = param_3;
  puVar9 = (undefined4 *)((int)this + param_2 * 0x10 + 0x12ac);
  for (iVar3 = param_4 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  MXCSR = 0x3fc0;
  puVar8 = (undefined4 *)((param_2 + 0x6ff) * 0x10 + (int)this);
  for (iVar3 = param_4 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  if (param_1 != 0) {
    iVar3 = 0;
    sVar1 = *(short *)(param_1 + 0xc);
    while (sVar1 != -1) {
      uVar10 = (uint)*(ushort *)(param_1 + 0xc + iVar3 * 2);
      uVar7 = (uint)*(ushort *)(param_1 + 0xe + iVar3 * 2);
      if (uVar6 < uVar10) break;
      if (param_2 <= uVar7) {
        if (uVar10 < param_2) {
          uVar10 = param_2;
        }
        uVar4 = uVar6;
        if (uVar7 < uVar6) {
          uVar4 = uVar7;
        }
        puVar8 = (undefined4 *)((uVar10 + 0x85) * 0x10 + *(int *)(param_1 + 8));
        puVar9 = (undefined4 *)((uVar10 + 0x6ff) * 0x10 + (int)this);
        for (iVar5 = (uVar4 - uVar10) * 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      iVar3 = iVar3 + 2;
      sVar1 = *(short *)(param_1 + 0xc + iVar3 * 2);
    }
  }
  if ((*(char *)((int)this + 0x11) == '\0') ||
     ((param_1 != 0 && (*(char *)(*(int *)(param_1 + 8) + 0x44e) != '\0')))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  this_00 = (uint *)((int)this + 0x6690);
  if (uVar10 == *(uint *)((int)this + 0x6698)) {
    if (*this_00 < *(uint *)((int)this + 0x6694)) {
      if ((*(uint *)((int)this + 0x6694) < param_2) || (uVar6 < *this_00)) {
        uVar10 = *(uint *)((int)this + 0x6698);
        goto LAB_10096364;
      }
      if (*this_00 < param_2) {
        param_2 = *this_00;
      }
      *this_00 = param_2;
      if (uVar6 < *(uint *)((int)this + 0x6694)) {
        uVar6 = *(uint *)((int)this + 0x6694);
      }
    }
    else {
      *this_00 = param_2;
    }
    *(uint *)((int)this + 0x6694) = uVar6;
  }
  else {
LAB_10096364:
    FUN_100980e2(this_00,param_2,uVar6,uVar10,this);
  }
  MXCSR = uVar2;
  return;
}

