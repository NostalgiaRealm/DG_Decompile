/*
 * FUN_1002bd91 at 1002bd91
 * int __thiscall FUN_1002bd91(void * this, int param_1, int param_2)
 * Address ranges: 1002bd91-1002c01e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002bd91(void *this,int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int local_44 [16];
  
  BVar3 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar3 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar10 = -0x7ff8ffa9;
  if ((param_1 != 0) || (iVar10 = -0x7789fe3e, *(char *)((int)this + 8) != '\0')) goto LAB_1002c00b;
  piVar12 = (int *)((int)this + 0x118);
  iVar11 = -0x7789fe34;
  if (((param_2 == 0) || (*piVar12 == param_2)) && (*piVar12 != 0)) {
    *(undefined4 *)(*piVar12 + 0x10c) = 0;
    (**(code **)(**(int **)((int)this + 0x11c) + 8))(*(int **)((int)this + 0x11c));
    iVar11 = 0;
    *(undefined4 *)((int)this + 0x11c) = 0;
    *piVar12 = 0;
  }
  iVar10 = *(int *)((int)this + 0x110);
  if ((iVar10 != 0) && ((iVar10 == param_2 || (param_2 == 0)))) {
    iVar11 = -0x7789ffec;
    param_2 = iVar10;
    if (((*(uint *)(iVar10 + 0x1b8) & 0x1000) == 0) || ((*(uint *)(iVar10 + 0x1bc) & 0x200) != 0)) {
      if (((byte)*(uint *)(iVar10 + 0x1b8) & 0x18) == 0x10) {
        piVar12 = *(int **)(iVar10 + 0x114);
        uVar6 = *(undefined4 *)(iVar10 + 0x110);
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 4))(piVar12);
        }
        uVar5 = *(uint *)(*(int *)((int)this + 0x110) + 0x1b8);
        if ((uVar5 & 0x40) != 0) {
          *(uint *)(*(int *)((int)this + 0x110) + 0x1b8) = uVar5 & 0xffffffdb;
        }
        puVar1 = (uint *)(*(int *)((int)this + 0x110) + 0x1b8);
        *puVar1 = *puVar1 & 0xffffffef;
        *(undefined4 *)(iVar10 + 0x10c) = 0;
        (**(code **)(**(int **)((int)this + 0x114) + 8))(*(int **)((int)this + 0x114));
        if ((piVar12 == (int *)0x0) || (iVar10 = (**(code **)(*piVar12 + 8))(piVar12), iVar10 == 0))
        {
          piVar12 = (int *)0x0;
          uVar6 = 0;
        }
        *(undefined4 *)((int)this + 0x110) = uVar6;
        *(int **)((int)this + 0x114) = piVar12;
        iVar11 = FUN_1002b7cf((int)this);
        uVar5 = 0;
        for (iVar10 = iVar11; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x110)) {
          uVar5 = uVar5 + 1;
        }
        uVar9 = 0;
        if (uVar5 != 0) {
          do {
            if (uVar5 == 1) {
              *(uint *)(iVar11 + 0x1b8) = *(uint *)(iVar11 + 0x1b8) & 0xffffffef;
            }
            uVar7 = *(uint *)(iVar11 + 0x1b8);
            if (uVar9 == 0) {
              uVar7 = uVar7 & 0xffffffdf;
            }
            else if (uVar9 == 1) {
              uVar7 = uVar7 | 4;
            }
            else {
              uVar7 = uVar7 & 0xfffffffb;
            }
            uVar9 = uVar9 + 1;
            *(uint *)(iVar11 + 0x1b8) = uVar7;
          } while (uVar9 < uVar5);
        }
LAB_1002bfd4:
        iVar11 = 0;
      }
    }
    else {
      iVar4 = FUN_1002b7cf((int)this);
      if ((*(byte *)(iVar4 + 0x1b8) & 8) == 0) {
        bVar2 = true;
        uVar5 = 0;
        for (; iVar8 = iVar10, uVar9 = uVar5, iVar4 != iVar10; iVar4 = *(int *)(iVar4 + 0x110)) {
          local_44[uVar5] = iVar4;
          uVar5 = uVar5 + 1;
          if (0x10 < uVar5) {
            bVar2 = false;
            uVar9 = uVar5;
            break;
          }
        }
        do {
          local_44[uVar5] = iVar8;
          uVar5 = uVar5 + 1;
          if (0x10 < uVar5) goto LAB_1002bfd6;
          piVar12 = (int *)(iVar8 + 0x110);
          iVar8 = *piVar12;
        } while (*piVar12 != 0);
        if ((bVar2) && (uVar6 = FUN_10030dc8(this,(int)local_44,uVar5,uVar9), (char)uVar6 != '\0'))
        {
          *(undefined4 *)(iVar10 + 0x10c) = 0;
          (**(code **)(**(int **)((int)this + 0x114) + 8))(*(int **)((int)this + 0x114));
          *(undefined4 *)((int)this + 0x110) = 0;
          *(undefined4 *)((int)this + 0x114) = 0;
          goto LAB_1002bfd4;
        }
      }
    }
  }
LAB_1002bfd6:
  iVar10 = iVar11;
  if (((*(uint *)((int)this + 0x1b8) & 0x20000) != 0) && (iVar10 = 0, param_2 != 0)) {
    iVar10 = iVar11;
  }
  if ((-1 < iVar10) && (DAT_1006c238 != (int *)0x0)) {
    (**(code **)(*DAT_1006c238 + 0x30))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
  }
LAB_1002c00b:
  LeaveCriticalSection(DAT_1006c254);
  return iVar10;
}

