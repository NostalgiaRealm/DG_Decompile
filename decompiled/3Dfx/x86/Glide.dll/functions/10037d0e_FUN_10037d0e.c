/*
 * FUN_10037d0e at 10037d0e
 * uint __thiscall FUN_10037d0e(void * this, uint * param_1)
 * Address ranges: 10037d0e-10037ed9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10037d0e(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int local_14;
  uint *puStack_10;
  uint uStack_c;
  
  uVar7 = 0xffffffff;
  piVar3 = (int *)FUN_1003894a((void *)((int)this + 0x10),param_1);
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    do {
      iVar4 = uVar8 * 0x24;
      uVar5 = uVar7;
      if (*(int *)(iVar2 + 0x1c + iVar4) == -1) {
        uVar5 = uVar8;
        if (uVar7 != 0xffffffff) {
          uVar5 = uVar7;
        }
      }
      else if ((((param_1[4] == *(uint *)(iVar2 + iVar4)) &&
                (param_1[7] == *(uint *)(iVar2 + 4 + iVar4))) &&
               (param_1[9] == *(uint *)(iVar2 + 0xc + iVar4))) &&
              (param_1[0xc] == *(uint *)(iVar2 + 0x14 + iVar4))) break;
      uVar8 = uVar8 + 1;
      uVar7 = uVar5;
    } while (uVar8 < 0x14);
    uVar7 = 0xffffffff;
    if (uVar8 == 0x14) {
      if (uVar5 == 0xffffffff) {
        uVar5 = 0;
        do {
          if (*(char *)(iVar2 + 0x20 + uVar5 * 0x24) == '\0') goto LAB_10037dc5;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x14);
      }
      else {
LAB_10037dc5:
        puVar6 = (uint *)(uVar5 * 0x24 + iVar2);
        puVar1 = puVar6 + 7;
        *puVar6 = param_1[4];
        puVar6[1] = param_1[7];
        puVar6[2] = param_1[8];
        puVar6[3] = param_1[9];
        puVar6[4] = param_1[10];
        puVar6[5] = param_1[0xc];
        puVar6[6] = param_1[0xb];
        if (*puVar1 != 0xffffffff) {
          FUN_1003c73a(*(void **)((int)this + 0x1c),(int *)*puVar1,1,(int *)0x0,0,0);
          FUN_10038a1d(this,puVar1);
        }
        uVar7 = FUN_1003c646(*(void **)((int)this + 0x1c),1);
        *puVar1 = uVar7;
        if (uVar7 != 0xffffffff) {
          this_00 = *(void **)((int)this + 0x1c);
          iVar2 = *(int *)((int)this_00 + 4);
          iVar4 = *(int *)((int)this_00 + 8);
          FUN_1003c902(this_00,&local_14,uVar7,0);
          piVar3 = *(int **)(iVar4 * 0x18 + iVar2);
          (**(code **)(*piVar3 + 0x58))(piVar3,param_1,local_14);
          uVar8 = puVar6[7];
          puStack_10 = puVar6;
          uStack_c = FUN_10038e7a(this,uVar8,0);
          if (((uStack_c == *(uint *)((int)this + 8)) ||
              (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar2 + uStack_c * 0x10) != uVar8)) ||
             (*(int *)(iVar2 + 4 + uStack_c * 0x10) != 0)) {
            FUN_10038da8(this,uStack_c,uVar8,0,puVar6 + 7,&puStack_10);
          }
          else {
            *(uint **)(iVar2 + 0xc + uStack_c * 0x10) = puVar6;
          }
        }
        *(undefined1 *)(puVar6 + 8) = 1;
      }
    }
    else {
      uVar7 = *(uint *)(uVar8 * 0x24 + 0x1c + iVar2);
      *(undefined1 *)(uVar8 * 0x24 + 0x20 + iVar2) = 1;
    }
  }
  return uVar7;
}

