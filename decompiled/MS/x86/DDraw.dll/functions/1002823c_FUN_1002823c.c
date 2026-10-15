/*
 * FUN_1002823c at 1002823c
 * undefined4 __thiscall FUN_1002823c(void * this, int param_1)
 * Address ranges: 1002823c-100285fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002823c(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  undefined4 uVar11;
  bool bVar12;
  
  bVar12 = false;
  bVar5 = true;
  iVar2 = *(int *)(param_1 + 4);
  uVar10 = *(uint *)(iVar2 + 0x68);
  uVar3 = *(uint *)(iVar2 + 4);
  uVar6 = uVar10 & 0x400008;
  if ((uVar3 & 0x20006) == 0x20000) {
    if (((uVar10 & 8) != 0) && ((*(uint *)(iVar2 + 0x6c) & 0x200) == 0)) {
      iVar7 = 1 << ((char)*(undefined4 *)(iVar2 + 0x18) - 1U & 0x1f);
      bVar12 = (uVar10 & 0x2001) == 0;
      *(int *)(iVar2 + 0xc) = iVar7;
      *(int *)(iVar2 + 8) = iVar7;
      *(uint *)(iVar2 + 4) = uVar3 | 6;
    }
    if (!bVar12) {
      return 0x88760064;
    }
  }
  else {
    if (((byte)uVar3 & 6) != 6) {
      return 0x80070057;
    }
    if ((*(uint *)(iVar2 + 0x6c) & 0x200) == 0) {
      uVar8 = *(uint *)(iVar2 + 0xc);
      if (uVar8 == 0) {
        return 0x80070057;
      }
      uVar4 = *(uint *)(iVar2 + 8);
      if (uVar4 == 0) {
        return 0x80070057;
      }
      if (0x4000 < uVar8) {
        return 0x80070057;
      }
      if (0x4000 < uVar4) {
        return 0x80070057;
      }
      if (uVar6 == 0x400008) {
        if ((uVar3 & 0x20000) == 0) {
          iVar7 = 0;
          *(uint *)(iVar2 + 4) = uVar3 | 0x20000;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          if (uVar8 < uVar4) {
            uVar8 = uVar4;
          }
          do {
            iVar7 = iVar7 + 1;
            uVar8 = uVar8 >> 1;
          } while (uVar8 != 0);
          *(int *)(iVar2 + 0x18) = iVar7;
        }
      }
      else {
        if ((uVar6 != 0x400000) && (uVar6 != 0)) {
          return 0x80070057;
        }
        if ((uVar3 & 0x20000) != 0) {
          return 0x88760064;
        }
      }
    }
    else {
      if ((*(uint *)(iVar2 + 0x6c) & 0xfc00) == 0) {
        return 0x88760064;
      }
      if ((uVar10 & 8) == 0) {
        return 0x88760064;
      }
      uVar11 = FUN_10003301(*(uint *)(iVar2 + 0xc));
      if ((char)uVar11 == '\0') {
        return 0x80070057;
      }
      uVar11 = FUN_10003301(*(uint *)(iVar2 + 8));
      if ((char)uVar11 == '\0') {
        return 0x80070057;
      }
      if (0x4000 < *(uint *)(iVar2 + 0xc)) {
        return 0x80070057;
      }
      if (0x4000 < *(uint *)(iVar2 + 8)) {
        return 0x80070057;
      }
      if ((uVar3 & 0x20000) == 0) {
        *(undefined4 *)(iVar2 + 0x18) = 1;
      }
      *(uint *)(iVar2 + 0x6c) =
           *(uint *)(param_1 + 0x14) & 0x400 | *(uint *)(iVar2 + 0x6c) & 0xfffe03ff;
    }
  }
  if (((((*(int *)(param_1 + 0x10) != 0) && (uVar6 == 0x400008)) &&
       ((*(uint *)(iVar2 + 4) & 0x20000) != 0)) &&
      ((*(int *)(iVar2 + 0x18) != 1 && (*(int *)(iVar2 + 0x10) != 0)))) &&
     (*(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  uVar3 = *(uint *)(iVar2 + 0x18);
  uVar8 = 1;
  if (uVar3 != 0) {
    uVar8 = uVar3;
  }
  uVar8 = ~((1 << ((char)uVar8 - 1U & 0x1f)) - 1U);
  if (((*(uint *)(iVar2 + 0xc) & uVar8) == 0) && ((*(uint *)(iVar2 + 8) & uVar8) == 0)) {
    return 0x80070057;
  }
  if (0x10 < uVar3) {
    return 0x80070057;
  }
  uVar11 = 0x88760091;
  if ((*(uint *)(iVar2 + 4) & 0x1000) == 0) {
    uVar10 = *(uint *)(&DAT_10069924 + *(int *)((int)this + 0x11c) * 0xa4);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x1000;
    uVar9 = FUN_10031ba7(this,uVar10,iVar2);
    *(undefined4 *)(param_1 + 0x1c) = uVar9;
  }
  else if (((uVar10 & 0x2001) == 0) || ((*(byte *)(iVar2 + 0x4c) & 4) == 0)) {
    *(undefined4 *)(iVar2 + 0x48) = 0x20;
    uVar10 = FUN_10031c48(this,iVar2);
    *(uint *)(param_1 + 0x1c) = uVar10;
    if (uVar10 == 0xffffffff) {
      iVar2 = *(int *)(param_1 + 4);
      iVar7 = FUN_10031d77(iVar2);
      if (iVar7 == -1) goto LAB_10028563;
      puVar1 = (uint *)(iVar2 + 0x68);
      if (*(int *)(param_1 + 8) == 0) {
        uVar10 = *puVar1;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *puVar1 = uVar10 & 0xcfffb7ff | 0x800;
      }
      if (*(int *)(param_1 + 0xc) != 0) goto LAB_10028563;
      *puVar1 = *puVar1 | 0x800;
      *(int *)(param_1 + 0x1c) = iVar7;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    iVar2 = *(int *)(param_1 + 4);
    if ((*(byte *)(iVar2 + 0x4c) & 4) != 0) {
      uVar11 = 0x80070057;
      uVar9 = FUN_10003301(*(uint *)(iVar2 + 0xc));
      if (((char)uVar9 == '\0') || (uVar9 = FUN_10003301(*(uint *)(iVar2 + 8)), (char)uVar9 == '\0')
         ) {
        bVar5 = false;
      }
      iVar7 = FUN_100313c3(*(int *)(param_1 + 4));
      if ((((*(uint *)(extraout_ECX + 0xc) & iVar7 - 1U) != 0) ||
          (iVar7 = FUN_10031403(extraout_ECX), (*(uint *)(iVar2 + 8) & iVar7 - 1U) != 0)) ||
         ((uVar6 != 0 &&
          (((uVar6 != 0x400008 || ((*(uint *)(extraout_ECX_00 + 4) & 0x20000) == 0)) || (!bVar5)))))
         ) {
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      }
    }
  }
LAB_10028563:
  if (*(int *)(param_1 + 0x1c) == -1) {
    return uVar11;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar7 = FUN_10031fc4(iVar2);
  if (((*(uint *)(iVar2 + 0x4c) >> 2 & 1) == 0) ||
     (uVar11 = FUN_10031444(iVar2), iVar7 = extraout_EDX, (char)uVar11 == '\0')) {
    uVar10 = *(uint *)(param_1 + 0x10);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfff7ffff;
    uVar10 = uVar10 & 0xfff7ffff;
    *(uint *)(param_1 + 0x10) = uVar10;
    if (uVar10 == 0) {
      return 0;
    }
    if ((uVar10 != 0x808) && (uVar10 != 8)) {
      return 0x80070057;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return 0;
    }
    bVar12 = uVar10 == 8;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x10);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffff7;
    uVar10 = uVar10 & 0xfffffff7;
    *(uint *)(param_1 + 0x10) = uVar10;
    if (uVar10 == 0) {
      return 0;
    }
    if ((uVar10 != 0x80800) && (uVar10 != 0x80000)) {
      return 0x80070057;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return 0;
    }
    bVar12 = uVar10 == 0x80000;
  }
  if (!bVar12) {
    return 0x80070057;
  }
  if ((iVar7 != *(int *)(iVar2 + 0x10)) && (*(int *)(iVar2 + 0x10) != 0)) {
    return 0x80070057;
  }
  return 0;
}

