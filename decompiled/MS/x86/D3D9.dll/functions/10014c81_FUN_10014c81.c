/*
 * FUN_10014c81 at 10014c81
 * uint __thiscall FUN_10014c81(void * this, uint param_1, int param_2, int * param_3, uint param_4)
 * Address ranges: 10014c81-10014e0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10014c81(void *this,uint param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = 0x8876086c;
  iVar5 = param_2;
  if ((param_1 == 0) && (param_2 == 0)) {
    iVar5 = *(int *)((int)this + 0x10);
  }
  puVar4 = (uint *)(*(int *)((int)this + 0x2c) + -0x58e4);
  if (*(int *)((int)this + 0x2c) == 0) {
    puVar4 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*puVar4 >> 2) & 1);
  if ((*(int *)((int)this + 0x44) == 0) ||
     (((*(uint *)((int)this + 0x34) & 0x200) == 0 && (*(char *)((int)this + 99) == '\0')))) {
    bVar3 = FUN_1002b523((int)this);
    if (CONCAT31(extraout_var,bVar3) != 0) goto LAB_10014dfd;
    *param_3 = *(int *)((int)this + 4) + param_1;
    if ((*(int *)((int)this + 0x40) == 0) && ((param_4 & 0x2000) != 0)) {
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x10);
    }
    else {
      FUN_1002b4d1(this,param_1,param_1 + iVar5);
    }
    uVar7 = 0;
  }
  else {
    piVar1 = (int *)((int)this + 0xc);
    uVar7 = 0;
    if (*piVar1 == 0) {
      iVar5 = *(int *)((int)this + 0x2c) + -0x66b4;
      if (*(int *)((int)this + 0x2c) == 0) {
        iVar5 = 0;
      }
      uVar7 = 0;
      do {
        if (*(void **)(iVar5 + 26000 + uVar7 * 4) == this) {
          (**(code **)(**(int **)(iVar5 + 0x14) + 0x14))();
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x10);
      uVar2 = param_4;
      if ((((param_4 & 0x2000) == 0) || (*(char *)((int)this + 0x61) == '\0')) ||
         (*(char *)((int)this + 0x62) != '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      iVar5 = (**(code **)(**(int **)((int)this + 0x44) + 0xc))
                        (uVar6,(param_4 & 0x3000) != 0,piVar1);
      if (iVar5 == 0) {
        if (*(uint *)((int)this + 0x5c) != 0xffffffff) {
          puVar4 = (uint *)(*(int *)((int)this + 0x2c) + -0x50);
          if (*(int *)((int)this + 0x2c) == 0) {
            puVar4 = (uint *)&DAT_00006664;
          }
          *puVar4 = *puVar4 | 1 << (*(uint *)((int)this + 0x5c) & 0x1f);
        }
        uVar7 = 0;
        *(byte *)((int)this + 0x62) = (byte)(uVar2 >> 0xd) & 1;
      }
      else {
        uVar7 = 0x8876086c;
      }
    }
    *param_3 = *piVar1 + param_1;
    param_4 = uVar7;
    if ((int)uVar7 < 0) goto LAB_10014dfd;
  }
  iVar5 = *(int *)((int)this + 0x58);
  *(int *)((int)this + 0x58) = iVar5 + 1;
  if (iVar5 == 0) {
    FUN_100cfed0(*(int **)((int)this + 0xc),0,*(uint *)((int)this + 0x10));
  }
LAB_10014dfd:
  FUN_10003e89((char *)((int)&param_2 + 3));
  return uVar7;
}

